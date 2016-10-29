
#include "hbui.h"

HB_FUNC( UICONTROLDESTROY ) {
    void *c = hbui_param( 1 );

    if( c ) {
        uiControlDestroy( uiControl( c ) );
    }
}

HB_FUNC( UICONTROLHANDLE ) {
    void *c = hbui_param( 1 );

    if( c ) {
        hb_retnl( uiControlHandle( uiControl( c ) ) );
    }
}

HB_FUNC( UICONTROLPARENT ) {
    void *c = hbui_param( 1 );

    if( c ) {
        hbui_ret( uiControlParent( uiControl( c ) ) );
    }
}

HB_FUNC( UICONTROLSETPARENT ) {
    void *c = hbui_param( 1 );
    void *parent = hbui_param( 2 );

    if( c && parent ) {
        uiControlSetParent( uiControl( c ), uiControl( parent ) );
    }
}

HB_FUNC( UICONTROLTOPLEVEL ) {
    void *c = hbui_param( 1 );

    if( c ) {
        hb_retni( uiControlToplevel( uiControl( c ) ) );
    }
}

HB_FUNC( UICONTROLVISIBLE ) {
    void *c = hbui_param( 1 );

    if( c ) {
        hb_retni( uiControlVisible( uiControl( c ) ) );
    }
}

HB_FUNC( UICONTROLSHOW ) {
    void *c = hbui_param( 1 );

    if( c ) {
        uiControlShow( uiControl( c ) );
    }
}

HB_FUNC( UICONTROLHIDE ) {
    void *c = hbui_param( 1 );

    if( c ) {
        uiControlHide( uiControl( c ) );
    }
}

HB_FUNC( UICONTROLENABLED ) {
    void *c = hbui_param( 1 );

    if( c ) {
        hb_retni( uiControlEnabled( uiControl( c ) ) );
    }
}

HB_FUNC( UICONTROLENABLE ) {
    void *c = hbui_param( 1 );

    if( c ) {
        uiControlEnable( uiControl( c ) );
    }
}

HB_FUNC( UICONTROLDISABLE ) {
    void *c = hbui_param( 1 );

    if( c ) {
        uiControlDisable( uiControl( c ) );
    }
}

//uiControl *uiAllocControl(size_t size, uint32_t OSsig, uint32_t typesig, const char *typenamestr)
//{
//	uiControl *c;
//
//	c = (uiControl *) uiAlloc(size, typenamestr);
//	c->Signature = uiControlSignature;
//	c->OSSignature = OSsig;
//	c->TypeSignature = typesig;
//	return c;
//}

HB_FUNC( UIFREECONTROL ) {
    void *c = hbui_param( 1 );

    if( c ) {
        uiFreeControl( uiControl( c ) );
    }
}

HB_FUNC( UICONTROLVERIFYSETPARENT ) {
    void *c = hbui_param( 1 );
    void *parent = hbui_param( 2 );

    if( c && parent ) {
        uiControlVerifySetParent( uiControl( c ), uiControl( parent ) );
    }
}

HB_FUNC( UICONTROLENABLEDTOUSER ) {
    void *c = hbui_param( 1 );

    if( c ) {
        hb_retni( uiControlEnabledToUser( uiControl( c ) ) );
    }
}
