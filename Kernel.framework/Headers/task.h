#ifndef _KERNEL_TASK_H_
#define _KERNEL_TASK_H_

#include "types.h"

/* -- task -- */

#ifdef __cplusplus
extern "C" {
#endif

extern task_t current_task(void);
extern void task_deallocate(task_t);
extern void task_reference(task_t);
extern kern_return_t task_resume2(task_suspension_token_t suspend_token);
extern kern_return_t task_suspend2(task_read_t target_task, task_suspension_token_t *suspend_token);

extern int task_get_special_port();
extern int task_resume();
extern int task_suspend();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_TASK_H_ */
