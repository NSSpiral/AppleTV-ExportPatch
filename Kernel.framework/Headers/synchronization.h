#ifndef _KERNEL_SYNCHRONIZATION_H_
#define _KERNEL_SYNCHRONIZATION_H_

#include "types.h"

/* -- synchronization -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int assert_wait();
extern int assert_wait_deadline();
extern int assert_wait_deadline_with_leeway();
extern int assert_wait_timeout();
extern int assert_wait_timeout_with_leeway();
extern int msleep();
extern int msleep1();
extern int sleep();
extern int tsleep();
extern int wakeup();
extern int wakeup_one();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_SYNCHRONIZATION_H_ */
