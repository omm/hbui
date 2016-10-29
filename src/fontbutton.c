
#include "hbui.h"

//_UI_EXTERN uiDrawTextFont *uiFontButtonFont(uiFontButton *b);
HB_FUNC( UIFONTBUTTONFONT ) {
    uiFontButton *b = hbui_param( 1 );
    if( b ) {
        hbui_ret( uiFontButtonFont( b ) );
    }
}

//_UI_EXTERN void uiFontButtonOnChanged(uiFontButton *b, void (*f)(uiFontButton *, void *), void *data);

//_UI_EXTERN uiFontButton *uiNewFontButton(void);
HB_FUNC( UINEWFONTBUTTON ) {
    hbui_ret( uiNewFontButton() );
}
