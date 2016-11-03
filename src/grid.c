
#include "hbui.h"

//_UI_EXTERN void uiGridAppend(uiGrid *g, uiControl *c, int left, int top, int xspan, int yspan, int hexpand, uiAlign halign, int vexpand, uiAlign valign);
HB_FUNC( UIGRIDAPPEND ) {
    PHBUI_ITEM g;
    PHBUI_ITEM c;
    if( hbui_parParentChild( 1, 2, &g, &c ) ) {
        HB_BOOL hexpand = hb_parl( 7 );
        HB_BOOL vexpand = hb_parl( 9 );
        uiGridAppend( g->control, c->control, hb_parni( 3 ), hb_parni( 4 ), hb_parni( 5 ), hb_parni( 6 ), hexpand, hb_parni( 8 ), vexpand, hb_parni( 10 ) );
    }
}

//_UI_EXTERN void uiGridInsertAt(uiGrid *g, uiControl *c, uiControl *existing, uiAt at, int xspan, int yspan, int hexpand, uiAlign halign, int vexpand, uiAlign valign);
HB_FUNC( UIGRIDINSERTAT ) {
    PHBUI_ITEM g;
    PHBUI_ITEM c;
    uiControl *existing = hbui_param( 3 );
    if( hbui_parParentChild( 1, 2, &g, &c ) ) {
        HB_BOOL hexpand = hb_parl( 7 );
        HB_BOOL vexpand = hb_parl( 9 );
        uiGridInsertAt( g->control, c->control, existing, hb_parni( 4 ), hb_parni( 5 ), hb_parni( 6 ), hexpand, hb_parni( 8 ), vexpand, hb_parni( 10 ) );
    }
}

//_UI_EXTERN int uiGridPadded(uiGrid *g);
HB_FUNC( UIGRIDPADDED ) {
    uiGrid *g = hbui_param( 1 );
    if( g ) {
        hb_retni( uiGridPadded( g ) );
    }
}

//_UI_EXTERN void uiGridSetPadded(uiGrid *g, int padded);
HB_FUNC( UIGRIDSETPADDED ) {
    uiGrid *g = hbui_param( 1 );
    if( g ) {
        HB_BOOL padded = hb_parl( 2 );
        uiGridSetPadded( g, padded );
    }
}

//_UI_EXTERN uiGrid *uiNewGrid(void);
HB_FUNC( UINEWGRID ) {
    hbui_ret( uiNewGrid() );
}
