#include "SpirographPanel.h"
#include "../../include/padlock16x16-blue.xpm"
#include "EffectPanelUtils.h"

//(*InternalHeaders(SpirographPanel)
#include <wx/bmpbuttn.h>
#include <wx/sizer.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/slider.h>
#include <wx/intl.h>
#include <wx/stattext.h>
#include <wx/bitmap.h>
#include <wx/textctrl.h>
#include <wx/image.h>
//*)

//(*IdInit(SpirographPanel)
const long SpirographPanel::ID_STATICTEXT33 = wxNewId();
const long SpirographPanel::IDD_SLIDER_Spirograph_Speed = wxNewId();
const long SpirographPanel::ID_TEXTCTRL_Spirograph_Speed = wxNewId();
const long SpirographPanel::ID_BITMAPBUTTON32 = wxNewId();
const long SpirographPanel::ID_STATICTEXT88 = wxNewId();
const long SpirographPanel::ID_SLIDER_Spirograph_R = wxNewId();
const long SpirographPanel::IDD_TEXTCTRL_Spirograph_R = wxNewId();
const long SpirographPanel::ID_BITMAPBUTTON_SLIDER_Spirograph_R = wxNewId();
const long SpirographPanel::ID_STATICTEXT89 = wxNewId();
const long SpirographPanel::ID_SLIDER_Spirograph_r = wxNewId();
const long SpirographPanel::IDD_TEXTCTRL_Spirograph_r = wxNewId();
const long SpirographPanel::ID_BITMAPBUTTON_SLIDER_Spirograph_r = wxNewId();
const long SpirographPanel::ID_STATICTEXT90 = wxNewId();
const long SpirographPanel::ID_SLIDER_Spirograph_d = wxNewId();
const long SpirographPanel::IDD_TEXTCTRL_Spirograph_d = wxNewId();
const long SpirographPanel::ID_BITMAPBUTTON_SLIDER_Spirograph_d = wxNewId();
const long SpirographPanel::IDD_SLIDER_Spirograph_Animate = wxNewId();
const long SpirographPanel::ID_TEXTCTRL_Spirograph_Animate = wxNewId();
const long SpirographPanel::ID_BITMAPBUTTON_CHECKBOX_Spirograph_Animate = wxNewId();
const long SpirographPanel::IDD_SLIDER_Spirograph_Length = wxNewId();
const long SpirographPanel::ID_TEXTCTRL_Spirograph_Length = wxNewId();
const long SpirographPanel::ID_BITMAPBUTTON33 = wxNewId();
const long SpirographPanel::ID_STATICTEXT91 = wxNewId();
//*)

BEGIN_EVENT_TABLE(SpirographPanel,wxPanel)
	//(*EventTable(SpirographPanel)
	//*)
END_EVENT_TABLE()

