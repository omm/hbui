
#include "hbui.h"

//_UI_EXTERN void uiMenuItemEnable(uiMenuItem *m);
HB_FUNC( uiMenuItemEnable ) {
    uiMenuItem *m = hb_parptr( 1 );
    if( m ) {
        uiMenuItemEnable( m );
    }
}

//_UI_EXTERN void uiMenuItemDisable(uiMenuItem *m);
HB_FUNC( UIMENUITEMDISABLE ) {
    uiMenuItem *m = hb_parptr( 1 );
    if( m ) {
        uiMenuItemDisable( m );
    }
}

//_UI_EXTERN void uiMenuItemOnClicked(uiMenuItem *m, void (*f)(uiMenuItem *sender, uiWindow *window, void *data), void *data);

//_UI_EXTERN int uiMenuItemChecked(uiMenuItem *m);
HB_FUNC( UIMENUITEMCHECKED ) {
    uiMenuItem *m = hb_parptr( 1 );
    if( m ) {
        hb_retni( uiMenuItemChecked( m ) );
    }
}

//_UI_EXTERN void uiMenuItemSetChecked(uiMenuItem *m, int checked);
HB_FUNC( UIMENUITEMSETCHECKED ) {
    uiMenuItem *m = hb_parptr( 1 );
    if( m ) {
        int checked = hb_parni( 2 );
        uiMenuItemSetChecked( m, checked );
    }
}
