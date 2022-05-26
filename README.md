# sun8iw19-v83x-spl

Allwinner boot0 for v833/v831

You can use any arm ELF/GNU/musl toolchain.

Only for reference.

Not tested on real devices yet.

1.build mmc

make CROSS_COMPILE=arm-openwrt-linux-muslgnueabi- p=sun8iw19p1 mmc

2.build nand

make CROSS_COMPILE=arm-openwrt-linux-muslgnueabi- p=sun8iw19p1 nand

3.build spinor

make CROSS_COMPILE=arm-openwrt-linux-muslgnueabi- p=sun8iw19p1 spinor

4.build fes

make CROSS_COMPILE=arm-openwrt-linux-muslgnueabi- p=sun8iw19p1 fes
