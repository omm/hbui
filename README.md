# **HBUI**

Graphical user interface library for the Harbour compiler, this is a wrapper library around [libui](https://github.com/andlabs/libui), a portable GUI library.

- Read more about the - [Cross platform](https://en.wikipedia.org/wiki/Cross-platform)
- Read more about the - [Harbour (software)](https://en.wikipedia.org/wiki/Harbour_(software))

### How to get
- first of all please download [Harbour](https://github.com/harbour/core)
- HBUI live source repository

You'll need Git version control software installed on your system, and issue this command:
```
$ git clone https://github.com/rjopek/hbui
```
You can get subsequent updates using this command:

```
$ git pull
```

### How to build
For all systems, use the command:
```
$ hbmk2 hbui.hbp
```
To test it, type:
```
$ cd samples
$ hbmk2 window.prg -run
```

### Documentation
- [Documentation and examples](https://github.com/rjopek/hbui/blob/master/docs/md/documentation.md)
- It is recommended to use [Harbour 3.4](https://github.com/vszakats/harbour-core)
- [Read tutorial](https://github.com/rjopek/HBUI/blob/master/docs/tutorial/README.md)
- Binary download, [read tutorial](https://github.com/rjopek/HBUI/blob/master/docs/tutorial/README.md#binary-download)


### Sample source code
```harbour
FUNCTION Main()
  LOCAL oWindow

  oWindow := uiNewWindow( "Main Window", 800, 600, .T. )

  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL
```

### Screenshots
![Windows](samples/window_window.gif "Windows 10 desktop")

![Windows](samples/window_window_samples_02.png "Windows 10 desktop")

![GNU/Linux](samples/window_ubuntu.gif "With family Linux Ubuntu desktop, based on GNOME")

![GNU/Linux](samples/window_ubuntu_samples_02.png "With family Linux Ubuntu desktop, based on GNOME")

![OS X](samples/window_darwin.gif "Desktop Aqua in OS X" )

![OS X](samples/window_darwin_samples_02.png "Desktop Aqua in OS X")

![With family Unix](samples/window_freebsd.gif "With family Unix FreeBSD desktop MATE, based on GNOME 2.32.")

![With family Unix](samples/window_freebsd_samples_02.png "With family Unix FreeBSD desktop MATE, based on GNOME 2.32.")

### Contributors
[![Viktor Szakats](https://avatars3.githubusercontent.com/u/1446897?s=400&v=4)](https://github.com/vszakats) | [![Teo Fonrouge](https://avatars2.githubusercontent.com/u/1561244?s=400&v=4)](https://github.com/tfonrouge) | [![Bogdan Kunert](https://avatars0.githubusercontent.com/u/6351667?s=400&v=4)](https://github.com/bkunert)
---|---|---
[Viktor Szakats](https://github.com/vszakats) | [Teo Fonrouge](https://github.com/tfonrouge) | [Bogdan Kunert](https://github.com/bkunert)

### License
MIT

**Free Software, Hell Yeah!** ;-)

###### All trademarks and company names are used for information purposes only.
