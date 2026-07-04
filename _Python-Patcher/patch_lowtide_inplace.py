#!/usr/bin/env python3
"""
patch_lowtide_inplace.py — In-place export trie patching for the Lowtide binary.

Instead of appending the new trie at EOF (which breaks code signature / ldid),
this writes the expanded trie in-place, overwriting the original export trie
region plus the function_starts and data_in_code regions (which are not needed
for runtime execution). It then strips the code signature so ldid can re-sign.

Usage:
    python3 patch_lowtide_inplace.py --input <binary> --output <patched> --symbols <symbols.txt>
"""

import argparse
import struct
import sys
import os
import shutil
from collections import deque

# ──────────────────────────────────────────────────────────────────────
# Mach-O constants
# ──────────────────────────────────────────────────────────────────────
MH_MAGIC            = 0xFEEDFACE
LC_SEGMENT          = 0x01
LC_SYMTAB           = 0x02
LC_DYSYMTAB         = 0x0B
LC_DYLD_INFO        = 0x22
LC_DYLD_INFO_ONLY   = 0x80000022
LC_FUNCTION_STARTS  = 0x26
LC_DATA_IN_CODE     = 0x29
LC_CODE_SIGNATURE   = 0x1D

# ──────────────────────────────────────────────────────────────────────
# ULEB128 helpers
# ──────────────────────────────────────────────────────────────────────
def read_uleb128(data, offset):
    result = 0
    shift = 0
    while offset < len(data):
        byte = data[offset]
        offset += 1
        result |= (byte & 0x7F) << shift
        if (byte & 0x80) == 0:
            break
        shift += 7
    return result, offset

def write_uleb128(value):
    out = bytearray()
    while True:
        byte = value & 0x7F
        value >>= 7
        if value != 0:
            byte |= 0x80
        out.append(byte)
        if value == 0:
            break
    return bytes(out)

# ──────────────────────────────────────────────────────────────────────
# Trie data structure
# ──────────────────────────────────────────────────────────────────────
class TrieNode:
    __slots__ = ['children', 'is_terminal', 'flags', 'address']
    def __init__(self):
        self.children = {}
        self.is_terminal = False
        self.flags = 0
        self.address = 0

def parse_trie(data, offset, node):
    if offset >= len(data):
        return
    term_size, pos = read_uleb128(data, offset)
    if term_size > 0:
        node.is_terminal = True
        node.flags, pos2 = read_uleb128(data, pos)
        node.address, pos2 = read_uleb128(data, pos2)
    pos2 = offset
    ts, pos2 = read_uleb128(data, pos2)
    pos2 += ts
    if pos2 >= len(data):
        return
    child_count = data[pos2]
    pos2 += 1
    for _ in range(child_count):
        edge = b''
        while pos2 < len(data) and data[pos2] != 0:
            edge += bytes([data[pos2]])
            pos2 += 1
        pos2 += 1
        child_off, pos2 = read_uleb128(data, pos2)
        edge_str = edge.decode('ascii', errors='replace')
        child_node = TrieNode()
        node.children[edge_str] = child_node
        parse_trie(data, child_off, child_node)

def normalize_trie(node):
    """Fold empty-string terminal children into their parent node.
    Apple's trie format sometimes uses an empty edge to a terminal child
    instead of marking the node itself as terminal."""
    for child in list(node.children.values()):
        normalize_trie(child)
    if '' in node.children:
        empty_child = node.children['']
        if empty_child.is_terminal and not node.is_terminal:
            node.is_terminal = True
            node.flags = empty_child.flags
            node.address = empty_child.address
            for edge, child in empty_child.children.items():
                node.children[edge] = child
            del node.children['']

def insert_symbol(root, symbol, flags, address):
    node = root
    remaining = symbol
    while remaining:
        matched_edge = None
        for edge in node.children:
            if remaining.startswith(edge):
                matched_edge = edge
                break
            common_len = 0
            for i in range(min(len(edge), len(remaining))):
                if edge[i] == remaining[i]:
                    common_len += 1
                else:
                    break
            if common_len > 0:
                common = edge[:common_len]
                edge_rest = edge[common_len:]
                remaining_rest = remaining[common_len:]
                old_child = node.children.pop(edge)
                intermediate = TrieNode()
                node.children[common] = intermediate
                intermediate.children[edge_rest] = old_child
                if remaining_rest:
                    new_leaf = TrieNode()
                    new_leaf.is_terminal = True
                    new_leaf.flags = flags
                    new_leaf.address = address
                    intermediate.children[remaining_rest] = new_leaf
                else:
                    intermediate.is_terminal = True
                    intermediate.flags = flags
                    intermediate.address = address
                return
        if matched_edge:
            node = node.children[matched_edge]
            remaining = remaining[len(matched_edge):]
        else:
            new_leaf = TrieNode()
            new_leaf.is_terminal = True
            new_leaf.flags = flags
            new_leaf.address = address
            node.children[remaining] = new_leaf
            return
    if node.is_terminal:
        return
    node.is_terminal = True
    node.flags = flags
    node.address = address

def count_symbols(node):
    count = 1 if node.is_terminal else 0
    for child in node.children.values():
        count += count_symbols(child)
    return count

def collect_names(node, prefix='', out=None):
    if out is None:
        out = set()
    if node.is_terminal:
        out.add(prefix)
    for edge, child in node.children.items():
        collect_names(child, prefix + edge, out)
    return out

def encode_trie(root):
    ordered = []
    queue = deque([root])
    while queue:
        n = queue.popleft()
        ordered.append(n)
        for edge in sorted(n.children.keys()):
            queue.append(n.children[edge])
    offsets = {id(n): 0 for n in ordered}
    for iteration in range(15):
        current_offset = 0
        changed = False
        for node in ordered:
            if offsets[id(node)] != current_offset:
                changed = True
            offsets[id(node)] = current_offset
            if node.is_terminal:
                terminal_info = write_uleb128(node.flags) + write_uleb128(node.address)
                terminal_size = len(terminal_info)
            else:
                terminal_size = 0
            node_size = len(write_uleb128(terminal_size))
            node_size += terminal_size
            node_size += 1
            for edge in sorted(node.children.keys()):
                child = node.children[edge]
                node_size += len(edge) + 1 + len(write_uleb128(offsets[id(child)]))
            current_offset += node_size
        if not changed:
            break
    output = bytearray()
    for node in ordered:
        assert offsets[id(node)] == len(output)
        if node.is_terminal:
            terminal_info = write_uleb128(node.flags) + write_uleb128(node.address)
            output += write_uleb128(len(terminal_info))
            output += terminal_info
        else:
            output += write_uleb128(0)
        output.append(len(node.children))
        for edge in sorted(node.children.keys()):
            child = node.children[edge]
            output += edge.encode('ascii')
            output.append(0)
            output += write_uleb128(offsets[id(child)])
    return bytes(output)

# ──────────────────────────────────────────────────────────────────────
# Load command parsing
# ──────────────────────────────────────────────────────────────────────
def find_all_load_commands(data):
    magic = struct.unpack_from('<I', data, 0)[0]
    if magic != MH_MAGIC:
        raise ValueError("Not a 32-bit LE Mach-O (magic=0x%x)" % magic)

    ncmds = struct.unpack_from('<I', data, 16)[0]
    sizeofcmds = struct.unpack_from('<I', data, 20)[0]

    info = {
        'ncmds': ncmds,
        'sizeofcmds': sizeofcmds,
    }

    lc_offset = 28
    for i in range(ncmds):
        cmd, cmdsize = struct.unpack_from('<II', data, lc_offset)

        if cmd == LC_SEGMENT:
            segname = data[lc_offset+8:lc_offset+24].split(b'\x00')[0].decode('ascii')
            vmaddr = struct.unpack_from('<I', data, lc_offset + 24)[0]
            vmsize = struct.unpack_from('<I', data, lc_offset + 28)[0]
            fileoff = struct.unpack_from('<I', data, lc_offset + 32)[0]
            filesize = struct.unpack_from('<I', data, lc_offset + 36)[0]
            if segname == '__TEXT':
                info['text_vmaddr'] = vmaddr
            elif segname == '__LINKEDIT':
                info['linkedit'] = {
                    'cmd_offset': lc_offset,
                    'fileoff': fileoff,
                    'filesize': filesize,
                    'vmaddr': vmaddr,
                    'vmsize': vmsize,
                    'vmsize_field': lc_offset + 28,
                    'filesize_field': lc_offset + 36,
                }

        elif cmd in (LC_DYLD_INFO, LC_DYLD_INFO_ONLY):
            export_off = struct.unpack_from('<I', data, lc_offset + 40)[0]
            export_size = struct.unpack_from('<I', data, lc_offset + 44)[0]
            info['dyld_info'] = {
                'cmd_offset': lc_offset,
                'export_off': export_off,
                'export_size': export_size,
                'export_off_field': lc_offset + 40,
                'export_size_field': lc_offset + 44,
            }

        elif cmd == LC_FUNCTION_STARTS:
            dataoff = struct.unpack_from('<I', data, lc_offset + 8)[0]
            datasize = struct.unpack_from('<I', data, lc_offset + 12)[0]
            info['function_starts'] = {
                'cmd_offset': lc_offset,
                'cmdsize': cmdsize,
                'dataoff': dataoff,
                'datasize': datasize,
                'dataoff_field': lc_offset + 8,
                'datasize_field': lc_offset + 12,
            }

        elif cmd == LC_DATA_IN_CODE:
            dataoff = struct.unpack_from('<I', data, lc_offset + 8)[0]
            datasize = struct.unpack_from('<I', data, lc_offset + 12)[0]
            info['data_in_code'] = {
                'cmd_offset': lc_offset,
                'cmdsize': cmdsize,
                'dataoff': dataoff,
                'datasize': datasize,
                'dataoff_field': lc_offset + 8,
                'datasize_field': lc_offset + 12,
            }

        elif cmd == LC_CODE_SIGNATURE:
            dataoff = struct.unpack_from('<I', data, lc_offset + 8)[0]
            datasize = struct.unpack_from('<I', data, lc_offset + 12)[0]
            info['code_signature'] = {
                'cmd_offset': lc_offset,
                'cmdsize': cmdsize,
                'dataoff': dataoff,
                'datasize': datasize,
            }

        lc_offset += cmdsize

    return info

def load_symbols(path, text_vmaddr):
    symbols = []
    with open(path, 'r') as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'):
                continue
            parts = line.split()
            if len(parts) < 2:
                continue
            name = parts[0]
            vm_addr = int(parts[1], 16)
            image_offset = vm_addr - text_vmaddr
            symbols.append((name, image_offset))
    return symbols

