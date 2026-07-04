#ifndef _KERNEL_PLATFORM_H_
#define _KERNEL_PLATFORM_H_

#include "types.h"

/* -- platform -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int PEGetGMTTimeOfDay();
extern int PEGetMachineName();
extern int PEGetModelName();
extern int PEGetPlatformEpoch();
extern int PEHaltRestart();
extern int PESavePanicInfo();
extern int PESetGMTTimeOfDay();
extern int PE_call_timebase_callback();
extern int PE_cpu_halt();
extern int PE_cpu_machine_init();
extern int PE_cpu_machine_quiesce();
extern int PE_cpu_signal();
extern int PE_cpu_start();
extern int PE_enter_debugger();
extern int PE_get_default();
extern int PE_halt_restart();
extern int PE_i_can_has_debugger();
extern int PE_kputc();
extern int PE_parse_boot_argn();
extern int PE_poll_input();
extern int PE_reboot_on_panic();
extern int PE_save_buffer_to_vram();
extern int cpu_broadcast_xcall();
extern int cpu_number();
extern int cpu_to_processor();
extern int gPEClockFrequencyInfo();
extern int gPESerialBaud();
extern int ml_arm_sleep();
extern int ml_at_interrupt_context();
extern int ml_get_entropie();
extern int ml_get_interrupts_enabled();
extern int ml_get_wake_timebase();
extern int ml_io_map();
extern int ml_phys_read();
extern int ml_phys_read_byte_64();
extern int ml_phys_read_double_64();
extern int ml_phys_read_half_64();
extern int ml_phys_read_word_64();
extern int ml_phys_write();
extern int ml_phys_write_byte_64();
extern int ml_phys_write_double_64();
extern int ml_phys_write_half_64();
extern int ml_phys_write_word_64();
extern int ml_probe_read();
extern int ml_processor_register();
extern int ml_set_interrupts_enabled();
extern int ml_stack_remaining();
extern int ml_thread_policy();
extern int populate_model_name();
extern int preemption_enabled();
extern int processor_exit();
extern int processor_info();
extern int processor_start();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_PLATFORM_H_ */
