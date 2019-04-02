#include "panel.h"

/*
Class Constructor

@param wxWindow* the parent window for the Panel class
*/
Panel::Panel(wxWindow* parent) 
	: wxPanel(parent, -1)
{
	auto hello_button = new wxButton(this, -1, wxT("Hello"));
}


