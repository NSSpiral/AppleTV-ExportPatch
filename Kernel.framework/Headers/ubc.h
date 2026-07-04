#ifndef _KERNEL_UBC_H_
#define _KERNEL_UBC_H_

#include "types.h"

/* -- ubc -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int cluster_bp(buf_t);
extern int cluster_bp_ext(buf_t, int (*)(buf_t, void *), void *);
extern int cluster_pagein(vnode_t, upl_t, upl_offset_t, off_t, int, off_t, int);
extern int cluster_pagein_ext(vnode_t, upl_t, upl_offset_t, off_t, int, off_t, int, int (*)(buf_t, void *), void *);
extern int cluster_pageout(vnode_t, upl_t, upl_offset_t, off_t, int, off_t, int);
extern int cluster_pageout_ext(vnode_t, upl_t, upl_offset_t, off_t, int, off_t, int, int (*)(buf_t, void *), void *);
extern int cluster_push(vnode_t, int);
extern int cluster_push_ext(vnode_t, int, int (*)(buf_t, void *), void *);
extern int cluster_read(vnode_t, struct uio *, off_t, int);
extern int cluster_read_ext(vnode_t, struct uio *, off_t, int, int (*)(buf_t, void *), void *);
extern int cluster_write(vnode_t, struct uio *, off_t, off_t, off_t, off_t, int);
extern int cluster_write_ext(vnode_t, struct uio *, off_t, off_t, off_t, off_t, int, int (*)(buf_t, void *), void *);
extern void cluster_zero(upl_t, upl_offset_t, int, buf_t);
extern off_t ubc_blktooff(struct vnode *, daddr64_t);
extern int ubc_create_upl(vnode_t, off_t, int, upl_t *, upl_page_info_t **, int);
extern kauth_cred_t ubc_getcred(struct vnode *);
extern off_t ubc_getsize(struct vnode *);
extern errno_t ubc_msync(vnode_t, off_t, off_t, off_t *, int);
extern daddr64_t ubc_offtoblk(struct vnode *, off_t);
extern int ubc_page_op(vnode_t, off_t, int, ppnum_t *, int *);
extern int ubc_pages_resident(vnode_t);
extern int ubc_setsize(vnode_t, off_t);
extern int ubc_setthreadcred(struct vnode *, struct proc *, struct thread *);
extern int ubc_upl_abort_range(upl_t, upl_offset_t, upl_size_t, int);
extern int ubc_upl_commit_range(upl_t, upl_offset_t, upl_size_t, int);
extern int ubc_upl_map(upl_t, vm_offset_t *);
extern upl_size_t ubc_upl_maxbufsize(void);
extern upl_page_info_t * ubc_upl_pageinfo(upl_t);
extern int ubc_upl_unmap(upl_t);
extern int uio_addiov(uio_t, user_addr_t, user_size_t);
extern uio_t uio_create(int, off_t, int, int);
extern void uio_free(uio_t);
extern off_t uio_offset(uio_t);
extern user_ssize_t uio_resid(uio_t);
extern void uio_setoffset(uio_t, off_t);

extern int cluster_copy_ubc_data();
extern int cluster_copy_upl_data();
extern int ubc_cs_blob_get();
extern int ubc_range_op();
extern int ubc_setcred();
extern int ubc_upl_abort();
extern int ubc_upl_commit();
extern int uio_curriovbase();
extern int uio_curriovlen();
extern int uio_duplicate();
extern int uio_getiov();
extern int uio_iovcnt();
extern int uio_isuserspace();
extern int uio_reset();
extern int uio_rw();
extern int uio_setresid();
extern int uio_setrw();
extern int uio_update();
extern int upl_dirty_page();
extern int upl_page_present();
extern int upl_valid_page();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_UBC_H_ */
