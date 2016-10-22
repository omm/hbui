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
```
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
```

```
## uiButtonSetText (uiButton, text)
Arguments
- uiButton
- text

Return value

Description

Simple example
```

```
## uiButtonText (uiButton)
Arguments
- uiButton

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

```
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

```
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
## Screenshots
![Linux](../tutorial/uiButton_Linux.png "With family Linux Elementary desktop Pantheon, based on GNOME")
