
#include "hbui.h"

//_UI_EXTERN void uiComboboxAppend(uiCombobox *c, const char *text);
HB_FUNC( UICOMBOBOXAPPEND ) {
    uiCombobox *c = hbui_param( 1 );
    if( c ) {
        uiComboboxAppend( c, hb_parc( 2 ) );
    }
}

//_UI_EXTERN int uiComboboxSelected(uiCombobox *c);
HB_FUNC( UICOMBOBOXSELECTED ) {
    uiCombobox *c = hbui_param( 1 );
    if( c ) {
        hb_retni( uiComboboxSelected( c ) );
    }
}

//_UI_EXTERN void uiComboboxSetSelected(uiCombobox *c, int n);
HB_FUNC( UICOMBOBOXSETSELECTED ) {
    uiCombobox *c = hbui_param( 1 );
    if( c ) {
        uiComboboxSetSelected( c, hb_parni( 2 ) );
    }
}

//_UI_EXTERN void uiComboboxOnSelected(uiCombobox *c, void (*f)(uiCombobox *c, void *data), void *data);

//_UI_EXTERN uiCombobox *uiNewCombobox(void);
HB_FUNC( UINEWCOMBOBOX ) {
    hbui_ret( uiNewCombobox() );
}
