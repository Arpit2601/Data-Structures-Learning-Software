#pragma once

namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Sorting
	/// </summary>
	public ref class Sorting : public System::Windows::Forms::Form
	{
	public:
		Sorting(void)
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
		~Sorting()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  btnBubbleSort;
	private: System::Windows::Forms::Button^  btnSelectionSort;
	private: System::Windows::Forms::Button^  btnInsertionSort;
	private: System::Windows::Forms::Button^  btnMergeSort;
	private: System::Windows::Forms::Button^  btnQuickSort;
	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::Button^  btnLogout;
	private: System::Windows::Forms::Button^  btnHome;
	private: System::Windows::Forms::Button^  btnNext;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Sorting::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnBubbleSort = (gcnew System::Windows::Forms::Button());
			this->btnSelectionSort = (gcnew System::Windows::Forms::Button());
			this->btnInsertionSort = (gcnew System::Windows::Forms::Button());
			this->btnMergeSort = (gcnew System::Windows::Forms::Button());
			this->btnQuickSort = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::OldLace;
			this->panel1->Controls->Add(this->btnQuickSort);
			this->panel1->Controls->Add(this->btnMergeSort);
			this->panel1->Controls->Add(this->btnInsertionSort);
			this->panel1->Controls->Add(this->btnSelectionSort);
			this->panel1->Controls->Add(this->btnBubbleSort);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(175, 720);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::OldLace;
			this->panel2->Controls->Add(this->btnNext);
			this->panel2->Controls->Add(this->btnHome);
			this->panel2->Controls->Add(this->btnLogout);
			this->panel2->Controls->Add(this->btnBack);
			this->panel2->Location = System::Drawing::Point(175, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1105, 50);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(175, 50);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1105, 670);
			this->panel3->TabIndex = 2;
			// 
			// btnBubbleSort
			// 
			this->btnBubbleSort->FlatAppearance->BorderSize = 0;
			this->btnBubbleSort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnBubbleSort->Location = System::Drawing::Point(0, 50);
			this->btnBubbleSort->Name = L"btnBubbleSort";
			this->btnBubbleSort->Size = System::Drawing::Size(175, 40);
			this->btnBubbleSort->TabIndex = 0;
			this->btnBubbleSort->Text = L"Bubble Sort";
			this->btnBubbleSort->UseVisualStyleBackColor = true;
			// 
			// btnSelectionSort
			// 
			this->btnSelectionSort->FlatAppearance->BorderSize = 0;
			this->btnSelectionSort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSelectionSort->Location = System::Drawing::Point(0, 90);
			this->btnSelectionSort->Name = L"btnSelectionSort";
			this->btnSelectionSort->Size = System::Drawing::Size(175, 40);
			this->btnSelectionSort->TabIndex = 1;
			this->btnSelectionSort->Text = L"Selection Sort";
			this->btnSelectionSort->UseVisualStyleBackColor = true;
			// 
			// btnInsertionSort
			// 
			this->btnInsertionSort->FlatAppearance->BorderSize = 0;
			this->btnInsertionSort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnInsertionSort->Location = System::Drawing::Point(0, 130);
			this->btnInsertionSort->Name = L"btnInsertionSort";
			this->btnInsertionSort->Size = System::Drawing::Size(175, 40);
			this->btnInsertionSort->TabIndex = 2;
			this->btnInsertionSort->Text = L"Insertion Sort";
			this->btnInsertionSort->UseVisualStyleBackColor = true;
			// 
			// btnMergeSort
			// 
			this->btnMergeSort->FlatAppearance->BorderSize = 0;
			this->btnMergeSort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnMergeSort->Location = System::Drawing::Point(0, 170);
			this->btnMergeSort->Name = L"btnMergeSort";
			this->btnMergeSort->Size = System::Drawing::Size(175, 40);
			this->btnMergeSort->TabIndex = 3;
			this->btnMergeSort->Text = L"Merge Sort";
			this->btnMergeSort->UseVisualStyleBackColor = true;
			// 
			// btnQuickSort
			// 
			this->btnQuickSort->FlatAppearance->BorderSize = 0;
			this->btnQuickSort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnQuickSort->Location = System::Drawing::Point(0, 210);
			this->btnQuickSort->Name = L"btnQuickSort";
			this->btnQuickSort->Size = System::Drawing::Size(175, 40);
			this->btnQuickSort->TabIndex = 4;
			this->btnQuickSort->Text = L"Quick Sort";
			this->btnQuickSort->UseVisualStyleBackColor = true;
			// 
			// btnBack
			// 
			this->btnBack->FlatAppearance->BorderSize = 0;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnBack->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnBack.Image")));
			this->btnBack->Location = System::Drawing::Point(0, 0);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(50, 50);
			this->btnBack->TabIndex = 0;
			this->btnBack->UseVisualStyleBackColor = true;
			// 
			// btnLogout
			// 
			this->btnLogout->FlatAppearance->BorderSize = 0;
			this->btnLogout->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnLogout->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnLogout.Image")));
			this->btnLogout->Location = System::Drawing::Point(1055, 0);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(50, 50);
			this->btnLogout->TabIndex = 1;
			this->btnLogout->UseVisualStyleBackColor = true;
			// 
			// btnHome
			// 
			this->btnHome->FlatAppearance->BorderSize = 0;
			this->btnHome->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnHome->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnHome.Image")));
			this->btnHome->Location = System::Drawing::Point(1005, 0);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(50, 50);
			this->btnHome->TabIndex = 2;
			this->btnHome->UseVisualStyleBackColor = true;
			// 
			// btnNext
			// 
			this->btnNext->FlatAppearance->BorderSize = 0;
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnNext->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnNext.Image")));
			this->btnNext->Location = System::Drawing::Point(955, 0);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(50, 50);
			this->btnNext->TabIndex = 3;
			this->btnNext->UseVisualStyleBackColor = true;
			// 
			// Sorting
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Sorting";
			this->Text = L"Sorting";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
