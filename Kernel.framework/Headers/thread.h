#ifndef _KERNEL_THREAD_H_
#define _KERNEL_THREAD_H_

#include "types.h"

/* -- thread -- */

#ifdef __cplusplus
extern "C" {
#endif

extern kern_return_t kernel_thread_start(thread_continue_t continuation, void *parameter, thread_t *new_thread);

extern int thread_block();
extern int thread_block_parameter();
extern int thread_call_allocate();
extern int thread_call_allocate_with_priority();
extern int thread_call_cancel();
extern int thread_call_cancel_wait();
extern int thread_call_enter();
extern int thread_call_enter1();
extern int thread_call_enter1_delayed();
extern int thread_call_enter_delayed();
extern int thread_call_free();
extern int thread_clear_eager_preempt();
extern int thread_deallocate();
extern int thread_dispatchqaddr();
extern int thread_issignal();
extern int thread_policy_set();
extern int thread_reference();
extern int thread_set_eager_preempt();
extern int thread_terminate();
extern int thread_tid();
extern int thread_wakeup_prim();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_THREAD_H_ */
