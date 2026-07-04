#ifndef _KERNEL_MISC_H_
#define _KERNEL_MISC_H_

#include "types.h"

/* -- misc -- */

#ifdef __cplusplus
extern "C" {
#endif

extern void *_MALLOC(size_t, int, int);
extern void bzero(void *, size_t);
extern int memcmp(const void *, const void *, size_t);
extern void *memcpy(void *, const void *, size_t);
extern void *memmove(void *, const void *, size_t);
extern void *memset(void *, int, size_t);
extern int snprintf(char *, size_t, const char *, ...);
extern int sscanf(const char *, const char *, ...);
extern char *strchr(const char *, int);
extern char *strncpy(char *, const char *, size_t);
extern int uiomove(const char *, int, uio_t);
extern int vprintf(const char *, void *);
extern int vsnprintf(char *, size_t, const char *, void *);

extern int NDR_record();
extern int StartIOKit();
extern int __bzero();
extern int __cxa_pure_virtual();
extern int __stack_chk_fail();
extern int __stack_chk_guard();
extern int _doprnt();
extern int _dtrace_register_anon_DOF();
extern int _giDebugLogDataInternal();
extern int _giDebugLogInternal();
extern int _giDebugReserved1();
extern int _giDebugReserved2();
extern int appleClut8();
extern int atm_manager();
extern int atoi();
extern int audio_active();
extern int bank_manager();
extern int bcd2bin_data();
extern int boot();
extern int bootcache_contains_block();
extern int bsd_hostname();
extern int bsd_set_dependency_capable();
extern int bzero_phys();
extern int chudxnu_platform_ptr();
extern int chudxnu_thread_get_dirty();
extern int chudxnu_thread_set_dirty();
extern int current_act();
extern int current_thread();
extern int debug_container_malloc_size();
extern int debug_iomalloc_size();
extern int debug_ivars_size();
extern int debug_malloc_size();
extern int desiredvnodes();
extern int device_close();
extern int device_data_action();
extern int di_root_image();
extern int enable_kernel_vfp_context();
extern int enodev();
extern int enodev_strat();
extern int enoioctl();
extern int enosys();
extern int enxio();
extern int eopnotsupp();
extern int fd_rdwr();
extern int ffs();
extern int flush_dcache();
extern int flush_dcache64();
extern int futimes();
extern int gOFVariables();
extern int gOSObjectTrackList();
extern int gOSObjectTrackThread();
extern int gPlatformInterruptControllerName();
extern int get_aiotask();
extern int get_bsdtask_info();
extern int get_task_map();
extern int get_task_pmap();
extern int getsectdatafromheader();
extern int groupmember();
extern int hashinit();
extern int hz();
extern int iftovt_tab();
extern int in6addr_local();
extern int inaddr_local();
extern int inet_aton();
extern int inet_cksum_simple();
extern int inet_ntop();
extern int invalidate_icache();
extern int invalidate_icache64();
extern int is_file_clean();
extern int isdisk();
extern int itoa();
extern int kern_asl_msg();
extern int kern_asl_msg_va();
extern int kernel_map();
extern int kernel_pmap();
extern int kernel_sysctlbyname();
extern int kernel_task();
extern int kernproc();
extern int log();
extern int logwakeup();
extern int mach_gss_accept_sec_context();
extern int mach_gss_accept_sec_context_v2();
extern int mach_gss_hold_cred();
extern int mach_gss_init_sec_context();
extern int mach_gss_init_sec_context_v2();
extern int mach_gss_lookup();
extern int mach_gss_unhold_cred();
extern int mach_make_memory_entry_64();
extern int mach_memory_entry_page_op();
extern int mach_memory_entry_range_op();
extern int max_mem();
extern int mcl_to_paddr();
extern int mem_size();
extern int memory_object_page_op();
extern int minphys();
extern int netboot_root();
extern int nulldev();
extern int nullop();
extern int osrelease();
extern int ostype();
extern int ovbcopy();
extern int page_mask();
extern int page_shift();
extern int page_size();
extern int pffinddomain_old();
extern int pffindproto_old();
extern int physio();
extern int prf();
extern int register_decmpfs_decompressor();
extern int rootdev();
extern int rootvnode();
extern int rootvp();
extern int securelevel();
extern int set_fsblocksize();
extern int set_vm_privilege();
extern int stack_privilege();
extern int suser();
extern int text_crypter_create_hook_set();
extern int timevaladd();
extern int timevalfix();
extern int timevalsub();
extern int tk_nin();
extern int tk_rawcc();
extern int uiomove64();
extern int unmountroot_pre_hook();
extern int unregister_decmpfs_decompressor();
extern int user_data_manager();
extern int utun_ctl_disable_crypto_dtls();
extern int utun_ctl_register_dtls();
extern int utun_pkt_dtls_input();
extern int vcount();
extern int version();
extern int version_major();
extern int version_minor();
extern int version_prerelease_level();
extern int version_revision();
extern int version_stage();
extern int version_variant();
extern int vsscanf();
extern int vttoif_tab();
extern int xattr_protected();
extern int xattr_validatename();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_MISC_H_ */
