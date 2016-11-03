
#include "hbui.h"

//_UI_EXTERN void uiTabAppend(uiTab *t, const char *name, uiControl *c);
HB_FUNC( UITABAPPEND ) {
    PHBUI_ITEM t;
    PHBUI_ITEM c;
    if( hbui_parParentChild( 1, 3, &t, &c ) ) {
        uiTabAppend( uiTab( t->control ), hb_parc( 2 ), uiControl( c->control ) );
    }
    else {
        hb_errRT_BASE_SubstR( EG_ARG, 0, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
    }
}

//_UI_EXTERN void uiTabInsertAt(uiTab *t, const char *name, int before, uiControl *c);
HB_FUNC( UITABINSERTAT ) {
    void *t = hbui_param( 1 );
    void *c = hbui_param( 4 );
    if( t && c ) {
        uiTabInsertAt( uiTab( t ), hb_parc( 2 ), hb_parni( 3 ), uiControl( c ) );
    }
    else {
        hb_errRT_BASE_SubstR( EG_ARG, 0, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
    }
}

//_UI_EXTERN void uiTabDelete(uiTab *t, int index);
HB_FUNC( UITABDELETE ) {
    void *t = hbui_param( 1 );
    if( t ) {
        uiTabDelete( uiTab( t ), hb_parni( 2 ) );
    }
}

//_UI_EXTERN int uiTabNumPages(uiTab *t);
HB_FUNC( UITABNUMPAGES ) {
    void *t = hbui_param( 1 );
    if( t ) {
        hb_retni( uiTabNumPages( uiTab( t ) ) );
    }
}

//_UI_EXTERN int uiTabMargined(uiTab *t, int page);
HB_FUNC( UITABMARGINED ) {
    void *t = hbui_param( 1 );
    if( t ) {
        hb_retni( uiTabMargined( uiTab( t ), hb_parni( 2 ) ) );
    }
}

//_UI_EXTERN void uiTabSetMargined(uiTab *t, int page, int margined);
HB_FUNC( UITABSETMARGINED ) {
    void *t = hbui_param( 1 );
    if( t ) {
        uiTabSetMargined( uiTab( t ), hb_parni( 2 ), hb_parni( 3 ) );
    }
}

//_UI_EXTERN uiTab *uiNewTab(void);
HB_FUNC( UINEWTAB ) {
    hbui_ret( uiNewTab() );
}
