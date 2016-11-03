
#include "hbvm.h"
#include "hbapi.h"
#include "hbapiitm.h"
#include "hbapierr.h"
#include "hbstack.h"
#include "ui.h"

typedef struct {

   void * control;
   int mark;
   PHB_ITEM pEvalItem;
   PHB_ITEM pParentItem;
   PHB_ITEM pItem;
   PHB_ITEM pData;

} HBUI_ITEM, * PHBUI_ITEM;

PHBUI_ITEM hbui_gcAllocate( void * c );
PHBUI_ITEM hbui_parptrGC( int iParam );

void * hbui_param( int iParam );
void hbui_ret( void * c );
void hbui_onControlChanged( PHBUI_ITEM pItem );

HB_BOOL hbui_parParentChild( int iParent, int iChild, PHBUI_ITEM * parent, PHBUI_ITEM * child );
HB_BOOL hbui_parSetEvalItem( PHBUI_ITEM * control, int iEvalItem, int iData );
