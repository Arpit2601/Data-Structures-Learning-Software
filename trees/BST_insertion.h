#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace trees {

	/// <summary>
	/// Summary for BST_insertion
	/// </summary>
	public ref class BST_insertion : public System::Windows::Forms::UserControl
	{
	public:
		BST_insertion(void)
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
		~BST_insertion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label6;
	protected: 
	private: System::Windows::Forms::TextBox^  BTinsert_value;
	private: System::Windows::Forms::Button^  InsertBT;
	private: System::Windows::Forms::Panel^  Btree_insert_animation;
	private: System::Windows::Forms::Label^  BT5;
	private: System::Windows::Forms::Label^  BT4;
	private: System::Windows::Forms::Label^  BT6;
	private: System::Windows::Forms::Label^  BT7;
	private: System::Windows::Forms::Label^  BT3;
	private: System::Windows::Forms::Label^  BT2;
	private: System::Windows::Forms::Label^  BT1;







	private: System::Windows::Forms::Timer^  BTinsert_timer;
	private: System::Windows::Forms::Timer^  FixMe;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->BTinsert_value = (gcnew System::Windows::Forms::TextBox());
			this->InsertBT = (gcnew System::Windows::Forms::Button());
			this->Btree_insert_animation = (gcnew System::Windows::Forms::Panel());
			this->BT5 = (gcnew System::Windows::Forms::Label());
			this->BT4 = (gcnew System::Windows::Forms::Label());
			this->BT6 = (gcnew System::Windows::Forms::Label());
			this->BT7 = (gcnew System::Windows::Forms::Label());
			this->BT3 = (gcnew System::Windows::Forms::Label());
			this->BT2 = (gcnew System::Windows::Forms::Label());
			this->BT1 = (gcnew System::Windows::Forms::Label());
			this->BTinsert_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->FixMe = (gcnew System::Windows::Forms::Timer(this->components));
			this->Btree_insert_animation->SuspendLayout();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(903, 103);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 17);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Insert Value";
			// 
			// BTinsert_value
			// 
			this->BTinsert_value->Location = System::Drawing::Point(997, 98);
			this->BTinsert_value->Name = L"BTinsert_value";
			this->BTinsert_value->Size = System::Drawing::Size(98, 22);
			this->BTinsert_value->TabIndex = 6;
			// 
			// InsertBT
			// 
			this->InsertBT->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->InsertBT->Location = System::Drawing::Point(906, 142);
			this->InsertBT->Name = L"InsertBT";
			this->InsertBT->Size = System::Drawing::Size(189, 55);
			this->InsertBT->TabIndex = 5;
			this->InsertBT->Text = L"INSERT";
			this->InsertBT->UseVisualStyleBackColor = true;
			this->InsertBT->Click += gcnew System::EventHandler(this, &BST_insertion::InsertBT_Click);
			// 
			// Btree_insert_animation
			// 
			this->Btree_insert_animation->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Btree_insert_animation->Controls->Add(this->BT5);
			this->Btree_insert_animation->Controls->Add(this->BT4);
			this->Btree_insert_animation->Controls->Add(this->BT6);
			this->Btree_insert_animation->Controls->Add(this->BT7);
			this->Btree_insert_animation->Controls->Add(this->BT3);
			this->Btree_insert_animation->Controls->Add(this->BT2);
			this->Btree_insert_animation->Controls->Add(this->BT1);
			this->Btree_insert_animation->Location = System::Drawing::Point(166, 53);
			this->Btree_insert_animation->Name = L"Btree_insert_animation";
			this->Btree_insert_animation->Size = System::Drawing::Size(711, 442);
			this->Btree_insert_animation->TabIndex = 8;
			// 
			// BT5
			// 
			this->BT5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT5->Location = System::Drawing::Point(227, 283);
			this->BT5->Name = L"BT5";
			this->BT5->Size = System::Drawing::Size(108, 79);
			this->BT5->TabIndex = 7;
			this->BT5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT5->Visible = false;
			// 
			// BT4
			// 
			this->BT4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT4->Location = System::Drawing::Point(63, 283);
			this->BT4->Name = L"BT4";
			this->BT4->Size = System::Drawing::Size(108, 79);
			this->BT4->TabIndex = 6;
			this->BT4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT4->Visible = false;
			// 
			// BT6
			// 
			this->BT6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT6->Location = System::Drawing::Point(341, 283);
			this->BT6->Name = L"BT6";
			this->BT6->Size = System::Drawing::Size(108, 79);
			this->BT6->TabIndex = 5;
			this->BT6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT6->Visible = false;
			// 
			// BT7
			// 
			this->BT7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT7->Location = System::Drawing::Point(496, 283);
			this->BT7->Name = L"BT7";
			this->BT7->Size = System::Drawing::Size(108, 79);
			this->BT7->TabIndex = 4;
			this->BT7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT7->Visible = false;
			// 
			// BT3
			// 
			this->BT3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT3->Location = System::Drawing::Point(412, 155);
			this->BT3->Name = L"BT3";
			this->BT3->Size = System::Drawing::Size(108, 79);
			this->BT3->TabIndex = 3;
			this->BT3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT3->Visible = false;
			// 
			// BT2
			// 
			this->BT2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT2->Location = System::Drawing::Point(147, 155);
			this->BT2->Name = L"BT2";
			this->BT2->Size = System::Drawing::Size(108, 79);
			this->BT2->TabIndex = 2;
			this->BT2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT2->Visible = false;
			// 
			// BT1
			// 
			this->BT1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->BT1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT1->Location = System::Drawing::Point(279, 14);
			this->BT1->Name = L"BT1";
			this->BT1->Size = System::Drawing::Size(108, 79);
			this->BT1->TabIndex = 0;
			this->BT1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT1->Visible = false;
			// 
			// BTinsert_timer
			// 
			this->BTinsert_timer->Interval = 800;
			this->BTinsert_timer->Tick += gcnew System::EventHandler(this, &BST_insertion::BTinsert_timer_Tick);
			// 
			// FixMe
			// 
			this->FixMe->Interval = 800;
			this->FixMe->Tick += gcnew System::EventHandler(this, &BST_insertion::FixMe_Tick);
			// 
			// BST_insertion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label6);
			this->Controls->Add(this->BTinsert_value);
			this->Controls->Add(this->InsertBT);
			this->Controls->Add(this->Btree_insert_animation);
			this->Name = L"BST_insertion";
			this->Size = System::Drawing::Size(1261, 549);
			this->Btree_insert_animation->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void InsertBT_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->BTinsert_value->Text == ""){
				MessageBox::Show("Please Enter Value In The TextBox");
			 }
			 else if(int::Parse(this->BTinsert_value->Text)>99 || int::Parse(this->BTinsert_value->Text)<-99){
				this->BTinsert_value->Text = "";
				MessageBox::Show("Please Enter Value Between 99 and -99");
			 }
			 else{
				 this->BTinsert_value->Enabled = false;
				 this->InsertBT->Enabled = false;
				 if(this->BT1->Visible == false){
					this->BT1->Text = this->BTinsert_value->Text;
					this->BT1->Visible = true;
					this->BTinsert_value->Text = "";
					this->BTinsert_value->Enabled = true;
					this->InsertBT->Enabled = true;
					return ;
				 }
				 if(this->BT2->Visible == false && this->BT1->Visible == true && int::Parse(this->BTinsert_value->Text)<=int::Parse(this->BT1->Text) ){
					BTinsert_timer->Enabled = true;
				 }
				 else if(this->BT3->Visible == false && this->BT1->Visible == true && int::Parse(this->BTinsert_value->Text)>int::Parse(this->BT1->Text)){
					BTinsert_timer->Enabled = true;
				 }
				 else if(this->BT4->Visible == false && this->BT1->Visible == true && this->BT2->Visible == true && int::Parse(this->BTinsert_value->Text)<=int::Parse(this->BT1->Text) && int::Parse(this->BTinsert_value->Text)<=int::Parse(this->BT2->Text)){
					BTinsert_timer->Enabled = true;
				 }
				 else if(this->BT5->Visible == false && this->BT1->Visible == true && this->BT2->Visible == true && int::Parse(this->BTinsert_value->Text)<=int::Parse(this->BT1->Text) && int::Parse(this->BTinsert_value->Text)>int::Parse(this->BT2->Text)){
					BTinsert_timer->Enabled = true;
				 }
				 else if(this->BT6->Visible == false && this->BT1->Visible == true && this->BT3->Visible == true && int::Parse(this->BTinsert_value->Text)>int::Parse(this->BT1->Text) && int::Parse(this->BTinsert_value->Text)<=int::Parse(this->BT3->Text)){
					BTinsert_timer->Enabled = true;
				 }
				 else if(this->BT7->Visible == false && this->BT1->Visible == true && this->BT3->Visible == true && int::Parse(this->BTinsert_value->Text)>int::Parse(this->BT1->Text) && int::Parse(this->BTinsert_value->Text)>int::Parse(this->BT3->Text)){
					BTinsert_timer->Enabled = true;
				 }
				 else{
					this->BTinsert_value->Text = "";
					this->BTinsert_value->Enabled = true;
					this->InsertBT->Enabled = true;
					MessageBox::Show("You Have Reached A Maximum Height Of The Binary Search Tree");
				 }
			 }
		 }
