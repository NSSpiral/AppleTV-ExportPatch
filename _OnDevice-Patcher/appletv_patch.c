/*
 * appletv_patch.c — In-place export trie patcher for the AppleTV (Lowtide) binary.
 *
 * Parses the existing export trie, inserts ObjC class/metaclass symbols from a
 * symbol list, re-encodes the trie in-place (overwriting function_starts and
 * data_in_code regions), and strips the code signature.
 *
 * Compile standalone test:
 *   cc -DATV_PATCH_STANDALONE -o appletv_patch appletv_patch.c
 */

#include "appletv_patch.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/* ── Mach-O constants ── */

#define MH_MAGIC_32         0xFEEDFACE
#define LC_SEGMENT_32       0x01
#define LC_DYLD_INFO_ONLY   0x80000022
#define LC_DYLD_INFO_CMD    0x22
#define LC_FUNCTION_STARTS  0x26
#define LC_DATA_IN_CODE     0x29
#define LC_CODE_SIGNATURE   0x1D

/* ── Logging ── */

static atv_log_fn g_log;
static void      *g_log_ctx;

#define LOG(fmt, ...) do { \
    if (g_log) { \
        char _lb[512]; \
        snprintf(_lb, sizeof(_lb), fmt, ##__VA_ARGS__); \
        g_log(_lb, g_log_ctx); \
    } \
} while (0)

/* ── ULEB128 ── */

static int uleb_encode(uint64_t val, uint8_t *buf)
{
    int i = 0;
    do {
        uint8_t b = val & 0x7F;
        val >>= 7;
        if (val) b |= 0x80;
        buf[i++] = b;
    } while (val);
    return i;
}

static int uleb_decode(const uint8_t *data, int len, uint64_t *val)
{
    uint64_t r = 0;
    int shift = 0, i = 0;
    while (i < len) {
        uint8_t b = data[i++];
        r |= (uint64_t)(b & 0x7F) << shift;
        if (!(b & 0x80)) break;
        shift += 7;
    }
    *val = r;
    return i;
}

static int uleb_size(uint64_t val)
{
    uint8_t tmp[10];
    return uleb_encode(val, tmp);
}

/* ── Trie data structures ── */

typedef struct trie_edge {
    char             *label;
    struct trie_node *child;
} trie_edge_t;

typedef struct trie_node {
    trie_edge_t *edges;
    int          nedges;
    int          cap;
    int          terminal;
    uint32_t     flags;
    uint32_t     address;
    uint32_t     _enc_offset;
} trie_node_t;

static trie_node_t *node_new(void)
{
    return calloc(1, sizeof(trie_node_t));
}

static void node_add_edge(trie_node_t *n, const char *label, trie_node_t *child)
{
    if (n->nedges >= n->cap) {
        n->cap = n->cap ? n->cap * 2 : 4;
        trie_edge_t *tmp = realloc(n->edges, n->cap * sizeof(trie_edge_t));
        if (!tmp) return;
        n->edges = tmp;
    }
    n->edges[n->nedges].label = strdup(label);
    n->edges[n->nedges].child = child;
    n->nedges++;
}

static void node_free(trie_node_t *n)
{
    if (!n) return;
    for (int i = 0; i < n->nedges; i++) {
        free(n->edges[i].label);
        node_free(n->edges[i].child);
    }
    free(n->edges);
    free(n);
}

static int node_count(trie_node_t *n)
{
    int c = n->terminal ? 1 : 0;
    for (int i = 0; i < n->nedges; i++)
        c += node_count(n->edges[i].child);
    return c;
}

/* ── Trie parse ── */

