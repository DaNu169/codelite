//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "NewKeyShortcutBaseDlg.h"


// Declare the bitmap loading function
extern void wxC8418InitBitmapResources();

static bool bBitmapLoaded = false;


NewKeyShortcutBaseDlg::NewKeyShortcutBaseDlg(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC8418InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer3 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer3);
    
    m_panel1 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(500,-1), wxTAB_TRAVERSAL);
    
    bSizer3->Add(m_panel1, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer5 = new wxBoxSizer(wxVERTICAL);
    m_panel1->SetSizer(bSizer5);
    
    m_staticTextAction = new wxStaticText(m_panel1, wxID_ANY, _("Action:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer5->Add(m_staticTextAction, 1, wxALL|wxEXPAND, 5);
    
    m_staticText = new wxStaticText(m_panel1, wxID_ANY, _("Hit any key combination:"), wxDefaultPosition, wxSize(-1, -1), 0);
    wxFont m_staticTextFont = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_staticTextFont.SetWeight(wxFONTWEIGHT_BOLD);
    m_staticText->SetFont(m_staticTextFont);
    
    bSizer5->Add(m_staticText, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    wxBoxSizer* bSizer6 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer5->Add(bSizer6, 0, wxEXPAND, 5);
    
    m_textCtrl1 = new wxTextCtrl(m_panel1, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), wxTE_PROCESS_TAB|wxTE_PROCESS_ENTER);
    
    bSizer6->Add(m_textCtrl1, 1, wxALL|wxEXPAND, 5);
    
    m_buttonClear = new wxButton(m_panel1, wxID_ANY, _("Clear"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer6->Add(m_buttonClear, 0, wxALL, 5);
    
    wxBoxSizer* bSizer4 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer3->Add(bSizer4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_buttonOk = new wxButton(this, wxID_OK, _("&OK"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonOk->SetDefault();
    
    bSizer4->Add(m_buttonOk, 0, wxALL, 5);
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer4->Add(m_buttonCancel, 0, wxALL, 5);
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre();
    // Connect events
    m_textCtrl1->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(NewKeyShortcutBaseDlg::OnKeyDown), NULL, this);
    m_buttonClear->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(NewKeyShortcutBaseDlg::OnButtonClear), NULL, this);
    
}

NewKeyShortcutBaseDlg::~NewKeyShortcutBaseDlg()
{
    m_textCtrl1->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(NewKeyShortcutBaseDlg::OnKeyDown), NULL, this);
    m_buttonClear->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(NewKeyShortcutBaseDlg::OnButtonClear), NULL, this);
    
}
