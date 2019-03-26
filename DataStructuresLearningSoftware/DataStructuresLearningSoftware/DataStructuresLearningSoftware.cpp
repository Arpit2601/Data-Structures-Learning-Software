// DataStructuresLearningSoftware.cpp : main project file.

#include "stdafx.h"
#include "MainPage.h"
#include "Queue_Home.h"
#include "Stack_Main.h"
#include "Searching.h"
#include "Sorting.h"
#include "A_and_LL.h"	// Start with Form1
#include "LoginForm.h"
#include "Homepage.h"
#using <system.windows.forms.dll>
#using <Microsoft.VisualBasic.dll>

using namespace DataStructuresLearningSoftware;

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
