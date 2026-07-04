#ifndef _KERNEL_THROTTLE_H_
#define _KERNEL_THROTTLE_H_

#include "types.h"

/* -- throttle -- */

#ifdef __cplusplus
extern "C" {
#endif

extern void * throttle_info_create(void);
extern int throttle_info_io_will_be_throttled(void *throttle_info_handle, int policy);
extern void throttle_info_mount_rel(mount_t mp);
extern void throttle_info_update_by_mask(void *throttle_info_handle, int flags);
extern void throttle_set_thread_io_policy(int policy);

extern int throttle_info_mount_ref();
extern int throttle_info_ref_by_mask();
extern int throttle_info_rel_by_mask();
extern int throttle_info_release();
extern int throttle_info_update();
extern int throttle_lowpri_io();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_THROTTLE_H_ */
