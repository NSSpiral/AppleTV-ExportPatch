#ifndef _KERNEL_VFS_H_
#define _KERNEL_VFS_H_

#include "types.h"

/* -- Functions -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int vflush(struct mount *mp, struct vnode *skipvp, int flags);
extern int vfs_64bitready(mount_t mp);
extern const char * vfs_addname(const char *name, uint32_t len, uint32_t nc_hash, uint32_t flags);
extern errno_t vfs_attr_pack(vnode_t vp, uio_t uio, struct attrlist *alp, uint64_t options, struct vnode_attr *vap, void *fndesc, vfs_context_t ctx);
extern int vfs_authcache_ttl(mount_t mp);
extern int vfs_authopaque(mount_t mp);
extern int vfs_authopaqueaccess(mount_t mp);
extern int vfs_busy(mount_t mp, int flags);
extern void vfs_clearauthcache_ttl(mount_t mp);
extern void vfs_clearauthopaque(mount_t mp);
extern void vfs_clearauthopaqueaccess(mount_t mp);
extern void vfs_clearextendedsecurity(mount_t mp);
extern void vfs_clearflags(mount_t mp, uint64_t flags);
extern vfs_context_t vfs_context_create(vfs_context_t ctx);
extern vfs_context_t vfs_context_current(void);
extern int vfs_context_get_special_port(vfs_context_t, int, ipc_port_t *);
extern int vfs_context_is64bit(vfs_context_t ctx);
extern int vfs_context_issignal(vfs_context_t ctx, sigset_t mask);
extern int vfs_context_pid(vfs_context_t ctx);
extern proc_t vfs_context_proc(vfs_context_t ctx);
extern int vfs_context_rele(vfs_context_t ctx);
extern int vfs_context_set_special_port(vfs_context_t, int, ipc_port_t);
extern int vfs_context_suser(vfs_context_t ctx);
extern kauth_cred_t vfs_context_ucred(vfs_context_t ctx);
extern int vfs_devblocksize(mount_t mp);
extern void vfs_event_init(void);
extern void vfs_event_signal(fsid_t *fsid, u_int32_t event, intptr_t data);
extern uint64_t vfs_flags(mount_t mp);
extern int vfs_fsadd(struct vfs_fsentry *vfe, vfstable_t *handle);
extern void * vfs_fsprivate(mount_t mp);
extern int vfs_fsremove(vfstable_t);
extern int vfs_get_notify_attributes(struct vnode_attr *vap);
extern void vfs_getnewfsid(struct mount *mp);
extern mount_t vfs_getvfs(fsid_t *fsid);
extern int vfs_init_io_attributes(vnode_t devvp, mount_t mp);
extern void vfs_ioattr(mount_t mp, struct vfsioattr *ioattrp);
extern int vfs_isforce(mount_t mp);
extern int vfs_isrdonly(mount_t mp);
extern int vfs_isrdwr(mount_t mp);
extern int vfs_isreload(mount_t mp);
extern int vfs_issynchronous(mount_t mp);
extern int vfs_isunmount(mount_t mp);
extern int vfs_isupdate(mount_t mp);
extern int vfs_iswriteupgrade(mount_t mp);
extern int vfs_iterate(int flags, int (*callout)(struct mount *, void *), void *arg);
extern uint32_t vfs_maxsymlen(mount_t mp);
extern void vfs_name(mount_t mp, char *buffer);
extern int vfs_removename(const char *name);
extern void vfs_setauthcache_ttl(mount_t mp, int ttl);
extern void vfs_setextendedsecurity(mount_t mp);
extern void vfs_setflags(mount_t mp, uint64_t flags);
extern void vfs_setfsprivate(mount_t mp, void *mntdata);
extern void vfs_setioattr(mount_t mp, struct vfsioattr *ioattrp);
extern void vfs_setlocklocal(mount_t mp);
extern void vfs_setmaxsymlen(mount_t mp, uint32_t symlen);
extern errno_t vfs_setup_vattr_from_attrlist(struct attrlist *alp, struct vnode_attr *vap, enum vtype obj_vtype, ssize_t *attr_fixed_sizep, vfs_context_t ctx);
extern struct vfsstatfs * vfs_statfs(mount_t mp);
extern int vfs_typenum(mount_t mp);
extern int vfs_unmountbyfsid(fsid_t *fsid, int flags, vfs_context_t ctx);
extern vnode_t vfs_vnodecovered(mount_t);

extern int mountroot_post_hook();
extern int vfs_context_bind();
extern int vfs_devvp();
extern int vfs_getattr();
extern int vfs_getbyid();
extern int vfs_mntlabel();
extern int vfs_mountedon();
extern int vfs_nativexattrs();
extern int vfs_rootvnode();
extern int vfs_setauthopaque();
extern int vfs_setauthopaqueaccess();
extern int vfs_setcompoundopen();
extern int vfs_sysctl();
extern int vfs_throttle_mask();
extern int vfs_unbusy();
extern int vfs_update_vfsstat();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_VFS_H_ */
