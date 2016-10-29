
#include "hbui.h"

HB_FUNC( UIINIT ) {
	uiInitOptions options;
	const char *err;

	memset(&options, 0, sizeof (uiInitOptions));
	hb_retc(err = uiInit(&options));

    if (err != NULL) {
		uiFreeInitError(err);
	}
}

HB_FUNC( UIMAIN ) {
    uiMain();
}

HB_FUNC( UIUNINIT ) {
    uiUninit();
}
