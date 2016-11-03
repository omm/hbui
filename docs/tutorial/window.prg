/*
 * RJ
 */

FUNCTION Main()
  LOCAL oWindow

  IF ! HB_ISNULL( uiInit() )
    Alert( "Failed to initialize libui..." )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "main Window", 800, 600, .T. )

  ? "pointer:", oWindow

  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL
