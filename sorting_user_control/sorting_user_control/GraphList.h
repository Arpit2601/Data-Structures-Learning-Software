#pragma once

#include <utility> 
#include <vector>
#include <string>
#include <algorithm>
#include <queue>



namespace{

	//************global variables************//
	int ln,lm,laddcounter=0,lpause;
	int lnodes[100];
	int lvis[1000];
	std::vector<int> ladj[1000];
	std::vector<std::pair<int,int> > lstore;
	int lc1=0,lt1=-1,lcheck=0;
	//***********global variables************//
	
}

namespace sorting_user_control {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GraphList
	/// </summary>
	public ref class GraphList : public System::Windows::Forms::UserControl
	{
	public:
		GraphList(void)
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
		~GraphList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnIncrease;
	protected: 
	private: System::Windows::Forms::Button^  btnDecrease;
	private: System::Windows::Forms::Button^  btnPause;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnBFS;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::TextBox^  txtTo;
	private: System::Windows::Forms::TextBox^  txtFrom;


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
			this->btnIncrease = (gcnew System::Windows::Forms::Button());
			this->btnDecrease = (gcnew System::Windows::Forms::Button());
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBFS = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtTo = (gcnew System::Windows::Forms::TextBox());
			this->txtFrom = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnIncrease
			// 
			this->btnIncrease->Location = System::Drawing::Point(1002, 519);
			this->btnIncrease->Name = L"btnIncrease";
			this->btnIncrease->Size = System::Drawing::Size(75, 41);
			this->btnIncrease->TabIndex = 37;
			this->btnIncrease->Text = L"Increase Speed";
			this->btnIncrease->UseVisualStyleBackColor = true;
			this->btnIncrease->Visible = false;
			// 
			// btnDecrease
			// 
			this->btnDecrease->Location = System::Drawing::Point(900, 519);
			this->btnDecrease->Name = L"btnDecrease";
			this->btnDecrease->Size = System::Drawing::Size(75, 41);
			this->btnDecrease->TabIndex = 36;
			this->btnDecrease->Text = L"Decrease Speed";
			this->btnDecrease->UseVisualStyleBackColor = true;
			this->btnDecrease->Visible = false;
			// 
			// btnPause
			// 
			this->btnPause->Location = System::Drawing::Point(798, 519);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(75, 41);
			this->btnPause->TabIndex = 35;
			this->btnPause->Text = L"Pause";
			this->btnPause->UseVisualStyleBackColor = true;
			this->btnPause->Visible = false;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(423, 553);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 20);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Edge Node 2";
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(252, 553);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 20);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Edge Node 1";
			this->label2->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 519);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 20);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Enter number of Nodes";
			// 
			// btnBFS
			// 
			this->btnBFS->Location = System::Drawing::Point(690, 519);
			this->btnBFS->Name = L"btnBFS";
			this->btnBFS->Size = System::Drawing::Size(75, 41);
			this->btnBFS->TabIndex = 31;
			this->btnBFS->Text = L"BFS";
			this->btnBFS->UseVisualStyleBackColor = true;
			this->btnBFS->Visible = false;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(581, 519);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 41);
			this->btnAdd->TabIndex = 30;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &GraphList::btnAdd_Click);
			// 
			// txtTo
			// 
			this->txtTo->Location = System::Drawing::Point(427, 519);
			this->txtTo->Name = L"txtTo";
			this->txtTo->Size = System::Drawing::Size(100, 20);
			this->txtTo->TabIndex = 29;
			this->txtTo->Visible = false;
			// 
			// txtFrom
			// 
			this->txtFrom->Location = System::Drawing::Point(256, 519);
			this->txtFrom->Name = L"txtFrom";
			this->txtFrom->Size = System::Drawing::Size(100, 20);
			this->txtFrom->TabIndex = 28;
			// 
			// GraphList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btnIncrease);
			this->Controls->Add(this->btnDecrease);
			this->Controls->Add(this->btnPause);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnBFS);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtTo);
			this->Controls->Add(this->txtFrom);
			this->Name = L"GraphList";
			this->Size = System::Drawing::Size(1088, 631);
			this->Load += gcnew System::EventHandler(this, &GraphList::GraphList_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GraphList_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
				 
			 }
private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
};
}
