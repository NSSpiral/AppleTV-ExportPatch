/*
 * types.h -- Base kernel type definitions
 * XNU kernel interface for iOS 8.4 (xnu-2782), ARM32
 */

#ifndef _KERNEL_TYPES_H_
#define _KERNEL_TYPES_H_

#include <stdint.h>
#include <stddef.h>

/*
 * kpi.h - Kernel Programming Interface declarations for iOS 8.4 (xnu-2782)
 *
 * Provides kernel type definitions and function prototypes needed to build
 * a VFS kext without the Kernel.framework. All declarations based on
 * xnu-2782.40.9 (iOS 8.4) for ARM32.
 */

/* ── Runtime kernel symbol resolver (injected by ksym_inject) ── */

/* ================================================================
 * Basic kernel types
 * ================================================================ */

typedef int32_t         errno_t;
typedef int32_t         kern_return_t;
typedef unsigned int    boolean_t;
typedef uint32_t        vm_offset_t;
typedef uint32_t        vm_size_t;
typedef uint32_t        vm_address_t;

#define KERN_SUCCESS    0

/* BSD types */
typedef uint32_t        uid_t;
typedef uint32_t        gid_t;
typedef int32_t         pid_t;
typedef int32_t         dev_t;
typedef int64_t         off_t;
typedef uint16_t        mode_t;
typedef uint64_t        ino64_t;
typedef unsigned int    u_int;
typedef unsigned long   u_long;
typedef uint32_t        u_int32_t;
typedef int32_t         user_ssize_t;

/* Pointer-sized types (32-bit ARM) */
typedef uint32_t        user_addr_t;
typedef uint32_t        user_size_t;
typedef char *          caddr_t;
typedef uint32_t        sigset_t;
typedef void *          ipc_port_t;

#ifndef NULL
#define NULL ((void *)0)
#endif

#define MAXPATHLEN      1024
#define MFSNAMELEN      15
#define MFSTYPENAMELEN  16
#define NAME_MAX        255
#define BLKDEV_IOSIZE   512

/* Page size */
#define PAGE_SIZE       4096
#define PAGE_MASK       (PAGE_SIZE - 1)

/* ================================================================
 * Opaque kernel types
 * ================================================================ */

struct mount;       typedef struct mount *       mount_t;
struct vnode;       typedef struct vnode *       vnode_t;
struct vfs_context; typedef struct vfs_context * vfs_context_t;
struct vfstable;    typedef struct vfstable *    vfstable_t;
struct proc;        typedef struct proc *        proc_t;
struct uio;         typedef struct uio *         uio_t;
struct buf;         typedef struct buf *         buf_t;

struct kauth_cred;  typedef struct kauth_cred *  kauth_cred_t;
typedef int kauth_action_t;

struct kauth_acl;   typedef struct kauth_acl *   kauth_acl_t;

/* UPL types */
typedef void *      upl_t;
typedef uint32_t    upl_offset_t;
typedef uint32_t    upl_size_t;

/* Buffer types */
typedef int64_t     daddr64_t;
typedef void *      bufattr_t;

/* Clock types */
typedef uint32_t    clock_sec_t;
typedef uint32_t    clock_nsec_t;
typedef uint32_t    clock_usec_t;

/* Locking types */
typedef struct { uint32_t opaque[4]; } lck_rw_t;
typedef struct { uint32_t opaque[2]; } lck_spin_t;
typedef int         wait_result_t;
typedef void *      event_t;
typedef unsigned int lck_sleep_action_t;
typedef unsigned int lck_rw_type_t;
typedef unsigned int wait_interrupt_t;

#define LCK_SLEEP_DEFAULT   0x00
#define LCK_SLEEP_UNLOCK    0x01
#define LCK_RW_TYPE_SHARED      0x01
#define LCK_RW_TYPE_EXCLUSIVE   0x02
#define THREAD_UNINT        0
#define THREAD_INTERRUPTIBLE 1
#define THREAD_ABORTSAFE    2

/* Mach task/thread types */
typedef void *      task_t;
typedef void *      task_read_t;
typedef void *      task_suspension_token_t;
typedef void *      thread_t;
typedef void (*thread_continue_t)(void *, int);