SpirographPanel::SpirographPanel(wxWindow* parent)
{
	//(*Initialize(SpirographPanel)
	wxTextCtrl* TextCtrl81;
	wxFlexGridSizer* FlexGridSizer127;
	wxSlider* Slider_Spirograph_r;
	wxFlexGridSizer* FlexGridSizer72;
	wxTextCtrl* TextCtrl82;
	wxTextCtrl* TextCtrl22;
	wxStaticText* StaticText92;
	wxTextCtrl* TextCtrl21;
	wxSlider* Slider31;
	wxTextCtrl* TextCtrl83;
	wxFlexGridSizer* FlexGridSizer132;
	wxSlider* Slider32;
	wxStaticText* StaticText191;
	wxFlexGridSizer* FlexGridSizer126;
	wxFlexGridSizer* FlexGridSizer125;
	wxSlider* Slider_Spirograph_d;
	wxFlexGridSizer* FlexGridSizer133;
	wxTextCtrl* TextCtrl23;
	wxSlider* Slider_Spirograph_R;
	wxFlexGridSizer* FlexGridSizer134;
	wxSlider* Slider30;

	Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxID_ANY"));
	FlexGridSizer72 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer72->AddGrowableCol(1);
	StaticText190 = new wxStaticText(this, ID_STATICTEXT33, _("Speed"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT33"));
	FlexGridSizer72->Add(StaticText190, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
	FlexGridSizer132 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer132->AddGrowableCol(0);
	Slider30 = new wxSlider(this, IDD_SLIDER_Spirograph_Speed, 10, 0, 50, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("IDD_SLIDER_Spirograph_Speed"));
	FlexGridSizer132->Add(Slider30, 1, wxALL|wxEXPAND, 2);
	TextCtrl81 = new wxTextCtrl(this, ID_TEXTCTRL_Spirograph_Speed, _("10"), wxDefaultPosition, wxDLG_UNIT(this,wxSize(25,-1)), 0, wxDefaultValidator, _T("ID_TEXTCTRL_Spirograph_Speed"));
	TextCtrl81->SetMaxLength(3);
	FlexGridSizer132->Add(TextCtrl81, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer72->Add(FlexGridSizer132, 1, wxALL|wxEXPAND, 2);
	BitmapButton14 = new wxBitmapButton(this, ID_BITMAPBUTTON32, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON32"));
	BitmapButton14->SetDefault();
	BitmapButton14->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
	FlexGridSizer72->Add(BitmapButton14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText87 = new wxStaticText(this, ID_STATICTEXT88, _("R - Radius of outer circle"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT88"));
	FlexGridSizer72->Add(StaticText87, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
	FlexGridSizer125 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer125->AddGrowableCol(0);
	Slider_Spirograph_R = new wxSlider(this, ID_SLIDER_Spirograph_R, 20, 1, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Spirograph_R"));
	FlexGridSizer125->Add(Slider_Spirograph_R, 1, wxALL|wxEXPAND, 2);
	TextCtrl21 = new wxTextCtrl(this, IDD_TEXTCTRL_Spirograph_R, _("20"), wxDefaultPosition, wxDLG_UNIT(this,wxSize(25,-1)), 0, wxDefaultValidator, _T("IDD_TEXTCTRL_Spirograph_R"));
	TextCtrl21->SetMaxLength(3);
	FlexGridSizer125->Add(TextCtrl21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer72->Add(FlexGridSizer125, 1, wxALL|wxEXPAND, 2);
	BitmapButton_SpirographR = new wxBitmapButton(this, ID_BITMAPBUTTON_SLIDER_Spirograph_R, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Spirograph_R"));
	BitmapButton_SpirographR->SetDefault();
	BitmapButton_SpirographR->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
	FlexGridSizer72->Add(BitmapButton_SpirographR, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	StaticText88 = new wxStaticText(this, ID_STATICTEXT89, _("r - Radius of inner circle"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT89"));
	FlexGridSizer72->Add(StaticText88, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
	FlexGridSizer126 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer126->AddGrowableCol(0);
	Slider_Spirograph_r = new wxSlider(this, ID_SLIDER_Spirograph_r, 10, 1, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Spirograph_r"));
	FlexGridSizer126->Add(Slider_Spirograph_r, 1, wxALL|wxEXPAND, 2);
	TextCtrl22 = new wxTextCtrl(this, IDD_TEXTCTRL_Spirograph_r, _("10"), wxDefaultPosition, wxDLG_UNIT(this,wxSize(25,-1)), 0, wxDefaultValidator, _T("IDD_TEXTCTRL_Spirograph_r"));
	TextCtrl22->SetMaxLength(3);
	FlexGridSizer126->Add(TextCtrl22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer72->Add(FlexGridSizer126, 1, wxALL|wxEXPAND, 2);
	BitmapButton_Spirographr = new wxBitmapButton(this, ID_BITMAPBUTTON_SLIDER_Spirograph_r, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Spirograph_r"));
	BitmapButton_Spirographr->SetDefault();
	BitmapButton_Spirographr->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
	FlexGridSizer72->Add(BitmapButton_Spirographr, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	StaticText89 = new wxStaticText(this, ID_STATICTEXT90, _("d - Distance"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT90"));
	FlexGridSizer72->Add(StaticText89, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
	FlexGridSizer127 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer127->AddGrowableCol(0);
	Slider_Spirograph_d = new wxSlider(this, ID_SLIDER_Spirograph_d, 30, 1, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Spirograph_d"));
	FlexGridSizer127->Add(Slider_Spirograph_d, 1, wxALL|wxEXPAND, 2);
	TextCtrl23 = new wxTextCtrl(this, IDD_TEXTCTRL_Spirograph_d, _("30"), wxDefaultPosition, wxDLG_UNIT(this,wxSize(25,-1)), 0, wxDefaultValidator, _T("IDD_TEXTCTRL_Spirograph_d"));
	TextCtrl23->SetMaxLength(3);
	FlexGridSizer127->Add(TextCtrl23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer72->Add(FlexGridSizer127, 1, wxALL|wxEXPAND, 2);
	BitmapButton_SpirographAnimate = new wxBitmapButton(this, ID_BITMAPBUTTON_SLIDER_Spirograph_d, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Spirograph_d"));
	BitmapButton_SpirographAnimate->SetDefault();
	BitmapButton_SpirographAnimate->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
	FlexGridSizer72->Add(BitmapButton_SpirographAnimate, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	StaticText92 = new wxStaticText(this, wxID_ANY, _("d - Animation"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
	FlexGridSizer72->Add(StaticText92, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
	FlexGridSizer133 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer133->AddGrowableCol(0);
	Slider31 = new wxSlider(this, IDD_SLIDER_Spirograph_Animate, 0, -50, 50, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("IDD_SLIDER_Spirograph_Animate"));
	FlexGridSizer133->Add(Slider31, 1, wxALL|wxEXPAND, 2);
	TextCtrl82 = new wxTextCtrl(this, ID_TEXTCTRL_Spirograph_Animate, _("0"), wxDefaultPosition, wxDLG_UNIT(this,wxSize(25,-1)), 0, wxDefaultValidator, _T("ID_TEXTCTRL_Spirograph_Animate"));
	TextCtrl82->SetMaxLength(3);
	FlexGridSizer133->Add(TextCtrl82, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer72->Add(FlexGridSizer133, 1, wxALL|wxEXPAND, 2);
	BitmapButton_Spirographd = new wxBitmapButton(this, ID_BITMAPBUTTON_CHECKBOX_Spirograph_Animate, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Spirograph_Animate"));
	BitmapButton_Spirographd->SetDefault();
	BitmapButton_Spirographd->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
	FlexGridSizer72->Add(BitmapButton_Spirographd, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	StaticText191 = new wxStaticText(this, wxID_ANY, _("Length"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
	FlexGridSizer72->Add(StaticText191, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
	FlexGridSizer134 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer134->AddGrowableCol(0);
	Slider32 = new wxSlider(this, IDD_SLIDER_Spirograph_Length, 20, 0, 50, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("IDD_SLIDER_Spirograph_Length"));
	FlexGridSizer134->Add(Slider32, 1, wxALL|wxEXPAND, 2);
	TextCtrl83 = new wxTextCtrl(this, ID_TEXTCTRL_Spirograph_Length, _("20"), wxDefaultPosition, wxDLG_UNIT(this,wxSize(25,-1)), 0, wxDefaultValidator, _T("ID_TEXTCTRL_Spirograph_Length"));
	TextCtrl83->SetMaxLength(3);
	FlexGridSizer134->Add(TextCtrl83, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer72->Add(FlexGridSizer134, 1, wxALL|wxEXPAND, 2);
	BitmapButton15 = new wxBitmapButton(this, ID_BITMAPBUTTON33, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON33"));
	BitmapButton15->SetDefault();
	BitmapButton15->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
	FlexGridSizer72->Add(BitmapButton15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText90 = new wxStaticText(this, ID_STATICTEXT91, _("Note: r should be <= R"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT91"));
	FlexGridSizer72->Add(StaticText90, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
	SetSizer(FlexGridSizer72);
	FlexGridSizer72->Fit(this);
	FlexGridSizer72->SetSizeHints(this);

	Connect(IDD_SLIDER_Spirograph_Speed,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&SpirographPanel::UpdateLinkedTextCtrl);
	Connect(ID_TEXTCTRL_Spirograph_Speed,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&SpirographPanel::UpdateLinkedSlider);
	Connect(ID_BITMAPBUTTON32,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SpirographPanel::OnLockButtonClick);
	Connect(ID_SLIDER_Spirograph_R,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&SpirographPanel::UpdateLinkedTextCtrl);
	Connect(IDD_TEXTCTRL_Spirograph_R,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&SpirographPanel::UpdateLinkedSlider);
	Connect(ID_BITMAPBUTTON_SLIDER_Spirograph_R,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SpirographPanel::OnLockButtonClick);
	Connect(ID_SLIDER_Spirograph_r,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&SpirographPanel::UpdateLinkedTextCtrl);
	Connect(IDD_TEXTCTRL_Spirograph_r,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&SpirographPanel::UpdateLinkedSlider);
	Connect(ID_BITMAPBUTTON_SLIDER_Spirograph_r,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SpirographPanel::OnLockButtonClick);
	Connect(ID_SLIDER_Spirograph_d,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&SpirographPanel::UpdateLinkedTextCtrl);
	Connect(IDD_TEXTCTRL_Spirograph_d,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&SpirographPanel::UpdateLinkedSlider);
	Connect(ID_BITMAPBUTTON_SLIDER_Spirograph_d,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SpirographPanel::OnLockButtonClick);
	Connect(IDD_SLIDER_Spirograph_Animate,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&SpirographPanel::UpdateLinkedTextCtrl);
	Connect(ID_TEXTCTRL_Spirograph_Animate,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&SpirographPanel::UpdateLinkedSlider);
	Connect(ID_BITMAPBUTTON_CHECKBOX_Spirograph_Animate,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SpirographPanel::OnLockButtonClick);
	Connect(IDD_SLIDER_Spirograph_Length,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&SpirographPanel::UpdateLinkedTextCtrl);
	Connect(ID_TEXTCTRL_Spirograph_Length,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&SpirographPanel::UpdateLinkedSlider);
	Connect(ID_BITMAPBUTTON33,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SpirographPanel::OnLockButtonClick);
	//*)
    SetName("ID_PANEL_SPIROGRAPH");
}

SpirographPanel::~SpirographPanel()
{
	//(*Destroy(SpirographPanel)
	//*)
}

PANEL_EVENT_HANDLERS(SpirographPanel)