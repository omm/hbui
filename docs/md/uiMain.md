# **uiMain**

## Description

## Functions
- [uiFreeInitError( err )](#uifreeiniterror-err)
- [uiInit( uiInitOptions )](#uiinit-uiinitoptions)

## uiFreeInitError (err)
Arguments
- err

Return value

Description

Simple example
```harbour
uiFreeInitError( err )
```
## uiInit (uiInitOptions)
Arguments
- uiInitOptions

Return value

Description

Simple example
```harbour
  IF ! HB_ISNULL( error := uiInit() )
    Alert( "Failed to initializa libui... " + error )
    RETURN NIL
  ENDIF
```
## Sample source code
```harbour


```
## Screenshots
![Linux](../tutorial/uiGrid_Linux.png "With family Linux Elementary desktop Pantheon, based on GNOME")
