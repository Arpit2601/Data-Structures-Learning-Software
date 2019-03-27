#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace AandLink {

	/// <summary>
	/// Summary for LinkedList_Insertion
	/// </summary>
	public ref class LinkedList_Insertion : public System::Windows::Forms::UserControl
	{
	public:
		LinkedList_Insertion(void)
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
		~LinkedList_Insertion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  insert_but_ll;
	protected: 
	private: System::Windows::Forms::TextBox^  insert_ll_tf;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  insert_animation_ll;
	private: System::Windows::Forms::Label^  tail_ll;
	private: System::Windows::Forms::Label^  insert_ll_label;
	private: System::Windows::Forms::Label^  ll7;
	private: System::Windows::Forms::Label^  ll6;
	private: System::Windows::Forms::Label^  ll5;
	private: System::Windows::Forms::Label^  ll4;
	private: System::Windows::Forms::Label^  ll3;
	private: System::Windows::Forms::Label^  ll2;
	private: System::Windows::Forms::Label^  head_ll;
	private: System::Windows::Forms::Label^  ll1;
	private: System::Windows::Forms::Label^  ll_insert_lab;
	private: System::Windows::Forms::Timer^  insertimerll;
	private: System::Windows::Forms::Timer^  tailtimer;

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
			this->insert_but_ll = (gcnew System::Windows::Forms::Button());
			this->insert_ll_tf = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->insert_animation_ll = (gcnew System::Windows::Forms::Panel());
			this->tail_ll = (gcnew System::Windows::Forms::Label());
			this->insert_ll_label = (gcnew System::Windows::Forms::Label());
			this->ll7 = (gcnew System::Windows::Forms::Label());
			this->ll6 = (gcnew System::Windows::Forms::Label());
			this->ll5 = (gcnew System::Windows::Forms::Label());
			this->ll4 = (gcnew System::Windows::Forms::Label());
			this->ll3 = (gcnew System::Windows::Forms::Label());
			this->ll2 = (gcnew System::Windows::Forms::Label());
			this->head_ll = (gcnew System::Windows::Forms::Label());
			this->ll1 = (gcnew System::Windows::Forms::Label());
			this->ll_insert_lab = (gcnew System::Windows::Forms::Label());
			this->insertimerll = (gcnew System::Windows::Forms::Timer(this->components));
			this->tailtimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->insert_animation_ll->SuspendLayout();
			this->SuspendLayout();
			// 
			// insert_but_ll
			// 
			this->insert_but_ll->Location = System::Drawing::Point(486, 281);
			this->insert_but_ll->Name = L"insert_but_ll";
			this->insert_but_ll->Size = System::Drawing::Size(103, 34);
			this->insert_but_ll->TabIndex = 7;
			this->insert_but_ll->Text = L"Insert";
			this->insert_but_ll->UseVisualStyleBackColor = true;
			this->insert_but_ll->Click += gcnew System::EventHandler(this, &LinkedList_Insertion::insert_but_ll_Click);
			// 
			// insert_ll_tf
			// 
			this->insert_ll_tf->Location = System::Drawing::Point(251, 293);
			this->insert_ll_tf->Name = L"insert_ll_tf";
			this->insert_ll_tf->Size = System::Drawing::Size(186, 22);
			this->insert_ll_tf->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(93, 298);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Insert In Linked List";
			// 
			// insert_animation_ll
			// 
			this->insert_animation_ll->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->insert_animation_ll->Controls->Add(this->tail_ll);
			this->insert_animation_ll->Controls->Add(this->insert_ll_label);
			this->insert_animation_ll->Controls->Add(this->ll7);
			this->insert_animation_ll->Controls->Add(this->ll6);
			this->insert_animation_ll->Controls->Add(this->ll5);
			this->insert_animation_ll->Controls->Add(this->ll4);
			this->insert_animation_ll->Controls->Add(this->ll3);
			this->insert_animation_ll->Controls->Add(this->ll2);
			this->insert_animation_ll->Controls->Add(this->head_ll);
			this->insert_animation_ll->Controls->Add(this->ll1);
			this->insert_animation_ll->Location = System::Drawing::Point(0, 331);
			this->insert_animation_ll->Name = L"insert_animation_ll";
			this->insert_animation_ll->Size = System::Drawing::Size(1059, 259);
			this->insert_animation_ll->TabIndex = 4;
			// 
			// tail_ll
			// 
			this->tail_ll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tail_ll->Location = System::Drawing::Point(942, 209);
			this->tail_ll->Name = L"tail_ll";
			this->tail_ll->Size = System::Drawing::Size(100, 29);
			this->tail_ll->TabIndex = 9;
			this->tail_ll->Text = L"TAIL";
			this->tail_ll->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->tail_ll->Visible = false;
			// 
			// insert_ll_label
			// 
			this->insert_ll_label->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->insert_ll_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->insert_ll_label->Location = System::Drawing::Point(42, 93);
			this->insert_ll_label->Name = L"insert_ll_label";
			this->insert_ll_label->Size = System::Drawing::Size(100, 100);
			this->insert_ll_label->TabIndex = 8;
			this->insert_ll_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->insert_ll_label->Visible = false;
			// 
			// ll7
			// 
			this->ll7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll7->Location = System::Drawing::Point(237, 93);
			this->ll7->Name = L"ll7";
			this->ll7->Size = System::Drawing::Size(100, 100);
			this->ll7->TabIndex = 7;
			this->ll7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll7->Visible = false;
			// 
			// ll6
			// 
			this->ll6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll6->Location = System::Drawing::Point(355, 93);
			this->ll6->Name = L"ll6";
			this->ll6->Size = System::Drawing::Size(100, 100);
			this->ll6->TabIndex = 6;
			this->ll6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll6->Visible = false;
			// 
			// ll5
			// 
			this->ll5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll5->Location = System::Drawing::Point(473, 93);
			this->ll5->Name = L"ll5";
			this->ll5->Size = System::Drawing::Size(100, 100);
			this->ll5->TabIndex = 5;
			this->ll5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll5->Visible = false;
			// 
			// ll4
			// 
			this->ll4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll4->Location = System::Drawing::Point(590, 93);
			this->ll4->Name = L"ll4";
			this->ll4->Size = System::Drawing::Size(100, 100);
			this->ll4->TabIndex = 4;
			this->ll4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll4->Visible = false;
			// 
			// ll3
			// 
			this->ll3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll3->Location = System::Drawing::Point(707, 93);
			this->ll3->Name = L"ll3";
			this->ll3->Size = System::Drawing::Size(100, 100);
			this->ll3->TabIndex = 3;
			this->ll3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll3->Visible = false;
			// 
			// ll2
			// 
			this->ll2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll2->Location = System::Drawing::Point(826, 93);
			this->ll2->Name = L"ll2";
			this->ll2->Size = System::Drawing::Size(100, 100);
			this->ll2->TabIndex = 2;
			this->ll2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll2->Visible = false;
			// 
			// head_ll
			// 
			this->head_ll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->head_ll->Location = System::Drawing::Point(942, 52);
			this->head_ll->Name = L"head_ll";
			this->head_ll->Size = System::Drawing::Size(100, 29);
			this->head_ll->TabIndex = 1;
			this->head_ll->Text = L"HEAD";
			this->head_ll->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->head_ll->Visible = false;
			// 
			// ll1
			// 
			this->ll1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll1->Location = System::Drawing::Point(942, 93);
			this->ll1->Name = L"ll1";
			this->ll1->Size = System::Drawing::Size(100, 100);
			this->ll1->TabIndex = 0;
			this->ll1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll1->Visible = false;
			// 
			// ll_insert_lab
			// 
			this->ll_insert_lab->AutoSize = true;
			this->ll_insert_lab->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll_insert_lab->Location = System::Drawing::Point(18, 4);
			this->ll_insert_lab->Name = L"ll_insert_lab";
			this->ll_insert_lab->Size = System::Drawing::Size(152, 39);
			this->ll_insert_lab->TabIndex = 8;
			this->ll_insert_lab->Text = L"Insertion";
			// 
			// insertimerll
			// 
			this->insertimerll->Interval = 1;
			this->insertimerll->Tick += gcnew System::EventHandler(this, &LinkedList_Insertion::insertimerll_Tick);
			// 
			// tailtimer
			// 
			this->tailtimer->Interval = 1;
			this->tailtimer->Tick += gcnew System::EventHandler(this, &LinkedList_Insertion::tailtimer_Tick);
			// 
			// LinkedList_Insertion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->ll_insert_lab);
			this->Controls->Add(this->insert_but_ll);
			this->Controls->Add(this->insert_ll_tf);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->insert_animation_ll);
			this->Name = L"LinkedList_Insertion";
			this->Size = System::Drawing::Size(1059, 610);
			this->insert_animation_ll->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void insert_but_ll_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(this->insert_ll_tf->Text==""){
					 this->insert_ll_tf->Text = "";
					 MessageBox::Show("Please Enter Values In The Text Box!");
				 }
				 else if(this->ll7->Visible == true){
					 this->insert_ll_tf->Text = "";
					 MessageBox::Show("Linked List Is Full !");
				 }
				 else{
					 if(int::Parse(this->insert_ll_tf->Text)< 1000 && int::Parse(this->insert_ll_tf->Text)> -1000){
						 this->insert_ll_label->Text = this->insert_ll_tf->Text;
						 this->insert_ll_label->Visible = true;
						 this->insert_but_ll->Enabled = false;
						 insertimerll->Enabled = true;
					 }
					 else{
						 this->insert_ll_tf->Text = "";
						 MessageBox::Show("Please Enter Value Between -1000 to 1000");
					 }
				 }
			 }
	private: System::Void insertimerll_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(this->ll1->Visible == false){
					 if(this->ll1->Location.X == this->insert_ll_label->Location.X){
						 this->ll1->Visible = true;
						 this->head_ll->Visible = true;
						 this->tail_ll->Visible = true;
						 this->ll1->Text = this->insert_ll_label->Text;
						 this->insert_ll_tf->Text = "";
						 this->insert_ll_label->Text = "";
						 this->insert_ll_label->Visible = false;
						 this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
						 this->insert_but_ll->Enabled = true;
						 insertimerll->Enabled = false;
					 }
					 int x = this->insert_ll_label->Location.X + 2;
					 this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
				 }
				 else if(this->ll2->Visible == false){
					 if(this->ll2->Location.X == this->insert_ll_label->Location.X){
						 this->ll2->Visible = true;
						 this->head_ll->Visible = true;
						 this->ll2->Text = this->insert_ll_label->Text;
						 this->insert_ll_tf->Text = "";
						 this->insert_ll_label->Text = "";
						 this->insert_ll_label->Visible = false;
						 this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
						 insertimerll->Enabled = false;
						 tailtimer->Enabled = true;
					 }
					 int x = this->insert_ll_label->Location.X + 2;
					 this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
				 }
				 else if(this->ll3->Visible == false){
					 if(this->ll3->Location.X == this->insert_ll_label->Location.X){
						 this->ll3->Visible = true;
						 this->head_ll->Visible = true;
						 this->ll3->Text = this->insert_ll_label->Text;
						 this->insert_ll_tf->Text = "";
						 this->insert_ll_label->Text = "";
						 this->insert_ll_label->Visible = false;
						 this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
						 insertimerll->Enabled = false;
						 tailtimer->Enabled = true;
					 }
					 int x = this->insert_ll_label->Location.X + 2;
					 this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
				 }
				 else if(this->ll4->Visible == false){
					 if(this->ll4->Location.X == this->insert_ll_label->Location.X){
						 this->ll4->Visible = true;
						 this->head_ll->Visible = true;
						 this->ll4->Text = this->insert_ll_label->Text;
						 this->insert_ll_tf->Text = "";
						 this->insert_ll_label->Text = "";
						 this->insert_ll_label->Visible = false;
						 this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
						 insertimerll->Enabled = false;
						 tailtimer->Enabled = true;
					 }
					 int x = this->insert_ll_label->Location.X + 2;
					 this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
				 }
				 else if(this->ll5->Visible == false){
					 if(this->ll5->Location.X == this->insert_ll_label->Location.X){
						 this->ll5->Visible = true;
						 this->head_ll->Visible = true;
						 this->ll5->Text = this->insert_ll_label->Text;
						 this->insert_ll_tf->Text = "";
						 this->insert_ll_label->Text = "";
						 this->insert_ll_label->Visible = false;
						 this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
						 insertimerll->Enabled = false;
						 tailtimer->Enabled = true;
					 }
					 int x = this->insert_ll_label->Location.X + 2;
					 this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
				 }
				 else if(this->ll6->Visible == false){
					 if(this->ll6->Location.X == this->insert_ll_label->Location.X){
						 this->ll6->Visible = true;
						 this->head_ll->Visible = true;
						 this->ll6->Text = this->insert_ll_label->Text;
						 this->insert_ll_tf->Text = "";
						 this->insert_ll_label->Text = "";
						 this->insert_ll_label->Visible = false;
						 this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
						 insertimerll->Enabled = false;
						 tailtimer->Enabled = true;
					 }
					 int x = this->insert_ll_label->Location.X + 2;
					 this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
				 }
				 else if(this->ll7->Visible == false){
					 if(this->ll7->Location.X == this->insert_ll_label->Location.X){
						 this->ll7->Visible = true;
						 this->head_ll->Visible = true;
						 this->ll7->Text = this->insert_ll_label->Text;
						 this->insert_ll_tf->Text = "";
						 this->insert_ll_label->Text = "";
						 this->insert_ll_label->Visible = false;
						 this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
						 insertimerll->Enabled = false;
						 tailtimer->Enabled = true;
					 }
					 int x = this->insert_ll_label->Location.X + 2;
					 this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
				 }
			 }
	private: System::Void tailtimer_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(this->ll2->Visible == false){
					 if(this->ll1->Location.X == this->tail_ll->Location.X){
						 this->insert_but_ll->Enabled = true;
						 tailtimer->Enabled = false;
					 }
					 else{
						 int x = this->tail_ll->Location.X - 1;
						 this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
					 }
				 }
				 else if(this->ll3->Visible == false){
					 if(this->ll2->Location.X == this->tail_ll->Location.X){
						 this->insert_but_ll->Enabled = true;
						 tailtimer->Enabled = false;
					 }
					 else{
						 int x = this->tail_ll->Location.X - 1;
						 this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
					 }
				 }
				 else if(this->ll4->Visible == false){
					 if(this->ll3->Location.X == this->tail_ll->Location.X){
						 this->insert_but_ll->Enabled = true;
						 tailtimer->Enabled = false;
					 }
					 else{
						 int x = this->tail_ll->Location.X - 1;
						 this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
					 }
				 }
				 else if(this->ll5->Visible == false){
					 if(this->ll4->Location.X == this->tail_ll->Location.X){
						 this->insert_but_ll->Enabled = true;
						 tailtimer->Enabled = false;
					 }
					 else{
						 int x = this->tail_ll->Location.X - 1;
						 this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
					 }
				 }
				 else if(this->ll6->Visible == false){
					 if(this->ll5->Location.X == this->tail_ll->Location.X){
						 this->insert_but_ll->Enabled = true;
						 tailtimer->Enabled = false;
					 }
					 else{
						 int x = this->tail_ll->Location.X - 1;
						 this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
					 }
				 }
				 else if(this->ll7->Visible == false){
					 if(this->ll6->Location.X == this->tail_ll->Location.X){
						 this->insert_but_ll->Enabled = true;
						 tailtimer->Enabled = false;
					 }
					 else{
						 int x = this->tail_ll->Location.X - 1;
						 this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
					 }
				 }
				 else if(this->ll7->Visible == true){
					 if(this->ll7->Location.X == this->tail_ll->Location.X){
						 this->insert_but_ll->Enabled = true;
						 tailtimer->Enabled = false;
					 }
					 else{
						 int x = this->tail_ll->Location.X - 1;
						 this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
					 }
				 }
			 }
	};
}
