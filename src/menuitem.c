
#include "hbui.h"

static void onMenuItemClicked( uiMenuItem * control, uiWindow * window, void * data ) {
    HB_SYMBOL_UNUSED( control );
    HB_SYMBOL_UNUSED( window );
    hbui_onControlChanged( data );
}

//_UI_EXTERN void uiMenuItemEnable(uiMenuItem *m);
HB_FUNC( UIMENUITEMENABLE ) {
    uiMenuItem *m = hbui_param( 1 );
    if( m ) {
        uiMenuItemEnable( m );
    }
}

//_UI_EXTERN void uiMenuItemDisable(uiMenuItem *m);
HB_FUNC( UIMENUITEMDISABLE ) {
    uiMenuItem *m = hbui_param( 1 );
    if( m ) {
        uiMenuItemDisable( m );
    }
}

//_UI_EXTERN void uiMenuItemOnClicked(uiMenuItem *m, void (*f)(uiMenuItem *sender, uiWindow *window, void *data), void *data);
HB_FUNC( UIMENUITEMONCLICKED ) {
    PHBUI_ITEM m = hbui_parptrGC( 1 );
    if( m && hbui_parSetEvalItem( &m, 2, 3 ) ) {
        uiMenuItemOnClicked( m->control, onMenuItemClicked, m );
    }
}

//_UI_EXTERN int uiMenuItemChecked(uiMenuItem *m);
HB_FUNC( UIMENUITEMCHECKED ) {
    uiMenuItem *m = hbui_param( 1 );
    if( m ) {
        hb_retni( uiMenuItemChecked( m ) );
    }
}

//_UI_EXTERN void uiMenuItemSetChecked(uiMenuItem *m, int checked);
HB_FUNC( UIMENUITEMSETCHECKED ) {
    uiMenuItem *m = hbui_param( 1 );
    if( m ) {
        int checked = hb_parni( 2 );
        uiMenuItemSetChecked( m, checked );
    }
}
