#ifndef _KERNEL_KEXT_H_
#define _KERNEL_KEXT_H_

#include "types.h"

/* -- kext -- */

#ifdef __cplusplus
extern "C" {
#endif

extern OSReturn OSKextCancelRequest(OSKextRequestTag requestTag, void **contextOut);
extern OSReturn OSKextLoadKextWithIdentifier(const char *kextIdentifier);
extern OSReturn OSKextRequestResource(const char *kextIdentifier, const char *resourceName, OSKextRequestResourceCallback callback, void *context, OSKextRequestTag *requestTagOut);

extern int OSKextReleaseKextWithLoadTag();
extern int OSKextRetainKextWithLoadTag();
extern int gLoadedKextSummaries();
extern int gOSKextUnresolved();
extern int pthread_kext_register();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_KEXT_H_ */