private: System::Void BTinsert_timer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 int x = int::Parse(this->BTinsert_value->Text);
			 if(this->BT4->Visible==false && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT2->BackColor == System::Drawing::SystemColors::MenuHighlight && x<=int::Parse(this->BT1->Text) && x<=int::Parse(this->BT2->Text)){
				this->BT4->BackColor = System::Drawing::SystemColors::MenuHighlight;
				this->BT4->Text = this->BTinsert_value->Text;
				this->BT4->Visible = true;
				this->BTinsert_value->Text = "";
				this->BTinsert_value->Enabled = true;
				this->InsertBT->Enabled = true;
				BTinsert_timer->Enabled = false;
				FixMe->Enabled = true;
			 }
			 else if(this->BT5->Visible==false && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT2->BackColor == System::Drawing::SystemColors::MenuHighlight && x<=int::Parse(this->BT1->Text) && x>int::Parse(this->BT2->Text)){
				this->BT5->BackColor = System::Drawing::SystemColors::MenuHighlight;
				this->BT5->Text = this->BTinsert_value->Text;
				this->BT5->Visible = true;
				this->BTinsert_value->Text = "";
				this->BTinsert_value->Enabled = true;
				this->InsertBT->Enabled = true;
				BTinsert_timer->Enabled = false;
				FixMe->Enabled = true;
			 }
			 else if(this->BT6->Visible==false && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT3->BackColor == System::Drawing::SystemColors::MenuHighlight && x>int::Parse(this->BT1->Text) && x<=int::Parse(this->BT3->Text)){
				this->BT6->BackColor = System::Drawing::SystemColors::MenuHighlight;
				this->BT6->Text = this->BTinsert_value->Text;
				this->BT6->Visible = true;
				this->BTinsert_value->Text = "";
				this->BTinsert_value->Enabled = true;
				this->InsertBT->Enabled = true;
				BTinsert_timer->Enabled = false;
				FixMe->Enabled = true;
			 }
			 else if(this->BT7->Visible==false && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT3->BackColor == System::Drawing::SystemColors::MenuHighlight && x>int::Parse(this->BT1->Text) && x>int::Parse(this->BT3->Text)){
				this->BT7->BackColor = System::Drawing::SystemColors::MenuHighlight;
				this->BT7->Text = this->BTinsert_value->Text;
				this->BT7->Visible = true;
				this->BTinsert_value->Text = "";
				this->BTinsert_value->Enabled = true;
				this->InsertBT->Enabled = true;
				BTinsert_timer->Enabled = false;
				FixMe->Enabled = true;
			 }
			 else if(this->BT1->Visible==true && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT3->Visible==false && x> int::Parse(this->BT1->Text)){
				this->BT3->BackColor = System::Drawing::SystemColors::MenuHighlight;
				this->BT3->Text = this->BTinsert_value->Text;
				this->BT3->Visible = true;
				this->BTinsert_value->Text = "";
				this->BTinsert_value->Enabled = true;
				this->InsertBT->Enabled = true;
				BTinsert_timer->Enabled = false;
				FixMe->Enabled = true;
			 }
			 else if(this->BT1->Visible==true && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT2->Visible==false && x<= int::Parse(this->BT1->Text)){
				this->BT2->BackColor = System::Drawing::SystemColors::MenuHighlight;
				this->BT2->Text = this->BTinsert_value->Text;
				this->BT2->Visible = true;
				this->BTinsert_value->Text = "";
				this->BTinsert_value->Enabled = true;
				this->InsertBT->Enabled = true;
				BTinsert_timer->Enabled = false;
				FixMe->Enabled = true;
			 }
			 else if(BT2->Visible==true && this->BT2->BackColor != System::Drawing::SystemColors::MenuHighlight && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && x<= int::Parse(this->BT1->Text)){
				 this->BT2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			 }
			 else if(BT3->Visible==true && this->BT3->BackColor != System::Drawing::SystemColors::MenuHighlight && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && x> int::Parse(this->BT1->Text)){
				this->BT3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			 }
			 else if(this->BT1->Visible == true && this->BT1->BackColor != System::Drawing::SystemColors::MenuHighlight){
				this->BT1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			 }
		 }
	private: System::Void FixMe_Tick(System::Object^  sender, System::EventArgs^  e) {
				 this->BT1->BackColor = System::Drawing::SystemColors::HighlightText;
				 this->BT2->BackColor = System::Drawing::SystemColors::HighlightText;
				 this->BT3->BackColor = System::Drawing::SystemColors::HighlightText;
				 this->BT4->BackColor = System::Drawing::SystemColors::HighlightText;
				 this->BT5->BackColor = System::Drawing::SystemColors::HighlightText;
				 this->BT6->BackColor = System::Drawing::SystemColors::HighlightText;
				 this->BT7->BackColor = System::Drawing::SystemColors::HighlightText;
				 FixMe->Enabled = false;
			 }
};
}
