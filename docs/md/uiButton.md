# **uiButton**

### Description

## Functions
- [uiNewButton( text )](#uinewbutton-text),
- [uiButtonOnClicked( uiButton, uiButton, data )](#uibuttononclicked-uibutton-uibutton-data)
- [uiButtonSetText( uiButton, text )](#uibuttonsettext-uibutton-text)
- [uiButtonText( uiButton )](#uibuttontext-uibutton)

## uiNewButton (text)
Arguments
- text

Return value

Description

Simple example
```harbour
oButton := uiNewButton( "Open" )
```
## uiButtonOnClicked (uiButton, uiButton, data)
Arguments
- uiButton
- uiButton
- data

Return value

Description

Simple example
```harbour

```
## uiButtonSetText (uiButton, text)
Arguments
- uiButton
- text

Return value

Description

Simple example
```harbour

```
## uiButtonText (uiButton)
Arguments
- uiButton

Return value

Description

Simple example
```harbour

```
## Sample source code
```harbour
FUNCTION Main()
  LOCAL oWindow
  LOCAL oButton

  IF ! HB_ISNULL( uiInit() )
    Alert( "Failed to initializa libui..." )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "Button example", 800, 600, .T. )
  uiWindowSetMargined( oWindow, 1 )

  oButton := uiNewButton( "Open" )

  uiWindowSetChild( oWindow, oButton )
  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL
```
![Linux](ss/button_01.png "With family Linux Ubuntu desktop, based on GNOME")
## Sample source code
```harbour
FUNCTION Main()
  LOCAL oWindow
  LOCAL oButton
  LOCAL oHorizontalBox

  IF ! HB_ISNULL( uiInit() )
    Alert( "Failed to initializa libui..." )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "Button example", 800, 600, .T. )
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
![Linux](ss/button_02.png "With family Linux Ubuntu desktop, based on GNOME")
## Sample source code
```harbour
FUNCTION Main()
  LOCAL oWindow
  LOCAL oButton
  LOCAL oVerticalBox

  IF ! HB_ISNULL( uiInit() )
    Alert( "Failed to initializa libui..." )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "Button example", 800, 600, .T. )
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
![Linux](ss/button_02.png "With family Linux Ubuntu desktop, based on GNOME")
