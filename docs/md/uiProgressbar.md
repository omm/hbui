# **uiProgressbar**

## Description

## Functions
- [uiNewProgressBar()](#uinewprogressbar)
- [uiProgressBarSetValue( uiProgressBar, n )](#uiprogressbarsetvalue-uiprogressbar-n)
- [uiProgressBarValue( uiProgressBar )](#uiprogressbarvalue-uiprogressbar)

## uiNewProgressBar()
Arguments

Return value

Description

Simple example
```
oProgressBar := uiNewProgressBar()
```
## uiProgressBarSetValue (uiProgressBar, n)
Arguments
- uiProgressBar
- n

Return value

Description

Simple example
```
uiProgressBarSetValue( oProgressBar, 100 )
```
## uiProgressBarValue (uiProgressBar)
Arguments
- uiProgressBar

Return value

Description

Simple example
```
uiProgressBarValue( oProgressBar )
```
## Sample source code
```
FUNCTION Main()
  LOCAL oWindow
  LOCAL oVerticalBox
  LOCAL oProgressBar

  IF ! HB_ISNULL( uiInit() )
    Alert( "Failed to initializa libui..." )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "ProgressBar example", 800, 600, .T. )
  uiWindowSetMargined( oWindow, 1 )

  oProgressBar := uiNewProgressBar()
  uiProgressBarSetValue( oProgressBar, -1 )

  oVerticalBox := uiNewVerticalBox()
  uiBoxSetPadded( oVerticalBox, 1 )
  uiBoxAppend( oVerticalBox, oProgressBar, 0 )

  uiWindowSetChild( oWindow, oVerticalBox )
  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL
```
## Screenshots
![Linux](../tutorial/uiProgressbar_Linux.png "With family Linux Elementary desktop Pantheon, based on GNOME")
