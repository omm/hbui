
#include "hbui.h"

static void onEditableComboboxChanged( uiEditableCombobox * control, void * data ) {
    HB_SYMBOL_UNUSED( control );
    hbui_onControlChanged( data );
}

//_UI_EXTERN void uiEditableComboboxAppend(uiEditableCombobox *c, const char *text);
HB_FUNC( UIEDITABLECOMBOBOXAPPEND ) {
    uiEditableCombobox *c = hbui_param( 1 );
    if( c ) {
        uiEditableComboboxAppend( c, hb_parc( 2 ) );
    }
}

//_UI_EXTERN char *uiEditableComboboxText(uiEditableCombobox *c);
HB_FUNC( UIEDITABLECOMBOBOXTEXT ) {
    uiEditableCombobox *c = hbui_param( 1 );
    if( c ) {
        hb_retc( uiEditableComboboxText( c ) );
    }
}

//_UI_EXTERN void uiEditableComboboxSetText(uiEditableCombobox *c, const char *text);
HB_FUNC( UIEDITABLECOMBOBOXSETTEXT ) {
    uiEditableCombobox *c = hbui_param( 1 );
    if( c ) {
        uiEditableComboboxSetText( c, hb_parc( 2 ) );
    }
}

//_UI_EXTERN void uiEditableComboboxOnChanged(uiEditableCombobox *c, void (*f)(uiEditableCombobox *c, void *data), void *data);
HB_FUNC( UIEDITABLECOMBOBOXONCHANGED ) {
    PHBUI_ITEM c = hbui_parptrGC( 1 );
    if( c && hbui_parSetEvalItem( &c, 2, 3 ) ) {
        uiEditableComboboxOnChanged( c->control, onEditableComboboxChanged, c );
    }
}

//_UI_EXTERN uiEditableCombobox *uiNewEditableCombobox(void);
HB_FUNC( UINEWEDITABLECOMBOBOX ) {
    hbui_ret( uiNewEditableCombobox() );
}
