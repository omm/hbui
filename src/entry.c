
#include "hbui.h"

static void onEntryChanged( uiEntry * control, void * data ) {
    HB_SYMBOL_UNUSED( control );
    hbui_onControlChanged( data );
}

//_UI_EXTERN char *uiEntryText(uiEntry *e);
HB_FUNC( UIENTRYTEXT ) {
    uiEntry *e = hbui_param( 1 );
    if( e ) {
        hb_retc( uiEntryText( e ) );
    }
}

//_UI_EXTERN void uiEntrySetText(uiEntry *e, const char *text);
HB_FUNC( UIENTRYSETTEXT ) {
    uiEntry *e = hbui_param( 1 );
    if( e ) {
        uiEntrySetText( e, hb_parc( 2 ) );
    }
}

//_UI_EXTERN void uiEntryOnChanged(uiEntry *e, void (*f)(uiEntry *e, void *data), void *data);
HB_FUNC( UIENTRYONCHANGED ) {
    PHBUI_ITEM e = hbui_parptrGC( 1 );
    if( e && hbui_parSetEvalItem( &e, 2, 3 ) ) {
        uiEntryOnChanged( e->control, onEntryChanged, e );
    }
}

//_UI_EXTERN int uiEntryReadOnly(uiEntry *e);
HB_FUNC( UIENTRYREADONLY ) {
    uiEntry *e = hbui_param( 1 );
    if( e ) {
        hb_retni( uiEntryReadOnly( e ) );
    }
}

//_UI_EXTERN void uiEntrySetReadOnly(uiEntry *e, int readonly);
HB_FUNC( UIENTRYSETREADONLY ) {
    uiEntry *e = hbui_param( 1 );
    if( e ) {
        uiEntrySetReadOnly( e, hb_parni( 2 ) );
    }
}

//_UI_EXTERN uiEntry *uiNewEntry(void);
HB_FUNC( UINEWENTRY ) {
    hbui_ret( uiNewEntry() );
}

//_UI_EXTERN uiEntry *uiNewPasswordEntry(void);
HB_FUNC( UINEWPASSWORDENTRY ) {
    hbui_ret( uiNewPasswordEntry() );
}

//_UI_EXTERN uiEntry *uiNewSearchEntry(void);
HB_FUNC( UINEWSEARCHENTRY ) {
    hbui_ret( uiNewSearchEntry() );
}