static void trie_parse(const uint8_t *data, int dlen, int off, trie_node_t *node)
{
    if (off < 0 || off >= dlen) return;

    uint64_t term_size;
    int bc = uleb_decode(data + off, dlen - off, &term_size);

    if (term_size > 0) {
        node->terminal = 1;
        uint64_t f, a;
        int p = off + bc;
        p += uleb_decode(data + p, dlen - p, &f);
        uleb_decode(data + p, dlen - p, &a);
        node->flags   = (uint32_t)f;
        node->address = (uint32_t)a;
    }

    int pos = off;
    uint64_t ts;
    pos += uleb_decode(data + pos, dlen - pos, &ts);
    pos += (int)ts;
    if (pos >= dlen) return;

    int nch = data[pos++];
    for (int i = 0; i < nch; i++) {
        int lstart = pos;
        while (pos < dlen && data[pos]) pos++;
        int llen = pos - lstart;
        char *label = malloc(llen + 1);
        memcpy(label, data + lstart, llen);
        label[llen] = '\0';
        pos++;

        uint64_t child_off;
        pos += uleb_decode(data + pos, dlen - pos, &child_off);

        trie_node_t *child = node_new();
        node_add_edge(node, label, child);
        free(label);

        trie_parse(data, dlen, (int)child_off, child);
    }
}

/* ── Normalize: fold empty-edge terminals into parent ── */

static void trie_normalize(trie_node_t *node)
{
    for (int i = 0; i < node->nedges; i++)
        trie_normalize(node->edges[i].child);

    for (int i = 0; i < node->nedges; i++) {
        if (node->edges[i].label[0] != '\0') continue;

        trie_node_t *ec = node->edges[i].child;
        if (ec->terminal && !node->terminal) {
            node->terminal = 1;
            node->flags    = ec->flags;
            node->address  = ec->address;
            for (int j = 0; j < ec->nedges; j++) {
                node_add_edge(node, ec->edges[j].label, ec->edges[j].child);
                ec->edges[j].child = NULL;
            }
        }
        free(node->edges[i].label);
        for (int j = 0; j < ec->nedges; j++)
            free(ec->edges[j].label);
        free(ec->edges);
        free(ec);
        for (int j = i; j < node->nedges - 1; j++)
            node->edges[j] = node->edges[j + 1];
        node->nedges--;
        break;
    }
}

/* ── Insert symbol into trie ── */

static void trie_insert(trie_node_t *node, const char *sym,
                         uint32_t flags, uint32_t addr)
{
    const char *rem = sym;

    while (*rem) {
        int matched = -1;

        for (int i = 0; i < node->nedges; i++) {
            const char *edge = node->edges[i].label;
            int elen = (int)strlen(edge);

            if (strncmp(rem, edge, elen) == 0) {
                matched = i;
                break;
            }

            int rlen = (int)strlen(rem);
            int minl = elen < rlen ? elen : rlen;
            int cl = 0;
            for (int j = 0; j < minl; j++) {
                if (edge[j] == rem[j]) cl++;
                else break;
            }
            if (cl > 0) {
                char *common    = strndup(edge, cl);
                char *edge_rest = strdup(edge + cl);
                const char *rem_rest = rem + cl;

                trie_node_t *old_child = node->edges[i].child;
                trie_node_t *inter     = node_new();

                free(node->edges[i].label);
                node->edges[i].label = common;
                node->edges[i].child = inter;

                node_add_edge(inter, edge_rest, old_child);
                free(edge_rest);

                if (*rem_rest) {
                    trie_node_t *leaf = node_new();
                    leaf->terminal = 1;
                    leaf->flags    = flags;
                    leaf->address  = addr;
                    node_add_edge(inter, rem_rest, leaf);
                } else {
                    inter->terminal = 1;
                    inter->flags    = flags;
                    inter->address  = addr;
                }
                return;
            }
        }

        if (matched >= 0) {
            int elen = (int)strlen(node->edges[matched].label);
            node = node->edges[matched].child;
            rem += elen;
        } else {
            trie_node_t *leaf = node_new();
            leaf->terminal = 1;
            leaf->flags    = flags;
            leaf->address  = addr;
            node_add_edge(node, rem, leaf);
            return;
        }
    }

    if (node->terminal) return;
    node->terminal = 1;
    node->flags    = flags;
    node->address  = addr;
}

