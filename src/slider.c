
#include "hbui.h"

static void onSliderChanged( uiSlider * control, void * data ) {
    HB_SYMBOL_UNUSED( control );
    hbui_onControlChanged( data );
}

//_UI_EXTERN int uiSliderValue(uiSlider *s);
HB_FUNC( UISLIDERVALUE ) {
    uiSlider *s = hbui_param( 1 );
    if( s ) {
        hb_retni( uiSliderValue( s ) );
    }
}

//_UI_EXTERN void uiSliderSetValue(uiSlider *s, int value);
HB_FUNC( UISLIDERSETVALUE ) {
    uiSlider *s = hbui_param( 1 );
    if( s ) {
        uiSliderSetValue( s, hb_parni( 2 ) );
    }
}

//_UI_EXTERN void uiSliderOnChanged(uiSlider *s, void (*f)(uiSlider *s, void *data), void *data);
HB_FUNC( UISLIDERONCHANGED ) {
    PHBUI_ITEM s = hbui_parptrGC( 1 );
    if( s && hbui_parSetEvalItem( &s, 2, 3 ) ) {
        uiSliderOnChanged( uiSlider(s->control), onSliderChanged, s );
    }
}

//_UI_EXTERN uiSlider *uiNewSlider(int min, int max);
HB_FUNC( UINEWSLIDER ) {
    hbui_ret( uiNewSlider( hb_parni( 1 ), hb_parni( 2 ) ) );
}
