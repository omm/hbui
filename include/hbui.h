
#include "hbapi.h"
#include "ui.h"

typedef struct {

   void * control;

} HBUI_ITEM;

void * hbui_param( int iParam );
void * hbui_paramChild( int iParam );
void hbui_ret( void * c );