/* ── Edge sort (alphabetical, matching Python sorted()) ── */

static int edge_cmp(const void *a, const void *b)
{
    return strcmp(((const trie_edge_t *)a)->label,
                 ((const trie_edge_t *)b)->label);
}

static void trie_sort(trie_node_t *n)
{
    if (n->nedges > 1)
        qsort(n->edges, n->nedges, sizeof(trie_edge_t), edge_cmp);
    for (int i = 0; i < n->nedges; i++)
        trie_sort(n->edges[i].child);
}

/* ── BFS encode trie ── */

static int trie_encode(trie_node_t *root, uint8_t **out, uint32_t *out_size)
{
    trie_sort(root);

    int cap = 8192, count = 0;
    trie_node_t **ordered = malloc(cap * sizeof(trie_node_t *));
    int head = 0;
    ordered[count++] = root;

    while (head < count) {
        trie_node_t *n = ordered[head++];
        for (int i = 0; i < n->nedges; i++) {
            if (count >= cap) {
                cap *= 2;
                trie_node_t **tmp = realloc(ordered, cap * sizeof(trie_node_t *));
                if (!tmp) { free(ordered); return -1; }
                ordered = tmp;
            }
            ordered[count++] = n->edges[i].child;
        }
    }

    for (int i = 0; i < count; i++)
        ordered[i]->_enc_offset = 0;

    for (int iter = 0; iter < 15; iter++) {
        uint32_t cur = 0;
        int changed = 0;

        for (int i = 0; i < count; i++) {
            trie_node_t *n = ordered[i];
            if (n->_enc_offset != cur) changed = 1;
            n->_enc_offset = cur;

            int ti = 0;
            if (n->terminal)
                ti = uleb_size(n->flags) + uleb_size(n->address);

            cur += uleb_size(ti) + ti + 1;
            for (int j = 0; j < n->nedges; j++)
                cur += (int)strlen(n->edges[j].label) + 1 +
                       uleb_size(n->edges[j].child->_enc_offset);
        }

        if (!changed) break;
    }

    /* Compute total size from last node */
    uint32_t total;
    {
        trie_node_t *last = ordered[count - 1];
        int ti = 0;
        if (last->terminal)
            ti = uleb_size(last->flags) + uleb_size(last->address);
        total = last->_enc_offset + uleb_size(ti) + ti + 1;
        for (int j = 0; j < last->nedges; j++)
            total += (int)strlen(last->edges[j].label) + 1 +
                     uleb_size(last->edges[j].child->_enc_offset);
    }

    uint8_t *buf = malloc(total + 64);
    uint32_t pos = 0;

    for (int i = 0; i < count; i++) {
        trie_node_t *n = ordered[i];

        if (n->terminal) {
            uint8_t ti_buf[20];
            int ti_len = 0;
            ti_len += uleb_encode(n->flags, ti_buf + ti_len);
            ti_len += uleb_encode(n->address, ti_buf + ti_len);
            pos += uleb_encode(ti_len, buf + pos);
            memcpy(buf + pos, ti_buf, ti_len);
            pos += ti_len;
        } else {
            pos += uleb_encode(0, buf + pos);
        }

        buf[pos++] = (uint8_t)n->nedges;

        for (int j = 0; j < n->nedges; j++) {
            int ll = (int)strlen(n->edges[j].label);
            memcpy(buf + pos, n->edges[j].label, ll);
            pos += ll;
            buf[pos++] = 0;
            pos += uleb_encode(n->edges[j].child->_enc_offset, buf + pos);
        }
    }

    free(ordered);
    *out      = buf;
    *out_size = pos;
    return 0;
}

/* ── Mach-O info ── */

