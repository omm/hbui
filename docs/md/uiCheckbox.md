# **uiCheckbox**
---

### Description

---
### Functions

- [uiNewCheckbox( text )](#uinewcheckbox-text)
- [uiCheckboxChecked( uiCheckbox )](#uicheckboxchecked-uicheckbox)
- [uiCheckboxOnToggled( uiCheckbox, uiCheckbox, data )](#uicheckboxontoggled-uicheckbox-uicheckbox-data)
- [uiCheckboxSetChecked( uiCheckbox, checked )](#uicheckboxsetchecked-uicheckbox-checked)
- [uiCheckboxSetText( uiCheckbox, text )](#uicheckboxsettext-uicheckbox-text)
- [uiCheckboxText( uiCheckbox )](#uicheckboxtext-uicheckbox)

---
#### uiNewCheckbox (text)
Arguments
- text

Return value

Description

Simple example
```
oCheckbox := uiNewCheckbox( "GitHub" )
```
---
#### uiCheckboxChecked (uiCheckbox)
Arguments
- uiCheckbox

Return value

Description

Simple example
```
uiCheckboxChecked( oCheckbox )
```
---
#### uiCheckboxOnToggled (uiCheckbox, uiCheckbox, data)
Arguments
- uiCheckbox
- uiCheckbox
- data

Return value

Description

Simple example
```
uiCheckboxOnToggled( uiCheckbox, toggleSpaced, NULL )
```
---
#### uiCheckboxSetChecked (uiCheckbox, checked)
Arguments
- uiCheckbox
- checked

Return value

Description

Simple example
```
uiCheckboxSetChecked( uiCheckbox, 1 )
```
---
#### uiCheckboxSetText (uiCheckbox, text)
Arguments
- uiCheckbox
- text

Return value

Description

Simple example
```
uiCheckboxSetText( oCheckbox, "it's free" )
```
---
#### uiCheckboxText (uiCheckbox)
Arguments
- uiCheckbox

Return value

Description

Simple example
```
uiCheckboxText( oCheckbox )
```
---
### Sample source code
```
FUNCTION Main()
  LOCAL oWindow
  LOCAL oCheckbox

  IF ! HB_ISNULL( uiInit() )
    Alert( "Failed to initializa libui..." )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "CheckBox example", 800, 600, .T. )
  uiWindowSetMargined( oWindow, 1 )

  oCheckbox := uiNewCheckbox( "GitHub" )
  uiCheckboxSetChecked( oCheckbox, 1 )

  uiWindowSetChild( oWindow, oCheckbox )
  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL
```

### Screenshots
![Linux](../tutorial/uiCheckbox_Linux.png "With family Linux Elementary desktop Pantheon, based on GNOME")
