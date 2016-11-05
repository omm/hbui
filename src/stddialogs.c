
#include "hbui.h"

//_UI_EXTERN char *uiOpenFile(uiWindow *parent);
HB_FUNC( UIOPENFILE ) {
    hb_retc( uiOpenFile( hbui_param( 1 ) ) );
}

//_UI_EXTERN char *uiSaveFile(uiWindow *parent);
HB_FUNC( UISAVEFILE ) {
    hb_retc( uiSaveFile( hbui_param( 1 ) ) );
}

//_UI_EXTERN void uiMsgBox(uiWindow *parent, const char *title, const char *description);
HB_FUNC( UIMSGBOX ) {
    uiWindow *parent = hbui_param( 1 );
    if( parent ) {
        uiMsgBox( parent, hb_parc( 2 ), hb_parc( 3 ) );
    }
}
//_UI_EXTERN void uiMsgBoxError(uiWindow *parent, const char *title, const char *description);
HB_FUNC( UIMSGBOXERROR ) {
    uiWindow *parent = hbui_param( 1 );
    if( parent ) {
        uiMsgBoxError( parent, hb_parc( 2 ), hb_parc( 3 ) );
    }
}