# ──────────────────────────────────────────────────────────────────────
# Main patcher
# ──────────────────────────────────────────────────────────────────────
def patch(input_path, output_path, symbols_path, verify=False):
    print("Reading binary: %s" % input_path)
    with open(input_path, 'rb') as f:
        data = bytearray(f.read())
    original_size = len(data)

    info = find_all_load_commands(data)
    text_vmaddr = info['text_vmaddr']
    linkedit = info['linkedit']
    dyld_info = info['dyld_info']

    print()
    print("__TEXT vmaddr:      0x%08x" % text_vmaddr)
    print("__LINKEDIT:         fileoff=0x%x filesize=0x%x" %
          (linkedit['fileoff'], linkedit['filesize']))
    print("Export trie:        off=0x%x size=%d" %
          (dyld_info['export_off'], dyld_info['export_size']))

    # Calculate available space: export + function_starts + data_in_code
    export_off = dyld_info['export_off']
    export_size = dyld_info['export_size']
    available_end = export_off + export_size  # start with just export space

    func_starts = info.get('function_starts')
    data_in_code = info.get('data_in_code')

    if func_starts:
        print("Function starts:    off=0x%x size=%d" % (func_starts['dataoff'], func_starts['datasize']))
        if func_starts['dataoff'] == export_off + export_size:
            available_end = func_starts['dataoff'] + func_starts['datasize']
    if data_in_code:
        print("Data in code:       off=0x%x size=%d" % (data_in_code['dataoff'], data_in_code['datasize']))
        if data_in_code['dataoff'] == available_end:
            available_end = data_in_code['dataoff'] + data_in_code['datasize']

    available_space = available_end - export_off
    print()
    print("Available space:    %d bytes (export + func_starts + data_in_code)" % available_space)

    codesig = info.get('code_signature')
    if codesig:
        print("Code signature:     off=0x%x size=%d" % (codesig['dataoff'], codesig['datasize']))

    # ── Parse existing trie ──
    trie_data = bytes(data[export_off : export_off + export_size])
    root = TrieNode()
    parse_trie(trie_data, 0, root)
    normalize_trie(root)
    existing_count = count_symbols(root)
    existing_names = collect_names(root)
    print()
    print("Existing exports:   %d symbols" % existing_count)

    # ── Load new symbols ──
    all_symbols = load_symbols(symbols_path, text_vmaddr)
    to_add = [(name, addr) for name, addr in all_symbols if name not in existing_names]
    skipped = len(all_symbols) - len(to_add)
    print("Symbols file:       %d entries (%d new, %d already exported)" %
          (len(all_symbols), len(to_add), skipped))

    # ── Insert symbols ──
    for name, addr in to_add:
        insert_symbol(root, name, flags=0x00, address=addr)

    total_count = count_symbols(root)
    print("Total after insert: %d symbols" % total_count)

    # ── Encode augmented trie ──
    new_trie = encode_trie(root)
    print()
    print("Original trie size: %d bytes" % export_size)
    print("New trie size:      %d bytes" % len(new_trie))
    print("Available space:    %d bytes" % available_space)
    print("Remaining:          %d bytes" % (available_space - len(new_trie)))

    if len(new_trie) > available_space:
        print()
        print("ERROR: New trie (%d) exceeds available space (%d) by %d bytes" %
              (len(new_trie), available_space, len(new_trie) - available_space))
        sys.exit(1)

    # ── Verify round-trip ──
    verify_root = TrieNode()
    parse_trie(new_trie, 0, verify_root)
    normalize_trie(verify_root)
    verify_count = count_symbols(verify_root)
    if verify_count != total_count:
        raise RuntimeError("Trie encode/decode mismatch: %d != %d" % (verify_count, total_count))
    print("Encode verification: OK (%d symbols round-tripped)" % verify_count)

    # ── Build patched binary ──
    output = bytearray(data)

    # Step 1: Write new trie at original export offset
    output[export_off : export_off + len(new_trie)] = new_trie

    # Step 2: Zero-fill remaining space (old func_starts + data_in_code area)
    zero_start = export_off + len(new_trie)
    zero_end = available_end
    if zero_end > zero_start:
        output[zero_start:zero_end] = b'\x00' * (zero_end - zero_start)

    # Step 3: Update LC_DYLD_INFO_ONLY export_size
    struct.pack_into('<I', output, dyld_info['export_size_field'], len(new_trie))
    print()
    print("Patched export_size: %d -> %d" % (export_size, len(new_trie)))

    # Step 4: Zero out LC_FUNCTION_STARTS and LC_DATA_IN_CODE references
    if func_starts and func_starts['dataoff'] >= export_off:
        struct.pack_into('<I', output, func_starts['dataoff_field'], 0)
        struct.pack_into('<I', output, func_starts['datasize_field'], 0)
        print("Zeroed LC_FUNCTION_STARTS (was off=0x%x size=%d)" %
              (func_starts['dataoff'], func_starts['datasize']))

    if data_in_code and data_in_code['dataoff'] >= export_off:
        struct.pack_into('<I', output, data_in_code['dataoff_field'], 0)
        struct.pack_into('<I', output, data_in_code['datasize_field'], 0)
        print("Zeroed LC_DATA_IN_CODE (was off=0x%x size=%d)" %
              (data_in_code['dataoff'], data_in_code['datasize']))

    # Step 5: Strip LC_CODE_SIGNATURE
    if codesig:
        print()
        print("Stripping LC_CODE_SIGNATURE...")
        cs_cmd_off = codesig['cmd_offset']
        cs_cmdsize = codesig['cmdsize']
        cs_dataoff = codesig['dataoff']

        # Remove the load command by shifting subsequent commands up
        ncmds = info['ncmds']
        sizeofcmds = info['sizeofcmds']
        cmd_area_end = 28 + sizeofcmds

        # Shift everything after this LC up
        src_start = cs_cmd_off + cs_cmdsize
        remaining = output[src_start : cmd_area_end]
        output[cs_cmd_off : cs_cmd_off + len(remaining)] = remaining
        # Zero freed space
        pad_start = cs_cmd_off + len(remaining)
        output[pad_start : cmd_area_end] = b'\x00' * (cmd_area_end - pad_start)

        # Update header
        struct.pack_into('<I', output, 16, ncmds - 1)
        struct.pack_into('<I', output, 20, sizeofcmds - cs_cmdsize)

        # Truncate file at codesig data
        output = output[:cs_dataoff]

        # Update __LINKEDIT filesize/vmsize
        # Need to re-find linkedit fields since we may have shifted load commands
        # But linkedit comes BEFORE codesig in load command order, so its offset is stable
        new_le_filesize = len(output) - linkedit['fileoff']
        new_le_vmsize = (new_le_filesize + 0xFFF) & ~0xFFF
        struct.pack_into('<I', output, linkedit['filesize_field'], new_le_filesize)
        struct.pack_into('<I', output, linkedit['vmsize_field'], new_le_vmsize)

        print("Updated __LINKEDIT: filesize=0x%x vmsize=0x%x" %
              (new_le_filesize, new_le_vmsize))
        print("Truncated file at 0x%x (removed %d bytes)" %
              (cs_dataoff, original_size - cs_dataoff))

    # ── Write output ──
    print()
    print("Writing patched binary: %s" % output_path)
    out_dir = os.path.dirname(output_path)
    if out_dir:
        os.makedirs(out_dir, exist_ok=True)
    with open(output_path, 'wb') as f:
        f.write(output)
    os.chmod(output_path, 0o755)

    print()
    print("=== PATCH SUMMARY ===")
    print("Original file:      %d bytes" % original_size)
    print("Patched file:       %d bytes" % len(output))
    print("Size change:        %+d bytes" % (len(output) - original_size))
    print("Export trie:        %d -> %d bytes (in-place at 0x%x)" %
          (export_size, len(new_trie), export_off))
    print("Symbols:            %d existing + %d added = %d total" %
          (existing_count, len(to_add), total_count))
    print()
    print("Sacrificed regions: function_starts, data_in_code (debug only, not needed at runtime)")
    print("Code signature:     stripped (re-sign with: ldid -S %s)" % output_path)

    if verify:
        print()
        verify_patched(output_path, text_vmaddr, total_count)

