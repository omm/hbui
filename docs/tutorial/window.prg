/*
 * RJ
 */

FUNCTION Main()
  LOCAL error
  LOCAL oWindow

  IF ! HB_ISNULL( error := uiInit() )
    Alert( "Failed to initialize libui... " + error )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "main Window", 800, 600, .T. )

  ? "pointer:", oWindow

  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL
