#ifndef _KERNEL_SPL_H_
#define _KERNEL_SPL_H_

#include "types.h"

/* -- spl -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int spl0();
extern int splbio();
extern int splclock();
extern int splhigh();
extern int splimp();
extern int spllo();
extern int spln();
extern int sploff();
extern int splon();
extern int splpower();
extern int splsched();
extern int splsoftclock();
extern int spltty();
extern int splvm();
extern int splx();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_SPL_H_ */
