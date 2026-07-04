#ifndef _KERNEL_SEMAPHORE_H_
#define _KERNEL_SEMAPHORE_H_

#include "types.h"

/* -- semaphore -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int semaphore_create();
extern int semaphore_dereference();
extern int semaphore_destroy();
extern int semaphore_reference();
extern int semaphore_signal();
extern int semaphore_signal_all();
extern int semaphore_timedwait();
extern int semaphore_wait();
extern int semaphore_wait_deadline();
extern int semaphore_wait_noblock();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_SEMAPHORE_H_ */