/* Mbuf type */
typedef void *      mbuf_t;

/* VM types */
typedef unsigned int ppnum_t;

/* UPL page info */
typedef unsigned int upl_page_info_t;

/* Timebase info */
typedef struct { uint32_t numer; uint32_t denom; } *mach_timebase_info_t;

/* Mach IPC types */
typedef struct {
    unsigned int  msgh_bits;
    unsigned int  msgh_size;
    unsigned int  msgh_remote_port;
    unsigned int  msgh_local_port;
    unsigned int  msgh_reserved;
    int           msgh_id;
} mach_msg_header_t;

typedef void (*mig_routine_t)(mach_msg_header_t *, mach_msg_header_t *);
typedef unsigned int mach_port_t;

/* vop_t function pointer type */
typedef int (*vop_t)(void *);

/* ================================================================
 * Vnode types and tags
 * ================================================================ */

enum vtype {
    VNON, VREG, VDIR, VBLK, VCHR, VLNK,
    VSOCK, VFIFO, VBAD, VSTR, VCPLX
};

enum vtagtype {
    VT_NON, VT_UFS, VT_NFS, VT_MFS, VT_MSDOSFS, VT_LFS,
    VT_LOFS, VT_FDESC, VT_PORTAL, VT_NULL, VT_UMAP,
    VT_KERNFS, VT_PROCFS, VT_AFS, VT_ISOFS, VT_MOCKFS,
    VT_HFS, VT_ZFS, VT_DEVFS, VT_WEBDAV, VT_UDF,
    VT_AFP, VT_CDDA, VT_CIFS, VT_OTHER
};

/* UIO */
enum uio_rw  { UIO_READ, UIO_WRITE };
enum uio_seg {
    UIO_USERSPACE   = 0,
    UIO_SYSSPACE    = 2,
    UIO_USERSPACE32 = 5,
    UIO_USERSPACE64 = 8,
    UIO_SYSSPACE32  = 11
};

/* ================================================================
 * File system ID
 * ================================================================ */

typedef struct { int32_t val[2]; } fsid_t;

struct timespec {
    long tv_sec;
    long tv_nsec;
};

typedef unsigned char uuid_t[16];
typedef struct { unsigned char g_guid[16]; } guid_t;

/* ================================================================
 * Mount flags
 * ================================================================ */

#define MNT_RDONLY      0x00000001
#define MNT_SYNCHRONOUS 0x00000002
#define MNT_NOEXEC      0x00000004
#define MNT_NOSUID      0x00000008
#define MNT_NODEV       0x00000010
#define MNT_UNION       0x00000020
#define MNT_ASYNC       0x00000040
#define MNT_CPROTECT    0x00000080
#define MNT_EXPORTED    0x00000100
#define MNT_QUARANTINE  0x00000400
#define MNT_LOCAL       0x00001000
#define MNT_QUOTA       0x00002000
#define MNT_ROOTFS      0x00004000
#define MNT_UPDATE      0x00010000
#define MNT_FORCE       0x00080000
#define MNT_DONTBROWSE  0x00100000
#define MNT_IGNORE_OWNERSHIP 0x00200000
#define MNT_AUTOMOUNTED 0x00400000
#define MNT_JOURNALED   0x00800000
#define MNT_NOUSERXATTR 0x01000000
#define MNT_DEFWRITE    0x02000000
#define MNT_MULTILABEL  0x04000000
#define MNT_NOATIME     0x10000000

#define MNT_WAIT    1
#define MNT_NOWAIT  2

/* VFS table flags */
#define VFS_TBLTHREADSAFE       0x0001
#define VFS_TBLFSNODELOCK       0x0002
#define VFS_TBLNOTYPENUM        0x0008
#define VFS_TBLLOCALVOL         0x0010
#define VFS_TBL64BITREADY       0x0020
#define VFS_TBLNATIVEXATTR      0x0040
#define VFS_TBLGENERICMNTARGS   0x0200
#define VFS_TBLNOMACLABEL       0x1000

/* vflush flags */
#define SKIPSYSTEM  0x0001
#define FORCECLOSE  0x0002
#define WRITECLOSE  0x0004
#define SKIPSWAP    0x0008
#define SKIPROOT    0x0010

