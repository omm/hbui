# **uiGroup**

## Description

## Functions
- [uiNewGroup( title )](#uinewgroup-title)
- [uiGroupMargined( uiGroup )](#uigroupmargined-uigroup)
- [uiGroupSetChild( uiGroup, uiControl )](#uigroupsetchild-uigroup-uicontrol)
- [uiGroupSetMargined( uiGroup, margined )](#uigroupsetmargined-uigroup-margined)
- [uiGroupSetTitle( uiGroup, title )](#uigroupsettitle-uigroup-title)
- [uiGroupTitle( uiGroup )](#uigrouptitle-uigroup)

## uiNewGroup (title)
Arguments
- title

Return value

Description

Simple example
```harbour
oGroup := uiNewGroup( "title" )
```
## uiGroupMargined (uiGroup)
Arguments
- uiGroup

Return value

Description

Simple example
```harbour
uiGroupMargined( oGroup )
```
## uiGroupSetChild (uiGroup, uiControl)
Arguments
- uiGroup
- uiControl

Return value

Description

Simple example
```harbour
uiGroupSetChild( oGroup, oVerticalBox )
```
## uiGroupSetMargined (uiGroup, margined)
Arguments
- uiGroup
- margined

Return value

Description

Simple example
```harbour
uiGroupSetMargined( oGroup, 2 )
```
## uiGroupSetTitle (uiGroup, title)
Arguments
- uiGroup
- title

Return value

Description

Simple example
```harbour
uiGroupSetTitle( oGroup, "new title" )
```
## uiGroupTitle (uiGroup)
Arguments
- uiGroup

Return value

Description

Simple example
```harbour
uiGroupTitle( oGroup )
```
## Sample source code
```harbour
FUNCTION Main()
  LOCAL oWindow
  LOCAL oGroup
  LOCAL oForm

  IF ! HB_ISNULL( uiInit() )
    Alert( "Failed to initializa libui..." )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "Group example", 800, -1, .T. )
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
![Linux](../tutorial/uiGroup_Linux.png "With family Linux Elementary desktop Pantheon, based on GNOME")
