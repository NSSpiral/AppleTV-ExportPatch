#ifndef _KERNEL_CTL_H_
#define _KERNEL_CTL_H_

#include "types.h"

/* -- control -- */

#ifdef __cplusplus
extern "C" {
#endif

extern errno_t ctl_deregister(kern_ctl_ref kctlref);
extern errno_t ctl_enqueuedata(kern_ctl_ref kctlref, u_int32_t unit, void *data, size_t len, u_int32_t flags);
extern errno_t ctl_enqueuembuf(kern_ctl_ref kctlref, u_int32_t unit, mbuf_t m, u_int32_t flags);
extern errno_t ctl_register(struct kern_ctl_reg *userkctl, kern_ctl_ref *kctlref);

extern int ctl_getenqueuespace();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_CTL_H_ */
