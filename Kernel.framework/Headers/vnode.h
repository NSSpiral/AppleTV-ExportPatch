#ifndef _KERNEL_VNODE_H_
#define _KERNEL_VNODE_H_

#include "types.h"

/* -- vnode -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int vn_getpath(vnode_t, char *, int *);
extern int vnode_addfsref(vnode_t vp);
extern int vnode_authattr_new(vnode_t dvp, struct vnode_attr *vap, int noauth, vfs_context_t ctx);
extern int vnode_authorize(vnode_t vp, vnode_t dvp, kauth_action_t action, vfs_context_t ctx);
extern void vnode_clearfsnode(vnode_t);
extern void vnode_clearnocache(vnode_t vp);
extern void vnode_clearnoreadahead(vnode_t vp);
extern int vnode_close(vnode_t, int, vfs_context_t);
extern errno_t vnode_create(uint32_t flavor, uint32_t size, void *data, vnode_t *vpp);
extern void * vnode_fsnode(vnode_t vp);
extern int vnode_get(vnode_t);
extern int vnode_getattr(vnode_t vp, struct vnode_attr *vap, vfs_context_t ctx);
extern const char * vnode_getname(vnode_t vp);
extern vnode_t vnode_getparent(vnode_t vp);
extern int vnode_getwithref(vnode_t);
extern int vnode_getwithvid(vnode_t, uint32_t);
extern int vnode_hascleanblks(vnode_t vp);
extern int vnode_hasdirtyblks(vnode_t vp);
extern int vnode_isblk(vnode_t vp);
extern int vnode_ischr(vnode_t vp);
extern int vnode_isdir(vnode_t);
extern int vnode_isinuse(vnode_t vp, int refcnt);
extern int vnode_islnk(vnode_t vp);
extern int vnode_ismount(vnode_t vp);
extern int vnode_ismountedon(vnode_t vp);
extern int vnode_isnamedstream(vnode_t vp);
extern int vnode_isnocache(vnode_t vp);
extern int vnode_israge(vnode_t vp);
extern int vnode_isreg(vnode_t vp);
extern int vnode_isswap(vnode_t vp);
extern int vnode_issystem(vnode_t vp);
extern int vnode_isvroot(vnode_t vp);
extern int vnode_iterate(struct mount *mp, int flags, int (*callout)(struct vnode *, void *), void *arg);
extern errno_t vnode_lookup(const char *, int, vnode_t *, vfs_context_t);
extern mount_t vnode_mount(vnode_t vp);
extern mount_t vnode_mountedhere(vnode_t vp);
extern int vnode_notify(vnode_t vp, uint32_t events, struct vnode_attr *vap);
extern errno_t vnode_open(const char *, int, int, int, vnode_t *, vfs_context_t);
extern int vnode_put(vnode_t);
extern void vnode_putname(const char *name);
extern int vnode_recycle(vnode_t);
extern int vnode_ref(vnode_t vp);
extern void vnode_rele(vnode_t);
extern int vnode_removefsref(vnode_t vp);
extern int vnode_setattr(vnode_t vp, struct vnode_attr *vap, vfs_context_t ctx);
extern void vnode_setmultipath(vnode_t vp);
extern void vnode_setnocache(vnode_t vp);
extern void vnode_setnoreadahead(vnode_t vp);
extern void vnode_settag(vnode_t, int);
extern dev_t vnode_specrdev(vnode_t vp);
extern void vnode_startwrite(vnode_t vp);
extern int vnode_tag(vnode_t vp);
extern void vnode_uncache_credentials(vnode_t vp);
extern void vnode_update_identity(vnode_t vp, vnode_t dvp, const char *name, int name_len, uint32_t name_hashval, int flags);
extern int vnode_vfs64bitready(vnode_t vp);
extern uint32_t vnode_vfsmaxsymlen(vnode_t vp);
extern void vnode_vfsname(vnode_t vp, char *buf);
extern uint32_t vnode_vid(vnode_t vp);
extern enum vtype vnode_vtype(vnode_t vp);
extern int vnode_waitforwrites(vnode_t vp, int output_target, int slpflag, int slptimeout, const char *msg);
extern void vnode_writedone(vnode_t vp);

extern int vn_bwrite();
extern int vn_default_error();
extern int vn_getpath_fsenter();
extern int vn_path_package_check();
extern int vn_rdwr();
extern int vn_revoke();
extern int vn_searchfs_inappropriate_name();
extern int vnode_authattr();
extern int vnode_clearmountedon();
extern int vnode_isdyldsharedcache();
extern int vnode_isfifo();
extern int vnode_ismonitored();
extern int vnode_isnoreadahead();
extern int vnode_isrecycled();
extern int vnode_istty();
extern int vnode_lookup_continue_needed();
extern int vnode_setmountedon();
extern int vnode_vfsisrdonly();
extern int vnode_vfstypenum();

extern struct vnodeop_desc vnop_access_desc;
extern struct vnodeop_desc vnop_advlock_desc;
extern struct vnodeop_desc vnop_allocate_desc;
extern struct vnodeop_desc vnop_blktooff_desc;
extern struct vnodeop_desc vnop_blockmap_desc;
extern struct vnodeop_desc vnop_bwrite_desc;
extern struct vnodeop_desc vnop_close_desc;
extern struct vnodeop_desc vnop_compound_mkdir_desc;
extern struct vnodeop_desc vnop_compound_open_desc;
extern struct vnodeop_desc vnop_compound_remove_desc;
extern struct vnodeop_desc vnop_compound_rename_desc;
extern struct vnodeop_desc vnop_compound_rmdir_desc;
extern struct vnodeop_desc vnop_copyfile_desc;
extern struct vnodeop_desc vnop_create_desc;
extern struct vnodeop_desc vnop_default_desc;
extern struct vnodeop_desc vnop_exchange_desc;
extern struct vnodeop_desc vnop_fsync_desc;
extern struct vnodeop_desc vnop_getattr_desc;
extern struct vnodeop_desc vnop_getattrlistbulk_desc;
extern struct vnodeop_desc vnop_getnamedstream_desc;
extern struct vnodeop_desc vnop_getxattr_desc;
extern struct vnodeop_desc vnop_inactive_desc;
extern struct vnodeop_desc vnop_ioctl_desc;
extern struct vnodeop_desc vnop_kqfilt_add_desc;
extern struct vnodeop_desc vnop_kqfilt_remove_desc;
extern struct vnodeop_desc vnop_link_desc;
extern struct vnodeop_desc vnop_listxattr_desc;
extern struct vnodeop_desc vnop_lookup_desc;
extern struct vnodeop_desc vnop_makenamedstream_desc;
extern struct vnodeop_desc vnop_mkdir_desc;
extern struct vnodeop_desc vnop_mknod_desc;
extern struct vnodeop_desc vnop_mmap_desc;
extern struct vnodeop_desc vnop_mnomap_desc;
extern struct vnodeop_desc vnop_monitor_desc;
extern struct vnodeop_desc vnop_offtoblk_desc;
extern struct vnodeop_desc vnop_open_desc;
extern struct vnodeop_desc vnop_pagein_desc;
extern struct vnodeop_desc vnop_pageout_desc;
extern struct vnodeop_desc vnop_pathconf_desc;
extern struct vnodeop_desc vnop_read_desc;
extern struct vnodeop_desc vnop_readdir_desc;
extern struct vnodeop_desc vnop_readdirattr_desc;
extern struct vnodeop_desc vnop_readlink_desc;
extern struct vnodeop_desc vnop_reclaim_desc;
extern struct vnodeop_desc vnop_remove_desc;
extern struct vnodeop_desc vnop_removenamedstream_desc;
extern struct vnodeop_desc vnop_removexattr_desc;
extern struct vnodeop_desc vnop_rename_desc;
extern struct vnodeop_desc vnop_revoke_desc;
extern struct vnodeop_desc vnop_rmdir_desc;
extern struct vnodeop_desc vnop_searchfs_desc;
extern struct vnodeop_desc vnop_select_desc;
extern struct vnodeop_desc vnop_setattr_desc;
extern struct vnodeop_desc vnop_setxattr_desc;
extern struct vnodeop_desc vnop_strategy_desc;
extern struct vnodeop_desc vnop_symlink_desc;
extern struct vnodeop_desc vnop_whiteout_desc;
extern struct vnodeop_desc vnop_write_desc;

/* -- VNOP inline dispatch (v_op at offset 0x80) -- */

