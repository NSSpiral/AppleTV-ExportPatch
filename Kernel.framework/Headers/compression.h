#ifndef _KERNEL_COMPRESSION_H_
#define _KERNEL_COMPRESSION_H_

#include "types.h"

/* -- compression -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int deflate();
extern int deflateCopy();
extern int deflateEnd();
extern int deflateInit2_();
extern int deflateInit_();
extern int deflateParams();
extern int deflateReset();
extern int deflateSetDictionary();
extern int inflate();
extern int inflateEnd();
extern int inflateInit2_();
extern int inflateInit_();
extern int inflateReset();
extern int inflateSetDictionary();
extern int inflateSync();
extern int inflateSyncPoint();
extern int zError();
extern int zlibVersion();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_COMPRESSION_H_ */
