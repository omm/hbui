
#include "hbui.h"

//_UI_EXTERN char *uiCheckboxText(uiCheckbox *c);
HB_FUNC( UICHECKBOXTEXT ) {
    uiCheckbox *c = hbui_param( 1 );
    if( c ) {
        hb_retc( uiCheckboxText( c ) );
    }
}

//_UI_EXTERN void uiCheckboxSetText(uiCheckbox *c, const char *text);
HB_FUNC( UICHECKBOXSETTEXT ) {
    uiCheckbox *c = hbui_param( 1 );
    if( c ) {
        uiCheckboxSetText( c, hb_parc( 2 ) );
    }
}

//_UI_EXTERN void uiCheckboxOnToggled(uiCheckbox *c, void (*f)(uiCheckbox *c, void *data), void *data);

//_UI_EXTERN int uiCheckboxChecked(uiCheckbox *c);
HB_FUNC( UICHECKBOXCHECKED ) {
    uiCheckbox *c = hbui_param( 1 );
    if( c ) {
        hb_retni( uiCheckboxChecked( c ) );
    }
}
//_UI_EXTERN void uiCheckboxSetChecked(uiCheckbox *c, int checked);
HB_FUNC( UICHECKBOXSETCHECKED ) {
    uiCheckbox *c = hbui_param( 1 );
    if( c ) {
        uiCheckboxSetChecked( c, hb_parni( 2 ) );
    }
}

//_UI_EXTERN uiCheckbox *uiNewCheckbox(const char *text);
HB_FUNC( UINEWCHECKBOX ) {
    hbui_ret( uiNewCheckbox( hb_parc( 1 ) ) );
}
