#ifndef _KERNEL_HFS_H_
#define _KERNEL_HFS_H_

#include "types.h"

/* -- hfs -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int FastUnicodeCompare();
extern int hfs_addconverter();
extern int hfs_getconverter();
extern int hfs_pickencoding();
extern int hfs_relconverter();
extern int hfs_remconverter();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_HFS_H_ */
