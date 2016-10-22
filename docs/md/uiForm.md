# **uiForm**

## Description

## Functions
- [uiNewForm()](#uinewform)
- [uiFormAppend( uiForm, label, uiControl, stretchy )](#uiformappend-uiform-label-uicontrol-stretchy)
- [uiFormDelete( uiForm, index )](#uiformdelete-uiform-index)
- [uiFormPadded( uiForm )](#uiformpadded-uiform)
- [uiFormSetPadded( uiForm, padded )](#uiformsetpadded-uiform-padded)

## uiNewForm()
Arguments

Return value

Description

Simple example
```
oForm := uiNewForm()
```
## uiFormAppend (uiForm, label, uiControl, stretchy)
Arguments
- uiForm
- label
- uiControl
- stretchy

Return value

Description

Simple example
```
uiFormAppend( oForm, "Password Entry", uiNewPasswordEntry(), 0 )
```
## uiFormDelete (uiForm, index)
Arguments
- uiForm
- index

Return value

Description

Simple example
```
uiFormDelete( oForm, 1 )
```
## uiFormPadded (uiForm)
Arguments
- uiForm

Return value

Description

Simple example
```
uiFormPadded( oForm )
```
## uiFormSetPadded (uiForm, padded)
Arguments
- uiForm
- padded

Return value

Description

Simple example
```
uiFormSetPadded( oForm, 1 )
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

  oWindow := uiNewWindow( "Form example", 800, -1, .T. )
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
![Linux](../tutorial/uiForm_Linux.png "With family Linux Elementary desktop Pantheon, based on GNOME")
