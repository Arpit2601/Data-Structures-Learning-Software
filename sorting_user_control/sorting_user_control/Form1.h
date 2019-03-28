#pragma once
#include "InsertionSort.h"
#include "bubbleSort.h"
#include "SelectionSort.h"
#include "Graph.h"
#include "GraphBFS.h"

namespace sorting_user_control {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  MainPanel;
	private: System::Windows::Forms::Button^  btnGraph;
	private: System::Windows::Forms::Button^  button4;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnGraph = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->MainPanel = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->btnGraph);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(175, 681);
			this->panel1->TabIndex = 0;
			// 
			// btnGraph
			// 
			this->btnGraph->Location = System::Drawing::Point(0, 179);
			this->btnGraph->Name = L"btnGraph";
			this->btnGraph->Size = System::Drawing::Size(175, 40);
			this->btnGraph->TabIndex = 5;
			this->btnGraph->Text = L"Graph";
			this->btnGraph->UseVisualStyleBackColor = true;
			this->btnGraph->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(0, 142);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(175, 40);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Selection Sort";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(0, 106);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(175, 40);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Bubble Sort";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Insertion Sort";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(175, 53);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1073, 586);
			this->panel3->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(175, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1089, 50);
			this->panel2->TabIndex = 1;
			// 
			// MainPanel
			// 
			this->MainPanel->Location = System::Drawing::Point(175, 50);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(1088, 631);
			this->MainPanel->TabIndex = 2;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(0, 214);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(175, 40);
			this->button4->TabIndex = 6;
			this->button4->Text = L"GraphBFS";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->MainPanel);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 cnt=0;
				 MainPanel->Controls->Clear();
				 MainPanel->Controls->Add(gcnew bubbleSort);
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			     icnt=0;
			     MainPanel->Controls->Clear();
				 MainPanel->Controls->Add(gcnew InsertionSort);
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			     scnt=0;
			     MainPanel->Controls->Clear();
				 MainPanel->Controls->Add(gcnew SelectionSort);
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				MainPanel->Controls->Clear();
				MainPanel->Controls->Add(gcnew Graph);
		 }
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
				MainPanel->Controls->Clear();
				MainPanel->Controls->Add(gcnew GraphBFS);
		 }
};
}