typedef struct {
    uint32_t ncmds, sizeofcmds;
    uint32_t text_vmaddr;
    struct { uint32_t fileoff, filesize, vmsize;
             uint32_t vmsize_field, filesize_field; } linkedit;
    struct { uint32_t export_off, export_size;
             uint32_t export_off_field, export_size_field; } dyld_info;
    struct { uint32_t dataoff, datasize, dataoff_field, datasize_field;
             int present; } func_starts;
    struct { uint32_t dataoff, datasize, dataoff_field, datasize_field;
             int present; } data_in_code;
    struct { uint32_t cmd_offset, cmdsize, dataoff, datasize;
             int present; } codesig;
} macho_info_t;

static int parse_macho(const uint8_t *data, uint32_t size, macho_info_t *info)
{
    memset(info, 0, sizeof(*info));

    if (size < 28) return -1;
    uint32_t magic = *(uint32_t *)data;
    if (magic != MH_MAGIC_32) return -1;

    info->ncmds      = *(uint32_t *)(data + 16);
    info->sizeofcmds = *(uint32_t *)(data + 20);

    uint32_t lc_off = 28;
    for (uint32_t i = 0; i < info->ncmds; i++) {
        if (lc_off + 8 > size) break;
        uint32_t cmd     = *(uint32_t *)(data + lc_off);
        uint32_t cmdsize = *(uint32_t *)(data + lc_off + 4);

        if (cmd == LC_SEGMENT_32 && lc_off + 40 <= size) {
            char segname[17] = {0};
            memcpy(segname, data + lc_off + 8, 16);
            if (strcmp(segname, "__TEXT") == 0)
                info->text_vmaddr = *(uint32_t *)(data + lc_off + 24);
            else if (strcmp(segname, "__LINKEDIT") == 0) {
                info->linkedit.vmsize        = *(uint32_t *)(data + lc_off + 28);
                info->linkedit.fileoff       = *(uint32_t *)(data + lc_off + 32);
                info->linkedit.filesize      = *(uint32_t *)(data + lc_off + 36);
                info->linkedit.vmsize_field  = lc_off + 28;
                info->linkedit.filesize_field = lc_off + 36;
            }
        }

        if ((cmd == LC_DYLD_INFO_ONLY || cmd == LC_DYLD_INFO_CMD) && lc_off + 48 <= size) {
            info->dyld_info.export_off       = *(uint32_t *)(data + lc_off + 40);
            info->dyld_info.export_size      = *(uint32_t *)(data + lc_off + 44);
            info->dyld_info.export_off_field  = lc_off + 40;
            info->dyld_info.export_size_field = lc_off + 44;
        }

        if (cmd == LC_FUNCTION_STARTS && lc_off + 16 <= size) {
            info->func_starts.present       = 1;
            info->func_starts.dataoff       = *(uint32_t *)(data + lc_off + 8);
            info->func_starts.datasize      = *(uint32_t *)(data + lc_off + 12);
            info->func_starts.dataoff_field  = lc_off + 8;
            info->func_starts.datasize_field = lc_off + 12;
        }

        if (cmd == LC_DATA_IN_CODE && lc_off + 16 <= size) {
            info->data_in_code.present       = 1;
            info->data_in_code.dataoff       = *(uint32_t *)(data + lc_off + 8);
            info->data_in_code.datasize      = *(uint32_t *)(data + lc_off + 12);
            info->data_in_code.dataoff_field  = lc_off + 8;
            info->data_in_code.datasize_field = lc_off + 12;
        }

        if (cmd == LC_CODE_SIGNATURE && lc_off + 16 <= size) {
            info->codesig.present    = 1;
            info->codesig.cmd_offset = lc_off;
            info->codesig.cmdsize    = cmdsize;
            info->codesig.dataoff    = *(uint32_t *)(data + lc_off + 8);
            info->codesig.datasize   = *(uint32_t *)(data + lc_off + 12);
        }

        lc_off += cmdsize;
    }

    return 0;
}

/* ── Embedded symbols (generated from class_meta_symbols.txt) ── */

typedef struct { const char *name; uint32_t vmaddr; } atv_sym_t;
extern const atv_sym_t atv_builtin_syms[];
extern const int       atv_builtin_nsyms;