/* IO flags */
#define IO_SYNC     0x0004

/* FREAD/FWRITE */
#define FREAD   0x0001
#define FWRITE  0x0002

/* Lookup nameiop */
#define LOOKUP  0
#define CREATE  1
#define DELETE  2
#define RENAME  3

/* componentname flags */
#define FOLLOW      0x00000040
#define ISDOTDOT    0x00002000
#define MAKEENTRY   0x00004000
#define ISLASTCN    0x00008000

/* VNODE_LOOKUP flags */
#define VNODE_LOOKUP_NOFOLLOW       0x01
#define VNODE_LOOKUP_NOCROSSMOUNT   0x02

/* NULLVP */
#define NULLVP  ((vnode_t)NULL)

/* readdir flags */
#define VNODE_READDIR_EXTENDED    0x0001
#define VNODE_READDIR_REQSEEKOFF  0x0002

/* UPL flags */
#define UPL_IOSYNC                  0x00000001
#define UPL_NOCOMMIT                0x00000020
#define UPL_ABORT_ERROR             0x00000001
#define UPL_ABORT_FREE_ON_EMPTY     0x00000002
#define UPL_COMMIT_FREE_ON_EMPTY    0x00000001

/* stat modes */
#define S_IFDIR  0040000
#define S_IRUSR  0000400
#define S_IWUSR  0000200
#define S_IXUSR  0000100
#define S_IRGRP  0000040
#define S_IXGRP  0000010
#define S_IROTH  0000004
#define S_IXOTH  0000001

/* dirent types */
#define DT_DIR  4
#define DT_REG  8
#define DT_LNK  10

/* errno */
#define EPERM       1
#define ENOENT      2
#define EIO         5
#define ENOMEM      12
#define EBUSY       16
#define ENOTDIR     20
#define EINVAL      22
#define EROFS       30
#define ENOTSUP     45
#define EOPNOTSUPP  102

/* Memory allocation */
#define M_TEMP      80
#define M_WAITOK    0x0000
#define M_ZERO      0x0004
#define M_NOWAIT    0x0001


#define MALLOC(space, cast, size, type, flags) \
    (space) = (cast)_MALLOC(size, type, flags)
#define FREE(addr, type) \
    _FREE((void *)(addr), type)

/* ================================================================
 * Locking primitives
 * ================================================================ */

/* lck_mtx_t on ARM32 iOS 8: 12 bytes (3 words: state, pad, magic 0x22) */
typedef struct {
    uint32_t opaque[3];
} lck_mtx_t;

typedef struct __lck_grp__      *lck_grp_t;
typedef struct __lck_grp_attr__ *lck_grp_attr_t;
typedef struct __lck_attr__     *lck_attr_t;

/* ================================================================
 * vol_capabilities / vol_attributes
 * ================================================================ */

typedef struct {
    uint32_t capabilities[4];
    uint32_t valid[4];
} vol_capabilities_attr_t;

typedef struct {
    struct { uint32_t commonattr, volattr, dirattr, fileattr, forkattr; } validattr;
    struct { uint32_t commonattr, volattr, dirattr, fileattr, forkattr; } nativeattr;
} vol_attributes_attr_t;

/* ================================================================
 * vfsstatfs - filesystem statistics (pack(4) matches XNU)
 * ================================================================ */

#pragma pack(4)

struct vfsstatfs {
    uint32_t  f_bsize;
    size_t    f_iosize;
    uint64_t  f_blocks;
    uint64_t  f_bfree;
    uint64_t  f_bavail;
    uint64_t  f_bused;
    uint64_t  f_files;
    uint64_t  f_ffree;
    fsid_t    f_fsid;
    uid_t     f_owner;
    uint64_t  f_flags;
    char      f_fstypename[MFSTYPENAMELEN];
    char      f_mntonname[MAXPATHLEN];
    char      f_mntfromname[MAXPATHLEN];
    uint32_t  f_fssubtype;
    void     *f_reserved[2];
};

/* ================================================================
 * vfs_attr - VFS attributes (pack(4) matches XNU)
 * ================================================================ */

