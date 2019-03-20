#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for Stack_Implementation_LinkedList
	/// </summary>
	public ref class Stack_Implementation_LinkedList : public System::Windows::Forms::UserControl
	{
	public:
		Stack_Implementation_LinkedList(void)
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
		~Stack_Implementation_LinkedList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Heading;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label1;
	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Stack_Implementation_LinkedList::typeid));
			this->Heading = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Heading
			// 
			this->Heading->AutoSize = true;
			this->Heading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Heading->Location = System::Drawing::Point(325, 22);
			this->Heading->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Heading->Name = L"Heading";
			this->Heading->Size = System::Drawing::Size(367, 29);
			this->Heading->TabIndex = 2;
			this->Heading->Text = L"Implementation Using Linked List";
			this->Heading->Click += gcnew System::EventHandler(this, &Stack_Implementation_LinkedList::Heading_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Location = System::Drawing::Point(42, 254);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1000, 360);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::White;
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Location = System::Drawing::Point(42, 66);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(1000, 139);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = resources->GetString(L"richTextBox2.Text");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(391, 225);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Code for implementation";
			// 
			// Stack_Implementation_LinkedList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->Heading);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Stack_Implementation_LinkedList";
			this->Size = System::Drawing::Size(1088, 631);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Heading_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
