# Corne v4 firmware with local customisations

This is a fork of the official repo for Corne keyboard firmware. Under
this "custom" branch I track tweaks I make to the firmware as well as
the keyboard layouts I am using.

For copies of the Vial layout files, see the folder:
`keyboards/crkbd/vial-kb`

# KBD firmware

## How to build

## 1. Setting Up Your QMK Environment

Please see https://docs.qmk.fm/#/newbs_getting_started and set up 1 to 3.

## 2. Getting source files

Please get source files of `qmk/qmk_firmware` and `vial-kb/vial-qmk`
```sh
make git-submodule
```

## 3. Building firmwares

### for VIA

```sh
make qmk-clean
kb=crkbd make qmk-init
kb=crkbd kr=rev4/standard km=via make qmk-compile
```
A built data will be stored on `keyboards/crkbd/qmk/qmk_firmware/.build`\
Please change `kb`, `kr` and `km` when build other.

### for Vial
```sh
make vial-qmk-clean
kb=crkbd make vial-qmk-init
kb=crkbd kr=rev4/standard km=vial make vial-qmk-compile
```
A built data will be stored on `keyboards/crkbd/vial-kb/vial-qmk/.build`\
Please change `kb`, `kr` and `km` when build other.

For example, in my case I am using:

#### Corne v4 rev 4.0 board
```sh
kb=crkbd kr=rev4_0/standard km=vial make vial-qmk-compile
```

#### Corne v4 mini rev 4.1 board
```sh
kb=crkbd kr=rev4_1/mini km=vial_mini make vial-qmk-compile
```

### All cleaning and building
```sh
make update-al
```
