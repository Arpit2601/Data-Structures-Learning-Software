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
#include "stdafx.h"
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
<<<<<<< HEAD
<<<<<<< HEAD
	Application::Run(gcnew LoginForm());
=======
	Application::Run(gcnew Stack_Main());
>>>>>>> f8457e3eec83177cf072441952a7d97b1a755137
=======
	Application::Run(gcnew Queue_Home());
>>>>>>> 135305b2f2bea9eee209d0ab436b3b13cf56983b
	return 0;
}