#define VNODE_UPDATE_PARENT 0x01
#define VNODE_UPDATE_NAME   0x02
typedef int (*_vnop_func_t)(void *);
#define _VNOP_V_OP(vp) (*(_vnop_func_t **)((char *)(vp) + 0x80))
#define _VNOP_CALL(vp, desc, args) \
    (_VNOP_V_OP(vp)[(desc).vdesc_offset])((void *)(args))
static inline errno_t VNOP_LOOKUP(vnode_t dvp, vnode_t *vpp,
    struct componentname *cnp, vfs_context_t ctx) {
    struct vnop_lookup_args a;
    a.a_desc = &vnop_lookup_desc; a.a_dvp = dvp;
    a.a_vpp = vpp; a.a_cnp = cnp; a.a_context = ctx;
    return _VNOP_CALL(dvp, vnop_lookup_desc, &a);
}

static inline errno_t VNOP_CREATE(vnode_t dvp, vnode_t *vpp,
    struct componentname *cnp, struct vnode_attr *vap, vfs_context_t ctx) {
    struct vnop_create_args a;
    a.a_desc = &vnop_create_desc; a.a_dvp = dvp;
    a.a_vpp = vpp; a.a_cnp = cnp; a.a_vap = vap; a.a_context = ctx;
    return _VNOP_CALL(dvp, vnop_create_desc, &a);
}

