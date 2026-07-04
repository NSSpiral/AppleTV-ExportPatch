#ifndef _KERNEL_BSD_H_
#define _KERNEL_BSD_H_

#include "types.h"

/* -- General -- */

#ifdef __cplusplus
extern "C" {
#endif

extern void bsd_untimeout(void (*)(void *), void *arg);

extern int bsd_timeout();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_BSD_H_ */
