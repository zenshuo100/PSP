//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: PropertiesForm.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "PropertiesForm.h"


// Declare the bitmap loading function
extern void wxCDAD0InitBitmapResources();

static bool bBitmapLoaded = false;


GeneralPropertiesFormBase::GeneralPropertiesFormBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCDAD0InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer_lvl1_1 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer_lvl1_1);
    
    m_notebook = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), wxBK_DEFAULT);
    m_notebook->SetName(wxT("m_notebook"));
    
    boxSizer_lvl1_1->Add(m_notebook, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_panelGeneral = new wxPanel(m_notebook, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook, wxSize(-1,-1)), wxTAB_TRAVERSAL);
    m_notebook->AddPage(m_panelGeneral, _("General"), false);
    
    wxBoxSizer* boxSizerLvl2_1 = new wxBoxSizer(wxVERTICAL);
    m_panelGeneral->SetSizer(boxSizerLvl2_1);
    
    wxBoxSizer* boxSizerLvl3_1 = new wxBoxSizer(wxVERTICAL);
    
    boxSizerLvl2_1->Add(boxSizerLvl3_1, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticTextLanguage = new wxStaticText(m_panelGeneral, wxID_ANY, _("Language"), wxDefaultPosition, wxDLG_UNIT(m_panelGeneral, wxSize(-1,-1)), 0);
    
    boxSizerLvl3_1->Add(m_staticTextLanguage, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxArrayString m_choiceLanguageArr;
    m_choiceLanguageArr.Add(wxT("English"));
    m_choiceLanguageArr.Add(wxT("Portuguese"));
    m_choiceLanguage = new wxChoice(m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panelGeneral, wxSize(-1,-1)), m_choiceLanguageArr, 0);
    m_choiceLanguage->SetSelection(0);
    
    boxSizerLvl3_1->Add(m_choiceLanguage, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizerLvl3_2 = new wxBoxSizer(wxVERTICAL);
    
    boxSizerLvl2_1->Add(boxSizerLvl3_2, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticTextTheme = new wxStaticText(m_panelGeneral, wxID_ANY, _("Theme"), wxDefaultPosition, wxDLG_UNIT(m_panelGeneral, wxSize(-1,-1)), 0);
    
    boxSizerLvl3_2->Add(m_staticTextTheme, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxArrayString m_choiceThemeArr;
    m_choiceThemeArr.Add(wxT("Light"));
    m_choiceThemeArr.Add(wxT("Dark"));
    m_choiceTheme = new wxChoice(m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panelGeneral, wxSize(-1,-1)), m_choiceThemeArr, 0);
    m_choiceTheme->SetSelection(0);
    
    boxSizerLvl3_2->Add(m_choiceTheme, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizer_bottonButtons = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer_lvl1_1->Add(boxSizer_bottonButtons, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    boxSizer_bottonButtons->Add(0, 0, 1, wxALL, WXC_FROM_DIP(5));
    
    m_buttonOK = new wxButton(this, wxID_ANY, _("OK"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), 0);
    
    boxSizer_bottonButtons->Add(m_buttonOK, 0, wxALL|wxALIGN_RIGHT, WXC_FROM_DIP(5));
    
    m_buttonCancel = new wxButton(this, wxID_ANY, _("Cancel"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), 0);
    
    boxSizer_bottonButtons->Add(m_buttonCancel, 0, wxALL|wxALIGN_RIGHT, WXC_FROM_DIP(5));
    
    
    #if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(m_notebook)){
        wxPersistenceManager::Get().RegisterAndRestore(m_notebook);
    } else {
        wxPersistenceManager::Get().Restore(m_notebook);
    }
    #endif
    
    SetName(wxT("GeneralPropertiesFormBase"));
    SetSize(-1,-1);
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(GeneralPropertiesFormBase::OnButtonOKClick), NULL, this);
    m_buttonCancel->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(GeneralPropertiesFormBase::OnButtonCancelClick), NULL, this);
    
}

GeneralPropertiesFormBase::~GeneralPropertiesFormBase()
{
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(GeneralPropertiesFormBase::OnButtonOKClick), NULL, this);
    m_buttonCancel->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(GeneralPropertiesFormBase::OnButtonCancelClick), NULL, this);
    
}

