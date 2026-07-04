/*
 * kernel.h -- Umbrella header for iOS 8.4 kernel interface
 * XNU kernel interface for iOS 8.4 (xnu-2782), ARM32
 *
 * #include <Kernel/kernel.h> for everything, or individual headers:
 *   #include <Kernel/vnode.h>
 *   #include <Kernel/vfs.h>
 *   #include <Kernel/locks.h>
 *   etc.
 */

#ifndef _KERNEL_H_
#define _KERNEL_H_

#include "types.h"

/* BSD / sys */
#include "bdevsw.h"
#include "bsd.h"
#include "buf.h"
#include "ctl.h"
#include "devfs.h"
#include "file.h"
#include "kauth.h"
#include "mac.h"
#include "proc.h"
#include "select.h"
#include "sysctl.h"
#include "throttle.h"
#include "tty.h"
#include "ubc.h"
#include "vnode.h"

/* VFS */
#include "vfs.h"
#include "vfs_support.h"

/* kern */
#include "clock.h"
#include "codesign.h"
#include "compression.h"
#include "content_protection.h"
#include "crypto.h"
#include "debug.h"
#include "energy.h"
#include "hfs.h"
#include "kevent.h"
#include "kext.h"
#include "locks.h"
#include "memory.h"
#include "notification.h"
#include "platform.h"
#include "pmc.h"
#include "power.h"
#include "semaphore.h"
#include "serial.h"
#include "spl.h"
#include "strings.h"
#include "synchronization.h"
#include "task.h"
#include "thread.h"
#include "timeout.h"
#include "unicode.h"
#include "uuid.h"

/* Mach */
#include "mach.h"

/* Networking */
#include "net.h"

/* Misc filesystems */
#include "miscfs.h"

/* IOKit (C++ classes + C functions) */
#include "iokit-cpp.h"

/* Misc */
#include "misc.h"

#endif /* _KERNEL_H_ */
