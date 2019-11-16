# mi-caja

A fork of the [caja](https://github.com/mate-desktop/caja) file manager (1.23.2).

## How to build

```
$ ./autogen.sh
$ ./configure \
    --prefix=/usr \
    --libexecdir=/usr/lib/caja \
    --enable-introspection \
    --disable-update-mimedb
$ make
$ src/caja
```
