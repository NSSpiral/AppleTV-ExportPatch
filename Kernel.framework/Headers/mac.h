#ifndef _KERNEL_MAC_H_
#define _KERNEL_MAC_H_

#include "types.h"

/* -- mac -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int mac_audit_text();
extern int mac_iokit_check_hid_control();
extern int mac_label_get();
extern int mac_label_set();
extern int mac_policy_register();
extern int mac_policy_unregister();
extern int mac_proc_set_enforce();
extern int mac_thread_get_threadlabel();
extern int mac_thread_get_uthreadlabel();
extern int mac_vnop_getxattr();
extern int mac_vnop_removexattr();
extern int mac_vnop_setxattr();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_MAC_H_ */