/* ── Main patch function ── */

int appletv_export_patch(const char *binary_path,
                         atv_log_fn log_fn, void *log_ctx)
{
    g_log     = log_fn;
    g_log_ctx = log_ctx;

    /* Read binary */
    struct stat st;
    if (stat(binary_path, &st) != 0) {
        LOG("[atvpatch] stat failed: %s\n", binary_path);
        return -1;
    }
    uint32_t orig_size = (uint32_t)st.st_size;

    int fd = open(binary_path, O_RDONLY);
    if (fd < 0) {
        LOG("[atvpatch] open failed: %s\n", binary_path);
        return -1;
    }
    uint8_t *data = malloc(orig_size);
    if (read(fd, data, orig_size) != (ssize_t)orig_size) {
        LOG("[atvpatch] read failed\n");
        close(fd); free(data); return -1;
    }
    close(fd);

    LOG("[atvpatch] loaded %s (%u bytes)\n", binary_path, orig_size);

    /* Parse Mach-O */
    macho_info_t info;
    if (parse_macho(data, orig_size, &info) != 0) {
        LOG("[atvpatch] not a valid 32-bit Mach-O\n");
        free(data); return -1;
    }

    LOG("[atvpatch] __TEXT vmaddr=0x%08x\n", info.text_vmaddr);
    LOG("[atvpatch] export trie: off=0x%x size=%u\n",
        info.dyld_info.export_off, info.dyld_info.export_size);

    /* Compute available space: export + function_starts + data_in_code */
    uint32_t export_off  = info.dyld_info.export_off;
    uint32_t export_size = info.dyld_info.export_size;
    uint32_t avail_end   = export_off + export_size;

    if (info.func_starts.present &&
        info.func_starts.dataoff == avail_end)
        avail_end = info.func_starts.dataoff + info.func_starts.datasize;

    if (info.data_in_code.present &&
        info.data_in_code.dataoff == avail_end)
        avail_end = info.data_in_code.dataoff + info.data_in_code.datasize;

    uint32_t avail = avail_end - export_off;
    LOG("[atvpatch] available space: %u bytes\n", avail);

    /* Parse existing trie */
    trie_node_t *root = node_new();
    trie_parse(data + export_off, export_size, 0, root);
    trie_normalize(root);
    int existing_count = node_count(root);
    LOG("[atvpatch] existing exports: %d\n", existing_count);

    /* Insert builtin symbols */
    LOG("[atvpatch] inserting %d symbols\n", atv_builtin_nsyms);
    for (int i = 0; i < atv_builtin_nsyms; i++) {
        uint32_t img_off = atv_builtin_syms[i].vmaddr - info.text_vmaddr;
        trie_insert(root, atv_builtin_syms[i].name, 0x00, img_off);
    }

    int total_count = node_count(root);
    LOG("[atvpatch] total exports after insert: %d\n", total_count);

    /* Encode new trie */
    uint8_t  *new_trie = NULL;
    uint32_t  new_trie_size = 0;
    if (trie_encode(root, &new_trie, &new_trie_size) != 0) {
        LOG("[atvpatch] trie encode failed\n");
        node_free(root); free(data); return -1;
    }
    node_free(root);

    LOG("[atvpatch] trie: %u -> %u bytes\n", export_size, new_trie_size);

    if (new_trie_size > avail) {
        LOG("[atvpatch] new trie (%u) exceeds available space (%u)\n",
            new_trie_size, avail);
        free(new_trie); free(data); return -1;
    }

    /* Verify round-trip */
    {
        trie_node_t *vroot = node_new();
        trie_parse(new_trie, new_trie_size, 0, vroot);
        trie_normalize(vroot);
        int vc = node_count(vroot);
        node_free(vroot);
        if (vc != total_count) {
            LOG("[atvpatch] round-trip failed: %d != %d\n", vc, total_count);
            free(new_trie); free(data); return -1;
        }
        LOG("[atvpatch] round-trip OK (%d symbols)\n", vc);
    }

    /* ── Apply patches ── */

    /* 1. Write new trie at original export offset */
    memcpy(data + export_off, new_trie, new_trie_size);
    free(new_trie);

    /* 2. Zero remaining space */
    if (export_off + new_trie_size < avail_end)
        memset(data + export_off + new_trie_size, 0,
               avail_end - (export_off + new_trie_size));

    /* 3. Update export_size in LC_DYLD_INFO */
    *(uint32_t *)(data + info.dyld_info.export_size_field) = new_trie_size;
    LOG("[atvpatch] updated export_size: %u -> %u\n", export_size, new_trie_size);

    /* 4. Zero LC_FUNCTION_STARTS and LC_DATA_IN_CODE refs */
    if (info.func_starts.present && info.func_starts.dataoff >= export_off) {
        *(uint32_t *)(data + info.func_starts.dataoff_field)  = 0;
        *(uint32_t *)(data + info.func_starts.datasize_field) = 0;
        LOG("[atvpatch] zeroed LC_FUNCTION_STARTS\n");
    }
    if (info.data_in_code.present && info.data_in_code.dataoff >= export_off) {
        *(uint32_t *)(data + info.data_in_code.dataoff_field)  = 0;
        *(uint32_t *)(data + info.data_in_code.datasize_field) = 0;
        LOG("[atvpatch] zeroed LC_DATA_IN_CODE\n");
    }

    /* 5. Strip LC_CODE_SIGNATURE */
    uint32_t final_size = orig_size;
    if (info.codesig.present) {
        uint32_t cs_off     = info.codesig.cmd_offset;
        uint32_t cs_cmdsize = info.codesig.cmdsize;
        uint32_t cmd_end    = 28 + info.sizeofcmds;

        /* Shift load commands after codesig LC up */
        uint32_t src = cs_off + cs_cmdsize;
        uint32_t rem = cmd_end - src;
        memmove(data + cs_off, data + src, rem);
        memset(data + cs_off + rem, 0, cs_cmdsize);

        /* Update header: ncmds - 1, sizeofcmds - cmdsize */
        *(uint32_t *)(data + 16) = info.ncmds - 1;
        *(uint32_t *)(data + 20) = info.sizeofcmds - cs_cmdsize;

        /* Truncate at codesig data offset */
        final_size = info.codesig.dataoff;

        /* Update __LINKEDIT */
        uint32_t new_le_filesize = final_size - info.linkedit.fileoff;
        uint32_t new_le_vmsize   = (new_le_filesize + 0xFFF) & ~0xFFF;
        *(uint32_t *)(data + info.linkedit.filesize_field) = new_le_filesize;
        *(uint32_t *)(data + info.linkedit.vmsize_field)   = new_le_vmsize;

        LOG("[atvpatch] stripped codesig, truncated 0x%x -> 0x%x\n",
            orig_size, final_size);
    }

    /* Write back */
    fd = open(binary_path, O_WRONLY | O_TRUNC);
    if (fd < 0) {
        LOG("[atvpatch] open for write failed\n");
        free(data); return -1;
    }
    if (write(fd, data, final_size) != (ssize_t)final_size) {
        LOG("[atvpatch] write failed\n");
        close(fd); free(data); return -1;
    }
    close(fd);
    free(data);

    LOG("[atvpatch] wrote %u bytes to %s\n", final_size, binary_path);
    LOG("[atvpatch] exports: %d existing + %d total = %d\n",
        existing_count, total_count - existing_count, total_count);
    return 0;
}

/* ── Standalone test harness ── */

#ifdef ATV_PATCH_STANDALONE

static void log_stderr(const char *msg, void *ctx)
{
    (void)ctx;
    fputs(msg, stderr);
}

int main(int argc, char *argv[])
{
    if (argc < 2) {
        fprintf(stderr, "usage: %s <binary>\n", argv[0]);
        return 1;
    }
    return appletv_export_patch(argv[1], log_stderr, NULL);
}

#endif
