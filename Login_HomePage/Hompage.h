#pragma once

namespace Login_HomePage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Hompage
	/// </summary>
	public ref class Hompage : public System::Windows::Forms::Form
	{
	public:
		Hompage(void)
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
		~Hompage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  HeaderPanel;
	private: System::Windows::Forms::Button^  HeaderDSButton;
	private: System::Windows::Forms::Button^  HeaderForumbutton;




	private: System::Windows::Forms::Button^  HeaderProfilebutton;

	private: System::Windows::Forms::Button^  HeaderHomebutton;
	private: System::Windows::Forms::Button^  HeaderLogoutbutton;
	private: System::Windows::Forms::Button^  HeaderClosebutton;
	private: System::Windows::Forms::Panel^  Headerstatuspanel;
	private: System::Windows::Forms::PictureBox^  HeaderStatusPanelpictureBox4;
	private: System::Windows::Forms::PictureBox^  HeaderStatusPanelpictureBox5;
	private: System::Windows::Forms::PictureBox^  HeaderStatusPanelpictureBox2;
	private: System::Windows::Forms::PictureBox^  HeaderStatusPanelpictureBox3;
	private: System::Windows::Forms::PictureBox^  HeaderStatusPanelpictureBox1;
	private: System::Windows::Forms::Panel^  Homepanel;
	private: System::Windows::Forms::Panel^  DSpanel;
	private: System::Windows::Forms::Panel^  Profilepanel;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  ProfilePictureChangebutton;
	private: System::Windows::Forms::PictureBox^  ProfilepictureBox;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Hompage::typeid));
			this->HeaderPanel = (gcnew System::Windows::Forms::Panel());
			this->HeaderHomebutton = (gcnew System::Windows::Forms::Button());
			this->HeaderDSButton = (gcnew System::Windows::Forms::Button());
			this->HeaderProfilebutton = (gcnew System::Windows::Forms::Button());
			this->HeaderForumbutton = (gcnew System::Windows::Forms::Button());
			this->HeaderLogoutbutton = (gcnew System::Windows::Forms::Button());
			this->HeaderClosebutton = (gcnew System::Windows::Forms::Button());
			this->Headerstatuspanel = (gcnew System::Windows::Forms::Panel());
			this->HeaderStatusPanelpictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->HeaderStatusPanelpictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->HeaderStatusPanelpictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->HeaderStatusPanelpictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->HeaderStatusPanelpictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->Homepanel = (gcnew System::Windows::Forms::Panel());
			this->DSpanel = (gcnew System::Windows::Forms::Panel());
			this->Profilepanel = (gcnew System::Windows::Forms::Panel());
			this->ProfilepictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->ProfilePictureChangebutton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->HeaderPanel->SuspendLayout();
			this->Headerstatuspanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox5))->BeginInit();
			this->Profilepanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfilepictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// HeaderPanel
			// 
			this->HeaderPanel->Controls->Add(this->HeaderClosebutton);
			this->HeaderPanel->Controls->Add(this->HeaderLogoutbutton);
			this->HeaderPanel->Controls->Add(this->HeaderDSButton);
			this->HeaderPanel->Controls->Add(this->HeaderForumbutton);
			this->HeaderPanel->Controls->Add(this->HeaderProfilebutton);
			this->HeaderPanel->Controls->Add(this->HeaderHomebutton);
			this->HeaderPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->HeaderPanel->Location = System::Drawing::Point(0, 0);
			this->HeaderPanel->Margin = System::Windows::Forms::Padding(0);
			this->HeaderPanel->Name = L"HeaderPanel";
			this->HeaderPanel->Size = System::Drawing::Size(1280, 50);
			this->HeaderPanel->TabIndex = 0;
			// 
			// HeaderHomebutton
			// 
			this->HeaderHomebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HeaderHomebutton->Location = System::Drawing::Point(0, 0);
			this->HeaderHomebutton->Name = L"HeaderHomebutton";
			this->HeaderHomebutton->Size = System::Drawing::Size(240, 50);
			this->HeaderHomebutton->TabIndex = 1;
			this->HeaderHomebutton->Text = L"HOME";
			this->HeaderHomebutton->UseVisualStyleBackColor = true;
			// 
			// HeaderDSButton
			// 
			this->HeaderDSButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HeaderDSButton->Location = System::Drawing::Point(246, 0);
			this->HeaderDSButton->Name = L"HeaderDSButton";
			this->HeaderDSButton->Size = System::Drawing::Size(240, 50);
			this->HeaderDSButton->TabIndex = 2;
			this->HeaderDSButton->Text = L"DS";
			this->HeaderDSButton->UseVisualStyleBackColor = true;
			// 
			// HeaderProfilebutton
			// 
			this->HeaderProfilebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->HeaderProfilebutton->Location = System::Drawing::Point(492, 0);
			this->HeaderProfilebutton->Name = L"HeaderProfilebutton";
			this->HeaderProfilebutton->Size = System::Drawing::Size(240, 50);
			this->HeaderProfilebutton->TabIndex = 3;
			this->HeaderProfilebutton->Text = L"PROFILE";
			this->HeaderProfilebutton->UseVisualStyleBackColor = true;
			this->HeaderProfilebutton->Click += gcnew System::EventHandler(this, &Hompage::button3_Click);
			// 
			// HeaderForumbutton
			// 
			this->HeaderForumbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HeaderForumbutton->Location = System::Drawing::Point(738, 0);
			this->HeaderForumbutton->Name = L"HeaderForumbutton";
			this->HeaderForumbutton->Size = System::Drawing::Size(240, 50);
			this->HeaderForumbutton->TabIndex = 2;
			this->HeaderForumbutton->Text = L"FORUMS";
			this->HeaderForumbutton->UseVisualStyleBackColor = true;
			// 
			// HeaderLogoutbutton
			// 
			this->HeaderLogoutbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HeaderLogoutbutton->Location = System::Drawing::Point(984, 0);
			this->HeaderLogoutbutton->Name = L"HeaderLogoutbutton";
			this->HeaderLogoutbutton->Size = System::Drawing::Size(189, 50);
			this->HeaderLogoutbutton->TabIndex = 2;
			this->HeaderLogoutbutton->Text = L"LOGOUT";
			this->HeaderLogoutbutton->UseVisualStyleBackColor = true;
			// 
			// HeaderClosebutton
			// 
			this->HeaderClosebutton->Location = System::Drawing::Point(1226, 0);
			this->HeaderClosebutton->Name = L"HeaderClosebutton";
			this->HeaderClosebutton->Size = System::Drawing::Size(54, 50);
			this->HeaderClosebutton->TabIndex = 4;
			this->HeaderClosebutton->Text = L"button6";
			this->HeaderClosebutton->UseVisualStyleBackColor = true;
			// 
			// Headerstatuspanel
			// 
			this->Headerstatuspanel->Controls->Add(this->HeaderStatusPanelpictureBox4);
			this->Headerstatuspanel->Controls->Add(this->HeaderStatusPanelpictureBox5);
			this->Headerstatuspanel->Controls->Add(this->HeaderStatusPanelpictureBox2);
			this->Headerstatuspanel->Controls->Add(this->HeaderStatusPanelpictureBox3);
			this->Headerstatuspanel->Controls->Add(this->HeaderStatusPanelpictureBox1);
			this->Headerstatuspanel->Location = System::Drawing::Point(0, 50);
			this->Headerstatuspanel->Margin = System::Windows::Forms::Padding(0);
			this->Headerstatuspanel->Name = L"Headerstatuspanel";
			this->Headerstatuspanel->Size = System::Drawing::Size(1280, 15);
			this->Headerstatuspanel->TabIndex = 6;
			// 
			// HeaderStatusPanelpictureBox1
			// 
			this->HeaderStatusPanelpictureBox1->Location = System::Drawing::Point(0, 0);
			this->HeaderStatusPanelpictureBox1->Name = L"HeaderStatusPanelpictureBox1";
			this->HeaderStatusPanelpictureBox1->Size = System::Drawing::Size(240, 15);
			this->HeaderStatusPanelpictureBox1->TabIndex = 2;
			this->HeaderStatusPanelpictureBox1->TabStop = false;
			// 
			// HeaderStatusPanelpictureBox2
			// 
			this->HeaderStatusPanelpictureBox2->Location = System::Drawing::Point(246, 0);
			this->HeaderStatusPanelpictureBox2->Name = L"HeaderStatusPanelpictureBox2";
			this->HeaderStatusPanelpictureBox2->Size = System::Drawing::Size(240, 15);
			this->HeaderStatusPanelpictureBox2->TabIndex = 7;
			this->HeaderStatusPanelpictureBox2->TabStop = false;
			// 
			// HeaderStatusPanelpictureBox3
			// 
			this->HeaderStatusPanelpictureBox3->Location = System::Drawing::Point(492, 0);
			this->HeaderStatusPanelpictureBox3->Name = L"HeaderStatusPanelpictureBox3";
			this->HeaderStatusPanelpictureBox3->Size = System::Drawing::Size(240, 15);
			this->HeaderStatusPanelpictureBox3->TabIndex = 8;
			this->HeaderStatusPanelpictureBox3->TabStop = false;
			// 
			// HeaderStatusPanelpictureBox4
			// 
			this->HeaderStatusPanelpictureBox4->Location = System::Drawing::Point(738, 0);
			this->HeaderStatusPanelpictureBox4->Name = L"HeaderStatusPanelpictureBox4";
			this->HeaderStatusPanelpictureBox4->Size = System::Drawing::Size(240, 15);
			this->HeaderStatusPanelpictureBox4->TabIndex = 9;
			this->HeaderStatusPanelpictureBox4->TabStop = false;
			// 
			// HeaderStatusPanelpictureBox5
			// 
			this->HeaderStatusPanelpictureBox5->Location = System::Drawing::Point(984, 0);
			this->HeaderStatusPanelpictureBox5->Name = L"HeaderStatusPanelpictureBox5";
			this->HeaderStatusPanelpictureBox5->Size = System::Drawing::Size(189, 15);
			this->HeaderStatusPanelpictureBox5->TabIndex = 10;
			this->HeaderStatusPanelpictureBox5->TabStop = false;
			// 
			// Homepanel
			// 
			this->Homepanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Homepanel->Location = System::Drawing::Point(0, 65);
			this->Homepanel->Margin = System::Windows::Forms::Padding(0);
			this->Homepanel->Name = L"Homepanel";
			this->Homepanel->Size = System::Drawing::Size(1280, 655);
			this->Homepanel->TabIndex = 7;
			// 
			// DSpanel
			// 
			this->DSpanel->Location = System::Drawing::Point(0, 65);
			this->DSpanel->Margin = System::Windows::Forms::Padding(0);
			this->DSpanel->Name = L"DSpanel";
			this->DSpanel->Size = System::Drawing::Size(1280, 655);
			this->DSpanel->TabIndex = 10;
			// 
			// Profilepanel
			// 
			this->Profilepanel->BackColor = System::Drawing::Color::White;
			this->Profilepanel->Controls->Add(this->panel5);
			this->Profilepanel->Controls->Add(this->textBox5);
			this->Profilepanel->Controls->Add(this->label5);
			this->Profilepanel->Controls->Add(this->panel4);
			this->Profilepanel->Controls->Add(this->textBox4);
			this->Profilepanel->Controls->Add(this->label4);
			this->Profilepanel->Controls->Add(this->panel3);
			this->Profilepanel->Controls->Add(this->textBox3);
			this->Profilepanel->Controls->Add(this->label3);
			this->Profilepanel->Controls->Add(this->panel2);
			this->Profilepanel->Controls->Add(this->textBox2);
			this->Profilepanel->Controls->Add(this->label2);
			this->Profilepanel->Controls->Add(this->panel1);
			this->Profilepanel->Controls->Add(this->textBox1);
			this->Profilepanel->Controls->Add(this->label1);
			this->Profilepanel->Controls->Add(this->ProfilePictureChangebutton);
			this->Profilepanel->Controls->Add(this->ProfilepictureBox);
			this->Profilepanel->Location = System::Drawing::Point(0, 65);
			this->Profilepanel->Margin = System::Windows::Forms::Padding(0);
			this->Profilepanel->Name = L"Profilepanel";
			this->Profilepanel->Size = System::Drawing::Size(1280, 655);
			this->Profilepanel->TabIndex = 12;
			// 
			// ProfilepictureBox
			// 
			this->ProfilepictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfilepictureBox.BackgroundImage")));
			this->ProfilepictureBox->Location = System::Drawing::Point(1026, 15);
			this->ProfilepictureBox->Name = L"ProfilepictureBox";
			this->ProfilepictureBox->Size = System::Drawing::Size(242, 300);
			this->ProfilepictureBox->TabIndex = 0;
			this->ProfilepictureBox->TabStop = false;
			// 
			// ProfilePictureChangebutton
			// 
			this->ProfilePictureChangebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfilePictureChangebutton->Location = System::Drawing::Point(1026, 330);
			this->ProfilePictureChangebutton->Name = L"ProfilePictureChangebutton";
			this->ProfilePictureChangebutton->Size = System::Drawing::Size(162, 51);
			this->ProfilePictureChangebutton->TabIndex = 1;
			this->ProfilePictureChangebutton->Text = L"Change";
			this->ProfilePictureChangebutton->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(49, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 36);
			this->label1->TabIndex = 2;
			this->label1->Text = L"First Name:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(221, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(574, 34);
			this->textBox1->TabIndex = 3;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Navy;
			this->panel1->Location = System::Drawing::Point(55, 89);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(740, 2);
			this->panel1->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Navy;
			this->panel2->Location = System::Drawing::Point(55, 154);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(740, 2);
			this->panel2->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(221, 117);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(574, 34);
			this->textBox2->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(49, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 36);
			this->label2->TabIndex = 5;
			this->label2->Text = L"First Name:";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Navy;
			this->panel3->Location = System::Drawing::Point(55, 214);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(740, 2);
			this->panel3->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(221, 177);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(574, 34);
			this->textBox3->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(49, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(166, 36);
			this->label3->TabIndex = 8;
			this->label3->Text = L"First Name:";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Navy;
			this->panel4->Location = System::Drawing::Point(55, 275);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(740, 2);
			this->panel4->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(221, 238);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(574, 34);
			this->textBox4->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(49, 236);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 36);
			this->label4->TabIndex = 11;
			this->label4->Text = L"First Name:";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Navy;
			this->panel5->Location = System::Drawing::Point(55, 340);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(740, 2);
			this->panel5->TabIndex = 16;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(221, 303);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(574, 34);
			this->textBox5->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(49, 301);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(166, 36);
			this->label5->TabIndex = 14;
			this->label5->Text = L"First Name:";
			// 
			// Hompage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->Profilepanel);
			this->Controls->Add(this->Homepanel);
			this->Controls->Add(this->DSpanel);
			this->Controls->Add(this->Headerstatuspanel);
			this->Controls->Add(this->HeaderPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"Hompage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hompage";
			this->Load += gcnew System::EventHandler(this, &Hompage::Hompage_Load);
			this->HeaderPanel->ResumeLayout(false);
			this->Headerstatuspanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox5))->EndInit();
			this->Profilepanel->ResumeLayout(false);
			this->Profilepanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfilepictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Hompage_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
