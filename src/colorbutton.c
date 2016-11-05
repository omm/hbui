
#include "hbui.h"

static void onColorButtonChanged( uiColorButton * control, void * data ) {
    HB_SYMBOL_UNUSED( control );
    hbui_onControlChanged( data );
}

//_UI_EXTERN void uiColorButtonColor(uiColorButton *b, double *r, double *g, double *bl, double *a);
HB_FUNC( UICOLORBUTTONCOLOR ) {
    uiColorButton *b = hbui_param( 1 );
    if( b && HB_IS_BYREF( 2 ) && HB_IS_BYREF( 3 ) && HB_IS_BYREF( 4 ) && HB_IS_BYREF( 5 ) ) {
        double r;
        double g;
        double bl;
        double a;
        uiColorButtonColor( b, &r, &g, &bl, &a );
        hb_stornd( r, 2 );
        hb_stornd( g, 3 );
        hb_stornd( bl, 4 );
        hb_stornd( a, 5 );
    }
}

//_UI_EXTERN void uiColorButtonSetColor(uiColorButton *b, double r, double g, double bl, double a);
HB_FUNC( UICOLORBUTTONSETCOLOR ) {
    uiColorButton *b = hbui_param( 1 );
    if( b ) {
        uiColorButtonSetColor( b, hb_parnd( 2 ), hb_parnd( 3 ), hb_parnd( 4 ), hb_parnd( 5 ) );
    }
}

//_UI_EXTERN void uiColorButtonOnChanged(uiColorButton *b, void (*f)(uiColorButton *, void *), void *data);
HB_FUNC( UICOLORBUTTONONCHANGED ) {
    PHBUI_ITEM b = hbui_parptrGC( 1 );
    if( b && hbui_parSetEvalItem( &b, 2, 3 ) ) {
        uiColorButtonOnChanged( b->control, onColorButtonChanged, b );
    }
}

//_UI_EXTERN uiColorButton *uiNewColorButton(void);
HB_FUNC( UINEWCOLORBUTTON ) {
    hbui_ret( uiNewColorButton() );
}
