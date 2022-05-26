#ifndef _CONFIG_H_
#define _CONFIG_H_
#include<sun8iw19p1.h>
#define CFG_ALWAYS_ENABLE_DCACHE 1
#define CFG_AXP2101_POWER 1
#define CFG_BOOT0_RUN_ADDR 0x20000
#define CFG_FAST_GET_UART_INPUT 1
#define CFG_FES1_RUN_ADDR 0x28000
#define CFG_NOT_ALWAYS_PRINT_HELLO 1
#define CFG_SBOOT_RUN_ADDR 0x20480
#define CFG_SPI_USE_DMA 1
#define CFG_SUNXI_CHIPID 1
#define CFG_SUNXI_DMA 1
#define CFG_SUNXI_PMIC 1
#define CFG_SUNXI_POWER 1
#define CFG_SUNXI_SDMMC 1
#define CFG_SUNXI_TWI 1
#define CFG_SYS_INIT_RAM_SIZE 0x18000
#define CFG_USE_DCACHE 1
#define PLATFORM_LIBGCC -L /run/media/guo/0ed46c3d-c7db-4e08-80e2-4b18bd7544a2/home/guo/handsomepojects/v833-tina/prebuilt/gcc/linux-x86/arm/toolchain-sunxi-musl/toolchain/bin/../lib/gcc/arm-openwrt-linux-muslgnueabi/6.4.1 -l:libgcc.a
#endif
