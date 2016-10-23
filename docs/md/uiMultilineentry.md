# **uiMultilineentry**

## Description

## Functions
- [uiNewMultilineEntry()](#uinewmultilineentry)
- [uiNewNonWrappingMultilineEntry()](#uinewnonwrappingmultilineentry)
- [uiMultilineEntryAppend( uiMultilineEntry, text )](#uimultilineentryappend-uimultilineentry-text)
- [uiMultilineEntryOnChanged( uiMultilineEntry, meChanged, data)](#uimultilineentryonchanged-uimultilineentry-mechanged-data)
- [uiMultilineEntryReadOnly( uiMultilineEntry )](#uimultilineentryreadonly-uimultilineentry)
- [uiMultilineEntrySetReadOnly( uiMultilineEntry, readonly )](#uimultilineentrysetreadonly-uimultilineentry-readonly)
- [uiMultilineEntrySetText( uiMultilineEntry, text )](#uimultilineentrysettext-uimultilineentry-text)
- [uiMultilineEntryText( uiMultilineEntry )](#uimultilineentrytext-uimultilineentry)

## uiNewMultilineEntry()
Arguments

Return value

Description

Simple example
```harbour
oMultilineEntry := uiNewMultilineEntry()
```
## uiNewNonWrappingMultilineEntry()
Arguments

Return value

Description

Simple example
```harbour
oWrappingMultilineEntry() := uiNewNonWrappingMultilineEntry()
```
## uiMultilineEntryAppend (uiMultilineEntry, text)
Arguments
- uiMultilineEntry
- text

Return value

Description

Simple example
```harbour
uiMultilineEntryAppend( oMultilineEntry, "append" )
```
## uiMultilineEntryOnChanged (uiMultilineEntry, meChanged, data)
Arguments
- uiMultilineEntry
- meChanged
- data

Return value

Description

Simple example
```harbour
uiMultilineEntryOnChanged( oMultilineEntry, {|| meChanged() }, data )
```
## uiMultilineEntryReadOnly (uiMultilineEntry)
Arguments
- uiMultilineEntry

Return value

Description

Simple example
```harbour
uiMultilineEntryReadOnly( oMultilineEntry )
```
## uiMultilineEntrySetReadOnly (uiMultilineEntry, readonly)
Arguments
- uiMultilineEntry
- readonly

Return value

Description

Simple example
```harbour
uiMultilineEntrySetReadOnly( oMultilineEntry, 1 )
```
## uiMultilineEntrySetText (uiMultilineEntry, text)
Arguments
- uiMultilineEntry
- text

Return value

Description

Simple example
```harbour
uiMultilineEntrySetText( oMultilineEntry, "Set" )
```
## uiMultilineEntryText (uiMultilineEntry)
Arguments
- uiMultilineEntry

Return value

Description

Simple example
```harbour
uiMultilineEntryText( oMultilineEntry )
```
## Sample source code
```harbour


```
## Screenshots
![Linux](../tutorial/uiMultilineentry_Linux.png "With family Linux Elementary desktop Pantheon, based on GNOME")