def verify_patched(path, text_vmaddr, expected_count):
    print("=== VERIFYING PATCHED BINARY ===")
    with open(path, 'rb') as f:
        data = f.read()

    info = find_all_load_commands(data)
    dyld_info = info['dyld_info']
    export_off = dyld_info['export_off']
    export_size = dyld_info['export_size']
    print("Export trie:    off=0x%x size=%d" % (export_off, export_size))

    trie_data = data[export_off : export_off + export_size]
    root = TrieNode()
    parse_trie(trie_data, 0, root)
    normalize_trie(root)
    actual = count_symbols(root)
    print("Symbol count:   %d (expected %d)" % (actual, expected_count))

    if actual != expected_count:
        print("** VERIFICATION FAILED **")
        sys.exit(1)

    test_syms = [
        '_OBJC_CLASS_$_BRBaseAppliance',
        '_OBJC_METACLASS_$_BRBaseAppliance',
        '_OBJC_CLASS_$_BRController',
        '_OBJC_CLASS_$_BRControl',
        '_OBJC_CLASS_$_BRApplianceInfo',
        '_OBJC_CLASS_$_ATVTopShelfController',
        '__mh_execute_header',
    ]

    print()
    for sym in test_syms:
        result = lookup_symbol(root, sym)
        if result:
            flags, img_off = result
            vm = img_off + text_vmaddr
            print("  %-50s flags=0x%02x vm=0x%08x  OK" % (sym, flags, vm))
        else:
            print("  %-50s NOT FOUND  **FAIL**" % sym)

    print()
    print("Verification: PASSED")

def lookup_symbol(node, symbol):
    remaining = symbol
    while remaining:
        found = False
        for edge, child in node.children.items():
            if remaining.startswith(edge):
                remaining = remaining[len(edge):]
                node = child
                found = True
                break
        if not found:
            return None
    if node.is_terminal:
        return (node.flags, node.address)
    return None

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='In-place export trie patcher for Lowtide')
    parser.add_argument('--input', required=True, help='Input binary')
    parser.add_argument('--output', required=True, help='Output patched binary')
    parser.add_argument('--symbols', required=True, help='Symbol list (name vmaddr)')
    parser.add_argument('--verify', action='store_true', help='Verify patched binary')
    args = parser.parse_args()
    patch(args.input, args.output, args.symbols, verify=args.verify)
