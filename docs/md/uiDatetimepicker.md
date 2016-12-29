# **uiDatetimepicker**

## Description
uiDateTimePicker is a Control that represents a field where the user can enter a date and/or a time.

## Functions
- [uiNewTimePicker()](#uinewtimepicker)
- [uiNewDatePicker()](#uinewdatepicker)
- [uiNewDateTimePicker()](#uinewdatetimepicker)

## uiNewTimePicker()
Arguments

Return value

Description <br>
uiNewTimePicker creates a new DateTimePicker that shows only a time.

Simple example
```harbour
oTimePicker := uiNewTimePicker()
```
## uiNewDatePicker()
Arguments

Return value

Description <br>
uiNewDatePicker creates a new DateTimePicker that shows only a date.

Simple example
```harbour
oDatePicker := uiNewDatePicker()
```
## uiNewDateTimePicker()
Arguments

Return value

Description <br>
uiNewDateTimePicker creates a new DateTimePicker that shows both a date and a time.

Simple example
```harbour
oDateTimePicker := uiNewDateTimePicker()
```
## Sample source code
```harbour
#include "hbui.ch"

FUNCTION Main()
  LOCAL error
  LOCAL oWindow
  LOCAL oTimePicker
  LOCAL oGrid

  IF ! HB_ISNULL( error := uiInit() )
    Alert( "Failed to initialize libui... " + error )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "Time picker", 300, 300, .T. )
  uiWindowSetMargined( oWindow, 1 )

  oTimePicker := uiNewTimePicker()

  oGrid := uiNewGrid()
  uiGridSetPadded( oGrid, 1 )
  uiGridAppend( oGrid, oTimePicker, 0, 0, 1, 1, 1, uiAlignCenter, 1, uiAlignCenter)
	
  uiWindowSetChild( oWindow, oGrid )
  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL
```
![Linux](ss/timepicker_01.png "With family Linux Ubuntu desktop, based on GNOME")
## Sample source code
```harbour
#include "hbui.ch"

FUNCTION Main()
  LOCAL error
  LOCAL oWindow
  LOCAL oDatePicker
  LOCAL oGrid

  IF ! HB_ISNULL( error := uiInit() )
    Alert( "Failed to initialize libui... " + error )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "Date picker", 300, 300, .T. )
  uiWindowSetMargined( oWindow, 1 )

  oDatePicker := uiNewDatePicker()

  oGrid := uiNewGrid()
  uiGridSetPadded( oGrid, 1 )
  uiGridAppend( oGrid, oDatePicker, 0, 0, 1, 1, 1, uiAlignCenter, 1, uiAlignCenter)
	
  uiWindowSetChild( oWindow, oGrid )
  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL
```
## Screenshots
![Linux](ss/datepicker_01.png "With family Linux Ubuntu desktop, based on GNOME")
```harbour
#include "hbui.ch"

FUNCTION Main()
  LOCAL error
  LOCAL oWindow
  LOCAL oDateTimePicker
  LOCAL oGrid

  IF ! HB_ISNULL( error := uiInit() )
    Alert( "Failed to initialize libui... " + error )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "Date time picker", 300, 300, .T. )
  uiWindowSetMargined( oWindow, 1 )

  oDateTimePicker := uiNewDateTimePicker()

  oGrid := uiNewGrid()
  uiGridSetPadded( oGrid, 1 )
  uiGridAppend( oGrid, oDateTimePicker, 0, 0, 1, 1, 1, uiAlignCenter, 1, uiAlignCenter)
	
  uiWindowSetChild( oWindow, oGrid )
  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL
```
![Linux](ss/datetimepicker_01.png "With family Linux Ubuntu desktop, based on GNOME")
