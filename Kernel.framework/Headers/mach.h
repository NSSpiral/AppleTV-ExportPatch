#ifndef _KERNEL_MACH_H_
#define _KERNEL_MACH_H_

#include "types.h"

/* -- ipc -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int convert_port_entry_to_map();
extern int convert_port_entry_to_object();
extern int convert_port_to_task_suspension_token();
extern int convert_task_suspension_token_to_port();
extern int convert_task_to_port();
extern int host_get_exception_ports();
extern int host_get_special_port();
extern int host_priv_self();
extern int ipc_importance_manager();
extern int ipc_kernel_map();
extern int ipc_mqueue_full();
extern int ipc_port_release_send();
extern int mach_msg_rpc_from_kernel();
extern int mach_msg_rpc_from_kernel_proper();
extern int mach_msg_send_from_kernel();
extern int mach_msg_send_from_kernel_proper();
extern int mach_msg_send_from_kernel_with_options_legacy();
extern int mig_dealloc_reply_port();
extern int mig_get_reply_port();
extern int mig_put_reply_port();
extern int mig_strncpy();
extern int mig_user_allocate();
extern int mig_user_deallocate();
extern int port_name_to_task();
extern int port_name_to_thread();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_MACH_H_ */
