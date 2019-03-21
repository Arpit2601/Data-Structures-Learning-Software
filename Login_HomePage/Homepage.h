#pragma once

namespace Login_HomePage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Homepage
	/// </summary>
	public ref class Homepage : public System::Windows::Forms::Form
	{
	public:
		Homepage(void)
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
		~Homepage()
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
	private: System::Windows::Forms::Panel^  Profilepanel5;

	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  ProfileEmaillabel;

	private: System::Windows::Forms::Panel^  Profilepanel4;
	private: System::Windows::Forms::TextBox^  ProfileDesignationtextBox;


	private: System::Windows::Forms::Label^  ProfileDesignationlabel;

	private: System::Windows::Forms::Panel^  Profilepanel3;
	private: System::Windows::Forms::TextBox^  ProfileLastNametextBox;


	private: System::Windows::Forms::Label^  ProfileLastLabellabel;


	private: System::Windows::Forms::Panel^  Profilepanel2;
	private: System::Windows::Forms::TextBox^  ProfileFirstNametextBox;


	private: System::Windows::Forms::Label^  ProfileFirstNamelabel;

	private: System::Windows::Forms::Panel^  Profilepanel1;

	private: System::Windows::Forms::TextBox^  ProfileUsernametextBox;

	private: System::Windows::Forms::Label^  ProfileUsernamelabel;

	private: System::Windows::Forms::Button^  ProfilePictureChangebutton;
	private: System::Windows::Forms::PictureBox^  ProfilepictureBox;
	private: System::Windows::Forms::Button^  ProfileSavebutton;
	private: System::Windows::Forms::Button^  ProfileEditbutton;
	private: System::Windows::Forms::Panel^  Profilepanel6;
	private: System::Windows::Forms::TextBox^  ProfileContacttextBox;
	private: System::Windows::Forms::Label^  ProfileContactlabel;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  ProfileChangePasswordpanel1;

	private: System::Windows::Forms::PictureBox^  ProfileChangePasswordpictureBox1;
	private: System::Windows::Forms::TextBox^  ProfileOldPasswordtextBox;
	private: System::Windows::Forms::Panel^  ProfileChangePasswordpanel3;




	private: System::Windows::Forms::PictureBox^  ProfileChangePasswordpictureBox3;
	private: System::Windows::Forms::TextBox^  ProfileConfirmPasswordtextBox;
	private: System::Windows::Forms::Panel^  ProfileChangePasswordpanel2;



	private: System::Windows::Forms::PictureBox^  ProfileChangePasswordpictureBox2;
	private: System::Windows::Forms::TextBox^  ProfileNewPasswordtextBox;


	private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::PictureBox^  ProfileSecuritypictureBox1;
private: System::Windows::Forms::TextBox^  ProfileOldPasswordSecuritytextBox;
private: System::Windows::Forms::Button^  ProfileSecuritySavebutton;




	private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::PictureBox^  ProfileSecuritypictureBox2;
private: System::Windows::Forms::TextBox^  ProfileSecurityAnswertextBox;


private: System::Windows::Forms::ComboBox^  ProfileSecuritycomboBox;

private: System::Windows::Forms::Button^  ProfileChangePasswordSavebutton;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Homepage::typeid));
			this->HeaderPanel = (gcnew System::Windows::Forms::Panel());
			this->HeaderClosebutton = (gcnew System::Windows::Forms::Button());
			this->HeaderLogoutbutton = (gcnew System::Windows::Forms::Button());
			this->HeaderDSButton = (gcnew System::Windows::Forms::Button());
			this->HeaderForumbutton = (gcnew System::Windows::Forms::Button());
			this->HeaderProfilebutton = (gcnew System::Windows::Forms::Button());
			this->HeaderHomebutton = (gcnew System::Windows::Forms::Button());
			this->Headerstatuspanel = (gcnew System::Windows::Forms::Panel());
			this->HeaderStatusPanelpictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->HeaderStatusPanelpictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->HeaderStatusPanelpictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->HeaderStatusPanelpictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->HeaderStatusPanelpictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Homepanel = (gcnew System::Windows::Forms::Panel());
			this->DSpanel = (gcnew System::Windows::Forms::Panel());
			this->Profilepanel = (gcnew System::Windows::Forms::Panel());
			this->ProfileChangePasswordSavebutton = (gcnew System::Windows::Forms::Button());
			this->ProfileSecuritySavebutton = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->ProfileSecuritypictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->ProfileSecurityAnswertextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileSecuritycomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->ProfileSecuritypictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ProfileOldPasswordSecuritytextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileChangePasswordpanel3 = (gcnew System::Windows::Forms::Panel());
			this->ProfileChangePasswordpictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->ProfileConfirmPasswordtextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileChangePasswordpanel2 = (gcnew System::Windows::Forms::Panel());
			this->ProfileChangePasswordpictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->ProfileNewPasswordtextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileChangePasswordpanel1 = (gcnew System::Windows::Forms::Panel());
			this->ProfileChangePasswordpictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ProfileOldPasswordtextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ProfileSavebutton = (gcnew System::Windows::Forms::Button());
			this->ProfileEditbutton = (gcnew System::Windows::Forms::Button());
			this->Profilepanel6 = (gcnew System::Windows::Forms::Panel());
			this->ProfileContacttextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileContactlabel = (gcnew System::Windows::Forms::Label());
			this->Profilepanel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->ProfileEmaillabel = (gcnew System::Windows::Forms::Label());
			this->Profilepanel4 = (gcnew System::Windows::Forms::Panel());
			this->ProfileDesignationtextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileDesignationlabel = (gcnew System::Windows::Forms::Label());
			this->Profilepanel3 = (gcnew System::Windows::Forms::Panel());
			this->ProfileLastNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileLastLabellabel = (gcnew System::Windows::Forms::Label());
			this->Profilepanel2 = (gcnew System::Windows::Forms::Panel());
			this->ProfileFirstNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileFirstNamelabel = (gcnew System::Windows::Forms::Label());
			this->Profilepanel1 = (gcnew System::Windows::Forms::Panel());
			this->ProfileUsernametextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileUsernamelabel = (gcnew System::Windows::Forms::Label());
			this->ProfilePictureChangebutton = (gcnew System::Windows::Forms::Button());
			this->ProfilepictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->HeaderPanel->SuspendLayout();
			this->Headerstatuspanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox1))->BeginInit();
			this->Profilepanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileSecuritypictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileSecuritypictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox1))->BeginInit();
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
			// HeaderClosebutton
			// 
			this->HeaderClosebutton->Location = System::Drawing::Point(1226, 0);
			this->HeaderClosebutton->Name = L"HeaderClosebutton";
			this->HeaderClosebutton->Size = System::Drawing::Size(54, 50);
			this->HeaderClosebutton->TabIndex = 4;
			this->HeaderClosebutton->Text = L"button6";
			this->HeaderClosebutton->UseVisualStyleBackColor = true;
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
			this->HeaderProfilebutton->Click += gcnew System::EventHandler(this, &Homepage::button3_Click);
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
			// HeaderStatusPanelpictureBox1
			// 
			this->HeaderStatusPanelpictureBox1->Location = System::Drawing::Point(0, 0);
			this->HeaderStatusPanelpictureBox1->Name = L"HeaderStatusPanelpictureBox1";
			this->HeaderStatusPanelpictureBox1->Size = System::Drawing::Size(240, 15);
			this->HeaderStatusPanelpictureBox1->TabIndex = 2;
			this->HeaderStatusPanelpictureBox1->TabStop = false;
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
			this->Profilepanel->Controls->Add(this->ProfileChangePasswordSavebutton);
			this->Profilepanel->Controls->Add(this->ProfileSecuritySavebutton);
			this->Profilepanel->Controls->Add(this->panel5);
			this->Profilepanel->Controls->Add(this->ProfileSecuritypictureBox2);
			this->Profilepanel->Controls->Add(this->ProfileSecurityAnswertextBox);
			this->Profilepanel->Controls->Add(this->ProfileSecuritycomboBox);
			this->Profilepanel->Controls->Add(this->panel4);
			this->Profilepanel->Controls->Add(this->ProfileSecuritypictureBox1);
			this->Profilepanel->Controls->Add(this->ProfileOldPasswordSecuritytextBox);
			this->Profilepanel->Controls->Add(this->ProfileChangePasswordpanel3);
			this->Profilepanel->Controls->Add(this->ProfileChangePasswordpictureBox3);
			this->Profilepanel->Controls->Add(this->ProfileConfirmPasswordtextBox);
			this->Profilepanel->Controls->Add(this->ProfileChangePasswordpanel2);
			this->Profilepanel->Controls->Add(this->ProfileChangePasswordpictureBox2);
			this->Profilepanel->Controls->Add(this->ProfileNewPasswordtextBox);
			this->Profilepanel->Controls->Add(this->ProfileChangePasswordpanel1);
			this->Profilepanel->Controls->Add(this->ProfileChangePasswordpictureBox1);
			this->Profilepanel->Controls->Add(this->ProfileOldPasswordtextBox);
			this->Profilepanel->Controls->Add(this->label2);
			this->Profilepanel->Controls->Add(this->label1);
			this->Profilepanel->Controls->Add(this->ProfileSavebutton);
			this->Profilepanel->Controls->Add(this->ProfileEditbutton);
			this->Profilepanel->Controls->Add(this->Profilepanel6);
			this->Profilepanel->Controls->Add(this->ProfileContacttextBox);
			this->Profilepanel->Controls->Add(this->ProfileContactlabel);
			this->Profilepanel->Controls->Add(this->Profilepanel5);
			this->Profilepanel->Controls->Add(this->textBox5);
			this->Profilepanel->Controls->Add(this->ProfileEmaillabel);
			this->Profilepanel->Controls->Add(this->Profilepanel4);
			this->Profilepanel->Controls->Add(this->ProfileDesignationtextBox);
			this->Profilepanel->Controls->Add(this->ProfileDesignationlabel);
			this->Profilepanel->Controls->Add(this->Profilepanel3);
			this->Profilepanel->Controls->Add(this->ProfileLastNametextBox);
			this->Profilepanel->Controls->Add(this->ProfileLastLabellabel);
			this->Profilepanel->Controls->Add(this->Profilepanel2);
			this->Profilepanel->Controls->Add(this->ProfileFirstNametextBox);
			this->Profilepanel->Controls->Add(this->ProfileFirstNamelabel);
			this->Profilepanel->Controls->Add(this->Profilepanel1);
			this->Profilepanel->Controls->Add(this->ProfileUsernametextBox);
			this->Profilepanel->Controls->Add(this->ProfileUsernamelabel);
			this->Profilepanel->Controls->Add(this->ProfilePictureChangebutton);
			this->Profilepanel->Controls->Add(this->ProfilepictureBox);
			this->Profilepanel->Location = System::Drawing::Point(0, 65);
			this->Profilepanel->Margin = System::Windows::Forms::Padding(0);
			this->Profilepanel->Name = L"Profilepanel";
			this->Profilepanel->Size = System::Drawing::Size(1280, 655);
			this->Profilepanel->TabIndex = 12;
			this->Profilepanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Homepage::Profilepanel_Paint);
			// 
			// ProfileChangePasswordSavebutton
			// 
			this->ProfileChangePasswordSavebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileChangePasswordSavebutton->Location = System::Drawing::Point(1137, 492);
			this->ProfileChangePasswordSavebutton->Name = L"ProfileChangePasswordSavebutton";
			this->ProfileChangePasswordSavebutton->Size = System::Drawing::Size(140, 51);
			this->ProfileChangePasswordSavebutton->TabIndex = 42;
			this->ProfileChangePasswordSavebutton->Text = L"Save";
			this->ProfileChangePasswordSavebutton->UseVisualStyleBackColor = true;
			// 
			// ProfileSecuritySavebutton
			// 
			this->ProfileSecuritySavebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileSecuritySavebutton->Location = System::Drawing::Point(1137, 596);
			this->ProfileSecuritySavebutton->Name = L"ProfileSecuritySavebutton";
			this->ProfileSecuritySavebutton->Size = System::Drawing::Size(140, 51);
			this->ProfileSecuritySavebutton->TabIndex = 41;
			this->ProfileSecuritySavebutton->Text = L"Save";
			this->ProfileSecuritySavebutton->UseVisualStyleBackColor = true;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Navy;
			this->panel5->Location = System::Drawing::Point(780, 644);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(351, 2);
			this->panel5->TabIndex = 39;
			// 
			// ProfileSecuritypictureBox2
			// 
			this->ProfileSecuritypictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfileSecuritypictureBox2.BackgroundImage")));
			this->ProfileSecuritypictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfileSecuritypictureBox2->Location = System::Drawing::Point(780, 590);
			this->ProfileSecuritypictureBox2->Name = L"ProfileSecuritypictureBox2";
			this->ProfileSecuritypictureBox2->Size = System::Drawing::Size(55, 48);
			this->ProfileSecuritypictureBox2->TabIndex = 38;
			this->ProfileSecuritypictureBox2->TabStop = false;
			// 
			// ProfileSecurityAnswertextBox
			// 
			this->ProfileSecurityAnswertextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileSecurityAnswertextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileSecurityAnswertextBox->Location = System::Drawing::Point(841, 604);
			this->ProfileSecurityAnswertextBox->Name = L"ProfileSecurityAnswertextBox";
			this->ProfileSecurityAnswertextBox->Size = System::Drawing::Size(290, 27);
			this->ProfileSecurityAnswertextBox->TabIndex = 37;
			this->ProfileSecurityAnswertextBox->Text = L"Answer";
			// 
			// ProfileSecuritycomboBox
			// 
			this->ProfileSecuritycomboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileSecuritycomboBox->FormattingEnabled = true;
			this->ProfileSecuritycomboBox->Location = System::Drawing::Point(408, 601);
			this->ProfileSecuritycomboBox->Name = L"ProfileSecuritycomboBox";
			this->ProfileSecuritycomboBox->Size = System::Drawing::Size(350, 37);
			this->ProfileSecuritycomboBox->TabIndex = 36;
			this->ProfileSecuritycomboBox->Text = L"Securty Question";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Navy;
			this->panel4->Location = System::Drawing::Point(33, 644);
			this->panel4->Margin = System::Windows::Forms::Padding(0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(351, 2);
			this->panel4->TabIndex = 35;
			// 
			// ProfileSecuritypictureBox1
			// 
			this->ProfileSecuritypictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfileSecuritypictureBox1.BackgroundImage")));
			this->ProfileSecuritypictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfileSecuritypictureBox1->Location = System::Drawing::Point(33, 590);
			this->ProfileSecuritypictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->ProfileSecuritypictureBox1->Name = L"ProfileSecuritypictureBox1";
			this->ProfileSecuritypictureBox1->Size = System::Drawing::Size(55, 48);
			this->ProfileSecuritypictureBox1->TabIndex = 34;
			this->ProfileSecuritypictureBox1->TabStop = false;
			// 
			// ProfileOldPasswordSecuritytextBox
			// 
			this->ProfileOldPasswordSecuritytextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileOldPasswordSecuritytextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileOldPasswordSecuritytextBox->Location = System::Drawing::Point(94, 603);
			this->ProfileOldPasswordSecuritytextBox->Margin = System::Windows::Forms::Padding(0);
			this->ProfileOldPasswordSecuritytextBox->Name = L"ProfileOldPasswordSecuritytextBox";
			this->ProfileOldPasswordSecuritytextBox->Size = System::Drawing::Size(290, 27);
			this->ProfileOldPasswordSecuritytextBox->TabIndex = 33;
			this->ProfileOldPasswordSecuritytextBox->Text = L"Password";
			// 
			// ProfileChangePasswordpanel3
			// 
			this->ProfileChangePasswordpanel3->BackColor = System::Drawing::Color::Navy;
			this->ProfileChangePasswordpanel3->Location = System::Drawing::Point(780, 541);
			this->ProfileChangePasswordpanel3->Name = L"ProfileChangePasswordpanel3";
			this->ProfileChangePasswordpanel3->Size = System::Drawing::Size(351, 2);
			this->ProfileChangePasswordpanel3->TabIndex = 32;
			// 
			// ProfileChangePasswordpictureBox3
			// 
			this->ProfileChangePasswordpictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfileChangePasswordpictureBox3.BackgroundImage")));
			this->ProfileChangePasswordpictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfileChangePasswordpictureBox3->Location = System::Drawing::Point(780, 487);
			this->ProfileChangePasswordpictureBox3->Name = L"ProfileChangePasswordpictureBox3";
			this->ProfileChangePasswordpictureBox3->Size = System::Drawing::Size(55, 48);
			this->ProfileChangePasswordpictureBox3->TabIndex = 31;
			this->ProfileChangePasswordpictureBox3->TabStop = false;
			// 
			// ProfileConfirmPasswordtextBox
			// 
			this->ProfileConfirmPasswordtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileConfirmPasswordtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileConfirmPasswordtextBox->Location = System::Drawing::Point(841, 499);
			this->ProfileConfirmPasswordtextBox->Name = L"ProfileConfirmPasswordtextBox";
			this->ProfileConfirmPasswordtextBox->Size = System::Drawing::Size(290, 27);
			this->ProfileConfirmPasswordtextBox->TabIndex = 30;
			this->ProfileConfirmPasswordtextBox->Text = L"Confirm Password";
			// 
			// ProfileChangePasswordpanel2
			// 
			this->ProfileChangePasswordpanel2->BackColor = System::Drawing::Color::Navy;
			this->ProfileChangePasswordpanel2->Location = System::Drawing::Point(408, 541);
			this->ProfileChangePasswordpanel2->Name = L"ProfileChangePasswordpanel2";
			this->ProfileChangePasswordpanel2->Size = System::Drawing::Size(351, 2);
			this->ProfileChangePasswordpanel2->TabIndex = 29;
			// 
			// ProfileChangePasswordpictureBox2
			// 
			this->ProfileChangePasswordpictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfileChangePasswordpictureBox2.BackgroundImage")));
			this->ProfileChangePasswordpictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfileChangePasswordpictureBox2->Location = System::Drawing::Point(408, 487);
			this->ProfileChangePasswordpictureBox2->Name = L"ProfileChangePasswordpictureBox2";
			this->ProfileChangePasswordpictureBox2->Size = System::Drawing::Size(55, 48);
			this->ProfileChangePasswordpictureBox2->TabIndex = 28;
			this->ProfileChangePasswordpictureBox2->TabStop = false;
			// 
			// ProfileNewPasswordtextBox
			// 
			this->ProfileNewPasswordtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileNewPasswordtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileNewPasswordtextBox->Location = System::Drawing::Point(469, 499);
			this->ProfileNewPasswordtextBox->Name = L"ProfileNewPasswordtextBox";
			this->ProfileNewPasswordtextBox->Size = System::Drawing::Size(289, 27);
			this->ProfileNewPasswordtextBox->TabIndex = 27;
			this->ProfileNewPasswordtextBox->Text = L"New Password";
			// 
			// ProfileChangePasswordpanel1
			// 
			this->ProfileChangePasswordpanel1->BackColor = System::Drawing::Color::Navy;
			this->ProfileChangePasswordpanel1->Location = System::Drawing::Point(33, 541);
			this->ProfileChangePasswordpanel1->Name = L"ProfileChangePasswordpanel1";
			this->ProfileChangePasswordpanel1->Size = System::Drawing::Size(351, 2);
			this->ProfileChangePasswordpanel1->TabIndex = 26;
			// 
			// ProfileChangePasswordpictureBox1
			// 
			this->ProfileChangePasswordpictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfileChangePasswordpictureBox1.BackgroundImage")));
			this->ProfileChangePasswordpictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfileChangePasswordpictureBox1->Location = System::Drawing::Point(33, 487);
			this->ProfileChangePasswordpictureBox1->Name = L"ProfileChangePasswordpictureBox1";
			this->ProfileChangePasswordpictureBox1->Size = System::Drawing::Size(55, 48);
			this->ProfileChangePasswordpictureBox1->TabIndex = 25;
			this->ProfileChangePasswordpictureBox1->TabStop = false;
			// 
			// ProfileOldPasswordtextBox
			// 
			this->ProfileOldPasswordtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileOldPasswordtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileOldPasswordtextBox->Location = System::Drawing::Point(94, 501);
			this->ProfileOldPasswordtextBox->Name = L"ProfileOldPasswordtextBox";
			this->ProfileOldPasswordtextBox->Size = System::Drawing::Size(290, 27);
			this->ProfileOldPasswordtextBox->TabIndex = 24;
			this->ProfileOldPasswordtextBox->Text = L"Old Password";
			this->ProfileOldPasswordtextBox->TextChanged += gcnew System::EventHandler(this, &Homepage::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 552);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(376, 26);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Change Security Question/Answer";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 452);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 29);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Change Password";
			this->label1->Click += gcnew System::EventHandler(this, &Homepage::label1_Click);
			// 
			// ProfileSavebutton
			// 
			this->ProfileSavebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ProfileSavebutton->Location = System::Drawing::Point(611, 390);
			this->ProfileSavebutton->Name = L"ProfileSavebutton";
			this->ProfileSavebutton->Size = System::Drawing::Size(162, 51);
			this->ProfileSavebutton->TabIndex = 21;
			this->ProfileSavebutton->Text = L"Save";
			this->ProfileSavebutton->UseVisualStyleBackColor = true;
			// 
			// ProfileEditbutton
			// 
			this->ProfileEditbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ProfileEditbutton->Location = System::Drawing::Point(33, 390);
			this->ProfileEditbutton->Name = L"ProfileEditbutton";
			this->ProfileEditbutton->Size = System::Drawing::Size(162, 51);
			this->ProfileEditbutton->TabIndex = 20;
			this->ProfileEditbutton->Text = L"Edit Profile";
			this->ProfileEditbutton->UseVisualStyleBackColor = true;
			// 
			// Profilepanel6
			// 
			this->Profilepanel6->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel6->Location = System::Drawing::Point(33, 365);
			this->Profilepanel6->Name = L"Profilepanel6";
			this->Profilepanel6->Size = System::Drawing::Size(740, 2);
			this->Profilepanel6->TabIndex = 19;
			// 
			// ProfileContacttextBox
			// 
			this->ProfileContacttextBox->BackColor = System::Drawing::Color::White;
			this->ProfileContacttextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileContacttextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileContacttextBox->Location = System::Drawing::Point(148, 328);
			this->ProfileContacttextBox->Name = L"ProfileContacttextBox";
			this->ProfileContacttextBox->Size = System::Drawing::Size(625, 34);
			this->ProfileContacttextBox->TabIndex = 18;
			// 
			// ProfileContactlabel
			// 
			this->ProfileContactlabel->AutoSize = true;
			this->ProfileContactlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileContactlabel->Location = System::Drawing::Point(27, 326);
			this->ProfileContactlabel->Name = L"ProfileContactlabel";
			this->ProfileContactlabel->Size = System::Drawing::Size(125, 36);
			this->ProfileContactlabel->TabIndex = 17;
			this->ProfileContactlabel->Text = L"Contact:";
			// 
			// Profilepanel5
			// 
			this->Profilepanel5->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel5->Location = System::Drawing::Point(33, 304);
			this->Profilepanel5->Name = L"Profilepanel5";
			this->Profilepanel5->Size = System::Drawing::Size(740, 2);
			this->Profilepanel5->TabIndex = 16;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(129, 267);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(644, 34);
			this->textBox5->TabIndex = 15;
			// 
			// ProfileEmaillabel
			// 
			this->ProfileEmaillabel->AutoSize = true;
			this->ProfileEmaillabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ProfileEmaillabel->Location = System::Drawing::Point(27, 265);
			this->ProfileEmaillabel->Name = L"ProfileEmaillabel";
			this->ProfileEmaillabel->Size = System::Drawing::Size(96, 36);
			this->ProfileEmaillabel->TabIndex = 14;
			this->ProfileEmaillabel->Text = L"Email:";
			// 
			// Profilepanel4
			// 
			this->Profilepanel4->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel4->Location = System::Drawing::Point(33, 239);
			this->Profilepanel4->Name = L"Profilepanel4";
			this->Profilepanel4->Size = System::Drawing::Size(740, 2);
			this->Profilepanel4->TabIndex = 13;
			// 
			// ProfileDesignationtextBox
			// 
			this->ProfileDesignationtextBox->BackColor = System::Drawing::Color::White;
			this->ProfileDesignationtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileDesignationtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileDesignationtextBox->Location = System::Drawing::Point(214, 202);
			this->ProfileDesignationtextBox->Name = L"ProfileDesignationtextBox";
			this->ProfileDesignationtextBox->Size = System::Drawing::Size(559, 34);
			this->ProfileDesignationtextBox->TabIndex = 12;
			// 
			// ProfileDesignationlabel
			// 
			this->ProfileDesignationlabel->AutoSize = true;
			this->ProfileDesignationlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileDesignationlabel->Location = System::Drawing::Point(27, 200);
			this->ProfileDesignationlabel->Name = L"ProfileDesignationlabel";
			this->ProfileDesignationlabel->Size = System::Drawing::Size(181, 36);
			this->ProfileDesignationlabel->TabIndex = 11;
			this->ProfileDesignationlabel->Text = L"Designation:";
			// 
			// Profilepanel3
			// 
			this->Profilepanel3->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel3->Location = System::Drawing::Point(33, 178);
			this->Profilepanel3->Name = L"Profilepanel3";
			this->Profilepanel3->Size = System::Drawing::Size(740, 2);
			this->Profilepanel3->TabIndex = 10;
			// 
			// ProfileLastNametextBox
			// 
			this->ProfileLastNametextBox->BackColor = System::Drawing::Color::White;
			this->ProfileLastNametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileLastNametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileLastNametextBox->Location = System::Drawing::Point(199, 141);
			this->ProfileLastNametextBox->Name = L"ProfileLastNametextBox";
			this->ProfileLastNametextBox->Size = System::Drawing::Size(574, 34);
			this->ProfileLastNametextBox->TabIndex = 9;
			// 
			// ProfileLastLabellabel
			// 
			this->ProfileLastLabellabel->AutoSize = true;
			this->ProfileLastLabellabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileLastLabellabel->Location = System::Drawing::Point(27, 139);
			this->ProfileLastLabellabel->Name = L"ProfileLastLabellabel";
			this->ProfileLastLabellabel->Size = System::Drawing::Size(164, 36);
			this->ProfileLastLabellabel->TabIndex = 8;
			this->ProfileLastLabellabel->Text = L"Last Name:";
			// 
			// Profilepanel2
			// 
			this->Profilepanel2->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel2->Location = System::Drawing::Point(33, 118);
			this->Profilepanel2->Name = L"Profilepanel2";
			this->Profilepanel2->Size = System::Drawing::Size(740, 2);
			this->Profilepanel2->TabIndex = 7;
			// 
			// ProfileFirstNametextBox
			// 
			this->ProfileFirstNametextBox->BackColor = System::Drawing::Color::White;
			this->ProfileFirstNametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileFirstNametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileFirstNametextBox->Location = System::Drawing::Point(199, 81);
			this->ProfileFirstNametextBox->Name = L"ProfileFirstNametextBox";
			this->ProfileFirstNametextBox->Size = System::Drawing::Size(574, 34);
			this->ProfileFirstNametextBox->TabIndex = 6;
			// 
			// ProfileFirstNamelabel
			// 
			this->ProfileFirstNamelabel->AutoSize = true;
			this->ProfileFirstNamelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileFirstNamelabel->Location = System::Drawing::Point(27, 79);
			this->ProfileFirstNamelabel->Name = L"ProfileFirstNamelabel";
			this->ProfileFirstNamelabel->Size = System::Drawing::Size(166, 36);
			this->ProfileFirstNamelabel->TabIndex = 5;
			this->ProfileFirstNamelabel->Text = L"First Name:";
			// 
			// Profilepanel1
			// 
			this->Profilepanel1->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel1->Location = System::Drawing::Point(33, 53);
			this->Profilepanel1->Name = L"Profilepanel1";
			this->Profilepanel1->Size = System::Drawing::Size(740, 2);
			this->Profilepanel1->TabIndex = 4;
			// 
			// ProfileUsernametextBox
			// 
			this->ProfileUsernametextBox->BackColor = System::Drawing::Color::White;
			this->ProfileUsernametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileUsernametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileUsernametextBox->Location = System::Drawing::Point(199, 16);
			this->ProfileUsernametextBox->Name = L"ProfileUsernametextBox";
			this->ProfileUsernametextBox->Size = System::Drawing::Size(574, 34);
			this->ProfileUsernametextBox->TabIndex = 3;
			// 
			// ProfileUsernamelabel
			// 
			this->ProfileUsernamelabel->AutoSize = true;
			this->ProfileUsernamelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileUsernamelabel->Location = System::Drawing::Point(27, 14);
			this->ProfileUsernamelabel->Name = L"ProfileUsernamelabel";
			this->ProfileUsernamelabel->Size = System::Drawing::Size(158, 36);
			this->ProfileUsernamelabel->TabIndex = 2;
			this->ProfileUsernamelabel->Text = L"Username:";
			// 
			// ProfilePictureChangebutton
			// 
			this->ProfilePictureChangebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfilePictureChangebutton->Location = System::Drawing::Point(1016, 330);
			this->ProfilePictureChangebutton->Name = L"ProfilePictureChangebutton";
			this->ProfilePictureChangebutton->Size = System::Drawing::Size(178, 51);
			this->ProfilePictureChangebutton->TabIndex = 1;
			this->ProfilePictureChangebutton->Text = L"Change Image";
			this->ProfilePictureChangebutton->UseVisualStyleBackColor = true;
			// 
			// ProfilepictureBox
			// 
			this->ProfilepictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfilepictureBox.BackgroundImage")));
			this->ProfilepictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfilepictureBox->Location = System::Drawing::Point(1016, 15);
			this->ProfilepictureBox->Name = L"ProfilepictureBox";
			this->ProfilepictureBox->Size = System::Drawing::Size(242, 300);
			this->ProfilepictureBox->TabIndex = 0;
			this->ProfilepictureBox->TabStop = false;
			// 
			// Homepage
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
			this->Name = L"Homepage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Homepage";
			this->Load += gcnew System::EventHandler(this, &Homepage::Homepage_Load);
			this->HeaderPanel->ResumeLayout(false);
			this->Headerstatuspanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox1))->EndInit();
			this->Profilepanel->ResumeLayout(false);
			this->Profilepanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileSecuritypictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileSecuritypictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfilepictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Homepage_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Profilepanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
}
