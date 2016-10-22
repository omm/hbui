# **uiEntry**

## Description

## Functions
- [uiNewEntry()](#uinewentry)
- [uiNewPasswordEntry()](#uinewpasswordentry)
- [uiNewSearchEntry()](#uinewsearchentry)
- [uiEntryOnChanged( uiEntry, Function, data )](#uientryonchanged-uientry-function-data)
- [uiEntryReadOnly( uiEntry )](#uientryreadonly-uientry)
- [uiEntrySetReadOnly( uiEntry, readonly )](#uientrysetreadonly-uientry-readonly)
- [uiEntrySetText( uiEntry, text )](#uientrysettext-uientry-text)
- [uiEntryText( uiEntry )](#uientrytext-uientry)

## uiNewEntry()
Arguments

Return value

Description

Simple example
```
oEntry := uiNewEntry()
```
## uiNewPasswordEntry()
Arguments

Return value

Description

Simple example
```
oPasswordEntry := uiNewPasswordEntry()
```
## uiNewSearchEntry()
Arguments

Return value

Description

Simple example
```
oSearchEntry := uiNewSearchEntry()
```
## uiEntryText (uiEntry)
Arguments
- uiEntry

Return value

Description

Simple example
```
uiEntryText( oEntry )
```
## uiEntrySetText (uiEntry, text)
Arguments
- uiEntry
- text

Return value

Description

Simple example
```
uiEntrySetText( oEntry, "Name counterparty" )
```
## uiEntryOnChanged (uiEntry, Function, data)
Arguments
- uiEntry
- Function
- data

Return value

Description

Simple example
```
uiEntryOnChanged( uiEntry, onChanged, 0 )
```
## uiEntryReadOnly (uiEntry)
Arguments

Return value

Description

Simple example
```
uiEntryReadOnly( oEntry )
```
## uiEntrySetReadOnly (uiEntry, readonly)
Arguments

Return value

Description

Simple example
```
uiEntrySetReadOnly( oEntry, 1 )
```

## Sample source code
```
FUNCTION Main()
  LOCAL oWindow
  LOCAL oGroup
  LOCAL oForm

  IF ! HB_ISNULL( uiInit() )
    Alert( "Failed to initializa libui..." )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "Entry example", 800, -1, .T. )
  uiWindowSetMargined( oWindow, 1 )

  oGroup := uiNewGroup("")
	uiGroupSetMargined( oGroup, 1)

	oForm := uiNewForm()
	uiFormSetPadded( oForm, 1 )
	uiGroupSetChild( oGroup, oForm )

	uiFormAppend( oForm, "Username", uiNewEntry(), 0 )
	uiFormAppend( oForm, "Email address", uiNewEntry(), 0 )
	uiFormAppend( oForm, "Password", uiNewPasswordEntry(), 0 )

  uiWindowSetChild( oWindow, oGroup )
  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL
```

## Screenshots
![Linux](../tutorial/uiEntry_Linux.png "With family Linux Elementary desktop Pantheon, based on GNOME")
