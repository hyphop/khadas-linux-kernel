[![Build Status](https://travis-ci.com/hyphop/khadas-linux-kernel.svg?branch=master)](https://travis-ci.com/hyphop/khadas-linux-kernel)

# khadas linux kernel

mainline linux kernel for usage on Khadas VIMs and Edge boards 

https://github.com/hyphop/khadas-linux-kernel

## Features

+ kernel version is 5.7
+ one kernel for amlogic and rockchip
+ mainline 
+ small kernel size
+ kexec
+ squashfs + overlayfs
+ ram disk
+ usb otg gadgets
+ ...

## Download releases

    + https://github.com/hyphop/khadas-linux-kernel/releases/tag/amlrock
    + https://github.com/hyphop/khadas-linux-kernel/releases/tag/amlrock_small
    + https://github.com/hyphop/khadas-linux-kernel/releases/tag/krescue_last_fast
    + https://github.com/hyphop/khadas-linux-kernel/releases/tag/krescue_last
    + https://github.com/hyphop/khadas-linux-kernel/releases/tag/krescue_openwrt_last

## download 

    git clone https://github.com/hyphop/khadas-linux-kernel
    cd khadas-linux-kernel

## auto build script for releases

    ./scripts/auto_krescue
    ./scripts/auto_openwrt

## manual build usage

    ./make_kernel_mainline_vimsX
    ./make_kernel_mainline_vimsX_modules

## Configs

[configs](configs)

## build from sources

preparing ... plz wait soon ...

## Downloads

+ https://github.com/hyphop/khadas-linux-kernel/releases

## related projects

+ https://github.com/hyphop/khadas-uboot
+ https://github.com/hyphop/khadas-uboot-spi
+ https://github.com/hyphop/khadas-rescue
+ https://github.com/hyphop/khadas-openwrt

## links

+ https://docs.khadas.com
+ https://github.com/khadas
