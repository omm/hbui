
#include "hbui.h"

//_UI_EXTERN uiSeparator *uiNewHorizontalSeparator(void);
HB_FUNC( UINEWHORIZONTALSEPARATOR ) {
    hbui_ret( uiNewHorizontalSeparator() );
}

//_UI_EXTERN uiSeparator *uiNewVerticalSeparator(void);
HB_FUNC( UINEWVERTICALSEPARATOR ) {
    hbui_ret( uiNewVerticalSeparator() );
}
