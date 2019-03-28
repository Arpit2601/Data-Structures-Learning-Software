#pragma once
#include "UI_Queue_Introduction.h"
#include "UI_Linear_Queue.h"
#include "UI_Circular_Queue.h"
#include "UI_Circular_Queue_Array.h"
#include "UI_Circular_Queue_LL.h"
#include "UI_Linear_Queue_Array.h"
#include "UI_Linear_Queue_LL.h"
#include "UI_Queue_App.h"
#include "UI_Queue_Quiz.h"
#include "UI_Circular_Queue_Animation.h"
#include "UI_Linear_Queue_Animation.h"
#include "DiscussionForum.h"

namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Queue_Home
	/// </summary>
	public ref class Queue_Home : public System::Windows::Forms::Form
	{
	public:
		Queue_Home(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Queue_Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  sidetabpanel;
	protected: 

	private: System::Windows::Forms::Panel^  headerpanel;
	protected: 

	private: System::Windows::Forms::Panel^  outputpanel;
	private: System::Windows::Forms::Button^  appbtn;
	private: System::Windows::Forms::Button^  quizbtn;



	private: System::Windows::Forms::Button^  linllbtn;
	private: System::Windows::Forms::Button^  linarrbtn;
	private: System::Windows::Forms::Button^  cqbtn;

	private: System::Windows::Forms::Button^  linbtn;
	private: System::Windows::Forms::Button^  introbtn;
	private: System::Windows::Forms::Button^  cqllbtn;


	private: System::Windows::Forms::Button^  cqarrbtn;
	private: System::Windows::Forms::Button^  ciranimbtn;
	private: System::Windows::Forms::Button^  linanimbtn;
	private: System::Windows::Forms::Button^  discussbtn;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->sidetabpanel = (gcnew System::Windows::Forms::Panel());
			this->ciranimbtn = (gcnew System::Windows::Forms::Button());
			this->linanimbtn = (gcnew System::Windows::Forms::Button());
			this->cqllbtn = (gcnew System::Windows::Forms::Button());
			this->cqarrbtn = (gcnew System::Windows::Forms::Button());
			this->appbtn = (gcnew System::Windows::Forms::Button());
			this->quizbtn = (gcnew System::Windows::Forms::Button());
			this->linllbtn = (gcnew System::Windows::Forms::Button());
			this->linarrbtn = (gcnew System::Windows::Forms::Button());
			this->cqbtn = (gcnew System::Windows::Forms::Button());
			this->linbtn = (gcnew System::Windows::Forms::Button());
			this->introbtn = (gcnew System::Windows::Forms::Button());
			this->headerpanel = (gcnew System::Windows::Forms::Panel());
			this->discussbtn = (gcnew System::Windows::Forms::Button());
			this->outputpanel = (gcnew System::Windows::Forms::Panel());
			this->sidetabpanel->SuspendLayout();
			this->headerpanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// sidetabpanel
			// 
			this->sidetabpanel->BackColor = System::Drawing::Color::LightSeaGreen;
			this->sidetabpanel->Controls->Add(this->ciranimbtn);
			this->sidetabpanel->Controls->Add(this->linanimbtn);
			this->sidetabpanel->Controls->Add(this->cqllbtn);
			this->sidetabpanel->Controls->Add(this->cqarrbtn);
			this->sidetabpanel->Controls->Add(this->appbtn);
			this->sidetabpanel->Controls->Add(this->quizbtn);
			this->sidetabpanel->Controls->Add(this->linllbtn);
			this->sidetabpanel->Controls->Add(this->linarrbtn);
			this->sidetabpanel->Controls->Add(this->cqbtn);
			this->sidetabpanel->Controls->Add(this->linbtn);
			this->sidetabpanel->Controls->Add(this->introbtn);
			this->sidetabpanel->Location = System::Drawing::Point(0, 0);
			this->sidetabpanel->Name = L"sidetabpanel";
			this->sidetabpanel->Size = System::Drawing::Size(175, 720);
			this->sidetabpanel->TabIndex = 0;
			// 
			// ciranimbtn
			// 
			this->ciranimbtn->BackColor = System::Drawing::Color::LightSeaGreen;
			this->ciranimbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ciranimbtn->FlatAppearance->BorderSize = 0;
			this->ciranimbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ciranimbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			this->ciranimbtn->ForeColor = System::Drawing::Color::Black;
			this->ciranimbtn->Location = System::Drawing::Point(0, 240);
			this->ciranimbtn->Name = L"ciranimbtn";
			this->ciranimbtn->Size = System::Drawing::Size(175, 30);
			this->ciranimbtn->TabIndex = 10;
			this->ciranimbtn->Text = L"Animations";
			this->ciranimbtn->UseVisualStyleBackColor = false;
			this->ciranimbtn->Click += gcnew System::EventHandler(this, &Queue_Home::ciranimbtn_Click);
			// 
			// linanimbtn
			// 
			this->linanimbtn->BackColor = System::Drawing::Color::LightSeaGreen;
			this->linanimbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->linanimbtn->FlatAppearance->BorderSize = 0;
			this->linanimbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->linanimbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			this->linanimbtn->ForeColor = System::Drawing::Color::Black;
			this->linanimbtn->Location = System::Drawing::Point(0, 120);
			this->linanimbtn->Name = L"linanimbtn";
			this->linanimbtn->Size = System::Drawing::Size(175, 30);
			this->linanimbtn->TabIndex = 9;
			this->linanimbtn->Text = L"Animations";
			this->linanimbtn->UseVisualStyleBackColor = false;
			this->linanimbtn->Click += gcnew System::EventHandler(this, &Queue_Home::linanimbtn_Click);
			// 
			// cqllbtn
			// 
			this->cqllbtn->BackColor = System::Drawing::Color::LightSeaGreen;
			this->cqllbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cqllbtn->FlatAppearance->BorderSize = 0;
			this->cqllbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cqllbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			this->cqllbtn->ForeColor = System::Drawing::Color::Black;
			this->cqllbtn->Location = System::Drawing::Point(0, 210);
			this->cqllbtn->Name = L"cqllbtn";
			this->cqllbtn->Size = System::Drawing::Size(175, 30);
			this->cqllbtn->TabIndex = 8;
			this->cqllbtn->Text = L"Linked List ";
			this->cqllbtn->UseVisualStyleBackColor = false;
			this->cqllbtn->Click += gcnew System::EventHandler(this, &Queue_Home::cqllbtn_Click);
			// 
			// cqarrbtn
			// 
			this->cqarrbtn->BackColor = System::Drawing::Color::LightSeaGreen;
			this->cqarrbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cqarrbtn->FlatAppearance->BorderSize = 0;
			this->cqarrbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cqarrbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			this->cqarrbtn->ForeColor = System::Drawing::Color::Black;
			this->cqarrbtn->Location = System::Drawing::Point(0, 180);
			this->cqarrbtn->Name = L"cqarrbtn";
			this->cqarrbtn->Size = System::Drawing::Size(175, 30);
			this->cqarrbtn->TabIndex = 7;
			this->cqarrbtn->Text = L"Array ";
			this->cqarrbtn->UseVisualStyleBackColor = false;
			this->cqarrbtn->Click += gcnew System::EventHandler(this, &Queue_Home::cqarrbtn_Click);
			// 
			// appbtn
			// 
			this->appbtn->BackColor = System::Drawing::Color::LightSeaGreen;
			this->appbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->appbtn->FlatAppearance->BorderSize = 0;
			this->appbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->appbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			this->appbtn->ForeColor = System::Drawing::Color::Black;
			this->appbtn->Location = System::Drawing::Point(0, 90);
			this->appbtn->Name = L"appbtn";
			this->appbtn->Size = System::Drawing::Size(175, 30);
			this->appbtn->TabIndex = 6;
			this->appbtn->Text = L"App and res";
			this->appbtn->UseVisualStyleBackColor = false;
			this->appbtn->Click += gcnew System::EventHandler(this, &Queue_Home::appbtn_Click);
			// 
			// quizbtn
			// 
			this->quizbtn->BackColor = System::Drawing::Color::LightSeaGreen;
			this->quizbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->quizbtn->FlatAppearance->BorderSize = 0;
			this->quizbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->quizbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			this->quizbtn->ForeColor = System::Drawing::Color::Black;
			this->quizbtn->Location = System::Drawing::Point(0, 120);
			this->quizbtn->Name = L"quizbtn";
			this->quizbtn->Size = System::Drawing::Size(175, 30);
			this->quizbtn->TabIndex = 5;
			this->quizbtn->Text = L"Quiz";
			this->quizbtn->UseVisualStyleBackColor = false;
			this->quizbtn->Click += gcnew System::EventHandler(this, &Queue_Home::quizbtn_Click);
			// 
			// linllbtn
			// 
			this->linllbtn->BackColor = System::Drawing::Color::LightSeaGreen;
			this->linllbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->linllbtn->FlatAppearance->BorderSize = 0;
			this->linllbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->linllbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			this->linllbtn->ForeColor = System::Drawing::Color::Black;
			this->linllbtn->Location = System::Drawing::Point(0, 90);
			this->linllbtn->Name = L"linllbtn";
			this->linllbtn->Size = System::Drawing::Size(175, 30);
			this->linllbtn->TabIndex = 4;
			this->linllbtn->Text = L"Linked List ";
			this->linllbtn->UseVisualStyleBackColor = false;
			this->linllbtn->Click += gcnew System::EventHandler(this, &Queue_Home::linllbtn_Click);
			// 
			// linarrbtn
			// 
			this->linarrbtn->BackColor = System::Drawing::Color::LightSeaGreen;
			this->linarrbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->linarrbtn->FlatAppearance->BorderSize = 0;
			this->linarrbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->linarrbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			this->linarrbtn->ForeColor = System::Drawing::Color::Black;
			this->linarrbtn->Location = System::Drawing::Point(0, 60);
			this->linarrbtn->Name = L"linarrbtn";
			this->linarrbtn->Size = System::Drawing::Size(175, 30);
			this->linarrbtn->TabIndex = 3;
			this->linarrbtn->Text = L"Array ";
			this->linarrbtn->UseVisualStyleBackColor = false;
			this->linarrbtn->Click += gcnew System::EventHandler(this, &Queue_Home::linarrbtn_Click);
			// 
			// cqbtn
			// 
			this->cqbtn->BackColor = System::Drawing::Color::LightSeaGreen;
			this->cqbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cqbtn->FlatAppearance->BorderSize = 0;
			this->cqbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cqbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			this->cqbtn->ForeColor = System::Drawing::Color::Black;
			this->cqbtn->Location = System::Drawing::Point(0, 60);
			this->cqbtn->Name = L"cqbtn";
			this->cqbtn->Size = System::Drawing::Size(175, 30);
			this->cqbtn->TabIndex = 2;
			this->cqbtn->Text = L"Circular Queue";
			this->cqbtn->UseVisualStyleBackColor = false;
			this->cqbtn->Click += gcnew System::EventHandler(this, &Queue_Home::cirbtn_Click);
			// 
			// linbtn
			// 
			this->linbtn->BackColor = System::Drawing::Color::LightSeaGreen;
			this->linbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->linbtn->FlatAppearance->BorderSize = 0;
			this->linbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->linbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			this->linbtn->ForeColor = System::Drawing::Color::Black;
			this->linbtn->Location = System::Drawing::Point(0, 30);
			this->linbtn->Name = L"linbtn";
			this->linbtn->Size = System::Drawing::Size(175, 30);
			this->linbtn->TabIndex = 1;
			this->linbtn->Text = L"Linear Queue";
			this->linbtn->UseVisualStyleBackColor = false;
			this->linbtn->Click += gcnew System::EventHandler(this, &Queue_Home::linbtn_Click);
			// 
			// introbtn
			// 
			this->introbtn->BackColor = System::Drawing::Color::LightSeaGreen;
			this->introbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->introbtn->FlatAppearance->BorderSize = 0;
			this->introbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->introbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			this->introbtn->ForeColor = System::Drawing::Color::Black;
			this->introbtn->Location = System::Drawing::Point(0, 0);
			this->introbtn->Name = L"introbtn";
			this->introbtn->Size = System::Drawing::Size(175, 30);
			this->introbtn->TabIndex = 0;
			this->introbtn->Text = L"Introduction";
			this->introbtn->UseVisualStyleBackColor = false;
			this->introbtn->Click += gcnew System::EventHandler(this, &Queue_Home::intro_Click);
			// 
			// headerpanel
			// 
			this->headerpanel->BackColor = System::Drawing::Color::White;
			this->headerpanel->Controls->Add(this->discussbtn);
			this->headerpanel->Location = System::Drawing::Point(175, 0);
			this->headerpanel->Name = L"headerpanel";
			this->headerpanel->Size = System::Drawing::Size(1104, 50);
			this->headerpanel->TabIndex = 1;
			// 
			// discussbtn
			// 
			this->discussbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->discussbtn->Location = System::Drawing::Point(967, 21);
			this->discussbtn->Name = L"discussbtn";
			this->discussbtn->Size = System::Drawing::Size(105, 23);
			this->discussbtn->TabIndex = 0;
			this->discussbtn->Text = L"Discussion ";
			this->discussbtn->UseVisualStyleBackColor = true;
			this->discussbtn->Click += gcnew System::EventHandler(this, &Queue_Home::discussbtn_Click);
			// 
			// outputpanel
			// 
			this->outputpanel->BackColor = System::Drawing::Color::White;
			this->outputpanel->Location = System::Drawing::Point(175, 50);
			this->outputpanel->Name = L"outputpanel";
			this->outputpanel->Size = System::Drawing::Size(1105, 670);
			this->outputpanel->TabIndex = 2;
			this->outputpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Queue_Home::outputpanel_Paint);
			// 
			// Queue_Home
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->outputpanel);
			this->Controls->Add(this->headerpanel);
			this->Controls->Add(this->sidetabpanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Queue_Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Queue_Home";
			this->Load += gcnew System::EventHandler(this, &Queue_Home::Queue_Home_Load);
			this->sidetabpanel->ResumeLayout(false);
			this->headerpanel->ResumeLayout(false);
			this->ResumeLayout(false);

			this->linarrbtn->Hide();
			this->linllbtn->Hide();
			this->linanimbtn->Hide();
			this->cqarrbtn->Hide();
			this->cqllbtn->Hide(); 
			this->ciranimbtn->Hide();
		}
#pragma endregion
		bool islinclk;
		bool iscqclk;
		static int linclkctr=0;
	private: System::Void Queue_Home_Load(System::Object^  sender, System::EventArgs^  e) {
				 islinclk=false;
				 iscqclk=false;
				 outputpanel->Controls->Clear();
				 outputpanel->Controls->Add(gcnew UI_Queue_Introduction);
			 }

	private: System::Void intro_Click(System::Object^  sender, System::EventArgs^  e) {
				 introbtn->BackColor = Color::PaleTurquoise;
				 linbtn->BackColor = Color::LightSeaGreen;
				 linarrbtn->BackColor = Color::LightSeaGreen;
				 linllbtn->BackColor = Color::LightSeaGreen;
				 linanimbtn->BackColor = Color::LightSeaGreen;
				 cqbtn->BackColor = Color::LightSeaGreen;
				 cqarrbtn->BackColor = Color::LightSeaGreen;
				 cqllbtn->BackColor = Color::LightSeaGreen;
				 ciranimbtn->BackColor = Color::LightSeaGreen;
				 appbtn->BackColor = Color::LightSeaGreen;
				 quizbtn->BackColor = Color::LightSeaGreen;
				 outputpanel->Controls->Clear();
				 outputpanel->Controls->Add(gcnew UI_Queue_Introduction);
		 }
	private: System::Void linbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 islinclk = true;
				 this->linllbtn->Show();
				 this->linarrbtn->Show();
				 this->linanimbtn->Show();
				 this->cqbtn->Location = System::Drawing::Point(0, 150);
				 this->appbtn->Location = System::Drawing::Point(0, 180);
				 this->quizbtn->Location = System::Drawing::Point(0, 210);
				 if(iscqclk==true)
				 {
					 this->cqarrbtn->Hide();
					 this->ciranimbtn->Hide();
					 this->cqllbtn->Hide();
					 
				 }
				 introbtn->BackColor = Color::LightSeaGreen;
				 linbtn->BackColor = Color::PaleTurquoise;
				 linarrbtn->BackColor = Color::LightSeaGreen;
				 linllbtn->BackColor = Color::LightSeaGreen;
				 linanimbtn->BackColor = Color::LightSeaGreen;
				 cqbtn->BackColor = Color::LightSeaGreen;
				 cqarrbtn->BackColor = Color::LightSeaGreen;
				 cqllbtn->BackColor = Color::LightSeaGreen;
				 ciranimbtn->BackColor = Color::LightSeaGreen;
				 appbtn->BackColor = Color::LightSeaGreen;
				 quizbtn->BackColor = Color::LightSeaGreen;
				  outputpanel->Controls->Clear();
				 outputpanel->Controls->Add(gcnew UI_Linear_Queue);
		 }
	private: System::Void linarrbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 introbtn->BackColor = Color::LightSeaGreen;
				 linbtn->BackColor = Color::PaleTurquoise;
				 linarrbtn->BackColor = Color::PaleTurquoise;
				 linllbtn->BackColor = Color::LightSeaGreen;
				 linanimbtn->BackColor = Color::LightSeaGreen;
				 cqbtn->BackColor = Color::LightSeaGreen;
				 cqarrbtn->BackColor = Color::LightSeaGreen;
				 cqllbtn->BackColor = Color::LightSeaGreen;
				 ciranimbtn->BackColor = Color::LightSeaGreen;
				 appbtn->BackColor = Color::LightSeaGreen;
				 quizbtn->BackColor = Color::LightSeaGreen;
				 
				  outputpanel->Controls->Clear();
			 outputpanel->Controls->Add(gcnew UI_Linear_Queue_Array);
		 }
	private: System::Void linllbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 introbtn->BackColor = Color::LightSeaGreen;
				 linbtn->BackColor = Color::PaleTurquoise;
				 linarrbtn->BackColor = Color::LightSeaGreen;
				 linllbtn->BackColor = Color::PaleTurquoise;
				 linanimbtn->BackColor = Color::LightSeaGreen;
				 cqbtn->BackColor = Color::LightSeaGreen;
				 cqarrbtn->BackColor = Color::LightSeaGreen;
				 cqllbtn->BackColor = Color::LightSeaGreen;
				 ciranimbtn->BackColor = Color::LightSeaGreen;
				 appbtn->BackColor = Color::LightSeaGreen;
				 quizbtn->BackColor = Color::LightSeaGreen;
				  outputpanel->Controls->Clear();
			 outputpanel->Controls->Add(gcnew UI_Linear_Queue_LL);
		 }
	private: System::Void cirbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				  iscqclk=true;
				  this->ciranimbtn->Show();
				  this->cqllbtn->Show();
				  this->cqarrbtn->Show();
				  if(islinclk==true)
				  {
					  this->linarrbtn->Hide();
					  this->linllbtn->Hide();
					  this->linanimbtn->Hide();
					  this->cqbtn->Location = System::Drawing::Point(0, 60);
					  this->cqarrbtn->Location = System::Drawing::Point(0, 90);
					  this->cqllbtn->Location = System::Drawing::Point(0, 120);
					  this->ciranimbtn->Location = System::Drawing::Point(0, 150);
					  this->appbtn->Location = System::Drawing::Point(0, 180);
					  this->quizbtn->Location = System::Drawing::Point(0, 210);
				  }
				  else 
				  {
					  this->cqarrbtn->Location = System::Drawing::Point(0, 90);
					  this->cqllbtn->Location = System::Drawing::Point(0, 120);
					  this->ciranimbtn->Location = System::Drawing::Point(0, 150);
					  this->appbtn->Location = System::Drawing::Point(0, 180);
					  this->quizbtn->Location = System::Drawing::Point(0, 210);
				  }
				 introbtn->BackColor = Color::LightSeaGreen;
				 linbtn->BackColor = Color::LightSeaGreen;
				 linarrbtn->BackColor = Color::LightSeaGreen;
				 linllbtn->BackColor = Color::LightSeaGreen;
				 linanimbtn->BackColor = Color::LightSeaGreen;
				 cqbtn->BackColor = Color::PaleTurquoise;
				 cqarrbtn->BackColor = Color::LightSeaGreen;
				 cqllbtn->BackColor = Color::LightSeaGreen;
				 ciranimbtn->BackColor = Color::LightSeaGreen;
				 appbtn->BackColor = Color::LightSeaGreen;
				 quizbtn->BackColor = Color::LightSeaGreen;
				  outputpanel->Controls->Clear();
				 outputpanel->Controls->Add(gcnew UI_Circular_Queue);
			 }
	private: System::Void cqarrbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 introbtn->BackColor = Color::LightSeaGreen;
				 linbtn->BackColor = Color::LightSeaGreen;
				 linarrbtn->BackColor = Color::LightSeaGreen;
				 linllbtn->BackColor = Color::LightSeaGreen;
				 linanimbtn->BackColor = Color::LightSeaGreen;
				 cqbtn->BackColor = Color::PaleTurquoise;
				 cqarrbtn->BackColor = Color::PaleTurquoise;
				 cqllbtn->BackColor = Color::LightSeaGreen;
				 ciranimbtn->BackColor = Color::LightSeaGreen;
				 appbtn->BackColor = Color::LightSeaGreen;
				 quizbtn->BackColor = Color::LightSeaGreen;
				  outputpanel->Controls->Clear();
				 outputpanel->Controls->Add(gcnew UI_Circular_Queue_Array);
		 }
	private: System::Void cqllbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 introbtn->BackColor = Color::LightSeaGreen;
				 linbtn->BackColor = Color::LightSeaGreen;
				 linarrbtn->BackColor = Color::LightSeaGreen;
				 linllbtn->BackColor = Color::LightSeaGreen;
				 linanimbtn->BackColor = Color::LightSeaGreen;
				 cqbtn->BackColor = Color::PaleTurquoise;
				 cqarrbtn->BackColor = Color::LightSeaGreen;
				 cqllbtn->BackColor = Color::PaleTurquoise;
				 ciranimbtn->BackColor = Color::LightSeaGreen;
				 appbtn->BackColor = Color::LightSeaGreen;
				 quizbtn->BackColor = Color::LightSeaGreen;
				  outputpanel->Controls->Clear();
				 outputpanel->Controls->Add(gcnew UI_Circular_Queue_LL);
			 }
	private: System::Void appbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 introbtn->BackColor = Color::LightSeaGreen;
				 linbtn->BackColor = Color::LightSeaGreen;
				 linarrbtn->BackColor = Color::LightSeaGreen;
				 linllbtn->BackColor = Color::LightSeaGreen;
				 linanimbtn->BackColor = Color::LightSeaGreen;
				 cqbtn->BackColor = Color::PaleTurquoise;
				 cqarrbtn->BackColor = Color::LightSeaGreen;
				 cqllbtn->BackColor = Color::LightSeaGreen;
				 ciranimbtn->BackColor = Color::LightSeaGreen;
				 appbtn->BackColor = Color::PaleTurquoise;
				 quizbtn->BackColor = Color::LightSeaGreen;
				  outputpanel->Controls->Clear();
				 outputpanel->Controls->Add(gcnew UI_Queue_App);
			 }
	private: System::Void quizbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 introbtn->BackColor = Color::LightSeaGreen;
				 linbtn->BackColor = Color::LightSeaGreen;
				 linarrbtn->BackColor = Color::LightSeaGreen;
				 linllbtn->BackColor = Color::LightSeaGreen;
				 linanimbtn->BackColor = Color::LightSeaGreen;
				 cqbtn->BackColor = Color::LightSeaGreen;
				 cqarrbtn->BackColor = Color::LightSeaGreen;
				 cqllbtn->BackColor = Color::LightSeaGreen;
				 ciranimbtn->BackColor = Color::LightSeaGreen;
				 appbtn->BackColor = Color::LightSeaGreen;
				 quizbtn->BackColor = Color::PaleTurquoise;
				  outputpanel->Controls->Clear();
				 outputpanel->Controls->Add(gcnew UI_Queue_Quiz);
			 }
private: System::Void linanimbtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 introbtn->BackColor = Color::LightSeaGreen;
			 linbtn->BackColor = Color::PaleTurquoise;
			 linarrbtn->BackColor = Color::LightSeaGreen;
			 linllbtn->BackColor = Color::LightSeaGreen;
			 linanimbtn->BackColor = Color::PaleTurquoise;
			 cqbtn->BackColor = Color::LightSeaGreen;
			 cqarrbtn->BackColor = Color::LightSeaGreen;
			 cqllbtn->BackColor = Color::LightSeaGreen;
			 ciranimbtn->BackColor = Color::LightSeaGreen;
			 appbtn->BackColor = Color::LightSeaGreen;
			 quizbtn->BackColor = Color::LightSeaGreen;
			  outputpanel->Controls->Clear();
			 outputpanel->Controls->Add(gcnew UI_Linear_Queue_Animation);
		 }
private: System::Void ciranimbtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 introbtn->BackColor = Color::LightSeaGreen;
			 linbtn->BackColor = Color::LightSeaGreen;
			 linarrbtn->BackColor = Color::LightSeaGreen;
			 linllbtn->BackColor = Color::LightSeaGreen;
			 linanimbtn->BackColor = Color::LightSeaGreen;
			 cqbtn->BackColor = Color::PaleTurquoise;
			 cqarrbtn->BackColor = Color::LightSeaGreen;
			 cqllbtn->BackColor = Color::LightSeaGreen;
			 ciranimbtn->BackColor = Color::PaleTurquoise;
			 appbtn->BackColor = Color::LightSeaGreen;
			 quizbtn->BackColor = Color::LightSeaGreen;
			  outputpanel->Controls->Clear();
			 outputpanel->Controls->Add(gcnew UI_Circular_Queue_Animation);
		 }
private: System::Void outputpanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		       
		 }
private: System::Void discussbtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 outputpanel->Controls->Clear();
			 outputpanel->Controls->Add(gcnew DiscussionForum);
		 }
};
}
