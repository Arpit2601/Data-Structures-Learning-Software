#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace AandLink {

	/// <summary>
	/// Summary for LinkedList_Deletion
	/// </summary>
	public ref class LinkedList_Deletion : public System::Windows::Forms::UserControl
	{
	public:
		LinkedList_Deletion(void)
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
		~LinkedList_Deletion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  delete_ll_but;
	protected: 
	private: System::Windows::Forms::TextBox^  deletevalue;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  del_pointer;
	private: System::Windows::Forms::Label^  del_tail;
	private: System::Windows::Forms::Label^  del_head;
	private: System::Windows::Forms::Label^  f7;
	private: System::Windows::Forms::Label^  f6;
	private: System::Windows::Forms::Label^  f5;
	private: System::Windows::Forms::Label^  f4;
	private: System::Windows::Forms::Label^  f3;
	private: System::Windows::Forms::Label^  f2;
	private: System::Windows::Forms::Label^  f1;
	private: System::Windows::Forms::Label^  ll_del_lab;
	private: System::Windows::Forms::Timer^  tailfixtimer;
	private: System::Windows::Forms::Timer^  deletefixtimer;
	private: System::Windows::Forms::Timer^  deletetimer;

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
			this->delete_ll_but = (gcnew System::Windows::Forms::Button());
			this->deletevalue = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->del_pointer = (gcnew System::Windows::Forms::Label());
			this->del_tail = (gcnew System::Windows::Forms::Label());
			this->del_head = (gcnew System::Windows::Forms::Label());
			this->f7 = (gcnew System::Windows::Forms::Label());
			this->f6 = (gcnew System::Windows::Forms::Label());
			this->f5 = (gcnew System::Windows::Forms::Label());
			this->f4 = (gcnew System::Windows::Forms::Label());
			this->f3 = (gcnew System::Windows::Forms::Label());
			this->f2 = (gcnew System::Windows::Forms::Label());
			this->f1 = (gcnew System::Windows::Forms::Label());
			this->ll_del_lab = (gcnew System::Windows::Forms::Label());
			this->tailfixtimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->deletefixtimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->deletetimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// delete_ll_but
			// 
			this->delete_ll_but->Location = System::Drawing::Point(476, 303);
			this->delete_ll_but->Name = L"delete_ll_but";
			this->delete_ll_but->Size = System::Drawing::Size(75, 29);
			this->delete_ll_but->TabIndex = 7;
			this->delete_ll_but->Text = L"Delete";
			this->delete_ll_but->UseVisualStyleBackColor = true;
			this->delete_ll_but->Click += gcnew System::EventHandler(this, &LinkedList_Deletion::delete_ll_but_Click);
			// 
			// deletevalue
			// 
			this->deletevalue->Location = System::Drawing::Point(303, 306);
			this->deletevalue->Name = L"deletevalue";
			this->deletevalue->Size = System::Drawing::Size(130, 22);
			this->deletevalue->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(191, 309);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Delete Value";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->panel2->Controls->Add(this->del_pointer);
			this->panel2->Controls->Add(this->del_tail);
			this->panel2->Controls->Add(this->del_head);
			this->panel2->Controls->Add(this->f7);
			this->panel2->Controls->Add(this->f6);
			this->panel2->Controls->Add(this->f5);
			this->panel2->Controls->Add(this->f4);
			this->panel2->Controls->Add(this->f3);
			this->panel2->Controls->Add(this->f2);
			this->panel2->Controls->Add(this->f1);
			this->panel2->Location = System::Drawing::Point(3, 342);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1053, 256);
			this->panel2->TabIndex = 4;
			// 
			// del_pointer
			// 
			this->del_pointer->BackColor = System::Drawing::SystemColors::Highlight;
			this->del_pointer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->del_pointer->Location = System::Drawing::Point(3, 21);
			this->del_pointer->Name = L"del_pointer";
			this->del_pointer->Size = System::Drawing::Size(100, 23);
			this->del_pointer->TabIndex = 9;
			this->del_pointer->Text = L"POINTER";
			this->del_pointer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// del_tail
			// 
			this->del_tail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->del_tail->Location = System::Drawing::Point(854, 211);
			this->del_tail->Name = L"del_tail";
			this->del_tail->Size = System::Drawing::Size(100, 23);
			this->del_tail->TabIndex = 8;
			this->del_tail->Text = L"TAIL";
			this->del_tail->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// del_head
			// 
			this->del_head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->del_head->Location = System::Drawing::Point(126, 55);
			this->del_head->Name = L"del_head";
			this->del_head->Size = System::Drawing::Size(100, 23);
			this->del_head->TabIndex = 7;
			this->del_head->Text = L"HEAD";
			this->del_head->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f7
			// 
			this->f7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f7->Location = System::Drawing::Point(854, 93);
			this->f7->Name = L"f7";
			this->f7->Size = System::Drawing::Size(100, 100);
			this->f7->TabIndex = 6;
			this->f7->Text = L"86";
			this->f7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f6
			// 
			this->f6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f6->Location = System::Drawing::Point(733, 93);
			this->f6->Name = L"f6";
			this->f6->Size = System::Drawing::Size(100, 100);
			this->f6->TabIndex = 5;
			this->f6->Text = L"37";
			this->f6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f5
			// 
			this->f5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f5->Location = System::Drawing::Point(614, 93);
			this->f5->Name = L"f5";
			this->f5->Size = System::Drawing::Size(100, 100);
			this->f5->TabIndex = 4;
			this->f5->Text = L"11";
			this->f5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f4
			// 
			this->f4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f4->Location = System::Drawing::Point(494, 93);
			this->f4->Name = L"f4";
			this->f4->Size = System::Drawing::Size(100, 100);
			this->f4->TabIndex = 3;
			this->f4->Text = L"-90";
			this->f4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f3
			// 
			this->f3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f3->Location = System::Drawing::Point(371, 93);
			this->f3->Name = L"f3";
			this->f3->Size = System::Drawing::Size(100, 100);
			this->f3->TabIndex = 2;
			this->f3->Text = L"109";
			this->f3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f2
			// 
			this->f2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f2->Location = System::Drawing::Point(249, 93);
			this->f2->Name = L"f2";
			this->f2->Size = System::Drawing::Size(100, 100);
			this->f2->TabIndex = 1;
			this->f2->Text = L"-2";
			this->f2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// deletetimer
			// 
			this->deletetimer->Interval = 1;
			this->deletetimer->Tick += gcnew System::EventHandler(this, &LinkedList_Deletion::deletetimer_Tick);
			// 
			// deletefixtimer
			// 
			this->deletefixtimer->Interval = 1;
			this->deletefixtimer->Tick += gcnew System::EventHandler(this, &LinkedList_Deletion::deletefixtimer_Tick);
			// 
			// tailfixtimer
			// 
			this->tailfixtimer->Interval = 1;
			this->tailfixtimer->Tick += gcnew System::EventHandler(this, &LinkedList_Deletion::tailfixtimer_Tick);
			// 
			// f1
			// 
			this->f1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f1->Location = System::Drawing::Point(126, 93);
			this->f1->Name = L"f1";
			this->f1->Size = System::Drawing::Size(100, 100);
			this->f1->TabIndex = 0;
			this->f1->Text = L"23";
			this->f1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ll_del_lab
			// 
			this->ll_del_lab->AutoSize = true;
			this->ll_del_lab->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll_del_lab->Location = System::Drawing::Point(14, 12);
			this->ll_del_lab->Name = L"ll_del_lab";
			this->ll_del_lab->Size = System::Drawing::Size(149, 39);
			this->ll_del_lab->TabIndex = 8;
			this->ll_del_lab->Text = L"Deletion";
			// 
			// LinkedList_Deletion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->ll_del_lab);
			this->Controls->Add(this->delete_ll_but);
			this->Controls->Add(this->deletevalue);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel2);
			this->Name = L"LinkedList_Deletion";
			this->Size = System::Drawing::Size(1059, 610);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void delete_ll_but_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(this->deletevalue->Text==""){
					 this->deletevalue->Text = "";
					 MessageBox::Show("Please Enter Values In The Text Box!");
				 }
				 else if(this->f1->Visible==false && this->f2->Visible==false && this->f3->Visible==false && this->f4->Visible==false && this->f5->Visible==false && this->f6->Visible==false &&this->f7->Visible==false){
					 this->deletevalue->Text = "";
					 MessageBox::Show("Linked List Is Empty!");
				 }
				 else if(int::Parse(this->deletevalue->Text)<=999 && int::Parse(this->deletevalue->Text)>=-999){
					 this->deletevalue->Enabled = false;
					 this->delete_ll_but->Enabled = false;
					 deletetimer->Enabled = true;
				 }
				 else{
					 this->deletevalue->Text = "";
					 MessageBox::Show("Value Not Present In The Linked List");
				 }
			 }
	private: System::Void deletetimer_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(this->del_tail->Location.X==this->del_pointer->Location.X && this->del_head->Location.X==this->del_pointer->Location.X && ((this->f1->Location.X==this->del_pointer->Location.X && this->f1->Text==this->deletevalue->Text && this->f1->Visible==true)||(this->f2->Location.X==this->del_pointer->Location.X && this->f2->Text==this->deletevalue->Text && this->f2->Visible==true)||(this->f3->Location.X==this->del_pointer->Location.X && this->f3->Text==this->deletevalue->Text && this->f3->Visible==true)||(this->f4->Location.X==this->del_pointer->Location.X && this->f4->Text==this->deletevalue->Text && this->f4->Visible==true)||(this->f5->Location.X==this->del_pointer->Location.X && this->f5->Text==this->deletevalue->Text && this->f5->Visible==true)||(this->f6->Location.X==this->del_pointer->Location.X && this->f6->Text==this->deletevalue->Text && this->f6->Visible==true)||(this->f7->Location.X==this->del_pointer->Location.X && this->f7->Text==this->deletevalue->Text && this->f7->Visible==true))){
					 this->f1->Visible = false;
					 this->f2->Visible = false;
					 this->f3->Visible = false;
					 this->f4->Visible = false;
					 this->f5->Visible = false;
					 this->f6->Visible = false;
					 this->f7->Visible = false;
					 deletetimer->Enabled = false;
					 this->del_head->Visible = false;
					 this->del_tail->Visible = false;
					 this->del_pointer->Visible = false;
					 this->deletevalue->Enabled = true;
					 this->delete_ll_but->Enabled = true;
				 }
				 else if(this->f1->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f1->Text){
					 deletetimer->Enabled = false;
					 this->f1->Visible = false;
					 deletefixtimer->Enabled = true;
				 }
				 else if(this->f2->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f2->Text){
					 deletetimer->Enabled = false;
					 this->f2->Visible = false;
					 deletefixtimer->Enabled = true;
				 }
				 else if(this->f3->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f3->Text){
					 deletetimer->Enabled = false;
					 this->f3->Visible = false;
					 deletefixtimer->Enabled = true;
				 }
				 else if(this->f4->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f4->Text){
					 deletetimer->Enabled = false;
					 this->f4->Visible = false;
					 deletefixtimer->Enabled = true;
				 }
				 else if(this->f5->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f5->Text){
					 deletetimer->Enabled = false;
					 this->f5->Visible = false;
					 deletefixtimer->Enabled = true;
				 }
				 else if(this->f6->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f6->Text){
					 deletetimer->Enabled = false;
					 this->f6->Visible = false;
					 deletefixtimer->Enabled = true;
				 }
				 else if(this->f7->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f7->Text){
					 deletetimer->Enabled = false;
					 this->f7->Visible = false;
					 deletefixtimer->Enabled = true;
				 }
				 else if(this->del_tail->Location.X+100 < this->del_pointer->Location.X){
					 this->deletevalue->Enabled = true;
					 this->deletevalue->Text = "";
					 this->delete_ll_but->Enabled = true;
					 deletetimer->Enabled = false;
					 this->del_pointer->Location = System::Drawing::Point(3,21);
					 MessageBox::Show("Value Is Not Present In The Linked List");
				 }
				 else{
					 int x = this->del_pointer->Location.X + 1;
					 this->del_pointer->Location = System::Drawing::Point(x,this->del_pointer->Location.Y);
				 }
			 }
	private: System::Void deletefixtimer_Tick(System::Object^  sender, System::EventArgs^  e) {
				 int check = 0;
				 if(this->del_pointer->Location.X == this->del_tail->Location.X){
					 deletefixtimer->Enabled = false;
					 tailfixtimer->Enabled = true;
				 }
				 else{
					 if(this->f1->Visible == true && this->f1->Location.X>=this->del_pointer->Location.X){
						 if(this->f1->Location.X==this->del_pointer->Location.X){
							 check = 1;
							 goto here;
						 }
						 else{
							 this->f1->Location = System::Drawing::Point(this->f1->Location.X-1,this->f1->Location.Y);
						 }
					 }
					 if(this->f2->Visible == true && this->f2->Location.X>=this->del_pointer->Location.X){
						 if(this->f2->Location.X==this->del_pointer->Location.X){
							 check = 1;
							 goto here;
						 }
						 else{
							 this->f2->Location = System::Drawing::Point(this->f2->Location.X-1,this->f2->Location.Y);
						 }
					 }
					 if(this->f3->Visible == true && this->f3->Location.X>=this->del_pointer->Location.X){
						 if(this->f3->Location.X==this->del_pointer->Location.X){
							 check = 1;
							 goto here;
						 }
						 else{
							 this->f3->Location = System::Drawing::Point(this->f3->Location.X-1,this->f3->Location.Y);
						 }
					 }
					 if(this->f4->Visible == true && this->f4->Location.X>=this->del_pointer->Location.X){
						 if(this->f4->Location.X==this->del_pointer->Location.X){
							 check = 1;
							 goto here;
						 }
						 else{
							 this->f4->Location = System::Drawing::Point(this->f4->Location.X-1,this->f4->Location.Y);
						 }
					 }
					 if(this->f5->Visible == true && this->f5->Location.X>=this->del_pointer->Location.X){
						 if(this->f5->Location.X==this->del_pointer->Location.X){
							 check = 1;
							 goto here;
						 }
						 else{
							 this->f5->Location = System::Drawing::Point(this->f5->Location.X-1,this->f5->Location.Y);
						 }
					 }
					 if(this->f6->Visible == true && this->f6->Location.X>=this->del_pointer->Location.X){
						 if(this->f6->Location.X==this->del_pointer->Location.X){
							 check = 1;
							 goto here;
						 }
						 else{
							 this->f6->Location = System::Drawing::Point(this->f6->Location.X-1,this->f6->Location.Y);
						 }
					 }
					 if(this->f7->Visible == true && this->f7->Location.X>=this->del_pointer->Location.X){
						 if(this->f7->Location.X==this->del_pointer->Location.X){
							 check = 1;
							 goto here;
						 }
						 else{
							 this->f7->Location = System::Drawing::Point(this->f7->Location.X-1,this->f7->Location.Y);
						 }
					 }
here :
					 if(check == 1){
						 check = 0;
						 deletefixtimer->Enabled = false;
						 tailfixtimer->Enabled = true;
					 }
				 }
			 }
	private: System::Void tailfixtimer_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(this->f1->Visible == true && this->f1->Location.X==this->del_tail->Location.X){
					 this->del_pointer->Location = System::Drawing::Point(3,21);
					 tailfixtimer->Enabled = false;
					 this->deletevalue->Text = "";
					 this->deletevalue->Enabled = true;
					 this->delete_ll_but->Enabled = true;

				 }
				 else if(this->f2->Visible == true && this->f2->Location.X==this->del_tail->Location.X){
					 this->del_pointer->Location = System::Drawing::Point(3,21);
					 tailfixtimer->Enabled = false;
					 this->deletevalue->Text = "";
					 this->deletevalue->Enabled = true;
					 this->delete_ll_but->Enabled = true;
				 }
				 else if(this->f3->Visible == true && this->f3->Location.X==this->del_tail->Location.X){
					 this->del_pointer->Location = System::Drawing::Point(3,21);
					 tailfixtimer->Enabled = false;
					 this->deletevalue->Text = "";
					 this->deletevalue->Enabled = true;
					 this->delete_ll_but->Enabled = true;
				 }
				 else if(this->f4->Visible == true && this->f4->Location.X==this->del_tail->Location.X){
					 this->del_pointer->Location = System::Drawing::Point(3,21);
					 tailfixtimer->Enabled = false;
					 this->deletevalue->Text = "";
					 this->deletevalue->Enabled = true;
					 this->delete_ll_but->Enabled = true;
				 }
				 else if(this->f5->Visible == true && this->f5->Location.X==this->del_tail->Location.X){
					 this->del_pointer->Location = System::Drawing::Point(3,21);
					 tailfixtimer->Enabled = false;
					 this->deletevalue->Text = "";
					 this->deletevalue->Enabled = true;
					 this->delete_ll_but->Enabled = true;
				 }
				 else if(this->f6->Visible == true && this->f6->Location.X==this->del_tail->Location.X){
					 this->del_pointer->Location = System::Drawing::Point(3,21);
					 tailfixtimer->Enabled = false;
					 this->deletevalue->Text = "";
					 this->deletevalue->Enabled = true;
					 this->delete_ll_but->Enabled = true;
				 }
				 else if(this->f7->Visible == true && this->f7->Location.X==this->del_tail->Location.X){
					 this->del_pointer->Location = System::Drawing::Point(3,21);
					 tailfixtimer->Enabled = false;
					 this->deletevalue->Text = "";
					 this->deletevalue->Enabled = true;
					 this->delete_ll_but->Enabled = true;
				 }
				 else{
					 this->del_tail->Location = System::Drawing::Point(this->del_tail->Location.X-1,this->del_tail->Location.Y);
				 }
			 }
	};
}
