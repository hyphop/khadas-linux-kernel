[![Build Status](https://travis-ci.com/hyphop/khadas-linux-kernel.svg?branch=master)](https://travis-ci.com/hyphop/khadas-linux-kernel)

# khadas linux kernel

special linux kernel for usage on Khadas VIMs boards based on legacy kernel from amlogic

https://github.com/hyphop/khadas-linux-kernel

## Features

+ mainline 
+ small kernel size
+ kexec
+ squashfs + overlayfs
+ ram disk
+ usb otg gadgets
+ ...

## Download releases

    + https://github.com/hyphop/khadas-linux-kernel/releases/tag/krescue_last_fast
    + https://github.com/hyphop/khadas-linux-kernel/releases/tag/krescue_last
    + https://github.com/hyphop/khadas-linux-kernel/releases/tag/krescue_openwrt_last

## build

    # git clone https://github.com/khadas/fenix
    # cd fenix
    # ...
    cd ..
    git clone https://github.com/hyphop/khadas-linux-kernel
    cd khadas-linux-kernel
    ./scripts/make_kernel_vims -j16
    ./scripts/make_kernel_vims_modules

## build custom usage

    ./scripts/make_kernel_vims menuconfig
    ./scripts/make_kernel_vims help

## auto build script for releases

    ./scripts/auto_krescue
    ./scripts/auto_openwrt


## Configs

[configs](configs)

## build from sources

preparing ... plz wait soon ...

## Downloads

+ https://github.com/hyphop/khadas-linux-kernel/releases

## related projects

+ https://github.com/hyphop/khadas-uboot-spi
+ https://github.com/hyphop/khadas-rescue
+ https://github.com/hyphop/khadas-openwrt

## links

+ https://docs.khadas.com
+ https://github.com/khadas
