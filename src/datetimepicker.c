
#include "hbui.h"

//_UI_EXTERN uiDateTimePicker *uiNewDateTimePicker(void);
HB_FUNC( UINEWDATETIMEPICKER ) {
    hbui_ret( uiNewDateTimePicker() );
}

//_UI_EXTERN uiDateTimePicker *uiNewDatePicker(void);
HB_FUNC( UINEWDATEPICKER ) {
    hbui_ret( uiNewDatePicker() );
}

//_UI_EXTERN uiDateTimePicker *uiNewTimePicker(void);
HB_FUNC( UINEWTIMEPICKER ) {
    hbui_ret( uiNewTimePicker() );
}
