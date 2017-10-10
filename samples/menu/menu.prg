
#include "hbui.ch"

FUNCTION Main()

   LOCAL cError
   LOCAL oWindow

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN NIL
   ENDIF

   MenuCreate()

   oWindow := uiNewWindow( "Welcome to Harbour HBUI (https://github.com/rjopek/hbui)", 640, 480, 1 )
   uiWindowSetMargined( oWindow, 1 )

   uiControlShow( oWindow )

   uiMain()
   uiUninit()

   RETURN ( NIL )

FUNCTION MenuCreate()

   LOCAL oMenu
   LOCAL oMenuAppendItem

   oMenu := uiNewMenu( "File" )

   oMenuAppendItem := uiMenuAppendItem( oMenu, "New" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Open..." )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Save" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Save As..." )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   uiMenuAppendSeparator( oMenu )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Print..." )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Page Setup..." )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Print Setup..." )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   uiMenuAppendSeparator( oMenu )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Exit            Alt+F4" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )

   oMenu := uiNewMenu( "Edit" )

   oMenuAppendItem := uiMenuAppendItem( oMenu, "Undo          Ctrl+Z" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Cut           Ctrl+X" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Copy          Ctrl+C" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Paste         Ctrl+V" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Clear" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   uiMenuAppendSeparator( oMenu )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Insert" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Delete        DEL" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   uiMenuAppendSeparator( oMenu )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Previous" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Next" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Go To Top     Ctrl+HOME" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Go To...      F5" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Go To Bottom  Ctrl+END" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   uiMenuAppendSeparator( oMenu )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Find          Alt+F3" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Find Next     F3" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )

   oMenu := uiNewMenu( "View" )

   oMenuAppendItem := uiMenuAppendItem( oMenu, "Form               Shift+F2" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Table              F2" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   uiMenuAppendSeparator( oMenu )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "All Records" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Select Records..." )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )

   oMenu := uiNewMenu( "Help" )

   oMenuAppendItem := uiMenuAppendItem( oMenu, "Index" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Commands    F1" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "Using help" )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )
   uiMenuAppendSeparator( oMenu )
   oMenuAppendItem := uiMenuAppendItem( oMenu, "About..." )
   uiMenuItemOnClicked( oMenuAppendItem, NIL, NIL )

   RETURN ( NIL )
