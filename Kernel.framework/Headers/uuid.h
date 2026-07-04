#ifndef _KERNEL_UUID_H_
#define _KERNEL_UUID_H_

#include "types.h"

/* -- uuid -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int uuid_clear();
extern int uuid_compare();
extern int uuid_copy();
extern int uuid_generate();
extern int uuid_generate_random();
extern int uuid_generate_time();
extern int uuid_is_null();
extern int uuid_parse();
extern int uuid_unparse();
extern int uuid_unparse_lower();
extern int uuid_unparse_upper();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_UUID_H_ */
