// DataStructuresLearningSoftware.cpp : main project file.

#include "stdafx.h"
#include "MainPage.h"
#include "Searching.h"

using namespace DataStructuresLearningSoftware;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Searching());
	return 0;
}
