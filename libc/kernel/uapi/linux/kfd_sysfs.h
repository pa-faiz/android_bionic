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
#ifndef KFD_SYSFS_H_INCLUDED
#define KFD_SYSFS_H_INCLUDED
#define HSA_CAP_HOT_PLUGGABLE 0x00000001
#define HSA_CAP_ATS_PRESENT 0x00000002
#define HSA_CAP_SHARED_WITH_GRAPHICS 0x00000004
#define HSA_CAP_QUEUE_SIZE_POW2 0x00000008
#define HSA_CAP_QUEUE_SIZE_32BIT 0x00000010
#define HSA_CAP_QUEUE_IDLE_EVENT 0x00000020
#define HSA_CAP_VA_LIMIT 0x00000040
#define HSA_CAP_WATCH_POINTS_SUPPORTED 0x00000080
#define HSA_CAP_WATCH_POINTS_TOTALBITS_MASK 0x00000f00
#define HSA_CAP_WATCH_POINTS_TOTALBITS_SHIFT 8
#define HSA_CAP_DOORBELL_TYPE_TOTALBITS_MASK 0x00003000
#define HSA_CAP_DOORBELL_TYPE_TOTALBITS_SHIFT 12
#define HSA_CAP_DOORBELL_TYPE_PRE_1_0 0x0
#define HSA_CAP_DOORBELL_TYPE_1_0 0x1
#define HSA_CAP_DOORBELL_TYPE_2_0 0x2
#define HSA_CAP_AQL_QUEUE_DOUBLE_MAP 0x00004000
#define HSA_CAP_TRAP_DEBUG_SUPPORT 0x00008000
#define HSA_CAP_TRAP_DEBUG_WAVE_LAUNCH_TRAP_OVERRIDE_SUPPORTED 0x00010000
#define HSA_CAP_TRAP_DEBUG_WAVE_LAUNCH_MODE_SUPPORTED 0x00020000
#define HSA_CAP_TRAP_DEBUG_PRECISE_MEMORY_OPERATIONS_SUPPORTED 0x00040000
#define HSA_CAP_RESERVED_WAS_SRAM_EDCSUPPORTED 0x00080000
#define HSA_CAP_MEM_EDCSUPPORTED 0x00100000
#define HSA_CAP_RASEVENTNOTIFY 0x00200000
#define HSA_CAP_ASIC_REVISION_MASK 0x03c00000
#define HSA_CAP_ASIC_REVISION_SHIFT 22
#define HSA_CAP_SRAM_EDCSUPPORTED 0x04000000
#define HSA_CAP_SVMAPI_SUPPORTED 0x08000000
#define HSA_CAP_FLAGS_COHERENTHOSTACCESS 0x10000000
#define HSA_CAP_TRAP_DEBUG_FIRMWARE_SUPPORTED 0x20000000
#define HSA_CAP_RESERVED 0xe00f8000
#define HSA_DBG_WATCH_ADDR_MASK_LO_BIT_MASK 0x0000000f
#define HSA_DBG_WATCH_ADDR_MASK_LO_BIT_SHIFT 0
#define HSA_DBG_WATCH_ADDR_MASK_HI_BIT_MASK 0x000003f0
#define HSA_DBG_WATCH_ADDR_MASK_HI_BIT_SHIFT 4
#define HSA_DBG_DISPATCH_INFO_ALWAYS_VALID 0x00000400
#define HSA_DBG_WATCHPOINTS_EXCLUSIVE 0x00000800
#define HSA_DBG_RESERVED 0xfffffffffffff000ull
#define HSA_MEM_HEAP_TYPE_SYSTEM 0
#define HSA_MEM_HEAP_TYPE_FB_PUBLIC 1
#define HSA_MEM_HEAP_TYPE_FB_PRIVATE 2
#define HSA_MEM_HEAP_TYPE_GPU_GDS 3
#define HSA_MEM_HEAP_TYPE_GPU_LDS 4
#define HSA_MEM_HEAP_TYPE_GPU_SCRATCH 5
#define HSA_MEM_FLAGS_HOT_PLUGGABLE 0x00000001
#define HSA_MEM_FLAGS_NON_VOLATILE 0x00000002
#define HSA_MEM_FLAGS_RESERVED 0xfffffffc
#define HSA_CACHE_TYPE_DATA 0x00000001
#define HSA_CACHE_TYPE_INSTRUCTION 0x00000002
#define HSA_CACHE_TYPE_CPU 0x00000004
#define HSA_CACHE_TYPE_HSACU 0x00000008
#define HSA_CACHE_TYPE_RESERVED 0xfffffff0
#define HSA_IOLINK_TYPE_UNDEFINED 0
#define HSA_IOLINK_TYPE_HYPERTRANSPORT 1
#define HSA_IOLINK_TYPE_PCIEXPRESS 2
#define HSA_IOLINK_TYPE_AMBA 3
#define HSA_IOLINK_TYPE_MIPI 4
#define HSA_IOLINK_TYPE_QPI_1_1 5
#define HSA_IOLINK_TYPE_RESERVED1 6
#define HSA_IOLINK_TYPE_RESERVED2 7
#define HSA_IOLINK_TYPE_RAPID_IO 8
#define HSA_IOLINK_TYPE_INFINIBAND 9
#define HSA_IOLINK_TYPE_RESERVED3 10
#define HSA_IOLINK_TYPE_XGMI 11
#define HSA_IOLINK_TYPE_XGOP 12
#define HSA_IOLINK_TYPE_GZ 13
#define HSA_IOLINK_TYPE_ETHERNET_RDMA 14
#define HSA_IOLINK_TYPE_RDMA_OTHER 15
#define HSA_IOLINK_TYPE_OTHER 16
#define HSA_IOLINK_FLAGS_ENABLED (1 << 0)
#define HSA_IOLINK_FLAGS_NON_COHERENT (1 << 1)
#define HSA_IOLINK_FLAGS_NO_ATOMICS_32_BIT (1 << 2)
#define HSA_IOLINK_FLAGS_NO_ATOMICS_64_BIT (1 << 3)
#define HSA_IOLINK_FLAGS_NO_PEER_TO_PEER_DMA (1 << 4)
#define HSA_IOLINK_FLAGS_RESERVED 0xffffffe0
#endif
