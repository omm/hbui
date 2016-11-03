
#include "hbapi.h"
#include "hbapiitm.h"
#include "hbapierr.h"
#include "ui.h"

typedef struct {

   void * control;
   int mark;
   PHB_ITEM pParentItem;
   PHB_ITEM pItem;

} HBUI_ITEM, * PHBUI_ITEM;

PHBUI_ITEM hbui_gcAllocate( void * c );
PHBUI_ITEM hbui_parptrGC( int iParam );

void * hbui_param( int iParam );
void hbui_ret( void * c );
HB_BOOL hbui_parParentChild( int param1, int param2, PHBUI_ITEM * parent, PHBUI_ITEM * child );
