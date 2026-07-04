#ifndef _KERNEL_POWER_H_
#define _KERNEL_POWER_H_

#include "types.h"

/* -- power -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int acknowledgeSleepWakeNotification();
extern int post_sys_powersource();
extern int registerPrioritySleepWakeInterest();
extern int registerSleepWakeInterest();
extern int vetoSleepWakeNotification();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_POWER_H_ */
