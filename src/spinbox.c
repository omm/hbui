
#include "hbui.h"

static void onSpinboxChanged( uiSpinbox * control, void * data ) {
    HB_SYMBOL_UNUSED( control );
    hbui_onControlChanged( data );
}

//_UI_EXTERN int uiSpinboxValue(uiSpinbox *s);
HB_FUNC( UISPINBOXVALUE ) {
    uiSpinbox *s = hbui_param( 1 );
    if( s ) {
        hb_retni( uiSpinboxValue( s ) );
    }
}

//_UI_EXTERN void uiSpinboxSetValue(uiSpinbox *s, int value);
HB_FUNC( UISPINBOXSETVALUE ) {
    uiSpinbox *s = hbui_param( 1 );
    if( s ) {
        uiSpinboxSetValue( s, hb_parni( 2 ) );
    }
}

//_UI_EXTERN void uiSpinboxOnChanged(uiSpinbox *s, void (*f)(uiSpinbox *s, void *data), void *data);
HB_FUNC( UISPINBOXONCHANGED ) {
    PHBUI_ITEM s = hbui_parptrGC( 1 );
    if( s && hbui_parSetEvalItem( &s, 2, 3 ) ) {
        uiSpinboxOnChanged( s->control, onSpinboxChanged, s );
    }
}

//_UI_EXTERN uiSpinbox *uiNewSpinbox(int min, int max);
HB_FUNC( UINEWSPINBOX ) {
    hbui_ret( uiNewSpinbox( hb_parni( 1 ), hb_parni( 2 ) ) );
}
