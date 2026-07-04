#ifndef _KERNEL_LOCKS_H_
#define _KERNEL_LOCKS_H_

#include "types.h"

/* -- locks -- */

#ifdef __cplusplus
extern "C" {
#endif

extern lck_attr_t lck_attr_alloc_init(void);
extern void lck_attr_free(lck_attr_t *attr);
extern void lck_attr_setdebug(lck_attr_t *attr);
extern void lck_attr_setdefault(lck_attr_t *attr);
extern lck_grp_t * lck_grp_alloc_init(const char *grp_name, lck_grp_attr_t *attr);
extern lck_grp_attr_t * lck_grp_attr_alloc_init(void);
extern void lck_grp_attr_free(lck_grp_attr_t);
extern void lck_grp_attr_setdefault(lck_grp_attr_t *attr);
extern void lck_grp_attr_setstat(lck_grp_attr_t *attr);
extern void lck_grp_free(lck_grp_t *grp);
extern lck_mtx_t * lck_mtx_alloc_init(lck_grp_t *grp, lck_attr_t *attr);
extern void lck_mtx_assert(lck_mtx_t *lck, unsigned int type);
extern void lck_mtx_destroy(lck_mtx_t *lck, lck_grp_t *grp);
extern void lck_mtx_free(lck_mtx_t *lck, lck_grp_t *grp);
extern void lck_mtx_init(lck_mtx_t *lck, lck_grp_t *grp, lck_attr_t *attr);
extern void lck_mtx_lock(lck_mtx_t *lck);
extern wait_result_t lck_mtx_sleep(lck_mtx_t *lck, lck_sleep_action_t lck_sleep_action, event_t event, wait_interrupt_t interruptible);
extern wait_result_t lck_mtx_sleep_deadline(lck_mtx_t *lck, lck_sleep_action_t lck_sleep_action, event_t event, wait_interrupt_t interruptible, uint64_t deadline);
extern void lck_mtx_unlock(lck_mtx_t *lck);
extern lck_rw_t * lck_rw_alloc_init(lck_grp_t *grp, lck_attr_t *attr);
extern void lck_rw_destroy(lck_rw_t *lck, lck_grp_t *grp);
extern void lck_rw_free(lck_rw_t *lck, lck_grp_t *grp);
extern void lck_rw_init(lck_rw_t *lck, lck_grp_t *grp, lck_attr_t *attr);
extern void lck_rw_lock(lck_rw_t *lck, lck_rw_type_t lck_rw_type);
extern void lck_rw_lock_exclusive(lck_rw_t *lck);
extern void lck_rw_lock_shared(lck_rw_t *lck);
extern boolean_t lck_rw_lock_shared_to_exclusive(lck_rw_t *lck);
extern wait_result_t lck_rw_sleep(lck_rw_t *lck, lck_sleep_action_t lck_sleep_action, event_t event, wait_interrupt_t interruptible);
extern boolean_t lck_rw_try_lock(lck_rw_t *lck, lck_rw_type_t lck_rw_type);
extern void lck_rw_unlock(lck_rw_t *lck, lck_rw_type_t lck_rw_type);
extern void lck_rw_unlock_shared(lck_rw_t *lck);
extern lck_spin_t * lck_spin_alloc_init(lck_grp_t *grp, lck_attr_t *attr);
extern void lck_spin_destroy(lck_spin_t *lck, lck_grp_t *grp);
extern void lck_spin_free(lck_spin_t *lck, lck_grp_t *grp);
extern void lck_spin_init(lck_spin_t *lck, lck_grp_t *grp, lck_attr_t *attr);
extern void lck_spin_lock(lck_spin_t *lck);
extern wait_result_t lck_spin_sleep(lck_spin_t *lck, lck_sleep_action_t lck_sleep_action, event_t event, wait_interrupt_t interruptible);
extern wait_result_t lck_spin_sleep_deadline(lck_spin_t *lck, lck_sleep_action_t lck_sleep_action, event_t event, wait_interrupt_t interruptible, uint64_t deadline);

extern int lck_mtx_try_lock();
extern int lck_rw_done();
extern int lck_rw_lock_exclusive_to_shared();
extern int lck_rw_sleep_deadline();
extern int lck_rw_unlock_exclusive();
extern int lck_spin_try_lock();
extern int lck_spin_unlock();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_LOCKS_H_ */
