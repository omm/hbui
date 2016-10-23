# **uiCombobox**

## Description

## Functions
- [uiNewCombobox()](#uinewcombobox)
- [uiComboboxAppend( uiCombobox, text )](#uicomboboxappend-uicombobox-text)
- [uiComboboxOnSelected( uiCombobox, uiCombobox, data )](#uicomboboxonselected-uicombobox-uicombobox-data)
- [uiComboboxSelected( uiCombobox )](#uicomboboxselected-uicombobox)
- [uiComboboxSetSelected( uiCombobox, n )](#uicomboboxsetselected-uicombobox-n)

## uiNewCombobox()
Arguments

Return value

Description

Simple example
```harbour
oCombobox() := uiNewCombobox()
```
## uiComboboxAppend (uiCombobox, text)
Arguments
- uiCombobox
- text

Return value

Description

Simple example
```harbour
uiComboboxAppend( oCombobox, "Beautiful F1" )
```
## uiComboboxOnSelected (uiCombobox, uiCombobox, data)
Arguments
- uiCombobox
- uiCombobox
- data

Return value

Description

Simple example
```harbour
uiComboboxOnSelected( oCombobox, onComboboxChanged(), data )
```
## uiComboboxSelected (uiCombobox)
Arguments
- uiCombobox

Return value

Description

Simple example
```harbour
uiComboboxSelected( oCombobox )
```
## uiComboboxSetSelected (uiCombobox, n)
Arguments
- uiCombobox
- n

Return value

Description

Simple example
```harbour
uiComboboxSetSelected( oCombobox, 1 )
```
## Sample source code
```harbour
FUNCTION Main()
  LOCAL oWindow
  LOCAL oCombobox

  IF ! HB_ISNULL( uiInit() )
    Alert( "Failed to initializa libui..." )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "ComboBox example", 800, 600, .T. )
  uiWindowSetMargined( oWindow, 1 )

  oCombobox := uiNewCombobox()
  uiComboboxAppend( oCombobox, " White   #FFFFFF ")
  uiComboboxAppend( oCombobox, " Black   #000000 ")
  uiComboboxAppend( oCombobox, " Green   #009F6B ")
  uiComboboxAppend( oCombobox, " Red     #C40233 ")
  uiComboboxAppend( oCombobox, " Yellow  #FFD300 ")
  uiComboboxAppend( oCombobox, " Blue    #0087BD ")
  uiComboboxSetSelected( oCombobox, 5 )

  uiWindowSetChild( oWindow, oCombobox )
  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL
```
## Screenshots
![Linux](../tutorial/uiCombobox_Linux.png "With family Linux Elementary desktop Pantheon, based on GNOME")
