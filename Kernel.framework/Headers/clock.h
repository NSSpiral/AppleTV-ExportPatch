#ifndef _KERNEL_CLOCK_H_
#define _KERNEL_CLOCK_H_

#include "types.h"

/* -- clock -- */

#ifdef __cplusplus
extern "C" {
#endif

extern void absolutetime_to_nanoseconds(uint64_t abstime, uint64_t *result);
extern void clock_absolutetime_interval_to_deadline(uint64_t abstime, uint64_t *result);
extern void clock_delay_until(uint64_t deadline);
extern void clock_get_calendar_nanotime(clock_sec_t *secs, clock_nsec_t *nanosecs);
extern void clock_get_system_microtime(clock_sec_t *secs, clock_usec_t *microsecs);
extern void clock_get_system_nanotime(clock_sec_t *secs, clock_nsec_t *nanosecs);
extern void clock_interval_to_deadline(uint32_t interval, uint32_t scale_factor, uint64_t *result);
extern void clock_timebase_info(mach_timebase_info_t info);

extern int clock_get_calendar_microtime();
extern int clock_get_system_value();
extern int clock_get_uptime();
extern int clock_interval_to_absolutetime_interval();
extern int delay();
extern int delay_for_interval();
extern int mach_absolute_time();
extern int microtime();
extern int microuptime();
extern int nanoseconds_to_absolutetime();
extern int nanotime();
extern int nanouptime();
extern int tvtoabstime();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_CLOCK_H_ */
