#ifndef _KERNEL_STRINGS_H_
#define _KERNEL_STRINGS_H_

#include "types.h"

/* -- Comparison -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int strcmp(const char *, const char *);
extern int strncmp(const char *, const char *, size_t);

extern int bcmp();
extern int strcasecmp();
extern int strncasecmp();

/* -- Concatenation -- */

extern size_t strlcat(char *, const char *, size_t);

extern int strncat();

/* -- Conversion -- */

extern int strtol();
extern int strtoq();
extern int strtoul();
extern int strtouq();

/* -- Copy -- */

extern void bcopy(const void *, void *, size_t);
extern size_t strlcpy(char *, const char *, size_t);

extern int STRDUP();

/* -- String Contents -- */

extern size_t strlen(const char *);
extern size_t strnlen(const char *, size_t);

extern int strnstr();
extern int strprefix();
extern int strsep();

/* -- strings -- */

extern int bcopy_phys();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_STRINGS_H_ */
