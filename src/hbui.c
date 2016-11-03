
#include "hbui.h"

static HB_GARBAGE_FUNC( hbui_gcFree )
{
    PHBUI_ITEM pItem = ( PHBUI_ITEM ) Cargo;

    if( pItem && pItem->control ) {
//        uiControlDestroy( uiControl( pItem->control ) );
        pItem->control = NULL;
    }
}

static HB_GARBAGE_FUNC( hbui_gcMark )
{
    PHBUI_ITEM pItem = ( PHBUI_ITEM ) Cargo;

    if( pItem ) {
        hb_gcMark( pItem );
    }
}

static const HB_GC_FUNCS s_gc_hbuiFuncs =
{
    hbui_gcFree,
    hbui_gcMark
};

void * hbui_param( int iParam )
{
    PHBUI_ITEM pItem = hbui_parptrGC( iParam );

    return ( pItem && pItem->control ) ? pItem->control : NULL;
}

HB_BOOL hbui_parParentChild( int iParent, int iChild, PHBUI_ITEM * parent, PHBUI_ITEM * child ) {
    *parent = hbui_parptrGC( iParent );
    *child = hbui_parptrGC( iChild );
    if( *parent && *child && (*child)->pItem == NULL ) {
        (*child)->pItem = hb_itemNew( hb_param( iChild, HB_IT_ANY ) );
        return HB_TRUE;
    }
    return HB_FALSE;
}

HB_BOOL hbui_parSetEvalItem( PHBUI_ITEM * control, int iEvalItem, int iData ) {
    PHB_ITEM pItemBlock = hb_param( iEvalItem, HB_IT_EVALITEM );
    if( *control && pItemBlock ) {
        PHB_ITEM pItemData = hb_param( iData, HB_IT_ANY );
        (*control)->pEvalItem = hb_itemNew( pItemBlock );
        (*control)->pData = pItemData ? hb_itemNew( pItemData ) : NULL;
        return HB_TRUE;
    }
    return HB_FALSE;
}

PHBUI_ITEM hbui_parptrGC( int iParam )
{
    PHBUI_ITEM pItem = ( PHBUI_ITEM ) hb_parptrGC( &s_gc_hbuiFuncs, iParam );

    return pItem ? pItem : NULL;
}

PHBUI_ITEM hbui_gcAllocate( void * c )
{
    PHBUI_ITEM pItem = ( PHBUI_ITEM ) hb_gcAllocate( sizeof( HBUI_ITEM ), &s_gc_hbuiFuncs );

    pItem->control = c;
    pItem->pData = NULL;
    pItem->pEvalItem = NULL;
    pItem->pItem = NULL;
    pItem->pParentItem = NULL;
    pItem->mark = 0;

    return pItem;
}

void hbui_ret( void * c ) {
    if( c ) {
        hb_retptrGC( hbui_gcAllocate( c ) );
    }
}

extern HB_COUNTER hb_gcRefCount( void * pAlloc );

HB_FUNC( HB_GCREFCOUNT ) {
    PHBUI_ITEM pItem = hbui_parptrGC( 1 );
    if( pItem ) {
        hb_retni( hb_gcRefCount( pItem ) );
    }
    else {
        hb_retni( -1 );
    }
}

void hbui_onControlChanged( PHBUI_ITEM pItem ) {

    if( pItem && hb_vmRequestReenter() ) {
        hb_vmPushEvalSym();
        hb_vmPush( pItem->pEvalItem );
        hb_vmPush( pItem->pItem );
        if( pItem->pData ) {
            hb_vmPush( pItem->pData );
            hb_vmSend( 2 );
        }
        else {
            hb_vmSend( 1 );
        }

        hb_vmRequestRestore();
    }
}
