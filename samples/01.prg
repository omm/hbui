
#include "hbui.ch"

FUNCTION Main()
  LOCAL error
  LOCAL oWindow
  LOCAL oTab

  IF ! HB_ISNULL( error := uiInit() )
    Alert( "Failed to initializa libui... " + error )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "Welcome to Harbour HBUI (https://github.com/rjopek/HBUI)", 640, 480, 1 )

  oTab := uiNewTab()
  uiWindowSetChild( oWindow, oTab )
  uiWindowSetMargined( oWindow, 1 )

  uiTabAppend( oTab, "Basic Controls", makeBasicControlsPage() )
  uiTabSetMargined( oTab, 0, 1 )

  uiTabAppend( oTab, "Numbers and Lists", makeNumbersPage() )
  uiTabSetMargined( oTab, 1, 1 )

  uiTabAppend( oTab, "Data Choosers", makeDataChoosersPage() )
  uiTabSetMargined( oTab, 2, 1 )

  uiControlShow( oWindow )
  uiMain()
  uiUninit()

RETURN NIL

STATIC FUNCTION makeBasicControlsPage()
  LOCAL oVerticalBox
  LOCAL oHorizontalBox
  LOCAL oGroup
  LOCAL oForm

  oVerticalBox := uiNewVerticalBox()
  uiBoxSetPadded( oVerticalBox, 1 )

  oHorizontalBox := uiNewHorizontalBox()
  uiBoxSetPadded( oHorizontalBox, 1 )
  uiBoxAppend( oVerticalBox, oHorizontalBox, 0 )

  uiBoxAppend( oHorizontalBox, uiNewButton( "oButton" ), 0 )
  uiBoxAppend( oHorizontalBox, uiNewCheckbox( "Checkbox" ), 0 )

  uiBoxAppend( oVerticalBox, uiNewLabel( "This is a label. Right now, labels can only span one line." ), 0 )

  uiBoxAppend( oVerticalBox, uiNewHorizontalSeparator(), 0 )

  oGroup := uiNewGroup( "Entries" )
  uiGroupSetMargined( oGroup, 1 )
  uiBoxAppend( oVerticalBox, oGroup, 1 )

  oForm := uiNewForm()
  uiFormSetPadded( oForm, 1 )
  uiGroupSetChild( oGroup, oForm )

  uiFormAppend( oForm, "oEntry", uiNewEntry(), 0 )
  uiFormAppend( oForm, "Password oEntry", uiNewPasswordEntry(), 0 )
  uiFormAppend( oForm, "Search oEntry", uiNewSearchEntry(), 0 )
  uiFormAppend( oForm, "Multiline oEntry", uiNewMultilineEntry(), 1 )
  uiFormAppend( oForm, "Multiline oEntry No Wrap", uiNewNonWrappingMultilineEntry(), 1 )

RETURN oVerticalBox

STATIC FUNCTION makeNumbersPage()
  LOCAL oHorizontalBox
  LOCAL oGroup
  LOCAL oVerticalBox
  LOCAL oSpinbox
  LOCAL oSlider
  LOCAL oProgressBar1
  LOCAL oProgressBar2
  LOCAL oCombobox
  LOCAL oEditableCombobox
  LOCAL oRadioButtons

  oHorizontalBox := uiNewHorizontalBox()
  uiBoxSetPadded( oHorizontalBox, 1 )

  oGroup := uiNewGroup( "Numbers" )
  uiGroupSetMargined( oGroup, 1 )
  uiBoxAppend( oHorizontalBox, oGroup, 1 )

  oVerticalBox := uiNewVerticalBox()
  uiBoxSetPadded( oVerticalBox, 1 )
  uiGroupSetChild( oGroup, oVerticalBox )

  oSpinbox := uiNewSpinbox( 0, 100 )
  oSlider := uiNewSlider( 0, 100 )
  oProgressBar1 := uiNewProgressBar()
