#ifndef _KERNEL_MEMORY_H_
#define _KERNEL_MEMORY_H_

#include "types.h"

/* -- memory -- */

#ifdef __cplusplus
extern "C" {
#endif

extern void _FREE(void *, int);
extern int copyin(user_addr_t, void *, size_t);
extern int copyinstr(user_addr_t, void *, size_t, size_t *);

extern int _FREE_ZONE();
extern int _MALLOC_ZONE();
extern int copyout();
extern int copyoutstr();
extern int copystr();
extern int fubyte();
extern int fuibyte();
extern int fuiword();
extern int fuword();
extern int kalloc();
extern int kern_os_free();
extern int kern_os_malloc();
extern int kern_os_malloc_size();
extern int kern_os_realloc();
extern int kfree();
extern int kmem_alloc();
extern int kmem_alloc_kobject();
extern int kmem_free();
extern int mach_vm_allocate();
extern int mach_vm_deallocate();
extern int mach_vm_map();
extern int mach_vm_pressure_level_monitor();
extern int mach_vm_pressure_monitor();
extern int mach_vm_protect();
extern int mach_vm_region();
extern int mach_vm_remap();
extern int pmap_find_phys();
extern int subyte();
extern int suibyte();
extern int suiword();
extern int suword();
extern int useracc();
extern int vm_allocate();
extern int vm_deallocate();
extern int vm_fault();
extern int vm_map();
extern int vm_map_copy_copy();
extern int vm_map_copy_discard();
extern int vm_map_copyin();
extern int vm_map_copyin_common();
extern int vm_map_copyout();
extern int vm_map_create();
extern int vm_map_deallocate();
extern int vm_map_page_mask();
extern int vm_map_page_shift();
extern int vm_map_page_size();
extern int vm_map_round_page_mask();
extern int vm_map_trunc_page_mask();
extern int vm_map_unwire();
extern int vm_map_wire();
extern int vm_map_wire_and_extract();
extern int vm_protect();
extern int vm_region();
extern int vm_region_object_create();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_MEMORY_H_ */