#define VFSATTR_INIT(s)               ((s)->f_supported = (s)->f_active = 0LL)
#define VFSATTR_SET_SUPPORTED(s, a)   ((s)->f_supported |= VFSATTR_ ## a)
#define VFSATTR_IS_SUPPORTED(s, a)    ((s)->f_supported & VFSATTR_ ## a)
#define VFSATTR_IS_ACTIVE(s, a)       ((s)->f_active & VFSATTR_ ## a)
#define VFSATTR_WANTED(s, a)          ((s)->f_active |= VFSATTR_ ## a)
#define VFSATTR_RETURN(s, a, x)       do { (s)->a = (x); VFSATTR_SET_SUPPORTED(s, a); } while(0)

#define VFSATTR_f_bsize         (1LL << 4)
#define VFSATTR_f_iosize        (1LL << 5)
#define VFSATTR_f_blocks        (1LL << 6)
#define VFSATTR_f_bfree         (1LL << 7)
#define VFSATTR_f_bavail        (1LL << 8)
#define VFSATTR_f_bused         (1LL << 9)
#define VFSATTR_f_files         (1LL << 10)
#define VFSATTR_f_ffree         (1LL << 11)
#define VFSATTR_f_fsid          (1LL << 12)
#define VFSATTR_f_owner         (1LL << 13)
#define VFSATTR_f_capabilities  (1LL << 14)
#define VFSATTR_f_attributes    (1LL << 15)
#define VFSATTR_f_create_time   (1LL << 16)
#define VFSATTR_f_modify_time   (1LL << 17)
#define VFSATTR_f_access_time   (1LL << 18)
#define VFSATTR_f_fssubtype     (1LL << 20)
#define VFSATTR_f_vol_name      (1LL << 21)

struct vfs_attr {
    uint64_t f_supported;
    uint64_t f_active;
    uint64_t f_objcount;
    uint64_t f_filecount;
    uint64_t f_dircount;
    uint64_t f_maxobjcount;
    uint32_t f_bsize;
    size_t   f_iosize;
    uint64_t f_blocks;
    uint64_t f_bfree;
    uint64_t f_bavail;
    uint64_t f_bused;
    uint64_t f_files;
    uint64_t f_ffree;
    fsid_t   f_fsid;
    uid_t    f_owner;
    vol_capabilities_attr_t f_capabilities;
    vol_attributes_attr_t f_attributes;
    struct timespec f_create_time;
    struct timespec f_modify_time;
    struct timespec f_access_time;
    struct timespec f_backup_time;
    uint32_t f_fssubtype;
    char    *f_vol_name;
    uint16_t f_signature;
    uint16_t f_carbon_fsid;
    uuid_t   f_uuid;
};

#pragma pack()

/* ================================================================
 * vnode_attr - vnode attributes
 * ================================================================ */

#define VATTR_INIT(v)               do { (v)->va_supported = (v)->va_active = 0LL; (v)->va_vaflags = 0; } while(0)
#define VATTR_SET_ACTIVE(v, a)      ((v)->va_active |= VNODE_ATTR_ ## a)
#define VATTR_SET_SUPPORTED(v, a)   ((v)->va_supported |= VNODE_ATTR_ ## a)
#define VATTR_IS_SUPPORTED(v, a)    ((v)->va_supported & VNODE_ATTR_ ## a)
#define VATTR_IS_ACTIVE(v, a)       ((v)->va_active & VNODE_ATTR_ ## a)
#define VATTR_WANTED(v, a)          VATTR_SET_ACTIVE(v, a)
#define VATTR_RETURN(v, a, x)       do { (v)->a = (x); VATTR_SET_SUPPORTED(v, a); } while(0)

