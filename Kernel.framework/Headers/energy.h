#ifndef _KERNEL_ENERGY_H_
#define _KERNEL_ENERGY_H_

#include "types.h"

/* -- energy -- */

#ifdef __cplusplus
extern "C" {
#endif

extern uint64_t io_rate_update(uint64_t io_rate_flags, uint64_t read_ops_delta, uint64_t write_ops_delta, uint64_t read_bytes_delta, uint64_t write_bytes_delta);

extern int gpu_accumulate_time();
extern int gpu_describe();
extern int io_rate_update_register();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_ENERGY_H_ */
