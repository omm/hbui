
#include "hbui.h"

//_UI_EXTERN char *uiLabelText(uiLabel *l);
HB_FUNC( UILABELTEXT ) {
    uiLabel *l = hbui_param( 1 );
    if( l ) {
        hb_retc( uiLabelText( l ) );
    }
}

//_UI_EXTERN void uiLabelSetText(uiLabel *l, const char *text);
HB_FUNC( UILABELSETTEXT ) {
    uiLabel *l = hbui_param( 1 );
    if( l ) {
        uiLabelSetText( l, hb_parc( 2 ) );
    }
}

//_UI_EXTERN uiLabel *uiNewLabel(const char *text);
HB_FUNC( UINEWLABEL ) {
    hbui_ret( uiNewLabel( hb_parc( 1 ) ) );
}
