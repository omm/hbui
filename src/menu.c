
#include "hbui.h"

//_UI_EXTERN uiMenuItem *uiMenuAppendItem(uiMenu *m, const char *name);
HB_FUNC( UIMENUAPPENDITEM ) {
    uiMenuItem *m = uiMenuAppendItem( hb_parptr( 1 ), hb_parc( 2 ) );
    hb_retptr( m );
}

//_UI_EXTERN uiMenuItem *uiMenuAppendCheckItem(uiMenu *m, const char *name);
HB_FUNC( UIMENUAPPENDCHECKITEM ) {
    uiMenuItem *m = uiMenuAppendCheckItem( hb_parptr( 1 ), hb_parc( 2 ) );
    hb_retptr( m );
}

//_UI_EXTERN uiMenuItem *uiMenuAppendQuitItem(uiMenu *m);
HB_FUNC( UIMENUAPPENDQUITITEM ) {
    uiMenuItem *m = uiMenuAppendQuitItem( hb_parptr( 1 ) );
    hb_retptr( m );
}

//_UI_EXTERN uiMenuItem *uiMenuAppendPreferencesItem(uiMenu *m);
HB_FUNC( UIMENUAPPENDPREFERENCESITEM ) {
    uiMenuItem *m = uiMenuAppendPreferencesItem( hb_parptr( 1 ) );
    hb_retptr( m );
}

//_UI_EXTERN uiMenuItem *uiMenuAppendAboutItem(uiMenu *m);
HB_FUNC( UIMENUAPPENDABOUTITEM ) {
    uiMenuItem *m = uiMenuAppendAboutItem( hb_parptr( 1 ) );
    hb_retptr( m );
}

//_UI_EXTERN void uiMenuAppendSeparator(uiMenu *m);
HB_FUNC( UIMENUAPPENDSEPARATOR ) {
    uiMenuAppendSeparator( hb_parptr( 1 ) );
}

//_UI_EXTERN uiMenu *uiNewMenu(const char *name);
HB_FUNC( UINEWMENU ) {
    const char *name = hb_parc( 1 );
    uiMenu *m = uiNewMenu( name );
    hb_retptr( m );
}
