# make kernel wrapper

## USAGE

`make_kernel_* [ARGS]` - simple kernel make wrapper for fenix 

## ARGS

its same as kernel make

+ menuconfig
+ -jN
+ dtbs
+ Image
+ savedefconfig
+ modules_install
+ help
+ ...

## Example

    ./kernel_prepare && \
    ./make_kernel_mainline_vims2 && \
    ./make_kernel_mainline_vims_modules

## OUTPUT

    /tmp/modules

## OUTPUT dir file list

```
lib/modules/*
config.gz
config.gz.old
Image
Image.gz
*.dtb
modules	-> .
modules.openwrt.tar.gz
modules.tar.gz
```