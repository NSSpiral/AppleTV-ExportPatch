#ifndef _KERNEL_BDEVSW_H_
#define _KERNEL_BDEVSW_H_

#include "types.h"

/* -- Block Device -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int bdevsw_add(int, const struct bdevsw *);
extern int bdevsw_isfree(int);
extern int bdevsw_remove(int, const struct bdevsw *);
extern int cdevsw_add(int, const struct cdevsw *);
extern int cdevsw_add_with_bdev(int index, const struct cdevsw *csw, int bdev);
extern int cdevsw_isfree(int);
extern int cdevsw_remove(int, const struct cdevsw *);

extern int bdevsw();
extern int cdevsw();
extern int cdevsw_setkqueueok();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_BDEVSW_H_ */
