
#include "hbapi.h"
#include "hbapierr.h"
#include "ui.h"

//_UI_EXTERN void uiTabAppend(uiTab *t, const char *name, uiControl *c);
HB_FUNC( UITABAPPEND ) {
    void *t = hb_parptr( 1 );
    void *c = hb_parptr( 3 );
    if( t && c ) {
        uiTabAppend( uiTab( t ), hb_parc( 2 ), uiControl( c ) );
    }
    else {
        hb_errRT_BASE_SubstR( EG_ARG, 0, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
    }
}

//_UI_EXTERN void uiTabInsertAt(uiTab *t, const char *name, int before, uiControl *c);
HB_FUNC( UITABINSERTAT ) {
    void *t = hb_parptr( 1 );
    if( t ) {
        uiTabInsertAt( uiTab( t ), hb_parc( 2 ), hb_parni( 3 ), uiControl( hb_parptr( 4 ) ) );
    }
}

//_UI_EXTERN void uiTabDelete(uiTab *t, int index);
HB_FUNC( UITABDELETE ) {
    void *t = hb_parptr( 1 );
    if( t ) {
        uiTabDelete( uiTab( t ), hb_parni( 2 ) );
    }
}

//_UI_EXTERN int uiTabNumPages(uiTab *t);
HB_FUNC( UITABNUMPAGES ) {
    void *t = hb_parptr( 1 );
    if( t ) {
        hb_retni( uiTabNumPages( uiTab( t ) ) );
    }
}

//_UI_EXTERN int uiTabMargined(uiTab *t, int page);
HB_FUNC( UITABMARGINED ) {
    void *t = hb_parptr( 1 );
    if( t ) {
        hb_retni( uiTabMargined( uiTab( t ), hb_parni( 2 ) ) );
    }
}

//_UI_EXTERN void uiTabSetMargined(uiTab *t, int page, int margined);
HB_FUNC( UITABSETMARGINED ) {
    void *t = hb_parptr( 1 );
    if( t ) {
        uiTabSetMargined( uiTab( t ), hb_parni( 2 ), hb_parni( 3 ) );
    }
}

//_UI_EXTERN uiTab *uiNewTab(void);
HB_FUNC( UINEWTAB ) {
    hb_retptr( uiNewTab() );
}
