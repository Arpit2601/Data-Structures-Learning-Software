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
			this->outputpanel = (gcnew System::Windows::Forms::Panel());
			this->sidetabpanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// sidetabpanel
			// 
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
			this->sidetabpanel->Size = System::Drawing::Size(175, 681);
			this->sidetabpanel->TabIndex = 0;
			// 
			// ciranimbtn
			// 
			this->ciranimbtn->Location = System::Drawing::Point(32, 457);
			this->ciranimbtn->Name = L"ciranimbtn";
			this->ciranimbtn->Size = System::Drawing::Size(120, 40);
			this->ciranimbtn->TabIndex = 10;
			this->ciranimbtn->Text = L"Animations";
			this->ciranimbtn->UseVisualStyleBackColor = true;
			this->ciranimbtn->Click += gcnew System::EventHandler(this, &Queue_Home::ciranimbtn_Click);
			// 
			// linanimbtn
			// 
			this->linanimbtn->Location = System::Drawing::Point(32, 260);
			this->linanimbtn->Name = L"linanimbtn";
			this->linanimbtn->Size = System::Drawing::Size(120, 40);
			this->linanimbtn->TabIndex = 9;
			this->linanimbtn->Text = L"Animations";
			this->linanimbtn->UseVisualStyleBackColor = true;
			this->linanimbtn->Click += gcnew System::EventHandler(this, &Queue_Home::linanimbtn_Click);
			// 
			// cqllbtn
			// 
			this->cqllbtn->Location = System::Drawing::Point(32, 411);
			this->cqllbtn->Name = L"cqllbtn";
			this->cqllbtn->Size = System::Drawing::Size(120, 40);
			this->cqllbtn->TabIndex = 8;
			this->cqllbtn->Text = L"Linked List ";
			this->cqllbtn->UseVisualStyleBackColor = true;
			this->cqllbtn->Click += gcnew System::EventHandler(this, &Queue_Home::cqllbtn_Click);
			// 
			// cqarrbtn
			// 
			this->cqarrbtn->Location = System::Drawing::Point(32, 365);
			this->cqarrbtn->Name = L"cqarrbtn";
			this->cqarrbtn->Size = System::Drawing::Size(120, 40);
			this->cqarrbtn->TabIndex = 7;
			this->cqarrbtn->Text = L"Array ";
			this->cqarrbtn->UseVisualStyleBackColor = true;
			this->cqarrbtn->Click += gcnew System::EventHandler(this, &Queue_Home::cqarrbtn_Click);
			// 
			// appbtn
			// 
			this->appbtn->Location = System::Drawing::Point(12, 523);
			this->appbtn->Name = L"appbtn";
			this->appbtn->Size = System::Drawing::Size(140, 40);
			this->appbtn->TabIndex = 6;
			this->appbtn->Text = L"App and res";
			this->appbtn->UseVisualStyleBackColor = true;
			this->appbtn->Click += gcnew System::EventHandler(this, &Queue_Home::appbtn_Click);
			// 
			// quizbtn
			// 
			this->quizbtn->Location = System::Drawing::Point(12, 579);
			this->quizbtn->Name = L"quizbtn";
			this->quizbtn->Size = System::Drawing::Size(140, 40);
			this->quizbtn->TabIndex = 5;
			this->quizbtn->Text = L"Quiz";
			this->quizbtn->UseVisualStyleBackColor = true;
			this->quizbtn->Click += gcnew System::EventHandler(this, &Queue_Home::quizbtn_Click);
			// 
			// linllbtn
			// 
			this->linllbtn->Location = System::Drawing::Point(32, 214);
			this->linllbtn->Name = L"linllbtn";
			this->linllbtn->Size = System::Drawing::Size(120, 40);
			this->linllbtn->TabIndex = 4;
			this->linllbtn->Text = L"Linked List ";
			this->linllbtn->UseVisualStyleBackColor = true;
			this->linllbtn->Click += gcnew System::EventHandler(this, &Queue_Home::linllbtn_Click);
			// 
			// linarrbtn
			// 
			this->linarrbtn->Location = System::Drawing::Point(32, 168);
			this->linarrbtn->Name = L"linarrbtn";
			this->linarrbtn->Size = System::Drawing::Size(120, 40);
			this->linarrbtn->TabIndex = 3;
			this->linarrbtn->Text = L"Array ";
			this->linarrbtn->UseVisualStyleBackColor = true;
			this->linarrbtn->Click += gcnew System::EventHandler(this, &Queue_Home::linarrbtn_Click);
			// 
			// cqbtn
			// 
			this->cqbtn->Location = System::Drawing::Point(12, 319);
			this->cqbtn->Name = L"cqbtn";
			this->cqbtn->Size = System::Drawing::Size(140, 40);
			this->cqbtn->TabIndex = 2;
			this->cqbtn->Text = L"Circular Queue";
			this->cqbtn->UseVisualStyleBackColor = true;
			this->cqbtn->Click += gcnew System::EventHandler(this, &Queue_Home::cirbtn_Click);
			// 
			// linbtn
			// 
			this->linbtn->Location = System::Drawing::Point(12, 119);
			this->linbtn->Name = L"linbtn";
			this->linbtn->Size = System::Drawing::Size(140, 40);
			this->linbtn->TabIndex = 1;
			this->linbtn->Text = L"Linear Queue";
			this->linbtn->UseVisualStyleBackColor = true;
			this->linbtn->Click += gcnew System::EventHandler(this, &Queue_Home::linbtn_Click);
			// 
			// introbtn
			// 
			this->introbtn->Location = System::Drawing::Point(12, 50);
			this->introbtn->Name = L"introbtn";
			this->introbtn->Size = System::Drawing::Size(140, 40);
			this->introbtn->TabIndex = 0;
			this->introbtn->Text = L"Introduction";
			this->introbtn->UseVisualStyleBackColor = true;
			this->introbtn->Click += gcnew System::EventHandler(this, &Queue_Home::intro_Click);
			// 
			// headerpanel
			// 
			this->headerpanel->Location = System::Drawing::Point(175, 0);
			this->headerpanel->Name = L"headerpanel";
			this->headerpanel->Size = System::Drawing::Size(1088, 50);
			this->headerpanel->TabIndex = 1;
			// 
			// outputpanel
			// 
			this->outputpanel->Location = System::Drawing::Point(175, 50);
			this->outputpanel->Name = L"outputpanel";
			this->outputpanel->Size = System::Drawing::Size(1088, 631);
			this->outputpanel->TabIndex = 2;
			this->outputpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Queue_Home::outputpanel_Paint);
			// 
			// Queue_Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
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
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Queue_Home_Load(System::Object^  sender, System::EventArgs^  e) {

			 }

	private: System::Void intro_Click(System::Object^  sender, System::EventArgs^  e) {
				 outputpanel->Controls->Clear();
				 outputpanel->Controls->Add(gcnew UI_Queue_Introduction);
		 }
	private: System::Void linbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				  outputpanel->Controls->Clear();
				 outputpanel->Controls->Add(gcnew UI_Linear_Queue);
		 }
	private: System::Void linarrbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				  outputpanel->Controls->Clear();
			 outputpanel->Controls->Add(gcnew UI_Linear_Queue_Array);
		 }
	private: System::Void linllbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				  outputpanel->Controls->Clear();
			 outputpanel->Controls->Add(gcnew UI_Linear_Queue_LL);
		 }
	private: System::Void cirbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				  outputpanel->Controls->Clear();
				 outputpanel->Controls->Add(gcnew UI_Circular_Queue);
			 }
	private: System::Void cqarrbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				  outputpanel->Controls->Clear();
				 outputpanel->Controls->Add(gcnew UI_Circular_Queue_Array);
		 }
	private: System::Void cqllbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				  outputpanel->Controls->Clear();
				 outputpanel->Controls->Add(gcnew UI_Circular_Queue_LL);
			 }
	private: System::Void appbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				  outputpanel->Controls->Clear();
				 outputpanel->Controls->Add(gcnew UI_Queue_App);
			 }
	private: System::Void quizbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				  outputpanel->Controls->Clear();
				 outputpanel->Controls->Add(gcnew UI_Queue_Quiz);
			 }
private: System::Void linanimbtn_Click(System::Object^  sender, System::EventArgs^  e) {
			  outputpanel->Controls->Clear();
			 outputpanel->Controls->Add(gcnew UI_Linear_Queue_Animation);
		 }
private: System::Void ciranimbtn_Click(System::Object^  sender, System::EventArgs^  e) {
			  outputpanel->Controls->Clear();
			 outputpanel->Controls->Add(gcnew UI_Circular_Queue_Animation);
		 }
private: System::Void outputpanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		       
		 }
};
}