#define VNODE_ATTR_va_rdev              (1LL << 0)
#define VNODE_ATTR_va_nlink             (1LL << 1)
#define VNODE_ATTR_va_total_size        (1LL << 2)
#define VNODE_ATTR_va_total_alloc       (1LL << 3)
#define VNODE_ATTR_va_data_size         (1LL << 4)
#define VNODE_ATTR_va_data_alloc        (1LL << 5)
#define VNODE_ATTR_va_iosize            (1LL << 6)
#define VNODE_ATTR_va_uid               (1LL << 7)
#define VNODE_ATTR_va_gid               (1LL << 8)
#define VNODE_ATTR_va_mode              (1LL << 9)
#define VNODE_ATTR_va_flags             (1LL << 10)
#define VNODE_ATTR_va_acl               (1LL << 11)
#define VNODE_ATTR_va_create_time       (1LL << 12)
#define VNODE_ATTR_va_access_time       (1LL << 13)
#define VNODE_ATTR_va_modify_time       (1LL << 14)
#define VNODE_ATTR_va_change_time       (1LL << 15)
#define VNODE_ATTR_va_backup_time       (1LL << 16)
#define VNODE_ATTR_va_fileid            (1LL << 17)
#define VNODE_ATTR_va_linkid            (1LL << 18)
#define VNODE_ATTR_va_parentid          (1LL << 19)
#define VNODE_ATTR_va_fsid              (1LL << 20)
#define VNODE_ATTR_va_filerev           (1LL << 21)
#define VNODE_ATTR_va_gen               (1LL << 22)
#define VNODE_ATTR_va_encoding          (1LL << 23)
#define VNODE_ATTR_va_type              (1LL << 24)
#define VNODE_ATTR_va_name              (1LL << 25)
#define VNODE_ATTR_va_uuuid             (1LL << 26)
#define VNODE_ATTR_va_guuid             (1LL << 27)
#define VNODE_ATTR_va_nchildren         (1LL << 28)
#define VNODE_ATTR_va_dirlinkcount      (1LL << 29)
#define VNODE_ATTR_va_addedtime         (1LL << 30)
#define VNODE_ATTR_va_dataprotect_class (1LL << 31)
#define VNODE_ATTR_va_dataprotect_flags (1LL << 32)
#define VNODE_ATTR_va_document_id       (1LL << 33)
#define VNODE_ATTR_va_devid             (1LL << 34)
#define VNODE_ATTR_va_objtype           (1LL << 35)
#define VNODE_ATTR_va_objtag            (1LL << 36)
#define VNODE_ATTR_va_user_access       (1LL << 37)
#define VNODE_ATTR_va_finderinfo        (1LL << 38)
#define VNODE_ATTR_va_rsrc_length       (1LL << 39)
#define VNODE_ATTR_va_rsrc_alloc        (1LL << 40)
#define VNODE_ATTR_va_fsid64            (1LL << 41)
#define VNODE_ATTR_va_write_gencount    (1LL << 42)

struct vnode_attr {
    uint64_t        va_supported;
    uint64_t        va_active;
    int             va_vaflags;
    dev_t           va_rdev;
    uint64_t        va_nlink;
    uint64_t        va_total_size;
    uint64_t        va_total_alloc;
    uint64_t        va_data_size;
    uint64_t        va_data_alloc;
    uint32_t        va_iosize;
    uid_t           va_uid;
    gid_t           va_gid;
    mode_t          va_mode;
    uint32_t        va_flags;
    kauth_acl_t     va_acl;
    struct timespec va_create_time;
    struct timespec va_access_time;
    struct timespec va_modify_time;
    struct timespec va_change_time;
    struct timespec va_backup_time;
    uint64_t        va_fileid;
    uint64_t        va_linkid;
    uint64_t        va_parentid;
    uint32_t        va_fsid;
    uint64_t        va_filerev;
    uint32_t        va_gen;
    uint32_t        va_encoding;
    enum vtype      va_type;
    char           *va_name;
    guid_t          va_uuuid;
    guid_t          va_guuid;
    uint64_t        va_nchildren;
    uint64_t        va_dirlinkcount;
    void           *va_reserved1;
    struct timespec va_addedtime;
    uint32_t        va_dataprotect_class;
    uint32_t        va_dataprotect_flags;
    uint32_t        va_document_id;
    uint32_t        va_devid;
    uint32_t        va_objtype;
    uint32_t        va_objtag;
    uint32_t        va_user_access;
    uint8_t         va_finderinfo[32];
    uint64_t        va_rsrc_length;
    uint64_t        va_rsrc_alloc;
    fsid_t          va_fsid64;
    uint32_t        va_write_gencount;
};

