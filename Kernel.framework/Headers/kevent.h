#ifndef _KERNEL_KEVENT_H_
#define _KERNEL_KEVENT_H_

#include "types.h"

/* -- kevent -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int kev_msg_post();
extern int kev_post_msg();
extern int kev_vendor_code_find();
extern int knote();
extern int knote_attach();
extern int knote_detach();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_KEVENT_H_ */
