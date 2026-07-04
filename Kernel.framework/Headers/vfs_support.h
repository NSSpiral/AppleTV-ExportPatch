#ifndef _KERNEL_VFS_SUPPORT_H_
#define _KERNEL_VFS_SUPPORT_H_

#include "types.h"

/* -- Support -- */

#ifdef __cplusplus
extern "C" {
#endif

extern errno_t VNOP_BWRITE(buf_t bp);
extern errno_t VNOP_GETXATTR(vnode_t vp, const char *name, uio_t uio, size_t *size, int options, vfs_context_t ctx);
extern errno_t VNOP_IOCTL(vnode_t vp, u_long command, caddr_t data, int fflag, vfs_context_t ctx);
extern errno_t VNOP_SETXATTR(vnode_t vp, const char *name, uio_t uio, int options, vfs_context_t ctx);
extern errno_t VNOP_STRATEGY(struct buf *bp);
extern int advisory_read(vnode_t, off_t, off_t, int);
extern int advisory_read_ext(vnode_t, off_t, off_t, int, int (*)(buf_t, void *), void *, int);
extern void cache_enter(vnode_t dvp, vnode_t vp, struct componentname *cnp);
extern int cache_lookup(vnode_t dvp, vnode_t *vpp, struct componentname *cnp);
extern void cache_purge(vnode_t vp);
extern void cache_purge_negatives(vnode_t vp);
extern int err_access(struct vnop_access_args *ap);
extern int err_advlock(struct vnop_advlock_args *ap);
extern int err_allocate(struct vnop_allocate_args *ap);
extern int err_blktooff(struct vnop_blktooff_args *ap);
extern int err_blockmap(struct vnop_blockmap_args *ap);
extern int err_bwrite(struct vnop_bwrite_args *ap);
extern int err_close(struct vnop_close_args *ap);
extern int err_copyfile(struct vnop_copyfile_args *ap);
extern int err_create(struct vnop_create_args *ap);
extern int err_exchange(struct vnop_exchange_args *ap);
extern int err_fsync(struct vnop_fsync_args *ap);
extern int err_getattr(struct vnop_getattr_args *ap);
extern int err_inactive(struct vnop_inactive_args *ap);
extern int err_ioctl(struct vnop_ioctl_args *ap);
extern int err_link(struct vnop_link_args *ap);
extern int err_mknod(struct vnop_mknod_args *ap);
extern int err_offtoblk(struct vnop_offtoblk_args *ap);
extern int err_open(struct vnop_open_args *ap);
extern int err_pathconf(struct vnop_pathconf_args *ap);
extern int err_read(struct vnop_read_args *ap);
extern int err_readdirattr(struct vnop_readdirattr_args *ap);
extern int err_readlink(struct vnop_readlink_args *ap);
extern int err_revoke(struct vnop_revoke_args *ap);
extern int err_searchfs(struct vnop_searchfs_args *ap);
extern int err_select(struct vnop_select_args *ap);
extern int err_setattr(struct vnop_setattr_args *ap);
extern int err_strategy(struct vnop_strategy_args *ap);
extern int err_whiteout(struct vnop_whiteout_args *ap);
extern int nop_access(struct vnop_access_args *ap);
extern int nop_allocate(struct vnop_allocate_args *ap);
extern int nop_blktooff(struct vnop_blktooff_args *ap);
extern int nop_blockmap(struct vnop_blockmap_args *ap);
extern int nop_bwrite(struct vnop_bwrite_args *ap);
extern int nop_close(struct vnop_close_args *ap);
extern int nop_copyfile(struct vnop_copyfile_args *ap);
extern int nop_create(struct vnop_create_args *ap);
extern int nop_exchange(struct vnop_exchange_args *ap);
extern int nop_fsync(struct vnop_fsync_args *ap);
extern int nop_getattr(struct vnop_getattr_args *ap);
extern int nop_inactive(struct vnop_inactive_args *ap);
extern int nop_ioctl(struct vnop_ioctl_args *ap);
extern int nop_link(struct vnop_link_args *ap);
extern int nop_mkdir(struct vnop_mkdir_args *ap);
extern int nop_mknod(struct vnop_mknod_args *ap);
extern int nop_mmap(struct vnop_mmap_args *ap);
extern int nop_offtoblk(struct vnop_offtoblk_args *ap);
extern int nop_open(struct vnop_open_args *ap);
extern int nop_pagein(struct vnop_pagein_args *ap);
extern int nop_pageout(struct vnop_pageout_args *ap);
extern int nop_pathconf(struct vnop_pathconf_args *ap);
extern int nop_readdir(struct vnop_readdir_args *ap);
extern int nop_reclaim(struct vnop_reclaim_args *ap);
extern int nop_remove(struct vnop_remove_args *ap);
extern int nop_revoke(struct vnop_revoke_args *ap);
extern int nop_rmdir(struct vnop_rmdir_args *ap);
extern int nop_searchfs(struct vnop_searchfs_args *ap);
extern int nop_select(struct vnop_select_args *ap);
extern int nop_setattr(struct vnop_setattr_args *ap);
extern int nop_strategy(struct vnop_strategy_args *ap);
extern int nop_symlink(struct vnop_symlink_args *ap);
extern int nop_whiteout(struct vnop_whiteout_args *ap);
extern int nop_write(struct vnop_write_args *ap);

extern int err_mkdir();
extern int err_mmap();
extern int err_pagein();
extern int err_pageout();
extern int err_readdir();
extern int err_reclaim();
extern int err_remove();
extern int err_rename();
extern int err_rmdir();
extern int err_symlink();
extern int err_write();
extern int nop_advlock();
extern int nop_read();
extern int nop_readdirattr();
extern int nop_readlink();
extern int nop_rename();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_VFS_SUPPORT_H_ */
