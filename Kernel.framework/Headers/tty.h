#ifndef _KERNEL_TTY_H_
#define _KERNEL_TTY_H_

#include "types.h"

/* -- tty -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int b_to_q();
extern int clalloc();
extern int clfree();
extern int cons_cinput();
extern int cons_ops();
extern int conslog_putc();
extern int ldisc_deregister();
extern int ldisc_register();
extern int linesw();
extern int putc();
extern int q_to_b();
extern int termioschars();
extern int ttioctl();
extern int ttsetwater();
extern int ttspeedtab();
extern int ttwakeup();
extern int ttwwakeup();
extern int tty_lock();
extern int tty_unlock();
extern int ttyclose();
extern int ttyflush();
extern int ttyfree();
extern int ttyinput();
extern int ttymalloc();
extern int ttymodem();
extern int ttyselect();
extern int ttysleep();
extern int unputc();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_TTY_H_ */
