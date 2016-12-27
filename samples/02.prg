FUNCTION Main()
  LOCAL error
  LOCAL oWindow
  LOCAL oVerticalBox1
  LOCAL oHorizontalBox
  LOCAL oGroup
  LOCAL oVerticalBox2
  LOCAL oEntry
  LOCAL oVerticalBox3
  LOCAL oSpinbox
  LOCAL oSlider
  LOCAL oProgressBar
  LOCAL oCombobox
  LOCAL oEditableCombobox
  LOCAL oRadioButtons
  LOCAL oTab

  IF ! HB_ISNULL( error := uiInit() )
    Alert( "Failed to initialize libui... " + error )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "Welcome to Harbour HBUI (https://github.com/rjopek/HBUI)", 640, 480, 1 )
  uiWindowSetMargined( oWindow, 1 )
//	uiWindowOnClosing( oWindow, onClosing(), NIL )

  oVerticalBox1 := uiNewVerticalBox()
  uiBoxSetPadded( oVerticalBox1, 1 )

  oHorizontalBox := uiNewHorizontalBox()
  uiBoxSetPadded( oHorizontalBox, 1 )
  uiBoxAppend( oVerticalBox1, oHorizontalBox, 1 )

  oGroup := uiNewGroup( "Basic Controls" )
  uiGroupSetMargined( oGroup, 1 )
  uiBoxAppend( oHorizontalBox, oGroup, 0 )

  oVerticalBox2 := uiNewVerticalBox()
  uiBoxSetPadded( oVerticalBox2, 1 )
  uiGroupSetChild( oGroup, oVerticalBox2 )

  uiBoxAppend( oVerticalBox2, uiNewButton( "Button" ), 0 )
  uiBoxAppend( oVerticalBox2, uiNewCheckbox( "Checkbox" ), 0 )

  oEntry := uiNewEntry()
  uiEntrySetText( oEntry, "oEntry" )
  uiBoxAppend( oVerticalBox2, oEntry,	0 )
  uiBoxAppend( oVerticalBox2, uiNewLabel( "Label" ), 0 )

  uiBoxAppend( oVerticalBox2, uiNewHorizontalSeparator(), 0 )

  uiBoxAppend( oVerticalBox2, uiNewDatePicker(), 0 )
  uiBoxAppend( oVerticalBox2, uiNewTimePicker(), 0 )
  uiBoxAppend( oVerticalBox2, uiNewDateTimePicker(), 0 )

  uiBoxAppend( oVerticalBox2, uiNewFontButton(), 0 )

  uiBoxAppend( oVerticalBox2, uiNewColorButton(), 0 )

  oVerticalBox3 := uiNewVerticalBox()
  uiBoxSetPadded( oVerticalBox3, 1 )
  uiBoxAppend( oHorizontalBox, oVerticalBox3, 1 )

  oGroup := uiNewGroup( "Numbers" )
  uiGroupSetMargined( oGroup, 1 )
  uiBoxAppend( oVerticalBox3, oGroup, 0 )

  oVerticalBox2 := uiNewVerticalBox()
  uiBoxSetPadded( oVerticalBox2, 1 )
  uiGroupSetChild( oGroup, oVerticalBox2 )

  oSpinbox := uiNewSpinbox( 0, 100 )
//  uiSpinboxOnChanged( oSpinbox, onSpinboxChanged(), NIL )
  uiBoxAppend( oVerticalBox2, oSpinbox, 0 )

  oSlider := uiNewSlider( 0, 100 )
//  uiSliderOnChanged( oSlider, onSliderChanged(), NIL )
  uiBoxAppend( oVerticalBox2, oSlider, 0 )

  oProgressBar := uiNewProgressBar()
  uiBoxAppend( oVerticalBox2, oProgressBar, 0 )

  oGroup := uiNewGroup( "Lists" )
  uiGroupSetMargined( oGroup, 1 )
  uiBoxAppend( oVerticalBox3, oGroup, 0 )

  oVerticalBox2 := uiNewVerticalBox()
  uiBoxSetPadded( oVerticalBox2, 1 )
  uiGroupSetChild( oGroup, oVerticalBox2 )

  oCombobox := uiNewCombobox()
  uiComboboxAppend( oCombobox, "Combobox Item 1" )
  uiComboboxAppend( oCombobox, "Combobox Item 2" )
  uiComboboxAppend( oCombobox, "Combobox Item 3" )
  uiBoxAppend( oVerticalBox2, oCombobox, 0 )

  oEditableCombobox := uiNewEditableCombobox()
  uiEditableComboboxAppend( oEditableCombobox, "Editable Item 1" )
  uiEditableComboboxAppend( oEditableCombobox, "Editable Item 2" )
  uiEditableComboboxAppend( oEditableCombobox, "Editable Item 3" )
  uiBoxAppend( oVerticalBox2, oEditableCombobox, 0 )

  oRadioButtons := uiNewRadioButtons()
  uiRadioButtonsAppend( oRadioButtons, "Radio Button 1" )
  uiRadioButtonsAppend( oRadioButtons, "Radio Button 2" )
  uiRadioButtonsAppend( oRadioButtons, "Radio Button 3" )
  uiBoxAppend( oVerticalBox2, oRadioButtons, 1 )

  oTab := uiNewTab()
  uiTabAppend( oTab, "Page 1", uiNewHorizontalBox() )
  uiTabAppend( oTab, "Page 2", uiNewHorizontalBox() )
  uiTabAppend( oTab, "Page 3", uiNewHorizontalBox() )
  uiBoxAppend( oVerticalBox3, oTab, 1 )

  uiWindowSetChild( oWindow, oVerticalBox1 ) 
  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL