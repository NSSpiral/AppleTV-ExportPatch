#ifndef _KERNEL_SYSCTL_H_
#define _KERNEL_SYSCTL_H_

#include "types.h"

/* -- sysctl -- */

#ifdef __cplusplus
extern "C" {
#endif

extern struct sysctl_oid_list sysctl__debug_children;
extern struct sysctl_oid_list sysctl__kern_children;
extern struct sysctl_oid_list sysctl__machdep_children;
extern struct sysctl_oid_list sysctl__net_children;
extern struct sysctl_oid_list sysctl__vfs_children;
extern int sysctl_handle_int(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
extern int sysctl_handle_int2quad(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
extern int sysctl_handle_long(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
extern int sysctl_handle_opaque(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
extern int sysctl_handle_string(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
extern void sysctl_register_oid(struct sysctl_oid *oidp);
extern void sysctl_unregister_oid(struct sysctl_oid *oidp);

extern int sysctl__children();
extern int sysctl__security_mac_children();
extern int sysctl__sysctl_children();
extern int sysctl__vfs_generic();
extern int sysctl__vfs_generic_children();
extern int sysctl__vm_children();
extern int sysctl_handle_quad();
extern int sysctl_register_fixed();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_SYSCTL_H_ */