SimulationsSettingsFormBase::SimulationsSettingsFormBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCDAD0InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer_lvl1_1 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer_lvl1_1);
    
    m_notebook = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), wxBK_DEFAULT);
    m_notebook->SetName(wxT("m_notebook"));
    
    boxSizer_lvl1_1->Add(m_notebook, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_panelGeneral = new wxPanel(m_notebook, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook, wxSize(-1,-1)), wxTAB_TRAVERSAL);
    m_notebook->AddPage(m_panelGeneral, _("General"), false);
    
    wxBoxSizer* boxSizerLvl2_1 = new wxBoxSizer(wxVERTICAL);
    m_panelGeneral->SetSizer(boxSizerLvl2_1);
    
    wxBoxSizer* boxSizerLvl3_1 = new wxBoxSizer(wxVERTICAL);
    
    boxSizerLvl2_1->Add(boxSizerLvl3_1, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticTextBasePower = new wxStaticText(m_panelGeneral, wxID_ANY, _("Base power"), wxDefaultPosition, wxDLG_UNIT(m_panelGeneral, wxSize(-1,-1)), 0);
    
    boxSizerLvl3_1->Add(m_staticTextBasePower, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizerLvl4_1 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizerLvl3_1->Add(boxSizerLvl4_1, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_textCtrlbasePower = new wxTextCtrl(m_panelGeneral, wxID_ANY, wxT("100,0"), wxDefaultPosition, wxDLG_UNIT(m_panelGeneral, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlbasePower->SetHint(wxT(""));
    #endif
    
    boxSizerLvl4_1->Add(m_textCtrlbasePower, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxArrayString m_choiceBasePowerArr;
    m_choiceBasePowerArr.Add(wxT("VA"));
    m_choiceBasePowerArr.Add(wxT("kVA"));
    m_choiceBasePowerArr.Add(wxT("MVA"));
    m_choiceBasePower = new wxChoice(m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panelGeneral, wxSize(-1,-1)), m_choiceBasePowerArr, 0);
    m_choiceBasePower->SetSelection(2);
    
    boxSizerLvl4_1->Add(m_choiceBasePower, 0, wxLEFT|wxRIGHT|wxBOTTOM, WXC_FROM_DIP(5));
    
    wxStaticBoxSizer* staticBoxSizerLvl3_2 = new wxStaticBoxSizer( new wxStaticBox(m_panelGeneral, wxID_ANY, _("Continuous calculation")), wxVERTICAL);
    
    boxSizerLvl2_1->Add(staticBoxSizerLvl3_2, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_checkBoxFaultAfterPF = new wxCheckBox(m_panelGeneral, wxID_ANY, _("Calculate fault after power flow"), wxDefaultPosition, wxDLG_UNIT(m_panelGeneral, wxSize(-1,-1)), 0);
    m_checkBoxFaultAfterPF->SetValue(true);
    
    staticBoxSizerLvl3_2->Add(m_checkBoxFaultAfterPF, 0, wxALL, WXC_FROM_DIP(5));
    
    m_checkBoxSCPowerAfterPF = new wxCheckBox(m_panelGeneral, wxID_ANY, _("Calculate short-circuit power after power flow"), wxDefaultPosition, wxDLG_UNIT(m_panelGeneral, wxSize(-1,-1)), 0);
    m_checkBoxSCPowerAfterPF->SetValue(true);
    
    staticBoxSizerLvl3_2->Add(m_checkBoxSCPowerAfterPF, 0, wxALL, WXC_FROM_DIP(5));
    
    m_panelPF = new wxPanel(m_notebook, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook, wxSize(-1,-1)), wxTAB_TRAVERSAL);
    m_notebook->AddPage(m_panelPF, _("Power flow"), false);
    
    wxBoxSizer* boxSizerLvl2_2 = new wxBoxSizer(wxVERTICAL);
    m_panelPF->SetSizer(boxSizerLvl2_2);
    
    wxBoxSizer* boxSizerLvl3_3 = new wxBoxSizer(wxVERTICAL);
    
    boxSizerLvl2_2->Add(boxSizerLvl3_3, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticTextPFMethod = new wxStaticText(m_panelPF, wxID_ANY, _("Solution method"), wxDefaultPosition, wxDLG_UNIT(m_panelPF, wxSize(-1,-1)), 0);
    
    boxSizerLvl3_3->Add(m_staticTextPFMethod, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxArrayString m_choicePFMethodArr;
    m_choicePFMethodArr.Add(wxT("Gauss-Seidel"));
    m_choicePFMethodArr.Add(wxT("Newton-Raphson"));
    m_choicePFMethod = new wxChoice(m_panelPF, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panelPF, wxSize(-1,-1)), m_choicePFMethodArr, 0);
    m_choicePFMethod->SetSelection(0);
    
    boxSizerLvl3_3->Add(m_choicePFMethod, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, WXC_FROM_DIP(5));
    
    wxGridSizer* gridSizerLvl_3_4 = new wxGridSizer(0, 2, 0, 0);
    
    boxSizerLvl2_2->Add(gridSizerLvl_3_4, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizerLvl4_2 = new wxBoxSizer(wxVERTICAL);
    
    gridSizerLvl_3_4->Add(boxSizerLvl4_2, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticTextAccFactor = new wxStaticText(m_panelPF, wxID_ANY, _("Acceleration factor"), wxDefaultPosition, wxDLG_UNIT(m_panelPF, wxSize(-1,-1)), 0);
    
    boxSizerLvl4_2->Add(m_staticTextAccFactor, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_textCtrlAccFactor = new wxTextCtrl(m_panelPF, wxID_ANY, wxT("1,0"), wxDefaultPosition, wxDLG_UNIT(m_panelPF, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlAccFactor->SetHint(wxT(""));
    #endif
    
    boxSizerLvl4_2->Add(m_textCtrlAccFactor, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizerLvl4_3 = new wxBoxSizer(wxVERTICAL);
    
    gridSizerLvl_3_4->Add(boxSizerLvl4_3, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticTextPFTolerance = new wxStaticText(m_panelPF, wxID_ANY, _("Tolerance"), wxDefaultPosition, wxDLG_UNIT(m_panelPF, wxSize(-1,-1)), 0);
    
    boxSizerLvl4_3->Add(m_staticTextPFTolerance, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_textCtrlPFTolerance = new wxTextCtrl(m_panelPF, wxID_ANY, wxT("1e-7"), wxDefaultPosition, wxDLG_UNIT(m_panelPF, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlPFTolerance->SetHint(wxT(""));
    #endif
    
    boxSizerLvl4_3->Add(m_textCtrlPFTolerance, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizerLvl4_4 = new wxBoxSizer(wxVERTICAL);
    
    gridSizerLvl_3_4->Add(boxSizerLvl4_4, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticTextPFMaxIterations = new wxStaticText(m_panelPF, wxID_ANY, _("Max. iterations"), wxDefaultPosition, wxDLG_UNIT(m_panelPF, wxSize(-1,-1)), 0);
    
    boxSizerLvl4_4->Add(m_staticTextPFMaxIterations, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_textCtrlPFMaxIterations = new wxTextCtrl(m_panelPF, wxID_ANY, wxT("5000"), wxDefaultPosition, wxDLG_UNIT(m_panelPF, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlPFMaxIterations->SetHint(wxT(""));
    #endif
    
    boxSizerLvl4_4->Add(m_textCtrlPFMaxIterations, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_panelStability = new wxPanel(m_notebook, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook, wxSize(-1,-1)), wxTAB_TRAVERSAL);
    m_notebook->AddPage(m_panelStability, _("Stability"), false);
    
    wxBoxSizer* boxSizerLvl2_232 = new wxBoxSizer(wxVERTICAL);
    m_panelStability->SetSizer(boxSizerLvl2_232);
    
    wxGridSizer* gridSizerLvl_2_3 = new wxGridSizer(0, 2, 0, 0);
    
    boxSizerLvl2_232->Add(gridSizerLvl_2_3, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizerLvl3_6 = new wxBoxSizer(wxVERTICAL);
    
    gridSizerLvl_2_3->Add(boxSizerLvl3_6, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticTextTimeStep = new wxStaticText(m_panelStability, wxID_ANY, _("Time step"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    
    boxSizerLvl3_6->Add(m_staticTextTimeStep, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizerLvl4_6 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizerLvl3_6->Add(boxSizerLvl4_6, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_textCtrlTimeStep = new wxTextCtrl(m_panelStability, wxID_ANY, wxT("0,01"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlTimeStep->SetHint(wxT(""));
    #endif
    
    boxSizerLvl4_6->Add(m_textCtrlTimeStep, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_staticTextSec_1 = new wxStaticText(m_panelStability, wxID_ANY, _("s"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    
    boxSizerLvl4_6->Add(m_staticTextSec_1, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizerLvl3_7 = new wxBoxSizer(wxVERTICAL);
    
    gridSizerLvl_2_3->Add(boxSizerLvl3_7, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticTextTSimTime = new wxStaticText(m_panelStability, wxID_ANY, _("Simulation time"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    
    boxSizerLvl3_7->Add(m_staticTextTSimTime, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizerLvl4_7 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizerLvl3_7->Add(boxSizerLvl4_7, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_textCtrlSimTime = new wxTextCtrl(m_panelStability, wxID_ANY, wxT("10"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlSimTime->SetHint(wxT(""));
    #endif
    
    boxSizerLvl4_7->Add(m_textCtrlSimTime, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_staticTextSec_2 = new wxStaticText(m_panelStability, wxID_ANY, _("s"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    
    boxSizerLvl4_7->Add(m_staticTextSec_2, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizerLvl3_5 = new wxBoxSizer(wxVERTICAL);
    
    gridSizerLvl_2_3->Add(boxSizerLvl3_5, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticTextFreq = new wxStaticText(m_panelStability, wxID_ANY, _("System frequency"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    
    boxSizerLvl3_5->Add(m_staticTextFreq, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizerLvl4_5 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizerLvl3_5->Add(boxSizerLvl4_5, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_textCtrlFreq = new wxTextCtrl(m_panelStability, wxID_ANY, wxT("60,0"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlFreq->SetHint(wxT(""));
    #endif
    
    boxSizerLvl4_5->Add(m_textCtrlFreq, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_staticTextFreqUnit = new wxStaticText(m_panelStability, wxID_ANY, _("Hz"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    
    boxSizerLvl4_5->Add(m_staticTextFreqUnit, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizerLvl3_8 = new wxBoxSizer(wxVERTICAL);
    
    gridSizerLvl_2_3->Add(boxSizerLvl3_8, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticTextTStabTolerance = new wxStaticText(m_panelStability, wxID_ANY, _("Tolerance"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    
    boxSizerLvl3_8->Add(m_staticTextTStabTolerance, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_textCtrlStabTolerance = new wxTextCtrl(m_panelStability, wxID_ANY, wxT("1e-8"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlStabTolerance->SetHint(wxT(""));
    #endif
    
    boxSizerLvl3_8->Add(m_textCtrlStabTolerance, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizerLvl3_9 = new wxBoxSizer(wxVERTICAL);
    
    gridSizerLvl_2_3->Add(boxSizerLvl3_9, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticTextTStabMaxIterations = new wxStaticText(m_panelStability, wxID_ANY, _("Max. Iterations"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    
    boxSizerLvl3_9->Add(m_staticTextTStabMaxIterations, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_textCtrlStabMaxIterations = new wxTextCtrl(m_panelStability, wxID_ANY, wxT("100"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlStabMaxIterations->SetHint(wxT(""));
    #endif
    
    boxSizerLvl3_9->Add(m_textCtrlStabMaxIterations, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizerLvl3_10 = new wxBoxSizer(wxVERTICAL);
    
    gridSizerLvl_2_3->Add(boxSizerLvl3_10, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticTextCtrlStepRation = new wxStaticText(m_panelStability, wxID_ANY, _("Controls step ratio"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    
    boxSizerLvl3_10->Add(m_staticTextCtrlStepRation, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_textCtrlCtrlStepRatio = new wxTextCtrl(m_panelStability, wxID_ANY, wxT("10"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlCtrlStepRatio->SetHint(wxT(""));
    #endif
    
    boxSizerLvl3_10->Add(m_textCtrlCtrlStepRatio, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizerLvl3_11 = new wxBoxSizer(wxVERTICAL);
    
    gridSizerLvl_2_3->Add(boxSizerLvl3_11, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticTextPrintTime = new wxStaticText(m_panelStability, wxID_ANY, _("Plot time"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    
    boxSizerLvl3_11->Add(m_staticTextPrintTime, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizerLvl4_8 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizerLvl3_11->Add(boxSizerLvl4_8, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_textCtrlPrintTime = new wxTextCtrl(m_panelStability, wxID_ANY, wxT("0,01"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlPrintTime->SetHint(wxT(""));
    #endif
    
    boxSizerLvl4_8->Add(m_textCtrlPrintTime, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_staticTextSec_4 = new wxStaticText(m_panelStability, wxID_ANY, _("s"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    
    boxSizerLvl4_8->Add(m_staticTextSec_4, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_checkBoxUseCOI = new wxCheckBox(m_panelStability, wxID_ANY, _("Use center of inertia as reference"), wxDefaultPosition, wxDLG_UNIT(m_panelStability, wxSize(-1,-1)), 0);
    m_checkBoxUseCOI->SetValue(true);
    
    boxSizerLvl2_232->Add(m_checkBoxUseCOI, 0, wxALL, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizer_bottonButtons = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer_lvl1_1->Add(boxSizer_bottonButtons, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    boxSizer_bottonButtons->Add(0, 0, 1, wxALL, WXC_FROM_DIP(5));
    
    m_buttonOK = new wxButton(this, wxID_ANY, _("OK"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), 0);
    
    boxSizer_bottonButtons->Add(m_buttonOK, 0, wxALL|wxALIGN_RIGHT, WXC_FROM_DIP(5));
    
    m_buttonCancel = new wxButton(this, wxID_ANY, _("Cancel"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), 0);
    
    boxSizer_bottonButtons->Add(m_buttonCancel, 0, wxALL|wxALIGN_RIGHT, WXC_FROM_DIP(5));
    
    
    #if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(m_notebook)){
        wxPersistenceManager::Get().RegisterAndRestore(m_notebook);
    } else {
        wxPersistenceManager::Get().Restore(m_notebook);
    }
    #endif
    
    SetName(wxT("SimulationsSettingsFormBase"));
    SetSize(-1,-1);
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_choicePFMethod->Connect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(SimulationsSettingsFormBase::OnPFMethodChoiceSelected), NULL, this);
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SimulationsSettingsFormBase::OnButtonOKClick), NULL, this);
    m_buttonCancel->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SimulationsSettingsFormBase::OnButtonCancelClick), NULL, this);
    
}

SimulationsSettingsFormBase::~SimulationsSettingsFormBase()
{
    m_choicePFMethod->Disconnect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(SimulationsSettingsFormBase::OnPFMethodChoiceSelected), NULL, this);
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SimulationsSettingsFormBase::OnButtonOKClick), NULL, this);
    m_buttonCancel->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SimulationsSettingsFormBase::OnButtonCancelClick), NULL, this);
    
}

AboutFormBase::AboutFormBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCDAD0InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizerMain = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizerMain);
    
    m_notebook = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), wxBK_DEFAULT);
    m_notebook->SetName(wxT("m_notebook"));
    
    boxSizerMain->Add(m_notebook, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_panelLogo = new wxPanel(m_notebook, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook, wxSize(-1,-1)), wxTAB_TRAVERSAL);
    m_notebook->AddPage(m_panelLogo, _("About"), false);
    
    wxBoxSizer* boxSizerLvl1_1 = new wxBoxSizer(wxVERTICAL);
    m_panelLogo->SetSizer(boxSizerLvl1_1);
    
    m_staticBitmapLogo = new wxStaticBitmap(m_panelLogo, wxID_ANY, wxXmlResource::Get()->LoadBitmap(wxT("About2017")), wxDefaultPosition, wxDLG_UNIT(m_panelLogo, wxSize(-1,-1)), 0 );
    
    boxSizerLvl1_1->Add(m_staticBitmapLogo, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(5));
    
    m_panelCredits = new wxPanel(m_notebook, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook, wxSize(-1,-1)), wxTAB_TRAVERSAL);
    m_notebook->AddPage(m_panelCredits, _("Credits"), false);
    
    wxBoxSizer* boxSizerLvl1_2 = new wxBoxSizer(wxVERTICAL);
    m_panelCredits->SetSizer(boxSizerLvl1_2);
    
    m_gridCredits = new wxGrid(m_panelCredits, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panelCredits, wxSize(-1,-1)), wxWANTS_CHARS);
    m_gridCredits->CreateGrid(0, 0);
    m_gridCredits->SetRowLabelAlignment(wxALIGN_RIGHT, wxALIGN_CENTRE);
    m_gridCredits->SetColLabelAlignment(wxALIGN_CENTRE, wxALIGN_CENTRE);
    #if wxVERSION_NUMBER >= 2904
    m_gridCredits->UseNativeColHeader(true);
    #endif
    m_gridCredits->EnableEditing(false);
    
    boxSizerLvl1_2->Add(m_gridCredits, 1, wxEXPAND, WXC_FROM_DIP(5));
    
    m_panelLicense = new wxPanel(m_notebook, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook, wxSize(-1,-1)), wxTAB_TRAVERSAL);
    m_notebook->AddPage(m_panelLicense, _("License"), false);
    
    wxBoxSizer* boxSizerLvl1_3 = new wxBoxSizer(wxVERTICAL);
    m_panelLicense->SetSizer(boxSizerLvl1_3);
    
    m_richTextCtrlLicense = new wxRichTextCtrl(m_panelLicense, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panelLicense, wxSize(-1,-1)), wxTE_MULTILINE|wxTE_PROCESS_TAB|wxTE_PROCESS_ENTER|wxWANTS_CHARS);
    
    boxSizerLvl1_3->Add(m_richTextCtrlLicense, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    wxFlexGridSizer* flexGridSizer247 = new wxFlexGridSizer(2, 2, 0, 0);
    flexGridSizer247->SetFlexibleDirection( wxBOTH );
    flexGridSizer247->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer247->AddGrowableCol(1);
    
    boxSizerMain->Add(flexGridSizer247, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticTextVersionLabel = new wxStaticText(this, wxID_ANY, _("Version:"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), 0);
    
    flexGridSizer247->Add(m_staticTextVersionLabel, 0, wxALL, WXC_FROM_DIP(5));
    
    m_staticTextVersion = new wxStaticText(this, wxID_ANY, _("Alpha 2017w37a"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), 0);
    
    flexGridSizer247->Add(m_staticTextVersion, 0, wxALL, WXC_FROM_DIP(5));
    
    m_staticTextHome = new wxStaticText(this, wxID_ANY, _("Home page:"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), 0);
    
    flexGridSizer247->Add(m_staticTextHome, 0, wxALL, WXC_FROM_DIP(5));
    
    m_hyperLinkPSP = new wxHyperlinkCtrl(this, wxID_ANY, _("https://thales1330.github.io/PSP/"), wxT("https://thales1330.github.io/PSP/"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), wxHL_DEFAULT_STYLE);
    m_hyperLinkPSP->SetNormalColour(wxColour(wxT("#0000FF")));
    m_hyperLinkPSP->SetHoverColour(wxColour(wxT("#0000FF")));
    m_hyperLinkPSP->SetVisitedColour(wxColour(wxT("#FF0000")));
    
    flexGridSizer247->Add(m_hyperLinkPSP, 0, wxALL, WXC_FROM_DIP(5));
    
    m_buttonOK = new wxButton(this, wxID_ANY, _("OK"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), 0);
    
    boxSizerMain->Add(m_buttonOK, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(5));
    
    
    #if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(m_notebook)){
        wxPersistenceManager::Get().RegisterAndRestore(m_notebook);
    } else {
        wxPersistenceManager::Get().Restore(m_notebook);
    }
    #endif
    
    SetName(wxT("AboutFormBase"));
    SetSize(-1,-1);
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AboutFormBase::OnOKButtonClick), NULL, this);
    
}

AboutFormBase::~AboutFormBase()
{
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AboutFormBase::OnOKButtonClick), NULL, this);
    
}
