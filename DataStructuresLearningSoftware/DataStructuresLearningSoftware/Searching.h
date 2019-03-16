#pragma once

#include "LinearSearch.h"
#include "BinarySearch.h"

namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Searching
	/// </summary>
	public ref class Searching : public System::Windows::Forms::Form
	{
	public:
		Searching(void)
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
		~Searching()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Button^  btnBinarySearch;
	private: System::Windows::Forms::Button^  btnLinearSearch;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  MainPanel;


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
			this->btnBinarySearch = (gcnew System::Windows::Forms::Button());
			this->btnLinearSearch = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->MainPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnBinarySearch);
			this->panel1->Controls->Add(this->btnLinearSearch);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(175, 681);
			this->panel1->TabIndex = 0;
			// 
			// btnBinarySearch
			// 
			this->btnBinarySearch->Location = System::Drawing::Point(0, 90);
			this->btnBinarySearch->Name = L"btnBinarySearch";
			this->btnBinarySearch->Size = System::Drawing::Size(175, 40);
			this->btnBinarySearch->TabIndex = 1;
			this->btnBinarySearch->Text = L"Binary Search";
			this->btnBinarySearch->UseVisualStyleBackColor = true;
			this->btnBinarySearch->Click += gcnew System::EventHandler(this, &Searching::btnBinarySearch_Click);
			// 
			// btnLinearSearch
			// 
			this->btnLinearSearch->Location = System::Drawing::Point(0, 50);
			this->btnLinearSearch->Name = L"btnLinearSearch";
			this->btnLinearSearch->Size = System::Drawing::Size(175, 40);
			this->btnLinearSearch->TabIndex = 0;
			this->btnLinearSearch->Text = L"Linear Search";
			this->btnLinearSearch->UseVisualStyleBackColor = true;
			this->btnLinearSearch->Click += gcnew System::EventHandler(this, &Searching::btnLinearSearch_Click);
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(175, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1088, 50);
			this->panel2->TabIndex = 1;
			// 
			// MainPanel
			// 
			this->MainPanel->Location = System::Drawing::Point(175, 50);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(1088, 631);
			this->MainPanel->TabIndex = 2;
			// 
			// Searching
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->MainPanel);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Searching";
			this->Text = L"Searching";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnLinearSearch_Click(System::Object^  sender, System::EventArgs^  e) {
				 MainPanel->Controls->Clear();
				 MainPanel->Controls->Add(gcnew LinearSearch);
			 }

	private: System::Void btnBinarySearch_Click(System::Object^  sender, System::EventArgs^  e) {
				 MainPanel->Controls->Clear();
				 MainPanel->Controls->Add(gcnew BinarySearch);
			 }
};
}
