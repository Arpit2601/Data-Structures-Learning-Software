// Login_HomePage.cpp : main project file.

#include "stdafx.h"
#include "LoginForm.h"
#include "Homepage.h"
#using <system.windows.forms.dll>
#using <Microsoft.VisualBasic.dll>

using namespace Login_HomePage;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	

	// Create the main window and run it
	Application::Run(gcnew LoginForm());
	return 0;
}
