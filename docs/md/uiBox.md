# **uiBox**

## Description

## Functions
- [uiNewHorizontalBox()](#uinewhorizontalbox)
- [uiNewVerticalBox()](#uinewverticalbox)
- [uiBoxAppend( uiBox, uiControl, stretchy )](#uiboxappend-uibox-uicontrol-stretchy)
- [uiBoxDelete( uiBox, index )](#uiboxdelete-uibox-index)
- [uiBoxPadded( uiBox )](#uiboxpadded-uibox)
- [uiBoxSetPadded( uiBox, padded )](#uiboxsetpadded-uibox-padded)

## uiNewHorizontalBox()
Arguments

Return value

Description

Simple example
```
oHorizontalBox := uiNewHorizontalBox()
```
## uiNewVerticalBox()
Arguments

Return value

Description

Simple example
```
oVerticalBox := uiNewVerticalBox()
```
## uiBoxAppend (uiBox, uiControl, stretchy)
Arguments
- uiBox
- uiControl
- stretchy

Return value

Description

Simple example
```
uiBoxAppend( oHorizontalBox, uiControl( oTab ), 1 )
```
## uiBoxDelete (uiBox, index)
Arguments
- uiBox
- index

Return value

Description

Simple example
```

```
## uiBoxPadded (uiBox)
Arguments
- uiBox

Return value

Description

Simple example
```

```
## uiBoxSetPadded (uiBox, padded)
Arguments
- uiBox
- padded

Return value

Description

Simple example
```

```
## Sample source code
```
FUNCTION Main()
  LOCAL oWindow
  LOCAL oButton
  LOCAL oHorizontalBox

  IF ! HB_ISNULL( uiInit() )
    Alert( "Failed to initializa libui..." )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "HorizontalBox example", 800, 600, .T. )
  uiWindowSetMargined( oWindow, 1 )

  oButton := uiNewButton( "Open" )

  oHorizontalBox := uiNewHorizontalBox()
  uiBoxSetPadded( oHorizontalBox, 1 )
  uiBoxAppend( oHorizontalBox, oButton, 0 )

  uiWindowSetChild( oWindow, oHorizontalBox )
  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL
```

```
FUNCTION Main()
  LOCAL oWindow
  LOCAL oButton
  LOCAL oVerticalBox

  IF ! HB_ISNULL( uiInit() )
    Alert( "Failed to initializa libui..." )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "VerticalBox example", 800, 600, .T. )
  uiWindowSetMargined( oWindow, 1 )

  oButton := uiNewButton( "Open" )

  oVerticalBox := uiNewVerticalBox()
  uiBoxSetPadded( oVerticalBox, 1 )
  uiBoxAppend( oVerticalBox, oButton, 0 )

  uiWindowSetChild( oWindow, oVerticalBox )
  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL
```
## Screenshots
![Linux](../tutorial/uiBox_Linux.png "With family Linux Elementary desktop Pantheon, based on GNOME")
