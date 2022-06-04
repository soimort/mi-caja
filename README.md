# mi-caja

A fork of the [caja](https://github.com/mate-desktop/caja) file manager.

## Branches

- [master](https://github.com/soimort/mi-caja/tree/master) (1.26)

## Dependencies

- mate-common
- mate-desktop
- exempi
- gobject-introspection
- libnotify
- libexif
- gvfs

## Features

- Condensed UI, hiding the close buttons of tabs.
- Session logging (to be used by [mi-casa](https://github.com/soimort/dotfiles/blob/master/Scripts/mi-casa) for session management).

## Future work


## How to build

```
$ git submodule init
$ git submodule update --remote --recursive
$ ./autogen.sh --prefix=/usr
$ make
$ src/caja
```
