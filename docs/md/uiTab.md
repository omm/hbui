# **uiTab**

## Description

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
```
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
```
uiTabAppend( oTab, "Page 1", uiControl( page1 ) )
```
## uiTabDelete (uiTab, index)
Arguments
- uiTab
- index

Return value

Description

Simple example
```
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
```
uiTabInsertAt( oTab, "Page 1", 0, uiControl( page1 ) )
```
## uiTabMargined (uiTab, page)
Arguments
- uiTab
- page

Return value

Description

Simple example
```
uiTabMargined( oTab, page )
```
## uiTabNumPages (uiTab)
Arguments
- uiTab

Return value

Description

Simple example
```
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
```
uiTabSetMargined( oTab, page, margined )
```
## Sample source code
```
FUNCTION Main()
  LOCAL oWindow
  LOCAL oTab

  IF ! HB_ISNULL( uiInit() )
    Alert( "Failed to initializa libui..." )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "Tab example", 800, 600, .T. )
  uiWindowSetMargined( oWindow, 1 )
  
  oTab := uiNewTab()

  uiTabAppend( oTab, "Page 1", NIL )
  uiTabSetMargined( oTab, 0, 1 )

  uiTabAppend( oTab, "Page 2", NIL )
  uiTabSetMargined( oTab, 1, 1 )

  uiTabAppend( oTab, "Page 3", NIL )
  uiTabSetMargined( oTab, 2, 1 )

  uiTabAppend( oTab, "Page 4", NIL )
  uiTabSetMargined( oTab, 3, 1 )

  uiTabAppend( oTab, "Page 5", NIL )
  uiTabSetMargined( oTab, 4, 1 )

  uiWindowSetChild( oWindow, oTab )
  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL
```
## Screenshots
![Linux](../tutorial/uiTab_Linux.png "With family Linux Elementary desktop Pantheon, based on GNOME")
