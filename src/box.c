
#include "hbui.h"

//_UI_EXTERN void uiBoxAppend(uiBox *b, uiControl *child, int stretchy);
HB_FUNC( UIBOXAPPEND ) {
    PHBUI_ITEM b;
    PHBUI_ITEM child;
    if( hbui_parParentChild( 1, 2, &b, &child ) ) {
        HB_BOOL stretchy = hb_parl( 3 );
        uiBoxAppend( uiBox( b->control ), uiControl( child->control ), stretchy );
    }
}

//_UI_EXTERN void uiBoxDelete(uiBox *b, int index);
HB_FUNC( UIBOXDELETE ) {
    void *b = hbui_param( 1 );
    if( b ) {
        uiBoxDelete( uiBox( b ), hb_parni( 2 ) );
    }
}

//_UI_EXTERN int uiBoxPadded(uiBox *b);
HB_FUNC( UIBOXPADDED ) {
    void *b = hbui_param( 1 );
    if( b ) {
        hb_retni( uiBoxPadded( uiBox( b ) ) );
    }
}

//_UI_EXTERN void uiBoxSetPadded(uiBox *b, int padded);
HB_FUNC( UIBOXSETPADDED ) {
    void *b = hbui_param( 1 );
    if( b ) {
        HB_BOOL padded = hb_parl( 2 );
        uiBoxSetPadded( uiBox( b ), padded );
    }
}

//_UI_EXTERN uiBox *uiNewHorizontalBox(void);
HB_FUNC( UINEWHORIZONTALBOX ) {
    hbui_ret( uiNewHorizontalBox() );
}

//_UI_EXTERN uiBox *uiNewVerticalBox(void);
HB_FUNC( UINEWVERTICALBOX ) {
    hbui_ret( uiNewVerticalBox() );
}
