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
#include "Arrays.h"
#include "LinkedList1.h"
#include "BST.h"
#include "MainPage.h"
//#include "stdafx.h"

#using <system.windows.forms.dll>
#using <Microsoft.VisualBasic.dll>


using namespace DataStructuresLearningSoftware;


[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are create
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew MainPage());
	Application::Run(gcnew LoginForm());

//<< HEAD

	
//==
	//Application::Run(gcnew MainPage());
//>>> 34383c9a50c3d4f8851b1bafbabe185f21d9f89e


	return 0;
}
