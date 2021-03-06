/*
 * Author: Chad Froebel <chadfroebel@gmail.com>
 *
 * Ported to SGS3 and extended : Jean-Pierre Rasquin <yank555.lu@gmail.com>
 * Ported to SGT 3 7.0 and extended : laufersteppenwolf <laufersteppenwolf@gmail.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */


#ifndef _LINUX_FASTCHG_H
#define _LINUX_FASTCHG_H

extern int force_fast_charge;

#define FAST_CHARGE_DISABLED 0	/* default */
#define FAST_CHARGE_FORCE_CUSTOM_MA 1

extern int ac_charge_level;

#define AC_CHARGE_1800 1800	/* default */
#define AC_CHARGE_1900 1900
#define AC_CHARGE_2000 2000
#define AC_CHARGE_2100 2100
#define AC_CHARGE_2200 2200
#define AC_CHARGE_2300 2300

extern int usb_charge_level;

#define USB_CHARGE_500 500	/* default */
#define USB_CHARGE_600 600
#define USB_CHARGE_700 700
#define USB_CHARGE_800 800
#define USB_CHARGE_900 900
#define USB_CHARGE_1000 1000

#define MAX_CHARGE_LEVEL 2300	/* Even with failsafe disabled, more is not allowed */

extern int failsafe;
#define FAIL_SAFE_ENABLED 1	/* default */
#define FAIL_SAFE_DISABLED 0

#endif
