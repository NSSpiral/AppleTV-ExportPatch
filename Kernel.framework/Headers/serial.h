#ifndef _KERNEL_SERIAL_H_
#define _KERNEL_SERIAL_H_

#include "types.h"

/* -- serial -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int kmputc();
extern int serial_getc();
extern int serial_init();
extern int serial_putc();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_SERIAL_H_ */