/* ================================================================
 * Component name and vnode creation
 * ================================================================ */

struct componentname {
    uint32_t    cn_nameiop;
    uint32_t    cn_flags;
    void       *cn_reserved1;
    void       *cn_reserved2;
    char       *cn_pnbuf;
    int         cn_pnlen;
    char       *cn_nameptr;
    int         cn_namelen;
    uint32_t    cn_hash;
    uint32_t    cn_consume;
};

struct vnode_fsparam {
    mount_t              vnfs_mp;
    enum vtype           vnfs_vtype;
    const char          *vnfs_str;
    vnode_t              vnfs_dvp;
    void                *vnfs_fsnode;
    int                (**vnfs_vops)(void *);
    int                  vnfs_markroot;
    int                  vnfs_marksystem;
    dev_t                vnfs_rdev;
    off_t                vnfs_filesize;
    struct componentname *vnfs_cnp;
    uint32_t             vnfs_flags;
};

#define VNFS_NOCACHE    0x01
#define VNFS_CANTCACHE  0x02
#define VNFS_ADDFSREF   0x04
#define VNCREATE_FLAVOR 0
#define VCREATESIZE     sizeof(struct vnode_fsparam)

/* ================================================================
 * Vnodeop descriptors
 * ================================================================ */

struct vnodeop_desc {
    int vdesc_offset;
    const char *vdesc_name;
    int vdesc_flags;
    int *vdesc_vp_offsets;
    int vdesc_vpp_offset;
    int vdesc_cred_offset;
    int vdesc_proc_offset;
    int vdesc_componentname_offset;
    int vdesc_context_offset;
};

struct vnodeopv_entry_desc {
    struct vnodeop_desc *opve_op;
    int (*opve_impl)(void *);
};

struct vnodeopv_desc {
    int (***opv_desc_vector_p)(void *);
    struct vnodeopv_entry_desc *opv_desc_ops;
};

/* Extern vnodeop descriptors (defined in kernel) */

/* ================================================================
 * VNOP argument structures
 * ================================================================ */

struct vnop_generic_args  { struct vnodeop_desc *a_desc; };

struct vnop_lookup_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_dvp; vnode_t *a_vpp;
    struct componentname *a_cnp; vfs_context_t a_context;
};

struct vnop_create_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_dvp; vnode_t *a_vpp;
    struct componentname *a_cnp; struct vnode_attr *a_vap;
    vfs_context_t a_context;
};

struct vnop_open_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_vp; int a_mode; vfs_context_t a_context;
};

struct vnop_close_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_vp; int a_fflag; vfs_context_t a_context;
};

struct vnop_getattr_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_vp; struct vnode_attr *a_vap; vfs_context_t a_context;
};

struct vnop_setattr_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_vp; struct vnode_attr *a_vap; vfs_context_t a_context;
};

struct vnop_read_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_vp; uio_t a_uio; int a_ioflag; vfs_context_t a_context;
};

struct vnop_write_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_vp; uio_t a_uio; int a_ioflag; vfs_context_t a_context;
};

struct vnop_readdir_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_vp; uio_t a_uio; int a_flags;
    int *a_eofflag; int *a_numdirent; vfs_context_t a_context;
};

struct vnop_readlink_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_vp; uio_t a_uio; vfs_context_t a_context;
};

struct vnop_remove_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_dvp; vnode_t a_vp;
    struct componentname *a_cnp; int a_flags; vfs_context_t a_context;
};

struct vnop_link_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_vp; vnode_t a_tdvp;
    struct componentname *a_cnp; vfs_context_t a_context;
};

struct vnop_rename_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_fdvp; vnode_t a_fvp; struct componentname *a_fcnp;
    vnode_t a_tdvp; vnode_t a_tvp; struct componentname *a_tcnp;
    vfs_context_t a_context;
};

struct vnop_mkdir_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_dvp; vnode_t *a_vpp;
    struct componentname *a_cnp; struct vnode_attr *a_vap;
    vfs_context_t a_context;
};

struct vnop_rmdir_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_dvp; vnode_t a_vp;
    struct componentname *a_cnp; vfs_context_t a_context;
};

