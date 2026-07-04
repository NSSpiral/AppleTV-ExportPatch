#ifndef _KERNEL_CONTENT_PROTECTION_H_
#define _KERNEL_CONTENT_PROTECTION_H_

#include "types.h"

/* -- content_protection -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int cp_key_store_action();
extern int cp_register_wraps();
extern int cpx_alloc();
extern int cpx_free();
extern int cpx_is_sep_wrapped_key();
extern int cpx_iv_aes_ctx();
extern int cpx_key();
extern int cpx_key_len();
extern int cpx_set_key_len();
extern int cpx_set_use_offset_for_iv();
extern int cpx_size();
extern int cpx_use_offset_for_iv();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_CONTENT_PROTECTION_H_ */
