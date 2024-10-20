/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _LINUX_GSMMUX_H
#define _LINUX_GSMMUX_H
#include <linux/if.h>
#include <linux/ioctl.h>
#include <linux/types.h>
struct gsm_config {
  unsigned int adaption;
  unsigned int encapsulation;
  unsigned int initiator;
  unsigned int t1;
  unsigned int t2;
  unsigned int t3;
  unsigned int n2;
  unsigned int mru;
  unsigned int mtu;
  unsigned int k;
  unsigned int i;
  unsigned int unused[8];
};
#define GSMIOC_GETCONF _IOR('G', 0, struct gsm_config)
#define GSMIOC_SETCONF _IOW('G', 1, struct gsm_config)
struct gsm_netconfig {
  unsigned int adaption;
  unsigned short protocol;
  unsigned short unused2;
  char if_name[IFNAMSIZ];
  __u8 unused[28];
};
#define GSMIOC_ENABLE_NET _IOW('G', 2, struct gsm_netconfig)
#define GSMIOC_DISABLE_NET _IO('G', 3)
#define GSMIOC_GETFIRST _IOR('G', 4, __u32)
struct gsm_config_ext {
  __u32 keep_alive;
  __u32 wait_config;
  __u32 reserved[6];
};
#define GSMIOC_GETCONF_EXT _IOR('G', 5, struct gsm_config_ext)
#define GSMIOC_SETCONF_EXT _IOW('G', 6, struct gsm_config_ext)
struct gsm_dlci_config {
  __u32 channel;
  __u32 adaption;
  __u32 mtu;
  __u32 priority;
  __u32 i;
  __u32 k;
  __u32 reserved[8];
};
#define GSMIOC_GETCONF_DLCI _IOWR('G', 7, struct gsm_dlci_config)
#define GSMIOC_SETCONF_DLCI _IOW('G', 8, struct gsm_dlci_config)
#endif
