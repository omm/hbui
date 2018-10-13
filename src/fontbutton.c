
#include "hbui.h"

static void onFontButtonChanged( uiFontButton * control, void * data ) {
    HB_SYMBOL_UNUSED( control );
    hbui_onControlChanged( data );
}

//_UI_EXTERN void uiFontButtonFont(uiFontButton *b, uiFontDescriptor *desc);
HB_FUNC( UIFONTBUTTONFONT ) {
    uiFontButton *b = hbui_param( 1 );
    if( b ) {
        uiFontDescriptor fontDescriptor;
        uiFontButtonFont( b, &fontDescriptor );
        uiFreeFontButtonFont( &fontDescriptor );
    }
}

//_UI_EXTERN void uiFontButtonOnChanged(uiFontButton *b, void (*f)(uiFontButton *, void *), void *data);
HB_FUNC( UIFONTBUTTONONCHANGED ) {
    PHBUI_ITEM b = hbui_parptrGC( 1 );
    if( b && hbui_parSetEvalItem( &b, 2, 3 ) ) {
        uiFontButtonOnChanged( b->control, onFontButtonChanged, b );
    }
}

//_UI_EXTERN uiFontButton *uiNewFontButton(void);
HB_FUNC( UINEWFONTBUTTON ) {
    hbui_ret( uiNewFontButton() );
}
