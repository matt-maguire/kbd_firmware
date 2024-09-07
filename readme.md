# Corne v4 firmware with local customisations

This is a fork of the official repo for Corne keyboard firmware. Under
this "custom" branch I track tweaks I make to the firmware as well as
the keyboard layouts I am using.

For copies of the Vial layout files, see the folder:
`keyboards/crkbd/vial-kb`

For a GUI representation of the similar keymap I use on my ZSA Voyager keyboard, see:
https://configure.zsa.io/voyager/layouts/jYDdw/latest/0

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
kb=crkbd kr=rev4_0/standard km=vial_custom make vial-qmk-compile
```

#### Corne v4 mini rev 4.1 board
```sh
kb=crkbd kr=rev4_1/mini km=vial_mini_custom make vial-qmk-compile
```

### All cleaning and building
```sh
make update-al
```
## 4. Flash the firmware

For Vial firmware on my Corne keyboards I use:
```sh
kb=crkbd kr=rev4_0/standard km=vial_custom make vial-qmk-flash
```
or
```sh
kb=crkbd kr=rev4_1/mini km=vial_mini_custom make vial-qmk-flash
```

**Note 1:** be sure to save any custom keymap using the Vial GUI, as it will be destroyed by the flashing process.

**Note 2:** on my Linux system, the flash command just sits there waiting for the board to present a USB drive. I need to click on the board's drive in the Thunar file manager in order for the flash process to see it.

**Note 3:** if you can't unlock the board to put it in bootloader mode (eg. if the unlock keys are mapped to the wrong place) then you might be able to put it in bootloader mode by double-tapping the *reset* button on the circuit board itself.

## 5. Load a keymap
By default after flashing the keyboard will have a qwerty keymap. You can load a better keymap using the Vial GUI. My Vial keymaps are stored here in github in the `keyboards/crkbd/vial-kb/` directory.
