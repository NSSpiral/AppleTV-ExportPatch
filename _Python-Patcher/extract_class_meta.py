#!/usr/bin/env python3
"""Extract both class and metaclass VM addresses from __objc_classlist.

Usage:
    python3 extract_class_meta.py [path_to_binary] [output_file]

    Defaults:
        binary  = FS/Applications/AppleTV.app/AppleTV
        output  = class_meta_symbols.txt

class_t struct at 32-bit:
  struct objc_class {
    uint32_t isa;          // metaclass pointer (offset +0)
    uint32_t superclass;   // (offset +4)
    uint32_t cache;        // (offset +8)
    uint32_t vtable;       // (offset +12)
    uint32_t data;         // class_ro_t* with low bits masked (offset +16)
  };
class_ro_t:
  struct class_ro_t {
    uint32_t flags;        // +0
    uint32_t instanceStart; // +4
    uint32_t instanceSize; // +8
    uint32_t ivarLayout;   // +12 on 32-bit (no reserved field on ARM32)
    uint32_t name;         // +16 on 32-bit
    ...
  };
"""
import struct
import sys

BINARY = sys.argv[1] if len(sys.argv) > 1 else 'FS/Applications/AppleTV.app/AppleTV'
OUTPUT = sys.argv[2] if len(sys.argv) > 2 else 'class_meta_symbols.txt'

# ── Parse segments dynamically ──
segments = []  # (name, vmaddr, vmsize, fileoff, filesize)

with open(BINARY, 'rb') as f:
    header = f.read(28)
    magic = struct.unpack_from('<I', header, 0)[0]
    if magic != 0xFEEDFACE:
        print("Error: not a 32-bit LE Mach-O", file=sys.stderr)
        sys.exit(1)
    ncmds = struct.unpack_from('<I', header, 16)[0]
    
    pos = 28
    classlist_addr = classlist_size = classlist_off = 0
    classname_addr = classname_off = 0
    
    for i in range(ncmds):
        f.seek(pos)
        cmd, cmdsize = struct.unpack('<II', f.read(8))
        if cmd == 0x01:  # LC_SEGMENT
            f.seek(pos + 8)
            segname = f.read(16).split(b'\x00')[0].decode()
            vmaddr, vmsize, fileoff, filesize, maxprot, initprot, nsects, seg_flags = struct.unpack('<8I', f.read(32))
            segments.append((segname, vmaddr, vmsize, fileoff, filesize))
            
            for j in range(nsects):
                sect_pos = pos + 56 + j * 68  # section header size is 68 for 32-bit
                f.seek(sect_pos)
                sectname = f.read(16).split(b'\x00')[0].decode()
                seg2name = f.read(16).split(b'\x00')[0].decode()
                saddr, ssize, soffset = struct.unpack('<III', f.read(12))
                
                if sectname == '__objc_classlist':
                    classlist_addr = saddr
                    classlist_size = ssize
                    classlist_off = soffset
                    print("__objc_classlist: addr=0x%x size=%d off=0x%x" % (saddr, ssize, soffset))
                
                if sectname == '__objc_classname':
                    classname_addr = saddr
                    classname_off = soffset
                    print("__objc_classname: addr=0x%x off=0x%x" % (saddr, soffset))
        pos += cmdsize

    if not segments:
        print("Error: no LC_SEGMENT commands found", file=sys.stderr)
        sys.exit(1)
    if not classlist_off:
        print("Error: __objc_classlist section not found", file=sys.stderr)
        sys.exit(1)

    def vm_to_file(vmaddr):
        """Convert VM address to file offset using parsed segment map."""
        for segname, seg_vm, seg_vmsz, seg_foff, seg_fsz in segments:
            if seg_vm <= vmaddr < seg_vm + seg_vmsz:
                return vmaddr - seg_vm + seg_foff
        raise ValueError("VM address 0x%x not in any segment" % vmaddr)
    
    # Read classlist (array of pointers to class_t structs)
    f.seek(classlist_off)
    num_classes = classlist_size // 4
    class_ptrs = struct.unpack('<%dI' % num_classes, f.read(classlist_size))
    print("\nTotal class pointers: %d" % num_classes)
    
    # For each class, read the class_t and its metaclass_t to get:
    # - Class name
    # - Class VM address (the pointer in classlist)
    # - Metaclass VM address (isa field of class_t)
    results = []
    errors = 0
    
    for class_ptr in class_ptrs:
        # Read class_t struct
        file_off = vm_to_file(class_ptr)
        f.seek(file_off)
        try:
            isa, superclass, cache, vtable, data = struct.unpack('<5I', f.read(20))
        except:
            errors += 1
            continue
        
        # Get class name from class_ro_t
        ro_ptr = data & ~0x3  # mask low bits
        ro_file = vm_to_file(ro_ptr)
        f.seek(ro_file)
        try:
            ro_data = f.read(20)
            # On 32-bit ARM: name is at offset +16 (flags, instStart, instSize, ivarLayout, name)
            ro_flags, inst_start, inst_size, ivar_layout, name_ptr = struct.unpack('<5I', ro_data)
        except:
            errors += 1
            continue
        
        # Read name string
        name_file = vm_to_file(name_ptr)
        f.seek(name_file)
        name_bytes = b''
        while True:
            b = f.read(1)
            if b == b'\x00' or not b:
                break
            name_bytes += b
        
        class_name = name_bytes.decode('ascii', errors='replace')
        
        # metaclass VM address = isa field
        metaclass_ptr = isa
        
        results.append((class_name, class_ptr, metaclass_ptr))
    
    print("Successfully parsed: %d classes, errors: %d" % (len(results), errors))
    
    # Write output file with both class and metaclass
    with open(OUTPUT, 'w') as out:
        for name, cls_addr, meta_addr in sorted(results):
            out.write("_OBJC_CLASS_$_%-50s 0x%08x\n" % (name, cls_addr))
            out.write("_OBJC_METACLASS_$_%-46s 0x%08x\n" % (name, meta_addr))
    
    print("\nWrote %s with %d entries (%d class + %d metaclass)" % (
        OUTPUT, len(results) * 2, len(results), len(results)))
    
    # Stats
    br_classes = [r for r in results if r[0].startswith('BR')]
    atv_classes = [r for r in results if r[0].startswith('ATV')]
    print("\nBR-prefixed: %d" % len(br_classes))
    print("ATV-prefixed: %d" % len(atv_classes))
    
    # Show a few samples
    print("\nSample entries:")
    for name, cls, meta in sorted(results)[:5]:
        print("  %-40s class=0x%08x meta=0x%08x" % (name, cls, meta))
    print("  ...")
    for r in sorted(results):
        if r[0] == 'BRBaseAppliance':
            print("  %-40s class=0x%08x meta=0x%08x" % r)
        if r[0] == 'BRApplianceInfo':
            print("  %-40s class=0x%08x meta=0x%08x" % r)
        if r[0] == 'BRController':
            print("  %-40s class=0x%08x meta=0x%08x" % r)
    
    # Verify: find __DATA segment dynamically for metaclass check
    data_seg = next(((vm, vmsz) for n, vm, vmsz, fo, fs in segments if n == '__DATA'), None)
    if data_seg:
        data_vm, data_vmsz = data_seg
        meta_in_data = sum(1 for _, _, m in results if data_vm <= m < data_vm + data_vmsz)
        print("\nMetaclasses in __DATA: %d / %d" % (meta_in_data, len(results)))
