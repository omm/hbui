
#include "hbui.h"

static HB_GARBAGE_FUNC( hbui_destructor )
{
   HBUI_ITEM * pItem = ( HBUI_ITEM * ) Cargo;

   if( pItem->control )
   {
      uiControlDestroy( uiControl( pItem->control ) );
      pItem->control = NULL;
   }
}

static const HB_GC_FUNCS s_gc_hbuiFuncs =
{
   hbui_destructor,
   hb_gcDummyMark
};

void * hbui_param( int iParam )
{
   HBUI_ITEM * pItem = ( HBUI_ITEM * ) hb_parptrGC( &s_gc_hbuiFuncs, iParam );

   return ( pItem && pItem->control ) ? pItem->control : NULL;
}

void * hbui_paramChild( int iParam )
{
   HBUI_ITEM * pItem = ( HBUI_ITEM * ) hb_parptrGC( &s_gc_hbuiFuncs, iParam );

   return ( pItem && pItem->control ) ? pItem->control : NULL;
}

static HBUI_ITEM * hbui_new( void * c )
{
   HBUI_ITEM * pItem = ( HBUI_ITEM * ) hb_gcAllocate( sizeof( HBUI_ITEM ), &s_gc_hbuiFuncs );

   pItem->control = c;

   return pItem;
}

void hbui_ret( void * c ) {
    if( c ) {
        hb_retptrGC( hbui_new( c ) );
    }
}
