#ifndef _KERNEL_UNICODE_H_
#define _KERNEL_UNICODE_H_

#include "types.h"

/* -- unicode -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int escape_str();
extern int unicode_combinable();
extern int unicode_decomposeable();
extern int utf8_decodestr();
extern int utf8_encodelen();
extern int utf8_encodestr();
extern int utf8_normalizestr();
extern int utf8_validatestr();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_UNICODE_H_ */
