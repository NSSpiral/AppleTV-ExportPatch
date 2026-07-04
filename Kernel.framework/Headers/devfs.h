#ifndef _KERNEL_DEVFS_H_
#define _KERNEL_DEVFS_H_

#include "types.h"

/* -- devfs -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int devfs_make_node();
extern int devfs_make_node_clone();
extern int devfs_remove();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_DEVFS_H_ */
