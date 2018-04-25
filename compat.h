/*---------------------------------------------------------------------------
 *
 * compat.h
 *     Copyright (c) 2018 Guenter Roeck <linux@roeck-us.net>
 *
 *---------------------------------------------------------------------------
 */

#ifndef COMPAT_H
#define COMPAT_H

#include <linux/version.h>

#if LINUX_VERSION_CODE < KERNEL_VERSION(4, 14, 0)
#define x86_stepping	x86_mask
#endif

#endif /* COMPAT_H */