//	uiSpinboxOnChanged( oSpinbox, onSpinboxChanged(), NIL )
//	uiSliderOnChanged( oSlider, onSliderChanged(), NIL )
  uiBoxAppend( oVerticalBox, oSpinbox, 0 )
  uiBoxAppend( oVerticalBox, oSlider, 0 )
  uiBoxAppend( oVerticalBox, oProgressBar1, 0 )

  oProgressBar2 := uiNewProgressBar()
  uiProgressBarSetValue( oProgressBar2, -1 )
  uiBoxAppend( oVerticalBox, oProgressBar2, 0 )

  oGroup := uiNewGroup( "Lists" )
  uiGroupSetMargined( oGroup, 1 )
  uiBoxAppend( oHorizontalBox, oGroup, 1 )

  oVerticalBox := uiNewVerticalBox()
  uiBoxSetPadded( oVerticalBox, 1 )
  uiGroupSetChild( oGroup, oVerticalBox )

  oCombobox := uiNewCombobox()
  uiComboboxAppend( oCombobox, "Combobox Item 1" )
  uiComboboxAppend( oCombobox, "Combobox Item 2" )
  uiComboboxAppend( oCombobox, "Combobox Item 3" )
  uiBoxAppend( oVerticalBox, oCombobox, 0 )

  oEditableCombobox := uiNewEditableCombobox()
  uiEditableComboboxAppend( oEditableCombobox, "Editable Item 1" )
  uiEditableComboboxAppend( oEditableCombobox, "Editable Item 2" )
  uiEditableComboboxAppend( oEditableCombobox, "Editable Item 3" )
  uiBoxAppend( oVerticalBox, oEditableCombobox, 0 )

  oRadioButtons := uiNewRadioButtons()
  uiRadioButtonsAppend( oRadioButtons, "Radio oButton 1" )
  uiRadioButtonsAppend( oRadioButtons, "Radio oButton 2" )
  uiRadioButtonsAppend( oRadioButtons, "Radio oButton 3" )
  uiBoxAppend( oVerticalBox, oRadioButtons, 0 )

RETURN oHorizontalBox

STATIC FUNCTION makeDataChoosersPage()
  LOCAL oHorizontalBox
  LOCAL oVerticalBox
  LOCAL oGrid1
  LOCAL oButton
  LOCAL oEntry
  LOCAL oGrid2

  oHorizontalBox := uiNewHorizontalBox()
  uiBoxSetPadded( oHorizontalBox, 1 )

  oVerticalBox := uiNewVerticalBox()
  uiBoxSetPadded( oVerticalBox, 1 )
  uiBoxAppend( oHorizontalBox, oVerticalBox, 0 )

  uiBoxAppend( oVerticalBox, uiNewDatePicker(), 0 )
  uiBoxAppend( oVerticalBox, uiNewTimePicker(), 0 )
  uiBoxAppend( oVerticalBox, uiNewDateTimePicker(), 0 )

  uiBoxAppend( oVerticalBox, uiNewFontButton(), 0 )
  uiBoxAppend( oVerticalBox, uiNewColorButton(), 0 )

  uiBoxAppend( oHorizontalBox, uiNewVerticalSeparator(), 0 )

  oVerticalBox := uiNewVerticalBox()
  uiBoxSetPadded( oVerticalBox, 1 )
  uiBoxAppend( oHorizontalBox, oVerticalBox, 1 )

  oGrid1 := uiNewGrid()
  uiGridSetPadded( oGrid1, 1 )
  uiBoxAppend( oVerticalBox, oGrid1, 0 )

  oButton := uiNewButton( "Open File" )
  oEntry := uiNewEntry()
  uiEntrySetReadOnly( oEntry, 1 )
//  uiButtonOnClicked( oButton, onOpenFileClicked(), oEntry )
  uiGridAppend( oGrid1, oButton, 0, 0, 1, 1, 0, uiAlignFill, 0, uiAlignFill )
  uiGridAppend( oGrid1, oEntry, 1, 0, 1, 1, 1, uiAlignFill, 0, uiAlignFill )

  oButton := uiNewButton( "Save File" )
  oEntry := uiNewEntry()
  uiEntrySetReadOnly( oEntry, 1 )
//  uiButtonOnClicked( oButton, onSaveFileClicked(), oEntry )
  uiGridAppend( oGrid1, oButton, 0, 1, 1, 1, 0, uiAlignFill, 0, uiAlignFill )
  uiGridAppend( oGrid1, oEntry, 1, 1, 1, 1, 1, uiAlignFill, 0, uiAlignFill )

  oGrid2 := uiNewGrid()
  uiGridSetPadded( oGrid2, 1 )
  uiGridAppend( oGrid1, oGrid2, 0, 2, 2, 1, 0, uiAlignCenter, 0, uiAlignStart )

  oButton := uiNewButton( "Message Box" )
//  uiButtonOnClicked( oButton, onMsgBoxClicked(), NIL )
  uiGridAppend( oGrid2, oButton, 0, 0, 1, 1, 0, uiAlignFill, 0, uiAlignFill )
  oButton := uiNewButton( "Error Box" )
//  uiButtonOnClicked( oButton, onMsgBoxErrorClicked(), NIL )
  uiGridAppend( oGrid2, oButton, 1, 0, 1, 1, 0, uiAlignFill, 0, uiAlignFill )

RETURN oHorizontalBox
