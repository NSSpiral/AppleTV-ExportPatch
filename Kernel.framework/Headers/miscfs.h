#ifndef _KERNEL_MISCFS_H_
#define _KERNEL_MISCFS_H_

#include "types.h"

/* -- fifo -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int fifo_advlock();
extern int fifo_close();
extern int fifo_inactive();
extern int fifo_ioctl();
extern int fifo_lookup();
extern int fifo_open();
extern int fifo_pathconf();
extern int fifo_read();
extern int fifo_select();
extern int fifo_write();

/* -- spec -- */

extern int spec_close();
extern int spec_ebadf();
extern int spec_fsync();
extern int spec_ioctl();
extern int spec_lookup();
extern int spec_open();
extern int spec_pathconf();
extern int spec_read();
extern int spec_select();
extern int spec_strategy();
extern int spec_write();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_MISCFS_H_ */
