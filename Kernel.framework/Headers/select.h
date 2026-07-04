#ifndef _KERNEL_SELECT_H_
#define _KERNEL_SELECT_H_

#include "types.h"

/* -- select -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int selrecord();
extern int selthreadclear();
extern int seltrue();
extern int selwait();
extern int selwakeup();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_SELECT_H_ */
