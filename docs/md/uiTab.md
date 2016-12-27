# **uiTab**

## Description <br>
Tab provide a way to present related information on separate labeled pages.

## Functions
- [uiNewTab()](#uinewtab)
- [uiTabAppend( uiTab, name, uiControl )](#uitabappend-uitab-name-uicontrol)
- [uiTabDelete( uiTab, index )](#uitabdelete-uitab-index)
- [uiTabInsertAt( uiTab, name, before, uiControl )](#uitabinsertat-uitab-name-before-uicontrol)
- [uiTabMargined( uiTab, page )](#uitabmargined-uitab-page)
- [uiTabNumPages( uiTab )](#uitabnumpages-uitab)
- [uiTabSetMargined( uiTab, page, margined )](#uitabsetmargined-uitab-page-margined)

## uiNewTab()
Arguments

Return value

Description

Simple example
```harbour
oTab := uiNewTab()
```
## uiTabAppend (uiTab, name, uiControl)
Arguments
- uiTab
- name
- uiControl

Return value

Description

Simple example
```harbour
uiTabAppend( oTab, "Customer base", UserFunction() )
```
## uiTabDelete (uiTab, index)
Arguments
- uiTab
- index

Return value

Description

Simple example
```harbour
uiTabDelete( oTab, 0 )
```
## uiTabInsertAt (uiTab, name, before, uiControl)
Arguments
- uiTab
- name
- before
- uiControl

Return value

Description

Simple example
```harbour
uiTabInsertAt( oTab, "Page 1", 0, uiControl( page1 ) )
```
## uiTabMargined (uiTab, page)
Arguments
- uiTab
- page

Return value

Description

Simple example
```harbour
uiTabMargined( oTab, page )
```
## uiTabNumPages (uiTab)
Arguments
- uiTab

Return value

Description

Simple example
```harbour
uiTabNumPages( oTab )
```
## uiTabSetMargined (uiTab, page, margined)
Arguments
- uiTab
- page
- margined

Return value

Description

Simple example
```harbour
uiTabSetMargined( oTab, 1, .T. )
```
## Sample source code
Example use function:
- [CDOW()](http://harbour.edu.pl/clipper/en/C53G01C/ng19116.html)
- [CMONTH()](http://harbour.edu.pl/clipper/en/C53G01C/ng19a13.html)
- [DATE()](http://harbour.edu.pl/clipper/en/C53G01C/ng1baff.html)
- [DAY()](http://harbour.edu.pl/clipper/en/C53G01C/ng1bec1.html)
- [hb_Compiler()]()
- [hb_eol()](http://harbour.edu.pl/harbour/doc/harbour.html#hb_eol)
- [LTRIM()](http://harbour.edu.pl/clipper/en/C53G01C/ng6790f.html)
- [OS()](http://harbour.edu.pl/harbour/doc/harbour.html#os)
- [STR()](http://harbour.edu.pl/clipper/en/C53G01C/nga0e79.html)
- [VERSION()](http://harbour.edu.pl/harbour/doc/harbour.html#version)
- [YEAR()](http://harbour.edu.pl/clipper/en/C53G01C/nga91e1.html)
```harbour
#include "hbui.ch"

FUNCTION Main()
  LOCAL error
  LOCAL oWindow
  LOCAL oTab

  IF ! HB_ISNULL( error := uiInit() )
    Alert( "Failed to initialize libui... " + error )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "Tab example", 500, 500, .T. )
  uiWindowSetMargined( oWindow, 1 )

  oTab := uiNewTab()

  uiTabAppend( oTab, "Label", Label() )
  uiTabSetMargined( oTab, 0, 1 )

  uiTabAppend( oTab, "Button", Button() )
  uiTabSetMargined( oTab, 1, 1 )

  uiTabAppend( oTab, "Checkbox", Checkbox() )
  uiTabSetMargined( oTab, 2, 1 )

  uiTabAppend( oTab, "Radiobuttons", Radiobuttons() )
  uiTabSetMargined( oTab, 3, 1 )

  uiTabAppend( oTab, "What day is today", WhatDayIsToday() )
  uiTabSetMargined( oTab, 4, 1 )

  uiWindowSetChild( oWindow, oTab )
  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL

FUNCTION Label()
  LOCAL oLabel
  LOCAL oGrid

  oLabel := uiNewLabel( VERSION()     + hb_eol() + ;
                                        hb_eol() + ;
                        hb_Compiler() + hb_eol() + ;
                                        hb_eol() + ;
                        OS()          + hb_eol() + ;
                                        hb_eol() + ;
                        "HBUI 0.00"  )

  oGrid := uiNewGrid()
  uiGridSetPadded( oGrid, 1 )
  uiGridAppend( oGrid, oLabel, 0, 0, 1, 1, 1, uiAlignCenter, 1, uiAlignCenter )

RETURN oGrid

FUNCTION Button()
  LOCAL oButton
  LOCAL oGrid

  oButton := uiNewButton( "Open" )

  oGrid := uiNewGrid()
  uiGridSetPadded( oGrid, 1 )
  uiGridAppend( oGrid, oButton, 0, 0, 1, 1, 1, uiAlignCenter, 1, uiAlignCenter )

RETURN oGrid

FUNCTION Checkbox()
  LOCAL oCheckbox
  LOCAL oGrid

  oCheckbox := uiNewCheckbox( "GitHub" )
  uiCheckboxSetChecked( oCheckbox, 1 )

  oGrid := uiNewGrid()
  uiGridSetPadded( oGrid, 1 )
  uiGridAppend( oGrid, oCheckbox, 0, 0, 1, 1, 1, uiAlignCenter, 1, uiAlignCenter)

RETURN oGrid

FUNCTION Radiobuttons()
  LOCAL oRadiobuttons
  LOCAL oGrid

  oRadiobuttons := uiNewRadioButtons()
  uiRadioButtonsAppend( oRadiobuttons, "Choose me 1" )
  uiRadioButtonsAppend( oRadiobuttons, "Choose me 2" )
  uiRadioButtonsAppend( oRadiobuttons, "Choose me 3" )

  oGrid := uiNewGrid()
  uiGridSetPadded( oGrid, 1 )
  uiGridAppend( oGrid, oRadiobuttons, 0, 0, 1, 1, 1, uiAlignCenter, 1, uiAlignCenter )

RETURN oGrid

FUNCTION WhatDayIsToday()
  LOCAL oLabel
  LOCAL oGrid
  LOCAL cText := "Today is "

  cText += CDOW( DATE() ) + ", "
  cText += LTRIM( STR( DAY( DATE() ) ) ) + ". "
  cText += CMONTH( DATE() ) + " "
  cText += LTRIM( STR( YEAR( DATE() ) ) )

  oLabel := uiNewLabel( cText )

  oGrid := uiNewGrid()
  uiGridSetPadded( oGrid, 1 )
  uiGridAppend( oGrid, oLabel, 0, 0, 1, 1, 1, uiAlignCenter, 1, uiAlignCenter )

RETURN oGrid
```
![Linux](ss/tab_01.png "With family Linux Ubuntu desktop, based on GNOME")
