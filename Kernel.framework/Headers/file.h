#ifndef _KERNEL_FILE_H_
#define _KERNEL_FILE_H_

#include "types.h"

/* -- file -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int file_drop(int);
extern int file_flags(int, int *);
extern int file_vnode(int, vnode_t *);
extern int file_vnode_withvid(int, vnode_t *, uint32_t *);

extern int file_socket();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_FILE_H_ */
