#ifndef _KERNEL_NOTIFICATION_H_
#define _KERNEL_NOTIFICATION_H_

#include "types.h"

/* -- notification -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int KUNCExecute();
extern int KUNCGetNotificationID();
extern int KUNCUserNotificationDisplayAlert();
extern int KUNCUserNotificationDisplayFromBundle();
extern int KUNCUserNotificationDisplayNotice();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_NOTIFICATION_H_ */
