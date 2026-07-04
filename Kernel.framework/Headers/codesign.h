#ifndef _KERNEL_CODESIGN_H_
#define _KERNEL_CODESIGN_H_

#include "types.h"

/* -- codesign -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int cs_blob_reset_cache();
extern int cs_enforcement();
extern int cs_entitlement_flags();
extern int cs_entitlements_blob_get();
extern int cs_get_cdhash();
extern int cs_identity_get();
extern int cs_register_cscsr();
extern int cs_require_lv();
extern int csfg_get_path();
extern int csfg_get_platform_binary();
extern int csfg_get_teamid();
extern int csproc_get_platform_binary();
extern int csproc_get_teamid();
extern int csvnode_get_teamid();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_CODESIGN_H_ */
