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
```
uiFreeInitError( err )
```
## uiInit (uiInitOptions)
Arguments
- uiInitOptions

Return value

Description

Simple example
```
IF ! HB_ISNULL( err := uiInit() )
    uiMsgBox( "Failed to initialize libui: " + err )
    RETURN NIL
ENDIF
```
## Sample source code
```


```
## Screenshots
![Linux](../tutorial/uiGrid_Linux.png "With family Linux Elementary desktop Pantheon, based on GNOME")
