
#include "hbui.h"

//_UI_EXTERN void uiGridAppend(uiGrid *g, uiControl *c, int left, int top, int xspan, int yspan, int hexpand, uiAlign halign, int vexpand, uiAlign valign);
HB_FUNC( UIGRIDAPPEND ) {
    uiGrid *g = hbui_param( 1 );
    uiControl *c = hbui_param( 2 );
    if( g ) {
        uiGridAppend( g, c, hb_parni( 3 ), hb_parni( 4 ), hb_parni( 5 ), hb_parni( 6 ), hb_parni( 7 ), hb_parni( 8 ), hb_parni( 9 ), hb_parni( 10 ) );
    }
}

//_UI_EXTERN void uiGridInsertAt(uiGrid *g, uiControl *c, uiControl *existing, uiAt at, int xspan, int yspan, int hexpand, uiAlign halign, int vexpand, uiAlign valign);
HB_FUNC( UIGRIDINSERTAT ) {
    uiGrid *g = hbui_param( 1 );
    uiControl *c = hbui_param( 2 );
    uiControl *existing = hbui_param( 3 );
    if( g ) {
        uiGridInsertAt( g, c, existing, hb_parni( 4 ), hb_parni( 5 ), hb_parni( 6 ), hb_parni( 7 ), hb_parni( 8 ), hb_parni( 9 ), hb_parni( 10 ) );
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
        uiGridSetPadded( g, hb_parni( 2 ) );
    }
}

//_UI_EXTERN uiGrid *uiNewGrid(void);
HB_FUNC( UINEWGRID ) {
    hbui_ret( uiNewGrid() );
}
