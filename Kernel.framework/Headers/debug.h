#ifndef _KERNEL_DEBUG_H_
#define _KERNEL_DEBUG_H_

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

/* -- debug -- */

extern int kprintf(const char *, ...);
extern void panic(const char *, ...) __attribute__((noreturn));
extern int printf(const char *, ...);

extern int Assert();
extern int Debugger();
extern int db_dumpiojunk();
extern int db_piokjunk();
extern int kdebug_enable();
extern int kdp_register_callout();
extern int kdp_register_link();
extern int kdp_register_send_receive();
extern int kdp_set_interface();
extern int kdp_set_ip_and_mac_addresses();
extern int kdp_unregister_link();
extern int kdp_unregister_send_receive();
extern int kernel_debug();
extern int kernel_debug1();
extern int kernel_debug_enter();
extern int kernel_debug_register_callback();

#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_DEBUG_H_ */