static inline errno_t VNOP_OPEN(vnode_t vp, int mode, vfs_context_t ctx) {
    struct vnop_open_args a;
    a.a_desc = &vnop_open_desc; a.a_vp = vp;
    a.a_mode = mode; a.a_context = ctx;
    return _VNOP_CALL(vp, vnop_open_desc, &a);
}

static inline errno_t VNOP_CLOSE(vnode_t vp, int fflag, vfs_context_t ctx) {
    struct vnop_close_args a;
    a.a_desc = &vnop_close_desc; a.a_vp = vp;
    a.a_fflag = fflag; a.a_context = ctx;
    return _VNOP_CALL(vp, vnop_close_desc, &a);
}

static inline errno_t VNOP_GETATTR(vnode_t vp, struct vnode_attr *vap,
    vfs_context_t ctx) {
    struct vnop_getattr_args a;
    a.a_desc = &vnop_getattr_desc; a.a_vp = vp;
    a.a_vap = vap; a.a_context = ctx;
    return _VNOP_CALL(vp, vnop_getattr_desc, &a);
}

static inline errno_t VNOP_SETATTR(vnode_t vp, struct vnode_attr *vap,
    vfs_context_t ctx) {
    struct vnop_setattr_args a;
    a.a_desc = &vnop_setattr_desc; a.a_vp = vp;
    a.a_vap = vap; a.a_context = ctx;
    return _VNOP_CALL(vp, vnop_setattr_desc, &a);
}

static inline errno_t VNOP_READ(vnode_t vp, uio_t uio, int ioflag,
    vfs_context_t ctx) {
    struct vnop_read_args a;
    a.a_desc = &vnop_read_desc; a.a_vp = vp;
    a.a_uio = uio; a.a_ioflag = ioflag; a.a_context = ctx;
    return _VNOP_CALL(vp, vnop_read_desc, &a);
}

static inline errno_t VNOP_WRITE(vnode_t vp, uio_t uio, int ioflag,
    vfs_context_t ctx) {
    struct vnop_write_args a;
    a.a_desc = &vnop_write_desc; a.a_vp = vp;
    a.a_uio = uio; a.a_ioflag = ioflag; a.a_context = ctx;
    return _VNOP_CALL(vp, vnop_write_desc, &a);
}

static inline errno_t VNOP_READDIR(vnode_t vp, uio_t uio, int flags,
    int *eofflag, int *numdirent, vfs_context_t ctx) {
    struct vnop_readdir_args a;
    a.a_desc = &vnop_readdir_desc; a.a_vp = vp;
    a.a_uio = uio; a.a_flags = flags; a.a_eofflag = eofflag;
    a.a_numdirent = numdirent; a.a_context = ctx;
    return _VNOP_CALL(vp, vnop_readdir_desc, &a);
}

static inline errno_t VNOP_READLINK(vnode_t vp, uio_t uio,
    vfs_context_t ctx) {
    struct vnop_readlink_args a;
    a.a_desc = &vnop_readlink_desc; a.a_vp = vp;
    a.a_uio = uio; a.a_context = ctx;
    return _VNOP_CALL(vp, vnop_readlink_desc, &a);
}

static inline errno_t VNOP_FSYNC(vnode_t vp, int waitfor,
    vfs_context_t ctx) {
    struct vnop_fsync_args a;
    a.a_desc = &vnop_fsync_desc; a.a_vp = vp;
    a.a_waitfor = waitfor; a.a_context = ctx;
    return _VNOP_CALL(vp, vnop_fsync_desc, &a);
}

static inline errno_t VNOP_REMOVE(vnode_t dvp, vnode_t vp,
    struct componentname *cnp, int flags, vfs_context_t ctx) {
    struct vnop_remove_args a;
    a.a_desc = &vnop_remove_desc; a.a_dvp = dvp;
    a.a_vp = vp; a.a_cnp = cnp; a.a_flags = flags; a.a_context = ctx;
    return _VNOP_CALL(dvp, vnop_remove_desc, &a);
}