struct vnop_symlink_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_dvp; vnode_t *a_vpp;
    struct componentname *a_cnp; struct vnode_attr *a_vap;
    char *a_target; vfs_context_t a_context;
};

struct vnop_fsync_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_vp; int a_waitfor; vfs_context_t a_context;
};

struct vnop_pathconf_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_vp; int a_name; int32_t *a_retval; vfs_context_t a_context;
};

struct vnop_inactive_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_vp; vfs_context_t a_context;
};

struct vnop_reclaim_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_vp; vfs_context_t a_context;
};

struct vnop_mmap_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_vp; int a_fflags; vfs_context_t a_context;
};

struct vnop_mnomap_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_vp; vfs_context_t a_context;
};

struct vnop_pagein_args {
    struct vnodeop_desc *a_desc;
    vnode_t a_vp; upl_t a_pl; upl_offset_t a_pl_offset;
    off_t a_f_offset; size_t a_size; int a_flags; vfs_context_t a_context;
};

struct vnop_bwrite_args {
    struct vnodeop_desc *a_desc;
    buf_t a_bp;
};

/* ================================================================
 * VFS operations structure
 * ================================================================ */

struct vfsconf;

struct vfsops {
    int  (*vfs_mount)(mount_t, vnode_t, user_addr_t, vfs_context_t);
    int  (*vfs_start)(mount_t, int, vfs_context_t);
    int  (*vfs_unmount)(mount_t, int, vfs_context_t);
    int  (*vfs_root)(mount_t, vnode_t *, vfs_context_t);
    int  (*vfs_quotactl)(mount_t, int, uid_t, caddr_t, vfs_context_t);
    int  (*vfs_getattr)(mount_t, struct vfs_attr *, vfs_context_t);
    int  (*vfs_sync)(mount_t, int, vfs_context_t);
    int  (*vfs_vget)(mount_t, ino64_t, vnode_t *, vfs_context_t);
    int  (*vfs_fhtovp)(mount_t, int, unsigned char *, vnode_t *, vfs_context_t);
    int  (*vfs_vptofh)(vnode_t, int *, unsigned char *, vfs_context_t);
    int  (*vfs_init)(struct vfsconf *);
    int  (*vfs_sysctl)(int *, u_int, user_addr_t, size_t *, user_addr_t, size_t, vfs_context_t);
    int  (*vfs_setattr)(mount_t, struct vfs_attr *, vfs_context_t);
    void *vfs_reserved[7];
};

/* VFS FS entry for registration */
struct vfs_fsentry {
    struct vfsops            *vfe_vfsops;
    int                       vfe_vopcnt;
    struct vnodeopv_desc    **vfe_opvdescs;
    int                       vfe_fstypenum;
    char                      vfe_fsname[MFSNAMELEN];
    uint32_t                  vfe_flags;
    void                     *vfe_reserv[2];
};

/* ================================================================
 * KMOD info for kext start/stop
 * ================================================================ */

#define KMOD_MAX_NAME       64
#define KMOD_INFO_VERSION   1

typedef kern_return_t (*kmod_start_func_t)(void *ki, void *data);
typedef kern_return_t (*kmod_stop_func_t)(void *ki, void *data);

typedef struct kmod_info {
    struct kmod_info   *next;
    int32_t             info_version;
    uint32_t            id;
    char                name[KMOD_MAX_NAME];
    char                version[KMOD_MAX_NAME];
    int32_t             reference_count;
    void               *reference_list;
    vm_address_t        address;
    vm_size_t           size;
    vm_size_t           hdr_size;
    kmod_start_func_t   start;
    kmod_stop_func_t    stop;
} kmod_info_t;

/* ================================================================
 * Kernel dirent structure (32-bit iOS 8)
 * ================================================================ */

struct dirent {
    uint32_t    d_fileno;       /* file number of entry */
    uint16_t    d_reclen;       /* length of this record */
    uint8_t     d_type;         /* file type */
    uint8_t     d_namlen;       /* length of d_name */
    char        d_name[256];    /* NAME_MAX + 1 */
};


#endif /* _KERNEL_TYPES_H_ */
