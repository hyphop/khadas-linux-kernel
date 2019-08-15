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

    make_kernel_mainline_vims
    make_kernel_mainline_vims_modules

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