static inline errno_t VNOP_LINK(vnode_t vp, vnode_t tdvp,
    struct componentname *cnp, vfs_context_t ctx) {
    struct vnop_link_args a;
    a.a_desc = &vnop_link_desc; a.a_vp = vp;
    a.a_tdvp = tdvp; a.a_cnp = cnp; a.a_context = ctx;
    return _VNOP_CALL(tdvp, vnop_link_desc, &a);
}

static inline errno_t VNOP_RENAME(vnode_t fdvp, vnode_t fvp,
    struct componentname *fcnp, vnode_t tdvp, vnode_t tvp,
    struct componentname *tcnp, vfs_context_t ctx) {
    struct vnop_rename_args a;
    a.a_desc = &vnop_rename_desc; a.a_fdvp = fdvp;
    a.a_fvp = fvp; a.a_fcnp = fcnp; a.a_tdvp = tdvp;
    a.a_tvp = tvp; a.a_tcnp = tcnp; a.a_context = ctx;
    return _VNOP_CALL(fdvp, vnop_rename_desc, &a);
}

static inline errno_t VNOP_MKDIR(vnode_t dvp, vnode_t *vpp,
    struct componentname *cnp, struct vnode_attr *vap, vfs_context_t ctx) {
    struct vnop_mkdir_args a;
    a.a_desc = &vnop_mkdir_desc; a.a_dvp = dvp;
    a.a_vpp = vpp; a.a_cnp = cnp; a.a_vap = vap; a.a_context = ctx;
    return _VNOP_CALL(dvp, vnop_mkdir_desc, &a);
}

static inline errno_t VNOP_RMDIR(vnode_t dvp, vnode_t vp,
    struct componentname *cnp, vfs_context_t ctx) {
    struct vnop_rmdir_args a;
    a.a_desc = &vnop_rmdir_desc; a.a_dvp = dvp;
    a.a_vp = vp; a.a_cnp = cnp; a.a_context = ctx;
    return _VNOP_CALL(dvp, vnop_rmdir_desc, &a);
}

static inline errno_t VNOP_SYMLINK(vnode_t dvp, vnode_t *vpp,
    struct componentname *cnp, struct vnode_attr *vap, char *target,
    vfs_context_t ctx) {
    struct vnop_symlink_args a;
    a.a_desc = &vnop_symlink_desc; a.a_dvp = dvp;
    a.a_vpp = vpp; a.a_cnp = cnp; a.a_vap = vap;
    a.a_target = target; a.a_context = ctx;
    return _VNOP_CALL(dvp, vnop_symlink_desc, &a);
}

static inline errno_t VNOP_PATHCONF(vnode_t vp, int name, int32_t *retval,
    vfs_context_t ctx) {
    struct vnop_pathconf_args a;
    a.a_desc = &vnop_pathconf_desc; a.a_vp = vp;
    a.a_name = name; a.a_retval = retval; a.a_context = ctx;
    return _VNOP_CALL(vp, vnop_pathconf_desc, &a);
}

static inline errno_t VNOP_MMAP(vnode_t vp, int fflags, vfs_context_t ctx) {
    struct vnop_mmap_args a;
    a.a_desc = &vnop_mmap_desc; a.a_vp = vp;
    a.a_fflags = fflags; a.a_context = ctx;
    return _VNOP_CALL(vp, vnop_mmap_desc, &a);
}

static inline errno_t VNOP_MNOMAP(vnode_t vp, vfs_context_t ctx) {
    struct vnop_mnomap_args a;
    a.a_desc = &vnop_mnomap_desc; a.a_vp = vp; a.a_context = ctx;
    return _VNOP_CALL(vp, vnop_mnomap_desc, &a);
}

static inline errno_t VNOP_INACTIVE(vnode_t vp, vfs_context_t ctx) {
    struct vnop_inactive_args a;
    a.a_desc = &vnop_inactive_desc; a.a_vp = vp; a.a_context = ctx;
    return _VNOP_CALL(vp, vnop_inactive_desc, &a);
}

static inline errno_t VNOP_RECLAIM(vnode_t vp, vfs_context_t ctx) {
    struct vnop_reclaim_args a;
    a.a_desc = &vnop_reclaim_desc; a.a_vp = vp; a.a_context = ctx;
    return _VNOP_CALL(vp, vnop_reclaim_desc, &a);
}


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_VNODE_H_ */
