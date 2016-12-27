# **stddialog**

## Description <br>
Standard Dialogs

## Functions
- [uiMsgBox( uiWindow, title, description )](#uimsgbox-uiwindow-title-description)
- [uiMsgBoxError( uiWindow, title, description )](#uimsgboxerror-uiwindow-title-description)
- [uiOpenFile( uiWindow )](#uiopenfile-uiwindow)
- [uiSaveFile( uiWindow )](#uisavefile-uiwindow)

## uiMsgBox (uiWindow, title, description)
Arguments
- uiWindow
- title 
- description

Return value

Description <br>
The uiMsgBox function provides a modal dialog for informing the user or for asking the user a question and receiving an answer.

Simple example
```harbour
uiMsgBox( oWindow, "This is a normal message box.", "More detailed information can be shown here." )
```
## uiMsgBoxError (uiWindow, title, description)
Arguments
- uiWindow
- title 
- description

Return value

Description <br>
An error message alerts users of a problem that has already occurred. By contrast, a warning message alerts users of a condition that might cause a problem in the future. Error messages can be presented using modal dialog boxes, in-place messages, notifications, or balloons.

Simple example
```harbour
uiMsgBoxError( oWindow, "This message box describes an error.", "More detailed information can be shown here." )
```
## uiOpenFile (uiWindow)
Arguments
- uiWindow

Return value

Description

Simple example
```harbour
oFilename := uiOpenFile( oWindow )
```
## uiSaveFile (uiWindow)
Arguments
- uiWindow

Return value

Description

Simple example
```harbour
oFilename := uiSaveFile( oWindow )
```
## Sample source code
```harbour

```