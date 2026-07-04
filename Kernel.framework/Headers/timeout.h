#ifndef _KERNEL_TIMEOUT_H_
#define _KERNEL_TIMEOUT_H_

#include "types.h"

/* -- timeout -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int timeout();
extern int timeout_with_leeway();
extern int untimeout();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_TIMEOUT_H_ */
