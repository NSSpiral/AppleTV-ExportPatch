#ifndef _KERNEL_BUF_H_
#define _KERNEL_BUF_H_

#include "types.h"

/* -- Buffers -- */

#ifdef __cplusplus
extern "C" {
#endif

extern buf_t buf_alloc(vnode_t vp);
extern bufattr_t buf_attr(buf_t bp);
extern errno_t buf_bdwrite(buf_t bp);
extern void buf_biodone(buf_t bp);
extern errno_t buf_biowait(buf_t bp);
extern daddr64_t buf_blkno(buf_t bp);
extern errno_t buf_bread(vnode_t vp, daddr64_t blkno, int size, kauth_cred_t cred, buf_t *bpp);
extern errno_t buf_breadn(vnode_t vp, daddr64_t blkno, int size, daddr64_t *rablks, int *rasizes, int nrablks, kauth_cred_t cred, buf_t *bpp);
extern void buf_brelse(buf_t bp);
extern errno_t buf_bwrite(buf_t bp);
extern void * buf_callback(buf_t bp);
extern void buf_clear(buf_t bp);
extern void buf_clear_redundancy_flags(buf_t bp, uint32_t flags);
extern void buf_clearflags(buf_t bp, int32_t flags);
extern uintptr_t buf_dataptr(buf_t bp);
extern dev_t buf_device(buf_t bp);
extern uint32_t buf_dirtyend(buf_t bp);
extern uint32_t buf_dirtyoff(buf_t bp);
extern void * buf_drvdata(buf_t bp);
extern errno_t buf_error(buf_t bp);
extern int32_t buf_flags(buf_t bp);
extern void buf_flushdirtyblks(vnode_t vp, int wait, int flags, const char *msg);
extern void buf_free(buf_t bp);
extern void * buf_fsprivate(buf_t bp);
extern buf_t buf_getblk(vnode_t vp, daddr64_t blkno, int size, int slpflag, int slptimeo, int operation);
extern buf_t buf_geteblk(int size);
extern errno_t buf_invalblkno(vnode_t vp, daddr64_t lblkno, int flags);
extern int buf_invalidateblks(vnode_t vp, int flags, int slpflag, int slptimeo);
extern void buf_iterate(vnode_t vp, int (*callout)(buf_t, void *), int flags, void *arg);
extern errno_t buf_map(buf_t bp, caddr_t *io_addr);
extern void buf_markclean(buf_t);
extern void buf_markdelayed(buf_t bp);
extern void buf_markeintr(buf_t bp);
extern void buf_markfua(buf_t bp);
extern void buf_markinvalid(buf_t bp);
extern errno_t buf_meta_bread(vnode_t vp, daddr64_t blkno, int size, kauth_cred_t cred, buf_t *bpp);
extern errno_t buf_meta_breadn(vnode_t vp, daddr64_t blkno, int size, daddr64_t *rablks, int *rasizes, int nrablks, kauth_cred_t cred, buf_t *bpp);
extern proc_t buf_proc(buf_t bp);
extern kauth_cred_t buf_rcred(buf_t bp);
extern uint32_t buf_redundancy_flags(buf_t bp);
extern void buf_reset(buf_t bp, int32_t flags);
extern uint32_t buf_resid(buf_t bp);
extern void buf_set_redundancy_flags(buf_t bp, uint32_t flags);
extern void buf_setblkno(buf_t bp, daddr64_t blkno);
extern void buf_setdataptr(buf_t bp, uintptr_t data);
extern void buf_setdirtyoff(buf_t bp, uint32_t);
extern void buf_setdrvdata(buf_t bp, void *drvdata);
extern void buf_seterror(buf_t bp, errno_t);
extern void buf_setflags(buf_t bp, int32_t flags);
extern void buf_setlblkno(buf_t bp, daddr64_t lblkno);
extern void buf_setresid(buf_t bp, uint32_t resid);
extern void buf_setsize(buf_t bp, uint32_t);
extern errno_t buf_setupl(buf_t bp, upl_t upl, uint32_t offset);
extern void buf_setvnode(buf_t bp, vnode_t vp);
extern int buf_shadow(buf_t bp);
extern uint32_t buf_size(buf_t bp);
extern errno_t buf_strategy(vnode_t devvp, void *ap);
extern errno_t buf_unmap(buf_t bp);
extern void * buf_upl(buf_t bp);
extern uint32_t buf_uploffset(buf_t bp);
extern int buf_valid(buf_t bp);
extern kauth_cred_t buf_wcred(buf_t bp);

extern int buf_bawrite();
extern int buf_clone();
extern int buf_count();
extern int buf_create_shadow();
extern int buf_fromcache();
extern int buf_fua();
extern int buf_kernel_addrperm_addr();
extern int buf_lblkno();
extern int buf_markaged();
extern int buf_setcallback();
extern int buf_setcount();
extern int buf_setdevice();
extern int buf_setdirtyend();
extern int buf_setfilter();
extern int buf_setfsprivate();
extern int buf_vnode();
extern int bufattr_alloc();
extern int bufattr_cpoff();
extern int bufattr_cpx();
extern int bufattr_dup();
extern int bufattr_free();
extern int bufattr_greedymode();
extern int bufattr_isochronous();
extern int bufattr_markgreedymode();
extern int bufattr_markisochronous();
extern int bufattr_markmeta();
extern int bufattr_markquickcomplete();
extern int bufattr_meta();
extern int bufattr_nocache();
extern int bufattr_passive();
extern int bufattr_quickcomplete();
extern int bufattr_rawencrypted();
extern int bufattr_setcpoff();
extern int bufattr_setcpx();
extern int bufattr_throttled();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_BUF_H_ */
