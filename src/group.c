
#include "hbui.h"

//_UI_EXTERN char *uiGroupTitle(uiGroup *g);
HB_FUNC( UIGROUPTITLE ) {
    uiGroup *g = hbui_param( 1 );
    if( g ) {
        hb_retc( uiGroupTitle( g ) );
    }
}

//_UI_EXTERN void uiGroupSetTitle(uiGroup *g, const char *title);
HB_FUNC( UIGROUPSETTITLE ) {
    uiGroup *g = hbui_param( 1 );
    if( g ) {
        uiGroupSetTitle( g, hb_parc( 2 ) );
    }
}

//_UI_EXTERN void uiGroupSetChild(uiGroup *g, uiControl *c);
HB_FUNC( UIGROUPSETCHILD ) {
    PHBUI_ITEM g;
    PHBUI_ITEM c;
    if( hbui_parParentChild( 1, 2, &g, &c ) ) {
        uiGroupSetChild( g->control, c->control );
    }
}

//_UI_EXTERN int uiGroupMargined(uiGroup *g);
HB_FUNC( UIGROUPMARGINED ) {
    uiGroup *g = hbui_param( 1 );
    if( g ) {
        hb_retni( uiGroupMargined( g ) );
    }
}

//_UI_EXTERN void uiGroupSetMargined(uiGroup *g, int margined);
HB_FUNC( UIGROUPSETMARGINED ) {
    uiGroup *g = hbui_param( 1 );
    if( g ) {
        HB_BOOL margined = hb_parl( 2 );
        uiGroupSetMargined( g, margined );
    }
}

//_UI_EXTERN uiGroup *uiNewGroup(const char *title);
HB_FUNC( UINEWGROUP ) {
    hbui_ret( uiNewGroup( hb_parc( 1 ) ) );
}
