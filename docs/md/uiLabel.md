# **uiLabel**

## Description

## Functions
- [uiNewLabel( text )](#uinewlabel-text)
- [uiLabelSetText( uiLabel, text )](#uilabelsettext-uilabel-text)
- [uiLabelText( uiLabel )](#uilabeltext-uilabel)

## uiNewLabel (text)
Arguments
- text

Return value

Description

Simple example
```
oLabel := uiNewLabel( "Good morning" )
```
## uiLabelSetText (uiLabel, text)
Arguments
- uiLabel
- text

Return value

Description

Simple example
```
uiLabelSetText( oLabel, "If you are going through hell, keep going!" )
```
## uiLabelText (uiLabel)
Arguments
- uiLabel

Return value

Description

Simple example
```
uiLabelText( oLabel )
```
## Sample source code
```
FUNCTION Main()
  LOCAL oWindow
  LOCAL oLabel

  IF ! HB_ISNULL( uiInit() )
    Alert( "Failed to initializa libui..." )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "Label example", 800, 600, .T. )
  uiWindowSetMargined( oWindow, 1 )

  oLabel := uiNewLabel( "Each day is dri­ve through his­to­ry." )

  uiWindowSetChild( oWindow, oLabel )

  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL
```
## Screenshots
![Linux](../tutorial/uiLabel_Linux.png "With family Linux Elementary desktop Pantheon, based on GNOME")
