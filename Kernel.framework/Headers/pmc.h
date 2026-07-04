#ifndef _KERNEL_PMC_H_
#define _KERNEL_PMC_H_

#include "types.h"

/* -- pmc -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int perf_monitor_register_14();
extern int perf_monitor_unregister();
extern int pmc_config_set_interrupt_threshold();
extern int pmc_config_set_value();
extern int pmc_create_config();
extern int pmc_find_by_name();
extern int pmc_free_config();
extern int pmc_free_pmc_list();
extern int pmc_get_accessible_core_list();
extern int pmc_get_name();
extern int pmc_get_pmc_list();
extern int pmc_register();
extern int pmc_reservation_free();
extern int pmc_reservation_read();
extern int pmc_reservation_start();
extern int pmc_reservation_stop();
extern int pmc_reservation_write();
extern int pmc_reserve();
extern int pmc_reserve_task();
extern int pmc_reserve_thread();
extern int pmc_unregister();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_PMC_H_ */
