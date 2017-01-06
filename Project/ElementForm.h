//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: ElementForm.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _PSP_PROJECT_ELEMENTFORM_BASE_CLASSES_H
#define _PSP_PROJECT_ELEMENTFORM_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/imaglist.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#include <wx/statbox.h>
#include <wx/statline.h>
#include <wx/propgrid/manager.h>
#include <wx/propgrid/property.h>
#include <wx/propgrid/advprops.h>
#include <wx/listctrl.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

#ifdef WXC_FROM_DIP
#undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
#define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
#define WXC_FROM_DIP(x) x
#endif


class BusFormBase : public wxDialog
{
protected:
    wxNotebook* m_notebook;
    wxPanel* m_panelGeneral;
    wxStaticText* m_staticTextName;
    wxTextCtrl* m_textCtrlName;
    wxStaticText* m_staticTextNomVoltage;
    wxTextCtrl* m_textCtrlNomVoltage;
    wxChoice* m_choiceNomVoltage;
    wxCheckBox* m_checkBoxCtrlVoltage;
    wxTextCtrl* m_textCtrlCtrlVoltage;
    wxChoice* m_choiceCtrlVoltage;
    wxCheckBox* m_checkBoxSlackBus;
    wxPanel* m_panelFault;
    wxCheckBox* m_checkBoxFault;
    wxStaticText* m_staticTextFaultType;
    wxChoice* m_choiceFaultType;
    wxStaticText* m_staticTextFaultPlace;
    wxChoice* m_choiceFaultPlace;
    wxStaticText* m_staticTextFaultResistance;
    wxTextCtrl* m_textCtrlFaultResistance;
    wxStaticText* m_staticTextPU_1;
    wxStaticText* m_staticTextReactance;
    wxTextCtrl* m_textCtrlFaultReactance;
    wxStaticText* m_staticTextPU_2;
    wxPanel* m_panelStability;
    wxCheckBox* m_checkBoxPlotData;
    wxCheckBox* m_checkBoxStabFault;
    wxStaticText* m_staticTextStabFaultTime;
    wxTextCtrl* m_textCtrlStabFaultTime;
    wxStaticText* m_staticTextS_1;
    wxStaticText* m_staticTextStabFaultLength;
    wxTextCtrl* m_textCtrlStabFaultLength;
    wxStaticText* m_staticTextS_2;
    wxStaticText* m_staticTextStabFaultResistance;
    wxTextCtrl* m_textCtrlStabFaultResistance;
    wxStaticText* m_staticTextPU_3;
    wxStaticText* m_staticTextStabFaultReactance;
    wxTextCtrl* m_textCtrlStabFaultReactance;
    wxStaticText* m_staticTextPU_4;
    wxButton* m_buttonOK;
    wxButton* m_ButtonCancel;

protected:
    virtual void OnNominalVoltageChoice(wxCommandEvent& event) { event.Skip(); }
    virtual void OnControlledVoltageClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnInsertFaultClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnFaultTypeChoice(wxCommandEvent& event) { event.Skip(); }
    virtual void OnInsertStabFaultClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonOKClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonCancelClick(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticTextName() { return m_staticTextName; }
    wxTextCtrl* GetTextCtrlName() { return m_textCtrlName; }
    wxStaticText* GetStaticTextNomVoltage() { return m_staticTextNomVoltage; }
    wxTextCtrl* GetTextCtrlNomVoltage() { return m_textCtrlNomVoltage; }
    wxChoice* GetChoiceNomVoltage() { return m_choiceNomVoltage; }
    wxCheckBox* GetCheckBoxCtrlVoltage() { return m_checkBoxCtrlVoltage; }
    wxTextCtrl* GetTextCtrlCtrlVoltage() { return m_textCtrlCtrlVoltage; }
    wxChoice* GetChoiceCtrlVoltage() { return m_choiceCtrlVoltage; }
    wxCheckBox* GetCheckBoxSlackBus() { return m_checkBoxSlackBus; }
    wxPanel* GetPanelGeneral() { return m_panelGeneral; }
    wxCheckBox* GetCheckBoxFault() { return m_checkBoxFault; }
    wxStaticText* GetStaticTextFaultType() { return m_staticTextFaultType; }
    wxChoice* GetChoiceFaultType() { return m_choiceFaultType; }
    wxStaticText* GetStaticTextFaultPlace() { return m_staticTextFaultPlace; }
    wxChoice* GetChoiceFaultPlace() { return m_choiceFaultPlace; }
    wxStaticText* GetStaticTextFaultResistance() { return m_staticTextFaultResistance; }
    wxTextCtrl* GetTextCtrlFaultResistance() { return m_textCtrlFaultResistance; }
    wxStaticText* GetStaticTextPU_1() { return m_staticTextPU_1; }
    wxStaticText* GetStaticTextReactance() { return m_staticTextReactance; }
    wxTextCtrl* GetTextCtrlFaultReactance() { return m_textCtrlFaultReactance; }
    wxStaticText* GetStaticTextPU_2() { return m_staticTextPU_2; }
    wxPanel* GetPanelFault() { return m_panelFault; }
    wxCheckBox* GetCheckBoxPlotData() { return m_checkBoxPlotData; }
    wxCheckBox* GetCheckBoxStabFault() { return m_checkBoxStabFault; }
    wxStaticText* GetStaticTextStabFaultTime() { return m_staticTextStabFaultTime; }
    wxTextCtrl* GetTextCtrlStabFaultTime() { return m_textCtrlStabFaultTime; }
    wxStaticText* GetStaticTextS_1() { return m_staticTextS_1; }
    wxStaticText* GetStaticTextStabFaultLength() { return m_staticTextStabFaultLength; }
    wxTextCtrl* GetTextCtrlStabFaultLength() { return m_textCtrlStabFaultLength; }
    wxStaticText* GetStaticTextS_2() { return m_staticTextS_2; }
    wxStaticText* GetStaticTextStabFaultResistance() { return m_staticTextStabFaultResistance; }
    wxTextCtrl* GetTextCtrlStabFaultResistance() { return m_textCtrlStabFaultResistance; }
    wxStaticText* GetStaticTextPU_3() { return m_staticTextPU_3; }
    wxStaticText* GetStaticTextStabFaultReactance() { return m_staticTextStabFaultReactance; }
    wxTextCtrl* GetTextCtrlStabFaultReactance() { return m_textCtrlStabFaultReactance; }
    wxStaticText* GetStaticTextPU_4() { return m_staticTextPU_4; }
    wxPanel* GetPanelStability() { return m_panelStability; }
    wxNotebook* GetNotebook() { return m_notebook; }
    wxButton* GetButtonOK() { return m_buttonOK; }
    wxButton* GetButtonCancel() { return m_ButtonCancel; }
    BusFormBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Bus"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~BusFormBase();
};


class SyncMachineFormBase : public wxDialog
{
protected:
    wxNotebook* m_notebook;
    wxPanel* m_panelGeneral;
    wxStaticText* m_staticTextName;
    wxTextCtrl* m_textCtrlName;
    wxStaticText* m_staticTextNominalPower;
    wxTextCtrl* m_textCtrlnominalPower;
    wxChoice* m_choiceNominalPower;
    wxStaticText* m_staticTextActivePower;
    wxTextCtrl* m_textCtrlActivePower;
    wxChoice* m_choiceActivePower;
    wxStaticText* m_staticTextReactivePower;
    wxTextCtrl* m_textCtrlReactivePower;
    wxChoice* m_choiceReactivePower;
    wxCheckBox* m_checkBoxMaxReactive;
    wxTextCtrl* m_textCtrlMaxRectivePower;
    wxChoice* m_choiceMaxRectivePower;
    wxCheckBox* m_checkBoxMinReactive;
    wxTextCtrl* m_textCtrlMinRectivePower;
    wxChoice* m_choiceMinRectivePower;
    wxCheckBox* m_checkBoxUseMachinePower;
    wxPanel* m_panelFault;
    wxStaticText* m_staticTextPosResistance;
    wxTextCtrl* m_textCtrlPosResistance;
    wxStaticText* m_staticTextPosReactance;
    wxTextCtrl* m_textCtrlPosReactance;
    wxStaticText* m_staticTextNegResistance;
    wxTextCtrl* m_textCtrlNegResistance;
    wxStaticText* m_staticTextNegReactance;
    wxTextCtrl* m_textCtrlNegReactance;
    wxStaticText* m_staticTextZeroResistance;
    wxTextCtrl* m_textCtrlZeroResistance;
    wxStaticText* m_staticTextZeroReactance;
    wxTextCtrl* m_textCtrlZeroReactance;
    wxStaticText* m_staticTextGrdResistance;
    wxTextCtrl* m_textCtrlGrdResistance;
    wxStaticText* m_staticTextGrdReactance;
    wxTextCtrl* m_textCtrlGrdReactance;
    wxCheckBox* m_checkBoxGroundNeutral;
    wxButton* m_buttonStab;
    wxButton* m_buttonOK;
    wxButton* m_ButtonCancel;

protected:
    virtual void OnCheckMaxReactive(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCheckMinReactive(wxCommandEvent& event) { event.Skip(); }
    virtual void OnStabilityButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOKButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCancelButtonClick(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticTextName() { return m_staticTextName; }
    wxTextCtrl* GetTextCtrlName() { return m_textCtrlName; }
    wxStaticText* GetStaticTextNominalPower() { return m_staticTextNominalPower; }
    wxTextCtrl* GetTextCtrlnominalPower() { return m_textCtrlnominalPower; }
    wxChoice* GetChoiceNominalPower() { return m_choiceNominalPower; }
    wxStaticText* GetStaticTextActivePower() { return m_staticTextActivePower; }
    wxTextCtrl* GetTextCtrlActivePower() { return m_textCtrlActivePower; }
    wxChoice* GetChoiceActivePower() { return m_choiceActivePower; }
    wxStaticText* GetStaticTextReactivePower() { return m_staticTextReactivePower; }
    wxTextCtrl* GetTextCtrlReactivePower() { return m_textCtrlReactivePower; }
    wxChoice* GetChoiceReactivePower() { return m_choiceReactivePower; }
    wxCheckBox* GetCheckBoxMaxReactive() { return m_checkBoxMaxReactive; }
    wxTextCtrl* GetTextCtrlMaxRectivePower() { return m_textCtrlMaxRectivePower; }
    wxChoice* GetChoiceMaxRectivePower() { return m_choiceMaxRectivePower; }
    wxCheckBox* GetCheckBoxMinReactive() { return m_checkBoxMinReactive; }
    wxTextCtrl* GetTextCtrlMinRectivePower() { return m_textCtrlMinRectivePower; }
    wxChoice* GetChoiceMinRectivePower() { return m_choiceMinRectivePower; }
    wxCheckBox* GetCheckBoxUseMachinePower() { return m_checkBoxUseMachinePower; }
    wxPanel* GetPanelGeneral() { return m_panelGeneral; }
    wxStaticText* GetStaticTextPosResistance() { return m_staticTextPosResistance; }
    wxTextCtrl* GetTextCtrlPosResistance() { return m_textCtrlPosResistance; }
    wxStaticText* GetStaticTextPosReactance() { return m_staticTextPosReactance; }
    wxTextCtrl* GetTextCtrlPosReactance() { return m_textCtrlPosReactance; }
    wxStaticText* GetStaticTextNegResistance() { return m_staticTextNegResistance; }
    wxTextCtrl* GetTextCtrlNegResistance() { return m_textCtrlNegResistance; }
    wxStaticText* GetStaticTextNegReactance() { return m_staticTextNegReactance; }
    wxTextCtrl* GetTextCtrlNegReactance() { return m_textCtrlNegReactance; }
    wxStaticText* GetStaticTextZeroResistance() { return m_staticTextZeroResistance; }
    wxTextCtrl* GetTextCtrlZeroResistance() { return m_textCtrlZeroResistance; }
    wxStaticText* GetStaticTextZeroReactance() { return m_staticTextZeroReactance; }
    wxTextCtrl* GetTextCtrlZeroReactance() { return m_textCtrlZeroReactance; }
    wxStaticText* GetStaticTextGrdResistance() { return m_staticTextGrdResistance; }
    wxTextCtrl* GetTextCtrlGrdResistance() { return m_textCtrlGrdResistance; }
    wxStaticText* GetStaticTextGrdReactance() { return m_staticTextGrdReactance; }
    wxTextCtrl* GetTextCtrlGrdReactance() { return m_textCtrlGrdReactance; }
    wxCheckBox* GetCheckBoxGroundNeutral() { return m_checkBoxGroundNeutral; }
    wxPanel* GetPanelFault() { return m_panelFault; }
    wxNotebook* GetNotebook() { return m_notebook; }
    wxButton* GetButtonStab() { return m_buttonStab; }
    wxButton* GetButtonOK() { return m_buttonOK; }
    wxButton* GetButtonCancel() { return m_ButtonCancel; }
    SyncMachineFormBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Generator"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~SyncMachineFormBase();
};


class GeneratorStabFormBase : public wxDialog
{
protected:
    wxCheckBox* m_checkBoxPlotSyncMachine;
    wxStaticText* m_staticTextInertia;
    wxTextCtrl* m_textCtrlInertia;
    wxStaticText* m_staticTextS_1;
    wxStaticText* m_staticTextDamping;
    wxTextCtrl* m_textCtrlDamping;
    wxStaticText* m_staticTextPU_1;
    wxCheckBox* m_checkBoxUseAVR;
    wxButton* m_buttonEditAVR;
    wxCheckBox* m_checkBoxUseSG;
    wxButton* m_buttonEditSG;
    wxStaticLine* m_staticLine_1;
    wxStaticText* m_staticTextRa;
    wxTextCtrl* m_textCtrlRa;
    wxStaticText* m_staticTextPU_2;
    wxStaticText* m_staticTextXp;
    wxTextCtrl* m_textCtrlXp;
    wxStaticText* m_staticTextPU_9;
    wxStaticText* m_staticTextSat;
    wxTextCtrl* m_textCtrlSat;
    wxStaticText* m_staticTextPU_10;
    wxStaticText* m_staticTextSyncXd;
    wxTextCtrl* m_textCtrlSyncXd;
    wxStaticText* m_staticTextPU_3;
    wxStaticText* m_staticTextSyncXq;
    wxTextCtrl* m_textCtrlSyncXq;
    wxStaticText* m_staticTextPU_4;
    wxStaticText* m_staticTextTranXd;
    wxTextCtrl* m_textCtrlTranXd;
    wxStaticText* m_staticTextPU_5;
    wxStaticText* m_staticTextTranXq;
    wxTextCtrl* m_textCtrlTranXq;
    wxStaticText* m_staticTextPU_6;
    wxStaticText* m_staticTextTranTd0;
    wxTextCtrl* m_textCtrlTranTd0;
    wxStaticText* m_staticTextS_2;
    wxStaticText* m_staticTextTranTq0;
    wxTextCtrl* m_textCtrlTranTq0;
    wxStaticText* m_staticTextS_3;
    wxStaticText* m_staticTextSubXd;
    wxTextCtrl* m_textCtrlSubXd;
    wxStaticText* m_staticTextPU_7;
    wxStaticText* m_staticTextSubXq;
    wxTextCtrl* m_textCtrlSubXq;
    wxStaticText* m_staticTextPU_8;
    wxStaticText* m_staticTextSubTd0;
    wxTextCtrl* m_textCtrlSubTd0;
    wxStaticText* m_staticTextS_4;
    wxStaticText* m_staticTextSubTq0;
    wxTextCtrl* m_textCtrlSubTq0;
    wxStaticText* m_staticTextS_5;
    wxButton* m_buttonSwitching;
    wxButton* m_buttonOK;
    wxButton* m_ButtonCancel;

protected:
    virtual void UseAVRClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEditAVRButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void UseSGClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSpeedGovernorButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSwitchingButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOKButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCancelButtonClick(wxCommandEvent& event) { event.Skip(); }

public:
    wxCheckBox* GetCheckBoxPlotSyncMachine() { return m_checkBoxPlotSyncMachine; }
    wxStaticText* GetStaticTextInertia() { return m_staticTextInertia; }
    wxTextCtrl* GetTextCtrlInertia() { return m_textCtrlInertia; }
    wxStaticText* GetStaticTextS_1() { return m_staticTextS_1; }
    wxStaticText* GetStaticTextDamping() { return m_staticTextDamping; }
    wxTextCtrl* GetTextCtrlDamping() { return m_textCtrlDamping; }
    wxStaticText* GetStaticTextPU_1() { return m_staticTextPU_1; }
    wxCheckBox* GetCheckBoxUseAVR() { return m_checkBoxUseAVR; }
    wxButton* GetButtonEditAVR() { return m_buttonEditAVR; }
    wxCheckBox* GetCheckBoxUseSG() { return m_checkBoxUseSG; }
    wxButton* GetButtonEditSG() { return m_buttonEditSG; }
    wxStaticLine* GetStaticLine_1() { return m_staticLine_1; }
    wxStaticText* GetStaticTextRa() { return m_staticTextRa; }
    wxTextCtrl* GetTextCtrlRa() { return m_textCtrlRa; }
    wxStaticText* GetStaticTextPU_2() { return m_staticTextPU_2; }
    wxStaticText* GetStaticTextXp() { return m_staticTextXp; }
    wxTextCtrl* GetTextCtrlXp() { return m_textCtrlXp; }
    wxStaticText* GetStaticTextPU_9() { return m_staticTextPU_9; }
    wxStaticText* GetStaticTextSat() { return m_staticTextSat; }
    wxTextCtrl* GetTextCtrlSat() { return m_textCtrlSat; }
    wxStaticText* GetStaticTextPU_10() { return m_staticTextPU_10; }
    wxStaticText* GetStaticTextSyncXd() { return m_staticTextSyncXd; }
    wxTextCtrl* GetTextCtrlSyncXd() { return m_textCtrlSyncXd; }
    wxStaticText* GetStaticTextPU_3() { return m_staticTextPU_3; }
    wxStaticText* GetStaticTextSyncXq() { return m_staticTextSyncXq; }
    wxTextCtrl* GetTextCtrlSyncXq() { return m_textCtrlSyncXq; }
    wxStaticText* GetStaticTextPU_4() { return m_staticTextPU_4; }
    wxStaticText* GetStaticTextTranXd() { return m_staticTextTranXd; }
    wxTextCtrl* GetTextCtrlTranXd() { return m_textCtrlTranXd; }
    wxStaticText* GetStaticTextPU_5() { return m_staticTextPU_5; }
    wxStaticText* GetStaticTextTranXq() { return m_staticTextTranXq; }
    wxTextCtrl* GetTextCtrlTranXq() { return m_textCtrlTranXq; }
    wxStaticText* GetStaticTextPU_6() { return m_staticTextPU_6; }
    wxStaticText* GetStaticTextTranTd0() { return m_staticTextTranTd0; }
    wxTextCtrl* GetTextCtrlTranTd0() { return m_textCtrlTranTd0; }
    wxStaticText* GetStaticTextS_2() { return m_staticTextS_2; }
    wxStaticText* GetStaticTextTranTq0() { return m_staticTextTranTq0; }
    wxTextCtrl* GetTextCtrlTranTq0() { return m_textCtrlTranTq0; }
    wxStaticText* GetStaticTextS_3() { return m_staticTextS_3; }
    wxStaticText* GetStaticTextSubXd() { return m_staticTextSubXd; }
    wxTextCtrl* GetTextCtrlSubXd() { return m_textCtrlSubXd; }
    wxStaticText* GetStaticTextPU_7() { return m_staticTextPU_7; }
    wxStaticText* GetStaticTextSubXq() { return m_staticTextSubXq; }
    wxTextCtrl* GetTextCtrlSubXq() { return m_textCtrlSubXq; }
    wxStaticText* GetStaticTextPU_8() { return m_staticTextPU_8; }
    wxStaticText* GetStaticTextSubTd0() { return m_staticTextSubTd0; }
    wxTextCtrl* GetTextCtrlSubTd0() { return m_textCtrlSubTd0; }
    wxStaticText* GetStaticTextS_4() { return m_staticTextS_4; }
    wxStaticText* GetStaticTextSubTq0() { return m_staticTextSubTq0; }
    wxTextCtrl* GetTextCtrlSubTq0() { return m_textCtrlSubTq0; }
    wxStaticText* GetStaticTextS_5() { return m_staticTextS_5; }
    wxButton* GetButtonSwitching() { return m_buttonSwitching; }
    wxButton* GetButtonOK() { return m_buttonOK; }
    wxButton* GetButtonCancel() { return m_ButtonCancel; }
    GeneratorStabFormBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Generator: Stability"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~GeneratorStabFormBase();
};


class LineFormBase : public wxDialog
{
protected:
    wxNotebook* m_notebook;
    wxPanel* m_panelGeneral;
    wxStaticText* m_staticTextName;
    wxTextCtrl* m_textCtrlName;
    wxStaticText* m_staticTextNominalVoltage;
    wxStaticText* m_staticTextNominalVoltageValue;
    wxStaticText* m_staticTextNominalPower;
    wxTextCtrl* m_textCtrlNominalPower;
    wxChoice* m_choiceNominalPower;
    wxStaticText* m_staticTextResistance;
    wxTextCtrl* m_textCtrlResistance;
    wxChoice* m_choiceResistance;
    wxStaticText* m_staticTextReactance;
    wxTextCtrl* m_textCtrlReactance;
    wxChoice* m_choiceReactance;
    wxStaticText* m_staticTextSusceptance;
    wxTextCtrl* m_textCtrlSusceptance;
    wxChoice* m_choiceSusceptance;
    wxStaticText* m_staticTextLineSize;
    wxTextCtrl* m_textCtrlLineSize;
    wxStaticText* m_staticTextKM;
    wxCheckBox* m_checkUseLinePower;
    wxPanel* m_panelFault;
    wxStaticText* m_staticTextZeroResistance;
    wxTextCtrl* m_textCtrlZeroResistance;
    wxStaticText* m_staticTextZeroReactance;
    wxTextCtrl* m_textCtrlZeroReactance;
    wxStaticText* m_staticTextZeroSusceptance;
    wxTextCtrl* m_textCtrlZeroSusceptance;
    wxButton* m_buttonStability;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnStabilityButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOKButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCancelButtonClick(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticTextName() { return m_staticTextName; }
    wxTextCtrl* GetTextCtrlName() { return m_textCtrlName; }
    wxStaticText* GetStaticTextNominalVoltage() { return m_staticTextNominalVoltage; }
    wxStaticText* GetStaticTextNominalVoltageValue() { return m_staticTextNominalVoltageValue; }
    wxStaticText* GetStaticTextNominalPower() { return m_staticTextNominalPower; }
    wxTextCtrl* GetTextCtrlNominalPower() { return m_textCtrlNominalPower; }
    wxChoice* GetChoiceNominalPower() { return m_choiceNominalPower; }
    wxStaticText* GetStaticTextResistance() { return m_staticTextResistance; }
    wxTextCtrl* GetTextCtrlResistance() { return m_textCtrlResistance; }
    wxChoice* GetChoiceResistance() { return m_choiceResistance; }
    wxStaticText* GetStaticTextReactance() { return m_staticTextReactance; }
    wxTextCtrl* GetTextCtrlReactance() { return m_textCtrlReactance; }
    wxChoice* GetChoiceReactance() { return m_choiceReactance; }
    wxStaticText* GetStaticTextSusceptance() { return m_staticTextSusceptance; }
    wxTextCtrl* GetTextCtrlSusceptance() { return m_textCtrlSusceptance; }
    wxChoice* GetChoiceSusceptance() { return m_choiceSusceptance; }
    wxStaticText* GetStaticTextLineSize() { return m_staticTextLineSize; }
    wxTextCtrl* GetTextCtrlLineSize() { return m_textCtrlLineSize; }
    wxStaticText* GetStaticTextKM() { return m_staticTextKM; }
    wxCheckBox* GetCheckUseLinePower() { return m_checkUseLinePower; }
    wxPanel* GetPanelGeneral() { return m_panelGeneral; }
    wxStaticText* GetStaticTextZeroResistance() { return m_staticTextZeroResistance; }
    wxTextCtrl* GetTextCtrlZeroResistance() { return m_textCtrlZeroResistance; }
    wxStaticText* GetStaticTextZeroReactance() { return m_staticTextZeroReactance; }
    wxTextCtrl* GetTextCtrlZeroReactance() { return m_textCtrlZeroReactance; }
    wxStaticText* GetStaticTextZeroSusceptance() { return m_staticTextZeroSusceptance; }
    wxTextCtrl* GetTextCtrlZeroSusceptance() { return m_textCtrlZeroSusceptance; }
    wxPanel* GetPanelFault() { return m_panelFault; }
    wxNotebook* GetNotebook() { return m_notebook; }
    wxButton* GetButtonStability() { return m_buttonStability; }
    wxButton* GetButtonOK() { return m_buttonOK; }
    wxButton* GetButtonCancel() { return m_buttonCancel; }
    LineFormBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Line"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~LineFormBase();
};


class TransformerFormBase : public wxDialog
{
protected:
    wxNotebook* m_notebook;
    wxPanel* m_panelGeneral;
    wxStaticText* m_staticTextName;
    wxTextCtrl* m_textCtrlName;
    wxStaticText* m_staticTextNominalVoltage;
    wxStaticText* m_staticTextNominalVoltageValue;
    wxStaticText* m_staticTextBaseVoltage;
    wxChoice* m_choiceBaseVoltage;
    wxStaticText* m_staticTextNominalPower;
    wxTextCtrl* m_textCtrlNominalPower;
    wxChoice* m_choiceNominalPower;
    wxStaticText* m_staticTextResistance;
    wxTextCtrl* m_textCtrlResistance;
    wxChoice* m_choiceResistance;
    wxStaticText* m_staticTextReactance;
    wxTextCtrl* m_textCtrlReactance;
    wxChoice* m_choiceReactance;
    wxStaticLine* m_staticLine_1;
    wxStaticText* m_staticTextConnection;
    wxChoice* m_choiceConnection;
    wxStaticText* m_staticTextTurnsRatio;
    wxTextCtrl* m_textCtrlTurnRatio;
    wxStaticText* m_staticTextPhaseShift;
    wxTextCtrl* m_textCtrlPhaseShift;
    wxStaticText* m_staticTextDeg;
    wxCheckBox* m_checkUseTransformerPower;
    wxPanel* m_panelFault;
    wxStaticText* m_staticTextZeroResistance;
    wxTextCtrl* m_textCtrlZeroResistance;
    wxStaticText* m_staticTextZeroReactance;
    wxTextCtrl* m_textCtrlZeroReactance;
    wxStaticText* m_staticTextPrimResistance;
    wxTextCtrl* m_textCtrlPrimResistance;
    wxStaticText* m_staticTextPrimReactance;
    wxTextCtrl* m_textCtrlPrimReactance;
    wxStaticText* m_staticTextSecResistance;
    wxTextCtrl* m_textCtrlSecResistance;
    wxStaticText* m_staticTextSecReactance;
    wxTextCtrl* m_textCtrlSecReactance;
    wxButton* m_buttonStability;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnStabilityButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOKButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCancelButtonClick(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticTextName() { return m_staticTextName; }
    wxTextCtrl* GetTextCtrlName() { return m_textCtrlName; }
    wxStaticText* GetStaticTextNominalVoltage() { return m_staticTextNominalVoltage; }
    wxStaticText* GetStaticTextNominalVoltageValue() { return m_staticTextNominalVoltageValue; }
    wxStaticText* GetStaticTextBaseVoltage() { return m_staticTextBaseVoltage; }
    wxChoice* GetChoiceBaseVoltage() { return m_choiceBaseVoltage; }
    wxStaticText* GetStaticTextNominalPower() { return m_staticTextNominalPower; }
    wxTextCtrl* GetTextCtrlNominalPower() { return m_textCtrlNominalPower; }
    wxChoice* GetChoiceNominalPower() { return m_choiceNominalPower; }
    wxStaticText* GetStaticTextResistance() { return m_staticTextResistance; }
    wxTextCtrl* GetTextCtrlResistance() { return m_textCtrlResistance; }
    wxChoice* GetChoiceResistance() { return m_choiceResistance; }
    wxStaticText* GetStaticTextReactance() { return m_staticTextReactance; }
    wxTextCtrl* GetTextCtrlReactance() { return m_textCtrlReactance; }
    wxChoice* GetChoiceReactance() { return m_choiceReactance; }
    wxStaticLine* GetStaticLine_1() { return m_staticLine_1; }
    wxStaticText* GetStaticTextConnection() { return m_staticTextConnection; }
    wxChoice* GetChoiceConnection() { return m_choiceConnection; }
    wxStaticText* GetStaticTextTurnsRatio() { return m_staticTextTurnsRatio; }
    wxTextCtrl* GetTextCtrlTurnRatio() { return m_textCtrlTurnRatio; }
    wxStaticText* GetStaticTextPhaseShift() { return m_staticTextPhaseShift; }
    wxTextCtrl* GetTextCtrlPhaseShift() { return m_textCtrlPhaseShift; }
    wxStaticText* GetStaticTextDeg() { return m_staticTextDeg; }
    wxCheckBox* GetCheckUseTransformerPower() { return m_checkUseTransformerPower; }
    wxPanel* GetPanelGeneral() { return m_panelGeneral; }
    wxStaticText* GetStaticTextZeroResistance() { return m_staticTextZeroResistance; }
    wxTextCtrl* GetTextCtrlZeroResistance() { return m_textCtrlZeroResistance; }
    wxStaticText* GetStaticTextZeroReactance() { return m_staticTextZeroReactance; }
    wxTextCtrl* GetTextCtrlZeroReactance() { return m_textCtrlZeroReactance; }
    wxStaticText* GetStaticTextPrimResistance() { return m_staticTextPrimResistance; }
    wxTextCtrl* GetTextCtrlPrimResistance() { return m_textCtrlPrimResistance; }
    wxStaticText* GetStaticTextPrimReactance() { return m_staticTextPrimReactance; }
    wxTextCtrl* GetTextCtrlPrimReactance() { return m_textCtrlPrimReactance; }
    wxStaticText* GetStaticTextSecResistance() { return m_staticTextSecResistance; }
    wxTextCtrl* GetTextCtrlSecResistance() { return m_textCtrlSecResistance; }
    wxStaticText* GetStaticTextSecReactance() { return m_staticTextSecReactance; }
    wxTextCtrl* GetTextCtrlSecReactance() { return m_textCtrlSecReactance; }
    wxPanel* GetPanelFault() { return m_panelFault; }
    wxNotebook* GetNotebook() { return m_notebook; }
    wxButton* GetButtonStability() { return m_buttonStability; }
    wxButton* GetButtonOK() { return m_buttonOK; }
    wxButton* GetButtonCancel() { return m_buttonCancel; }
    TransformerFormBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Transformer"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~TransformerFormBase();
};


class LoadFormBase : public wxDialog
{
protected:
    wxNotebook* m_notebook;
    wxPanel* m_panelGeneral;
    wxStaticText* m_staticTextName;
    wxTextCtrl* m_textCtrlName;
    wxStaticText* m_staticTextActivePower;
    wxTextCtrl* m_textCtrlActivePower;
    wxChoice* m_choiceActivePower;
    wxStaticText* m_staticTextReactivePower;
    wxTextCtrl* m_textCtrlReactivePower;
    wxChoice* m_choiceReactivePower;
    wxStaticText* m_staticTextType;
    wxChoice* m_choiceType;
    wxButton* m_buttonStabButton;
    wxButton* m_buttonOK;
    wxButton* m_ButtonCancel;

protected:
    virtual void OnStabilityButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOnButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCancelButtonClick(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticTextName() { return m_staticTextName; }
    wxTextCtrl* GetTextCtrlName() { return m_textCtrlName; }
    wxStaticText* GetStaticTextActivePower() { return m_staticTextActivePower; }
    wxTextCtrl* GetTextCtrlActivePower() { return m_textCtrlActivePower; }
    wxChoice* GetChoiceActivePower() { return m_choiceActivePower; }
    wxStaticText* GetStaticTextReactivePower() { return m_staticTextReactivePower; }
    wxTextCtrl* GetTextCtrlReactivePower() { return m_textCtrlReactivePower; }
    wxChoice* GetChoiceReactivePower() { return m_choiceReactivePower; }
    wxStaticText* GetStaticTextType() { return m_staticTextType; }
    wxChoice* GetChoiceType() { return m_choiceType; }
    wxPanel* GetPanelGeneral() { return m_panelGeneral; }
    wxNotebook* GetNotebook() { return m_notebook; }
    wxButton* GetButtonStabButton() { return m_buttonStabButton; }
    wxButton* GetButtonOK() { return m_buttonOK; }
    wxButton* GetButtonCancel() { return m_ButtonCancel; }
    LoadFormBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Load"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~LoadFormBase();
};


class ReactiveShuntElementFormBase : public wxDialog
{
protected:
    wxNotebook* m_notebook;
    wxPanel* m_panelGeneral;
    wxStaticText* m_staticTextName;
    wxTextCtrl* m_textCtrlName;
    wxStaticText* m_staticTextReactivePower;
    wxTextCtrl* m_textCtrlReactivePower;
    wxChoice* m_choiceReactivePower;
    wxButton* m_buttonStabButton;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnStabilityButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOKButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCancelButtonClick(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticTextName() { return m_staticTextName; }
    wxTextCtrl* GetTextCtrlName() { return m_textCtrlName; }
    wxStaticText* GetStaticTextReactivePower() { return m_staticTextReactivePower; }
    wxTextCtrl* GetTextCtrlReactivePower() { return m_textCtrlReactivePower; }
    wxChoice* GetChoiceReactivePower() { return m_choiceReactivePower; }
    wxPanel* GetPanelGeneral() { return m_panelGeneral; }
    wxNotebook* GetNotebook() { return m_notebook; }
    wxButton* GetButtonStabButton() { return m_buttonStabButton; }
    wxButton* GetButtonOK() { return m_buttonOK; }
    wxButton* GetButtonCancel() { return m_buttonCancel; }
    ReactiveShuntElementFormBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Reactive shunt element"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~ReactiveShuntElementFormBase();
};


class SwitchingFormBase : public wxDialog
{
protected:
    wxPropertyGridManager* m_pgMgrSwitchingsProp;
    wxPGProperty* m_pgPropTitle;
    wxPGProperty* m_pgPropType;
    wxPGProperty* m_pgPropTime;
    wxButton* m_buttonInsert;
    wxButton* m_buttonRemove;
    wxButton* m_buttonUp;
    wxButton* m_buttonDown;
    wxStaticText* m_staticTextSwList;
    wxListCtrl* m_listCtrlSwitchings;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnChangeProperties(wxPropertyGridEvent& event) { event.Skip(); }
    virtual void OnInsertButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRemoveButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnUpButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDownButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSelectItem(wxListEvent& event) { event.Skip(); }
    virtual void OnOKButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCancelButtonClick(wxCommandEvent& event) { event.Skip(); }

public:
    wxPropertyGridManager* GetPgMgrSwitchingsProp() { return m_pgMgrSwitchingsProp; }
    wxButton* GetButtonInsert() { return m_buttonInsert; }
    wxButton* GetButtonRemove() { return m_buttonRemove; }
    wxButton* GetButtonUp() { return m_buttonUp; }
    wxButton* GetButtonDown() { return m_buttonDown; }
    wxStaticText* GetStaticTextSwList() { return m_staticTextSwList; }
    wxListCtrl* GetListCtrlSwitchings() { return m_listCtrlSwitchings; }
    wxButton* GetButtonOK() { return m_buttonOK; }
    wxButton* GetButtonCancel() { return m_buttonCancel; }
    SwitchingFormBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Switching"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~SwitchingFormBase();
};


class IndMotorFormBase : public wxDialog
{
protected:
    wxNotebook* m_notebook;
    wxPanel* m_panelGeneral;
    wxStaticText* m_staticTextName;
    wxTextCtrl* m_textCtrlName;
    wxStaticText* m_staticTextActivePower;
    wxTextCtrl* m_textCtrlActivePower;
    wxChoice* m_choiceActivePower;
    wxStaticText* m_staticTextReactivePower;
    wxTextCtrl* m_textCtrlReactivePower;
    wxChoice* m_choiceReactivePower;
    wxButton* m_buttonStabButton;
    wxButton* m_buttonOK;
    wxButton* m_ButtonCancel;

protected:
    virtual void OnStabilityButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOKButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCancelButtonClick(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticTextName() { return m_staticTextName; }
    wxTextCtrl* GetTextCtrlName() { return m_textCtrlName; }
    wxStaticText* GetStaticTextActivePower() { return m_staticTextActivePower; }
    wxTextCtrl* GetTextCtrlActivePower() { return m_textCtrlActivePower; }
    wxChoice* GetChoiceActivePower() { return m_choiceActivePower; }
    wxStaticText* GetStaticTextReactivePower() { return m_staticTextReactivePower; }
    wxTextCtrl* GetTextCtrlReactivePower() { return m_textCtrlReactivePower; }
    wxChoice* GetChoiceReactivePower() { return m_choiceReactivePower; }
    wxPanel* GetPanelGeneral() { return m_panelGeneral; }
    wxNotebook* GetNotebook() { return m_notebook; }
    wxButton* GetButtonStabButton() { return m_buttonStabButton; }
    wxButton* GetButtonOK() { return m_buttonOK; }
    wxButton* GetButtonCancel() { return m_ButtonCancel; }
    IndMotorFormBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Motor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~IndMotorFormBase();
};


class TextFormBase : public wxDialog
{
protected:
    wxNotebook* m_notebook;
    wxPanel* m_panelGeneral;
    wxStaticText* m_staticTextElement;
    wxChoice* m_choiceElement;
    wxStaticText* m_staticTextName;
    wxChoice* m_choiceName;
    wxStaticText* m_staticTextType;
    wxChoice* m_choiceTextType;
    wxStaticText* m_staticTextFromBus;
    wxChoice* m_choiceTextFromBus;
    wxStaticText* m_staticTextToBus;
    wxChoice* m_choiceTextToBus;
    wxStaticText* m_staticTextUnit;
    wxChoice* m_choiceTextUnit;
    wxStaticText* m_staticTextDecimal;
    wxTextCtrl* m_textCtrlDecimal;
    wxStaticText* m_staticTextPreview;
    wxTextCtrl* m_textCtrlPreview;
    wxButton* m_buttonOK;
    wxButton* m_ButtonCancel;

protected:
    virtual void OnElementChoiceSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnNameChoiceSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnTypeChoiceSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnFromBusChoiceSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnToBusChoiceSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnUnitChoiceSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnTextEnter(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOKButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCancelButtonClick(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticTextElement() { return m_staticTextElement; }
    wxChoice* GetChoiceElement() { return m_choiceElement; }
    wxStaticText* GetStaticTextName() { return m_staticTextName; }
    wxChoice* GetChoiceName() { return m_choiceName; }
    wxStaticText* GetStaticTextType() { return m_staticTextType; }
    wxChoice* GetChoiceTextType() { return m_choiceTextType; }
    wxStaticText* GetStaticTextFromBus() { return m_staticTextFromBus; }
    wxChoice* GetChoiceTextFromBus() { return m_choiceTextFromBus; }
    wxStaticText* GetStaticTextToBus() { return m_staticTextToBus; }
    wxChoice* GetChoiceTextToBus() { return m_choiceTextToBus; }
    wxStaticText* GetStaticTextUnit() { return m_staticTextUnit; }
    wxChoice* GetChoiceTextUnit() { return m_choiceTextUnit; }
    wxStaticText* GetStaticTextDecimal() { return m_staticTextDecimal; }
    wxTextCtrl* GetTextCtrlDecimal() { return m_textCtrlDecimal; }
    wxStaticText* GetStaticTextPreview() { return m_staticTextPreview; }
    wxTextCtrl* GetTextCtrlPreview() { return m_textCtrlPreview; }
    wxPanel* GetPanelGeneral() { return m_panelGeneral; }
    wxNotebook* GetNotebook() { return m_notebook; }
    wxButton* GetButtonOK() { return m_buttonOK; }
    wxButton* GetButtonCancel() { return m_ButtonCancel; }
    TextFormBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Text"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~TextFormBase();
};

#endif