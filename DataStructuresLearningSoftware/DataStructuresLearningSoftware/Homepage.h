#pragma once

#include<string.h>
#include <string>
#include <iostream> 
#include <ctime> 
#include <cstdlib>
#using <system.windows.forms.dll>
#using <Microsoft.VisualBasic.dll>


namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::IO;
	using namespace System::Web;
	using namespace System::Net::Mail;
	using namespace System::Security::Cryptography;
	using namespace System::Text;


	 


	/// <summary>
	/// Summary for Homepage
	/// </summary>
	public ref class Homepage : public System::Windows::Forms::Form
	{
	public:
	//Public global variables
	String ^username;
	String ^first_name;
	String ^last_name;
	String ^ userid;
	String ^password;
	String ^email;
	String ^contact;
	String ^isapproved;
	String ^designation;
	String ^ array_progress;
	String ^ ll_progress;
	String ^ searching_progress;
	String ^ sorting_progress;
	String ^ stack_progress;
	String ^ queue_progress;
	String ^query;
	String ^email_code;
	String ^new_email;
	
	OleDb::OleDbConnection ^connection;
	private: System::Windows::Forms::OpenFileDialog^  ProfileopenFileDialog;
	private: System::Windows::Forms::Label^  ProfilePicturelabel;
	private: System::Windows::Forms::Label^  ProfileErrorlabel;
	private: System::Windows::Forms::Button^  Profilecodebutton;
	private: System::Windows::Forms::TextBox^  ProfilecodetextBox;
	private: System::Windows::Forms::Label^  HomeTitlelabel;
	private: System::Windows::Forms::ProgressBar^  queueprogressBar;

	private: System::Windows::Forms::ProgressBar^  stackprogressBar;

	private: System::Windows::Forms::ProgressBar^  sortingprogressBar;

	private: System::Windows::Forms::ProgressBar^  searchingprogressBar;

	private: System::Windows::Forms::ProgressBar^  llprogressBar;

	private: System::Windows::Forms::ProgressBar^  ArrayprogressBar;
	private: System::Windows::Forms::Label^  queueprogresslabel;
	private: System::Windows::Forms::Label^  stackprogresslabel;
	private: System::Windows::Forms::Label^  sortingprigresslabel;
	private: System::Windows::Forms::Label^  searchingprogresslabel;
	private: System::Windows::Forms::Label^  llprogresslabel;
	private: System::Windows::Forms::Label^  Arrayprogresslabel;



	private: System::Windows::Forms::PictureBox^  HeaderStatusPanelpictureBox5;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel6;
	public: System::Windows::Forms::TextBox^  vartextBox;
	private: System::Windows::Forms::Label^  HomepanelStatuslabel;
	public: 

	public: 
	private: 

	public: 

	public: 
		OleDb::OleDbCommand ^command;
	
		int SendEmail(String ^sendto, String ^message, String ^subject){
			//Function to send mail through smtp protocol

			try
			{
				MailMessage ^mail=gcnew MailMessage("dslearningapp@gmail.com",sendto,subject,message);
				SmtpClient ^client=gcnew SmtpClient("smtp.gmail.com");
				client->Port=587;
				client->Credentials=gcnew System::Net::NetworkCredential("dslearningapp@gmail.com","data4321");
				client->EnableSsl=true;
				client->Send(mail);
				return 1;			


			}
			catch(Exception ^ex)
			{
				MessageBox::Show(ex->Message,"Email Error");
				return 0;

			}
		}

		
		Homepage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//MessageBox::Show("inside homepage "+username);
			//username=vartextBox->Text;

			//Homepanel is shown by default
			Profilepanel->Hide();
			DSpanel->Hide();
			Homepanel->Show();
			HeaderStatusPanelpictureBox1->BackColor=Color::Red;
			HeaderHomebutton->BackColor=Color::Gray;

			//Profile panel textboxes should be read only
			ProfileFirstNametextBox->Enabled=0;
			ProfileLastNametextBox->Enabled=0;
			ProfileemailtextBox->Enabled=0;
			ProfileUsernametextBox->Enabled=0;
			ProfileDesignationtextBox->Enabled=0;
			ProfileContacttextBox->Enabled=0;

			if(username=="guest")
			{
			HeaderProfilebutton->Enabled=0;
				return;
			
			}
			String ^projdirectory= System::IO::Directory::GetCurrentDirectory();
			//MessageBox::Show(projdirectory);
			String ^databasepath = projdirectory+"\\..\\Database.accdb";
			//MessageBox::Show(databasepath);
			try
			{
				connection= gcnew OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+databasepath+";Persist Security Info=False;");
			}
			catch(Exception ^ex)
			{
				MessageBox::Show(ex->Message,"Error while connecting to DB from Home Page");

			}

			//username="sid";

				//Retrieving user info
			
				

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

	private: System::Windows::Forms::PictureBox^  HeaderStatusPanelpictureBox2;
	private: System::Windows::Forms::PictureBox^  HeaderStatusPanelpictureBox3;
	private: System::Windows::Forms::PictureBox^  HeaderStatusPanelpictureBox1;
public: System::Windows::Forms::Panel^  Homepanel;
private: 

	private: System::Windows::Forms::Panel^  DSpanel;
	private: System::Windows::Forms::Panel^  Profilepanel;
	private: System::Windows::Forms::Panel^  Profilepanel5;
private: System::Windows::Forms::TextBox^  ProfileemailtextBox;


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
			this->HomepanelStatuslabel = (gcnew System::Windows::Forms::Label());
			this->vartextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->queueprogresslabel = (gcnew System::Windows::Forms::Label());
			this->stackprogresslabel = (gcnew System::Windows::Forms::Label());
			this->sortingprigresslabel = (gcnew System::Windows::Forms::Label());
			this->searchingprogresslabel = (gcnew System::Windows::Forms::Label());
			this->llprogresslabel = (gcnew System::Windows::Forms::Label());
			this->Arrayprogresslabel = (gcnew System::Windows::Forms::Label());
			this->queueprogressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->stackprogressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->sortingprogressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->searchingprogressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->llprogressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->ArrayprogressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->HomeTitlelabel = (gcnew System::Windows::Forms::Label());
			this->DSpanel = (gcnew System::Windows::Forms::Panel());
			this->Profilepanel = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->ProfilepictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Profilepanel6 = (gcnew System::Windows::Forms::Panel());
			this->ProfileContacttextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileContactlabel = (gcnew System::Windows::Forms::Label());
			this->Profilepanel5 = (gcnew System::Windows::Forms::Panel());
			this->ProfileemailtextBox = (gcnew System::Windows::Forms::TextBox());
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
			this->Profilecodebutton = (gcnew System::Windows::Forms::Button());
			this->ProfilecodetextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileErrorlabel = (gcnew System::Windows::Forms::Label());
			this->ProfilePicturelabel = (gcnew System::Windows::Forms::Label());
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
			this->ProfilePictureChangebutton = (gcnew System::Windows::Forms::Button());
			this->ProfileopenFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->HeaderPanel->SuspendLayout();
			this->Headerstatuspanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox1))->BeginInit();
			this->Homepanel->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->Profilepanel->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfilepictureBox))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileSecuritypictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileSecuritypictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// HeaderPanel
			// 
			this->HeaderPanel->BackColor = System::Drawing::Color::Black;
			this->HeaderPanel->Controls->Add(this->HeaderClosebutton);
			this->HeaderPanel->Controls->Add(this->HeaderLogoutbutton);
			this->HeaderPanel->Controls->Add(this->HeaderDSButton);
			this->HeaderPanel->Controls->Add(this->HeaderForumbutton);
			this->HeaderPanel->Controls->Add(this->HeaderProfilebutton);
			this->HeaderPanel->Controls->Add(this->HeaderHomebutton);
			this->HeaderPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->HeaderPanel->ForeColor = System::Drawing::Color::White;
			this->HeaderPanel->Location = System::Drawing::Point(0, 0);
			this->HeaderPanel->Margin = System::Windows::Forms::Padding(0);
			this->HeaderPanel->Name = L"HeaderPanel";
			this->HeaderPanel->Size = System::Drawing::Size(1280, 50);
			this->HeaderPanel->TabIndex = 0;
			// 
			// HeaderClosebutton
			// 
			this->HeaderClosebutton->BackColor = System::Drawing::Color::White;
			this->HeaderClosebutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"HeaderClosebutton.BackgroundImage")));
			this->HeaderClosebutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->HeaderClosebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderClosebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HeaderClosebutton->Location = System::Drawing::Point(1226, 0);
			this->HeaderClosebutton->Name = L"HeaderClosebutton";
			this->HeaderClosebutton->Size = System::Drawing::Size(54, 50);
			this->HeaderClosebutton->TabIndex = 4;
			this->HeaderClosebutton->UseVisualStyleBackColor = false;
			this->HeaderClosebutton->Click += gcnew System::EventHandler(this, &Homepage::HeaderClosebutton_Click);
			this->HeaderClosebutton->MouseEnter += gcnew System::EventHandler(this, &Homepage::HeaderClosebutton_MouseEnter);
			this->HeaderClosebutton->MouseLeave += gcnew System::EventHandler(this, &Homepage::HeaderClosebutton_MouseLeave);
			// 
			// HeaderLogoutbutton
			// 
			this->HeaderLogoutbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderLogoutbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HeaderLogoutbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HeaderLogoutbutton->Location = System::Drawing::Point(984, 0);
			this->HeaderLogoutbutton->Name = L"HeaderLogoutbutton";
			this->HeaderLogoutbutton->Size = System::Drawing::Size(192, 50);
			this->HeaderLogoutbutton->TabIndex = 2;
			this->HeaderLogoutbutton->Text = L"LOGOUT";
			this->HeaderLogoutbutton->UseVisualStyleBackColor = true;
			this->HeaderLogoutbutton->Click += gcnew System::EventHandler(this, &Homepage::HeaderLogoutbutton_Click);
			// 
			// HeaderDSButton
			// 
			this->HeaderDSButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderDSButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HeaderDSButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HeaderDSButton->Location = System::Drawing::Point(246, 0);
			this->HeaderDSButton->Name = L"HeaderDSButton";
			this->HeaderDSButton->Size = System::Drawing::Size(240, 50);
			this->HeaderDSButton->TabIndex = 2;
			this->HeaderDSButton->Text = L"DS";
			this->HeaderDSButton->UseVisualStyleBackColor = true;
			this->HeaderDSButton->Click += gcnew System::EventHandler(this, &Homepage::HeaderDSButton_Click);
			// 
			// HeaderForumbutton
			// 
			this->HeaderForumbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderForumbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->HeaderProfilebutton->BackColor = System::Drawing::Color::Black;
			this->HeaderProfilebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderProfilebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HeaderProfilebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->HeaderProfilebutton->Location = System::Drawing::Point(492, 0);
			this->HeaderProfilebutton->Name = L"HeaderProfilebutton";
			this->HeaderProfilebutton->Size = System::Drawing::Size(240, 50);
			this->HeaderProfilebutton->TabIndex = 3;
			this->HeaderProfilebutton->Text = L"PROFILE";
			this->HeaderProfilebutton->UseVisualStyleBackColor = false;
			this->HeaderProfilebutton->Click += gcnew System::EventHandler(this, &Homepage::button3_Click);
			// 
			// HeaderHomebutton
			// 
			this->HeaderHomebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderHomebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HeaderHomebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HeaderHomebutton->Location = System::Drawing::Point(0, 0);
			this->HeaderHomebutton->Name = L"HeaderHomebutton";
			this->HeaderHomebutton->Size = System::Drawing::Size(240, 50);
			this->HeaderHomebutton->TabIndex = 1;
			this->HeaderHomebutton->Text = L"HOME";
			this->HeaderHomebutton->UseVisualStyleBackColor = true;
			this->HeaderHomebutton->Click += gcnew System::EventHandler(this, &Homepage::HeaderHomebutton_Click);
			// 
			// Headerstatuspanel
			// 
			this->Headerstatuspanel->BackColor = System::Drawing::Color::Black;
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
			this->HeaderStatusPanelpictureBox3->BackColor = System::Drawing::Color::Black;
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
			this->Homepanel->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Homepanel->Controls->Add(this->HomepanelStatuslabel);
			this->Homepanel->Controls->Add(this->vartextBox);
			this->Homepanel->Controls->Add(this->panel7);
			this->Homepanel->Controls->Add(this->HomeTitlelabel);
			this->Homepanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Homepanel->Location = System::Drawing::Point(0, 65);
			this->Homepanel->Margin = System::Windows::Forms::Padding(0);
			this->Homepanel->Name = L"Homepanel";
			this->Homepanel->Size = System::Drawing::Size(1280, 705);
			this->Homepanel->TabIndex = 7;
			// 
			// HomepanelStatuslabel
			// 
			this->HomepanelStatuslabel->AutoSize = true;
			this->HomepanelStatuslabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->HomepanelStatuslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->HomepanelStatuslabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->HomepanelStatuslabel->Location = System::Drawing::Point(28, 73);
			this->HomepanelStatuslabel->Name = L"HomepanelStatuslabel";
			this->HomepanelStatuslabel->Size = System::Drawing::Size(85, 29);
			this->HomepanelStatuslabel->TabIndex = 16;
			this->HomepanelStatuslabel->Text = L"label3";
			// 
			// vartextBox
			// 
			this->vartextBox->Location = System::Drawing::Point(989, 36);
			this->vartextBox->Name = L"vartextBox";
			this->vartextBox->Size = System::Drawing::Size(206, 22);
			this->vartextBox->TabIndex = 15;
			this->vartextBox->Visible = false;
			this->vartextBox->TextChanged += gcnew System::EventHandler(this, &Homepage::vartextBox_TextChanged);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Navy;
			this->panel7->Controls->Add(this->panel6);
			this->panel7->Location = System::Drawing::Point(69, 115);
			this->panel7->Margin = System::Windows::Forms::Padding(0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(1120, 582);
			this->panel7->TabIndex = 14;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel6->Controls->Add(this->queueprogresslabel);
			this->panel6->Controls->Add(this->stackprogresslabel);
			this->panel6->Controls->Add(this->sortingprigresslabel);
			this->panel6->Controls->Add(this->searchingprogresslabel);
			this->panel6->Controls->Add(this->llprogresslabel);
			this->panel6->Controls->Add(this->Arrayprogresslabel);
			this->panel6->Controls->Add(this->queueprogressBar);
			this->panel6->Controls->Add(this->stackprogressBar);
			this->panel6->Controls->Add(this->sortingprogressBar);
			this->panel6->Controls->Add(this->searchingprogressBar);
			this->panel6->Controls->Add(this->llprogressBar);
			this->panel6->Controls->Add(this->ArrayprogressBar);
			this->panel6->Location = System::Drawing::Point(6, 6);
			this->panel6->Margin = System::Windows::Forms::Padding(0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1109, 570);
			this->panel6->TabIndex = 13;
			// 
			// queueprogresslabel
			// 
			this->queueprogresslabel->AutoSize = true;
			this->queueprogresslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->queueprogresslabel->Location = System::Drawing::Point(12, 486);
			this->queueprogresslabel->Name = L"queueprogresslabel";
			this->queueprogresslabel->Size = System::Drawing::Size(245, 36);
			this->queueprogresslabel->TabIndex = 12;
			this->queueprogresslabel->Text = L"Queue Progress";
			// 
			// stackprogresslabel
			// 
			this->stackprogresslabel->AutoSize = true;
			this->stackprogresslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->stackprogresslabel->Location = System::Drawing::Point(12, 389);
			this->stackprogresslabel->Name = L"stackprogresslabel";
			this->stackprogresslabel->Size = System::Drawing::Size(231, 36);
			this->stackprogresslabel->TabIndex = 11;
			this->stackprogresslabel->Text = L"Stack Progress";
			// 
			// sortingprigresslabel
			// 
			this->sortingprigresslabel->AutoSize = true;
			this->sortingprigresslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sortingprigresslabel->Location = System::Drawing::Point(12, 301);
			this->sortingprigresslabel->Name = L"sortingprigresslabel";
			this->sortingprigresslabel->Size = System::Drawing::Size(255, 36);
			this->sortingprigresslabel->TabIndex = 10;
			this->sortingprigresslabel->Text = L"Sorting Progress";
			// 
			// searchingprogresslabel
			// 
			this->searchingprogresslabel->AutoSize = true;
			this->searchingprogresslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->searchingprogresslabel->Location = System::Drawing::Point(12, 204);
			this->searchingprogresslabel->Name = L"searchingprogresslabel";
			this->searchingprogresslabel->Size = System::Drawing::Size(296, 36);
			this->searchingprogresslabel->TabIndex = 9;
			this->searchingprogresslabel->Text = L"Searching Progress";
			// 
			// llprogresslabel
			// 
			this->llprogresslabel->AutoSize = true;
			this->llprogresslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->llprogresslabel->Location = System::Drawing::Point(12, 111);
			this->llprogresslabel->Name = L"llprogresslabel";
			this->llprogresslabel->Size = System::Drawing::Size(307, 36);
			this->llprogresslabel->TabIndex = 8;
			this->llprogresslabel->Text = L"Linked List Progress";
			// 
			// Arrayprogresslabel
			// 
			this->Arrayprogresslabel->AutoSize = true;
			this->Arrayprogresslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Arrayprogresslabel->Location = System::Drawing::Point(13, 10);
			this->Arrayprogresslabel->Name = L"Arrayprogresslabel";
			this->Arrayprogresslabel->Size = System::Drawing::Size(229, 36);
			this->Arrayprogresslabel->TabIndex = 7;
			this->Arrayprogresslabel->Text = L"Array Progress";
			// 
			// queueprogressBar
			// 
			this->queueprogressBar->ForeColor = System::Drawing::Color::Blue;
			this->queueprogressBar->Location = System::Drawing::Point(18, 528);
			this->queueprogressBar->Maximum = 5;
			this->queueprogressBar->Name = L"queueprogressBar";
			this->queueprogressBar->Size = System::Drawing::Size(1085, 35);
			this->queueprogressBar->TabIndex = 6;
			// 
			// stackprogressBar
			// 
			this->stackprogressBar->ForeColor = System::Drawing::Color::Blue;
			this->stackprogressBar->Location = System::Drawing::Point(18, 435);
			this->stackprogressBar->Maximum = 5;
			this->stackprogressBar->Name = L"stackprogressBar";
			this->stackprogressBar->Size = System::Drawing::Size(1085, 35);
			this->stackprogressBar->TabIndex = 5;
			// 
			// sortingprogressBar
			// 
			this->sortingprogressBar->ForeColor = System::Drawing::Color::Blue;
			this->sortingprogressBar->Location = System::Drawing::Point(18, 340);
			this->sortingprogressBar->Maximum = 5;
			this->sortingprogressBar->Name = L"sortingprogressBar";
			this->sortingprogressBar->Size = System::Drawing::Size(1085, 35);
			this->sortingprogressBar->TabIndex = 4;
			// 
			// searchingprogressBar
			// 
			this->searchingprogressBar->ForeColor = System::Drawing::Color::Blue;
			this->searchingprogressBar->Location = System::Drawing::Point(18, 247);
			this->searchingprogressBar->Maximum = 5;
			this->searchingprogressBar->Name = L"searchingprogressBar";
			this->searchingprogressBar->Size = System::Drawing::Size(1085, 35);
			this->searchingprogressBar->TabIndex = 3;
			this->searchingprogressBar->Click += gcnew System::EventHandler(this, &Homepage::progressBar2_Click);
			// 
			// llprogressBar
			// 
			this->llprogressBar->ForeColor = System::Drawing::Color::Blue;
			this->llprogressBar->Location = System::Drawing::Point(18, 158);
			this->llprogressBar->Maximum = 5;
			this->llprogressBar->Name = L"llprogressBar";
			this->llprogressBar->Size = System::Drawing::Size(1085, 35);
			this->llprogressBar->TabIndex = 2;
			// 
			// ArrayprogressBar
			// 
			this->ArrayprogressBar->ForeColor = System::Drawing::Color::Blue;
			this->ArrayprogressBar->Location = System::Drawing::Point(19, 57);
			this->ArrayprogressBar->Maximum = 5;
			this->ArrayprogressBar->Name = L"ArrayprogressBar";
			this->ArrayprogressBar->Size = System::Drawing::Size(1085, 35);
			this->ArrayprogressBar->TabIndex = 1;
			// 
			// HomeTitlelabel
			// 
			this->HomeTitlelabel->AutoSize = true;
			this->HomeTitlelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HomeTitlelabel->ForeColor = System::Drawing::Color::Navy;
			this->HomeTitlelabel->Location = System::Drawing::Point(16, 9);
			this->HomeTitlelabel->Name = L"HomeTitlelabel";
			this->HomeTitlelabel->Size = System::Drawing::Size(795, 55);
			this->HomeTitlelabel->TabIndex = 0;
			this->HomeTitlelabel->Text = L"Data Structures Learning Software";
			// 
			// DSpanel
			// 
			this->DSpanel->Location = System::Drawing::Point(0, 65);
			this->DSpanel->Margin = System::Windows::Forms::Padding(0);
			this->DSpanel->Name = L"DSpanel";
			this->DSpanel->Size = System::Drawing::Size(1280, 705);
			this->DSpanel->TabIndex = 10;
			// 
			// Profilepanel
			// 
			this->Profilepanel->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Profilepanel->Controls->Add(this->panel3);
			this->Profilepanel->Controls->Add(this->panel2);
			this->Profilepanel->Controls->Add(this->Profilecodebutton);
			this->Profilepanel->Controls->Add(this->ProfilecodetextBox);
			this->Profilepanel->Controls->Add(this->ProfileErrorlabel);
			this->Profilepanel->Controls->Add(this->ProfilePicturelabel);
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
			this->Profilepanel->Controls->Add(this->ProfilePictureChangebutton);
			this->Profilepanel->Location = System::Drawing::Point(0, 65);
			this->Profilepanel->Margin = System::Windows::Forms::Padding(0);
			this->Profilepanel->Name = L"Profilepanel";
			this->Profilepanel->Size = System::Drawing::Size(1280, 705);
			this->Profilepanel->TabIndex = 12;
			this->Profilepanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Homepage::Profilepanel_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->ProfilepictureBox);
			this->panel3->Location = System::Drawing::Point(989, 19);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(278, 297);
			this->panel3->TabIndex = 49;
			// 
			// ProfilepictureBox
			// 
			this->ProfilepictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfilepictureBox.BackgroundImage")));
			this->ProfilepictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfilepictureBox->Location = System::Drawing::Point(9, 6);
			this->ProfilepictureBox->Name = L"ProfilepictureBox";
			this->ProfilepictureBox->Size = System::Drawing::Size(260, 284);
			this->ProfilepictureBox->TabIndex = 0;
			this->ProfilepictureBox->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Navy;
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Location = System::Drawing::Point(26, 9);
			this->panel2->Margin = System::Windows::Forms::Padding(0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(765, 378);
			this->panel2->TabIndex = 48;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Controls->Add(this->Profilepanel6);
			this->panel1->Controls->Add(this->ProfileContacttextBox);
			this->panel1->Controls->Add(this->ProfileContactlabel);
			this->panel1->Controls->Add(this->Profilepanel5);
			this->panel1->Controls->Add(this->ProfileemailtextBox);
			this->panel1->Controls->Add(this->ProfileEmaillabel);
			this->panel1->Controls->Add(this->Profilepanel4);
			this->panel1->Controls->Add(this->ProfileDesignationtextBox);
			this->panel1->Controls->Add(this->ProfileDesignationlabel);
			this->panel1->Controls->Add(this->Profilepanel3);
			this->panel1->Controls->Add(this->ProfileLastNametextBox);
			this->panel1->Controls->Add(this->ProfileLastLabellabel);
			this->panel1->Controls->Add(this->Profilepanel2);
			this->panel1->Controls->Add(this->ProfileFirstNametextBox);
			this->panel1->Controls->Add(this->ProfileFirstNamelabel);
			this->panel1->Controls->Add(this->Profilepanel1);
			this->panel1->Controls->Add(this->ProfileUsernametextBox);
			this->panel1->Controls->Add(this->ProfileUsernamelabel);
			this->panel1->Location = System::Drawing::Point(7, 8);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(753, 364);
			this->panel1->TabIndex = 47;
			// 
			// Profilepanel6
			// 
			this->Profilepanel6->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel6->Location = System::Drawing::Point(6, 351);
			this->Profilepanel6->Name = L"Profilepanel6";
			this->Profilepanel6->Size = System::Drawing::Size(740, 2);
			this->Profilepanel6->TabIndex = 19;
			// 
			// ProfileContacttextBox
			// 
			this->ProfileContacttextBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ProfileContacttextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileContacttextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileContacttextBox->Location = System::Drawing::Point(121, 314);
			this->ProfileContacttextBox->Name = L"ProfileContacttextBox";
			this->ProfileContacttextBox->Size = System::Drawing::Size(625, 34);
			this->ProfileContacttextBox->TabIndex = 18;
			// 
			// ProfileContactlabel
			// 
			this->ProfileContactlabel->AutoSize = true;
			this->ProfileContactlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileContactlabel->Location = System::Drawing::Point(0, 312);
			this->ProfileContactlabel->Name = L"ProfileContactlabel";
			this->ProfileContactlabel->Size = System::Drawing::Size(125, 36);
			this->ProfileContactlabel->TabIndex = 17;
			this->ProfileContactlabel->Text = L"Contact:";
			// 
			// Profilepanel5
			// 
			this->Profilepanel5->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel5->Location = System::Drawing::Point(6, 290);
			this->Profilepanel5->Name = L"Profilepanel5";
			this->Profilepanel5->Size = System::Drawing::Size(740, 2);
			this->Profilepanel5->TabIndex = 16;
			// 
			// ProfileemailtextBox
			// 
			this->ProfileemailtextBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ProfileemailtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileemailtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileemailtextBox->Location = System::Drawing::Point(102, 253);
			this->ProfileemailtextBox->Name = L"ProfileemailtextBox";
			this->ProfileemailtextBox->Size = System::Drawing::Size(644, 34);
			this->ProfileemailtextBox->TabIndex = 15;
			// 
			// ProfileEmaillabel
			// 
			this->ProfileEmaillabel->AutoSize = true;
			this->ProfileEmaillabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ProfileEmaillabel->Location = System::Drawing::Point(0, 251);
			this->ProfileEmaillabel->Name = L"ProfileEmaillabel";
			this->ProfileEmaillabel->Size = System::Drawing::Size(96, 36);
			this->ProfileEmaillabel->TabIndex = 14;
			this->ProfileEmaillabel->Text = L"Email:";
			// 
			// Profilepanel4
			// 
			this->Profilepanel4->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel4->Location = System::Drawing::Point(6, 225);
			this->Profilepanel4->Name = L"Profilepanel4";
			this->Profilepanel4->Size = System::Drawing::Size(740, 2);
			this->Profilepanel4->TabIndex = 13;
			// 
			// ProfileDesignationtextBox
			// 
			this->ProfileDesignationtextBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ProfileDesignationtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileDesignationtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileDesignationtextBox->Location = System::Drawing::Point(187, 188);
			this->ProfileDesignationtextBox->Name = L"ProfileDesignationtextBox";
			this->ProfileDesignationtextBox->Size = System::Drawing::Size(559, 34);
			this->ProfileDesignationtextBox->TabIndex = 12;
			// 
			// ProfileDesignationlabel
			// 
			this->ProfileDesignationlabel->AutoSize = true;
			this->ProfileDesignationlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileDesignationlabel->Location = System::Drawing::Point(0, 186);
			this->ProfileDesignationlabel->Name = L"ProfileDesignationlabel";
			this->ProfileDesignationlabel->Size = System::Drawing::Size(181, 36);
			this->ProfileDesignationlabel->TabIndex = 11;
			this->ProfileDesignationlabel->Text = L"Designation:";
			// 
			// Profilepanel3
			// 
			this->Profilepanel3->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel3->Location = System::Drawing::Point(6, 164);
			this->Profilepanel3->Name = L"Profilepanel3";
			this->Profilepanel3->Size = System::Drawing::Size(740, 2);
			this->Profilepanel3->TabIndex = 10;
			// 
			// ProfileLastNametextBox
			// 
			this->ProfileLastNametextBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ProfileLastNametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileLastNametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileLastNametextBox->Location = System::Drawing::Point(172, 127);
			this->ProfileLastNametextBox->Name = L"ProfileLastNametextBox";
			this->ProfileLastNametextBox->Size = System::Drawing::Size(574, 34);
			this->ProfileLastNametextBox->TabIndex = 9;
			// 
			// ProfileLastLabellabel
			// 
			this->ProfileLastLabellabel->AutoSize = true;
			this->ProfileLastLabellabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileLastLabellabel->Location = System::Drawing::Point(0, 125);
			this->ProfileLastLabellabel->Name = L"ProfileLastLabellabel";
			this->ProfileLastLabellabel->Size = System::Drawing::Size(164, 36);
			this->ProfileLastLabellabel->TabIndex = 8;
			this->ProfileLastLabellabel->Text = L"Last Name:";
			// 
			// Profilepanel2
			// 
			this->Profilepanel2->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel2->Location = System::Drawing::Point(6, 104);
			this->Profilepanel2->Name = L"Profilepanel2";
			this->Profilepanel2->Size = System::Drawing::Size(740, 2);
			this->Profilepanel2->TabIndex = 7;
			// 
			// ProfileFirstNametextBox
			// 
			this->ProfileFirstNametextBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ProfileFirstNametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileFirstNametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileFirstNametextBox->Location = System::Drawing::Point(172, 67);
			this->ProfileFirstNametextBox->Name = L"ProfileFirstNametextBox";
			this->ProfileFirstNametextBox->Size = System::Drawing::Size(574, 34);
			this->ProfileFirstNametextBox->TabIndex = 6;
			// 
			// ProfileFirstNamelabel
			// 
			this->ProfileFirstNamelabel->AutoSize = true;
			this->ProfileFirstNamelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileFirstNamelabel->Location = System::Drawing::Point(0, 65);
			this->ProfileFirstNamelabel->Name = L"ProfileFirstNamelabel";
			this->ProfileFirstNamelabel->Size = System::Drawing::Size(166, 36);
			this->ProfileFirstNamelabel->TabIndex = 5;
			this->ProfileFirstNamelabel->Text = L"First Name:";
			// 
			// Profilepanel1
			// 
			this->Profilepanel1->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel1->Location = System::Drawing::Point(6, 39);
			this->Profilepanel1->Name = L"Profilepanel1";
			this->Profilepanel1->Size = System::Drawing::Size(740, 2);
			this->Profilepanel1->TabIndex = 4;
			// 
			// ProfileUsernametextBox
			// 
			this->ProfileUsernametextBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ProfileUsernametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileUsernametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileUsernametextBox->Location = System::Drawing::Point(172, 2);
			this->ProfileUsernametextBox->Name = L"ProfileUsernametextBox";
			this->ProfileUsernametextBox->Size = System::Drawing::Size(574, 34);
			this->ProfileUsernametextBox->TabIndex = 3;
			// 
			// ProfileUsernamelabel
			// 
			this->ProfileUsernamelabel->AutoSize = true;
			this->ProfileUsernamelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileUsernamelabel->Location = System::Drawing::Point(0, 0);
			this->ProfileUsernamelabel->Name = L"ProfileUsernamelabel";
			this->ProfileUsernamelabel->Size = System::Drawing::Size(158, 36);
			this->ProfileUsernamelabel->TabIndex = 2;
			this->ProfileUsernamelabel->Text = L"Username:";
			// 
			// Profilecodebutton
			// 
			this->Profilecodebutton->BackColor = System::Drawing::Color::Navy;
			this->Profilecodebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Profilecodebutton->ForeColor = System::Drawing::Color::White;
			this->Profilecodebutton->Location = System::Drawing::Point(800, 316);
			this->Profilecodebutton->Name = L"Profilecodebutton";
			this->Profilecodebutton->Size = System::Drawing::Size(109, 46);
			this->Profilecodebutton->TabIndex = 46;
			this->Profilecodebutton->Text = L"Verify";
			this->Profilecodebutton->UseVisualStyleBackColor = false;
			this->Profilecodebutton->Click += gcnew System::EventHandler(this, &Homepage::Profilecodebutton_Click);
			// 
			// ProfilecodetextBox
			// 
			this->ProfilecodetextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ProfilecodetextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ProfilecodetextBox->Location = System::Drawing::Point(800, 267);
			this->ProfilecodetextBox->Name = L"ProfilecodetextBox";
			this->ProfilecodetextBox->Size = System::Drawing::Size(161, 34);
			this->ProfilecodetextBox->TabIndex = 45;
			this->ProfilecodetextBox->Text = L"CODE";
			// 
			// ProfileErrorlabel
			// 
			this->ProfileErrorlabel->AutoSize = true;
			this->ProfileErrorlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileErrorlabel->ForeColor = System::Drawing::Color::Red;
			this->ProfileErrorlabel->Location = System::Drawing::Point(607, 452);
			this->ProfileErrorlabel->Name = L"ProfileErrorlabel";
			this->ProfileErrorlabel->Size = System::Drawing::Size(99, 20);
			this->ProfileErrorlabel->TabIndex = 44;
			this->ProfileErrorlabel->Text = L"Errordisplay";
			// 
			// ProfilePicturelabel
			// 
			this->ProfilePicturelabel->AutoSize = true;
			this->ProfilePicturelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfilePicturelabel->ForeColor = System::Drawing::Color::Red;
			this->ProfilePicturelabel->Location = System::Drawing::Point(994, 388);
			this->ProfilePicturelabel->Name = L"ProfilePicturelabel";
			this->ProfilePicturelabel->Size = System::Drawing::Size(102, 24);
			this->ProfilePicturelabel->TabIndex = 43;
			this->ProfilePicturelabel->Text = L"jpg image";
			// 
			// ProfileChangePasswordSavebutton
			// 
			this->ProfileChangePasswordSavebutton->BackColor = System::Drawing::Color::Navy;
			this->ProfileChangePasswordSavebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProfileChangePasswordSavebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileChangePasswordSavebutton->ForeColor = System::Drawing::Color::White;
			this->ProfileChangePasswordSavebutton->Location = System::Drawing::Point(1137, 492);
			this->ProfileChangePasswordSavebutton->Name = L"ProfileChangePasswordSavebutton";
			this->ProfileChangePasswordSavebutton->Size = System::Drawing::Size(140, 51);
			this->ProfileChangePasswordSavebutton->TabIndex = 42;
			this->ProfileChangePasswordSavebutton->Text = L"Change";
			this->ProfileChangePasswordSavebutton->UseVisualStyleBackColor = false;
			this->ProfileChangePasswordSavebutton->Click += gcnew System::EventHandler(this, &Homepage::ProfileChangePasswordSavebutton_Click);
			// 
			// ProfileSecuritySavebutton
			// 
			this->ProfileSecuritySavebutton->BackColor = System::Drawing::Color::Navy;
			this->ProfileSecuritySavebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProfileSecuritySavebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileSecuritySavebutton->ForeColor = System::Drawing::Color::White;
			this->ProfileSecuritySavebutton->Location = System::Drawing::Point(1137, 646);
			this->ProfileSecuritySavebutton->Name = L"ProfileSecuritySavebutton";
			this->ProfileSecuritySavebutton->Size = System::Drawing::Size(140, 51);
			this->ProfileSecuritySavebutton->TabIndex = 41;
			this->ProfileSecuritySavebutton->Text = L"Change";
			this->ProfileSecuritySavebutton->UseVisualStyleBackColor = false;
			this->ProfileSecuritySavebutton->Click += gcnew System::EventHandler(this, &Homepage::ProfileSecuritySavebutton_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Navy;
			this->panel5->Location = System::Drawing::Point(780, 694);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(351, 2);
			this->panel5->TabIndex = 39;
			// 
			// ProfileSecuritypictureBox2
			// 
			this->ProfileSecuritypictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfileSecuritypictureBox2.BackgroundImage")));
			this->ProfileSecuritypictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfileSecuritypictureBox2->Location = System::Drawing::Point(780, 640);
			this->ProfileSecuritypictureBox2->Name = L"ProfileSecuritypictureBox2";
			this->ProfileSecuritypictureBox2->Size = System::Drawing::Size(55, 48);
			this->ProfileSecuritypictureBox2->TabIndex = 38;
			this->ProfileSecuritypictureBox2->TabStop = false;
			// 
			// ProfileSecurityAnswertextBox
			// 
			this->ProfileSecurityAnswertextBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ProfileSecurityAnswertextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileSecurityAnswertextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileSecurityAnswertextBox->Location = System::Drawing::Point(841, 654);
			this->ProfileSecurityAnswertextBox->Name = L"ProfileSecurityAnswertextBox";
			this->ProfileSecurityAnswertextBox->Size = System::Drawing::Size(290, 27);
			this->ProfileSecurityAnswertextBox->TabIndex = 37;
			this->ProfileSecurityAnswertextBox->Text = L"Answer";
			// 
			// ProfileSecuritycomboBox
			// 
			this->ProfileSecuritycomboBox->BackColor = System::Drawing::Color::Black;
			this->ProfileSecuritycomboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileSecuritycomboBox->ForeColor = System::Drawing::Color::White;
			this->ProfileSecuritycomboBox->Location = System::Drawing::Point(220, 588);
			this->ProfileSecuritycomboBox->Name = L"ProfileSecuritycomboBox";
			this->ProfileSecuritycomboBox->Size = System::Drawing::Size(825, 37);
			this->ProfileSecuritycomboBox->Sorted = true;
			this->ProfileSecuritycomboBox->TabIndex = 36;
			this->ProfileSecuritycomboBox->Text = L"Security Question";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Navy;
			this->panel4->Location = System::Drawing::Point(33, 694);
			this->panel4->Margin = System::Windows::Forms::Padding(0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(351, 2);
			this->panel4->TabIndex = 35;
			// 
			// ProfileSecuritypictureBox1
			// 
			this->ProfileSecuritypictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfileSecuritypictureBox1.BackgroundImage")));
			this->ProfileSecuritypictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfileSecuritypictureBox1->Location = System::Drawing::Point(33, 640);
			this->ProfileSecuritypictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->ProfileSecuritypictureBox1->Name = L"ProfileSecuritypictureBox1";
			this->ProfileSecuritypictureBox1->Size = System::Drawing::Size(55, 48);
			this->ProfileSecuritypictureBox1->TabIndex = 34;
			this->ProfileSecuritypictureBox1->TabStop = false;
			// 
			// ProfileOldPasswordSecuritytextBox
			// 
			this->ProfileOldPasswordSecuritytextBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ProfileOldPasswordSecuritytextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileOldPasswordSecuritytextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileOldPasswordSecuritytextBox->Location = System::Drawing::Point(94, 653);
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
			this->ProfileConfirmPasswordtextBox->BackColor = System::Drawing::Color::WhiteSmoke;
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
			this->ProfileNewPasswordtextBox->BackColor = System::Drawing::Color::WhiteSmoke;
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
			this->ProfileOldPasswordtextBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ProfileOldPasswordtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileOldPasswordtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileOldPasswordtextBox->Location = System::Drawing::Point(94, 501);
			this->ProfileOldPasswordtextBox->Name = L"ProfileOldPasswordtextBox";
			this->ProfileOldPasswordtextBox->Size = System::Drawing::Size(290, 27);
			this->ProfileOldPasswordtextBox->TabIndex = 24;
			this->ProfileOldPasswordtextBox->Text = L"Current Password";
			this->ProfileOldPasswordtextBox->TextChanged += gcnew System::EventHandler(this, &Homepage::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 553);
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
			this->ProfileSavebutton->BackColor = System::Drawing::Color::Navy;
			this->ProfileSavebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProfileSavebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ProfileSavebutton->ForeColor = System::Drawing::Color::White;
			this->ProfileSavebutton->Location = System::Drawing::Point(611, 390);
			this->ProfileSavebutton->Name = L"ProfileSavebutton";
			this->ProfileSavebutton->Size = System::Drawing::Size(162, 51);
			this->ProfileSavebutton->TabIndex = 21;
			this->ProfileSavebutton->Text = L"Save";
			this->ProfileSavebutton->UseVisualStyleBackColor = false;
			this->ProfileSavebutton->Click += gcnew System::EventHandler(this, &Homepage::ProfileSavebutton_Click);
			// 
			// ProfileEditbutton
			// 
			this->ProfileEditbutton->BackColor = System::Drawing::Color::Navy;
			this->ProfileEditbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProfileEditbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ProfileEditbutton->ForeColor = System::Drawing::Color::White;
			this->ProfileEditbutton->Location = System::Drawing::Point(33, 390);
			this->ProfileEditbutton->Name = L"ProfileEditbutton";
			this->ProfileEditbutton->Size = System::Drawing::Size(162, 51);
			this->ProfileEditbutton->TabIndex = 20;
			this->ProfileEditbutton->Text = L"Edit Profile";
			this->ProfileEditbutton->UseVisualStyleBackColor = false;
			this->ProfileEditbutton->Click += gcnew System::EventHandler(this, &Homepage::ProfileEditbutton_Click);
			// 
			// ProfilePictureChangebutton
			// 
			this->ProfilePictureChangebutton->BackColor = System::Drawing::Color::Navy;
			this->ProfilePictureChangebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProfilePictureChangebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfilePictureChangebutton->ForeColor = System::Drawing::Color::White;
			this->ProfilePictureChangebutton->Location = System::Drawing::Point(998, 328);
			this->ProfilePictureChangebutton->Name = L"ProfilePictureChangebutton";
			this->ProfilePictureChangebutton->Size = System::Drawing::Size(178, 51);
			this->ProfilePictureChangebutton->TabIndex = 1;
			this->ProfilePictureChangebutton->Text = L"Change Image";
			this->ProfilePictureChangebutton->UseVisualStyleBackColor = false;
			this->ProfilePictureChangebutton->Click += gcnew System::EventHandler(this, &Homepage::ProfilePictureChangebutton_Click);
			// 
			// ProfileopenFileDialog
			// 
			this->ProfileopenFileDialog->FileName = L"ProfileopenFileDialog";
			this->ProfileopenFileDialog->Filter = L"Jpg (*.jpg)|*.jpg";
			// 
			// Homepage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1280, 770);
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
			this->Homepanel->ResumeLayout(false);
			this->Homepanel->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->Profilepanel->ResumeLayout(false);
			this->Profilepanel->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfilepictureBox))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileSecuritypictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileSecuritypictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(username=="guest")
				 {
					 MessageBox::Show("Login to access profile","Guest");
					 return;
				 }
				 Homepanel->Hide();
				 DSpanel->Hide();
				 Profilepanel->Show();
				 HeaderStatusPanelpictureBox3->BackColor=Color::Red;
				 HeaderStatusPanelpictureBox1->BackColor=Color::Black;
				 HeaderStatusPanelpictureBox2->BackColor=Color::Black;
				 HeaderStatusPanelpictureBox4->BackColor=Color::Black;
				 HeaderHomebutton->BackColor=Color::Black;
				 HeaderDSButton->BackColor=Color::Black;
				 HeaderForumbutton->BackColor=Color::Black;
				 HeaderProfilebutton->BackColor=Color::Gray;

				 ProfileUsernametextBox->Text=username;
				 ProfileFirstNametextBox->Text=first_name;
				 ProfileLastNametextBox->Text=last_name;
				 ProfileDesignationtextBox->Text=designation;
				 ProfileemailtextBox->Text=email;
				 ProfileContacttextBox->Text=contact;
				 ProfileErrorlabel->Hide();
				 ProfileChangePasswordSavebutton->Enabled=1;
				 ProfileSecuritySavebutton->Enabled=1;
				 ProfileFirstNametextBox->Enabled=0;
				 ProfileLastNametextBox->Enabled=0;
				 ProfileemailtextBox->Enabled=0;
				 ProfileUsernametextBox->Enabled=0;
				 ProfileDesignationtextBox->Enabled=0;
				 ProfileContacttextBox->Enabled=0;
				 ProfileSavebutton->Enabled=0;
				 ProfileEditbutton->Enabled=1;
				 ProfilecodetextBox->Hide();
				 Profilecodebutton->Hide();
				 ProfileOldPasswordSecuritytextBox->Text="Password";
				 ProfileSecuritycomboBox->Text="Security Question";
				 ProfileSecurityAnswertextBox->Text="Answer";
				 ProfileOldPasswordtextBox->Text="Old Password";
				 ProfileNewPasswordtextBox->Text="New Password";
				 ProfileConfirmPasswordtextBox->Text="Confirm Password";
			 }
private: System::Void Homepage_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Profilepanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void HeaderClosebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 exit(0);

		 }
private: System::Void HeaderHomebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 Homepanel->Show();
			 DSpanel->Hide();
			 Profilepanel->Hide();
			 HeaderStatusPanelpictureBox3->BackColor=Color::Black;
			 HeaderStatusPanelpictureBox1->BackColor=Color::Red;
			 HeaderStatusPanelpictureBox2->BackColor=Color::Black;
			 HeaderStatusPanelpictureBox4->BackColor=Color::Black;
			 HeaderHomebutton->BackColor=Color::Gray;
			 HeaderDSButton->BackColor=Color::Black;
			 HeaderForumbutton->BackColor=Color::Black;
			 HeaderProfilebutton->BackColor=Color::Black;


			 if(username=="guest")
			 {
				HomepanelStatuslabel->Text="Logged in as a guest (Progress won't be saved)";
				HomepanelStatuslabel->BackColor=Color::LightBlue;
				HomepanelStatuslabel->ForeColor=Color::Blue;
				 return;
			 }
			 if(designation=="prof")
			 {
				 if(isapproved=="False")
				 {
					HomepanelStatuslabel->Text="Designation as 'Professor' not verified by admin (Limited Capabilities)";
					HomepanelStatuslabel->BackColor=Color::LightPink;
					HomepanelStatuslabel->ForeColor=Color::Red;
				 }
				 else
				 {
					 HomepanelStatuslabel->Text="Logged in as 'Professor'";
					 HomepanelStatuslabel->BackColor=Color::LightGreen;
					 HomepanelStatuslabel->ForeColor=Color::Green;
				 }
			 }
			 if(designation=="stud")
			 {
				 HomepanelStatuslabel->Text="Logged in as 'Student'";
				 HomepanelStatuslabel->BackColor=Color::LightGreen;
				 HomepanelStatuslabel->ForeColor=Color::Green;
			 }
			 //retrieving progress info
			 try
			 {
				 connection->Open();
				 command->Connection=connection;

				 query="Select ArraysProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 array_progress=command->ExecuteScalar()->ToString();

				 query="Select LinkedListProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 ll_progress=command->ExecuteScalar()->ToString();

				 query="Select SearchingProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 searching_progress=command->ExecuteScalar()->ToString();

				 query="Select SortingProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 sorting_progress=command->ExecuteScalar()->ToString();

				 query="Select StacksProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 stack_progress=command->ExecuteScalar()->ToString();

				 query="Select QueuesProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 queue_progress=command->ExecuteScalar()->ToString();


				 connection->Close();
			 }
			 catch (Exception ^ex)
			 {
			 	MessageBox::Show(ex->Message,"Error While reading data for Progress");
			 }

			 ArrayprogressBar->Value=Convert::ToInt32(array_progress);
			 llprogressBar->Value=Convert::ToInt32(ll_progress);
			 searchingprogressBar->Value=Convert::ToInt32(searching_progress);
			 sortingprogressBar->Value=Convert::ToInt32(sorting_progress);
			 stackprogressBar->Value=Convert::ToInt32(stack_progress);
			 queueprogressBar->Value=Convert::ToInt32(queue_progress);
			 
		 }
private: System::Void HeaderDSButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 Homepanel->Hide();
			 DSpanel->Show();
			 Profilepanel->Hide();
			 HeaderStatusPanelpictureBox3->BackColor=Color::Black;
			 HeaderStatusPanelpictureBox1->BackColor=Color::Black;
			 HeaderStatusPanelpictureBox2->BackColor=Color::Red;
			 HeaderStatusPanelpictureBox4->BackColor=Color::Black;
			 HeaderHomebutton->BackColor=Color::Black;
			 HeaderDSButton->BackColor=Color::Gray;
			 HeaderForumbutton->BackColor=Color::Black;
			 HeaderProfilebutton->BackColor=Color::Black;
		 }
private: System::Void ProfilePictureChangebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^filepath="";	//Source path for image file
			 String ^projdirectory= System::IO::Directory::GetCurrentDirectory();
			 String ^destinationpath=projdirectory+"\\..\\profilepic\\"+username+".jpg";
			 ProfileErrorlabel->Hide();
			 if(ProfileopenFileDialog->ShowDialog()==Windows::Forms::DialogResult::OK)
			 {
				 filepath=ProfileopenFileDialog->FileName;
			 }

			 if(filepath!="")
			 {
				 if(IO::File::Exists(filepath))
				 {
						File::Delete(destinationpath);
						File::Copy(filepath,destinationpath);
						System::IO::FileStream ^fs=gcnew System::IO::FileStream(destinationpath, IO::FileMode::Open, IO::FileAccess::Read);
						ProfilepictureBox->Image=System::Drawing::Image::FromStream(fs);
						ProfilepictureBox->SizeMode=PictureBoxSizeMode::StretchImage;
						fs->Close();
						MessageBox::Show("Profile Image Updated", "Success");
				 }
				 else
				 {
					MessageBox::Show("File Does Not Exist", "Error");
				 }
			 }
			 else	
			 {
				 MessageBox::Show("Image File not provided", "Error");
			 }
	}
		
private: System::Void ProfileEditbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^input=Microsoft::VisualBasic::Interaction::InputBox(L"Enter Password:","Profile Edit","DefResp",500,500);
			 //MessageBox::Show(input);
			 ProfileErrorlabel->Hide();
			 if(input==password)
			 {
				ProfileFirstNametextBox->Enabled=1;
				ProfileLastNametextBox->Enabled=1;
				ProfileemailtextBox->Enabled=1;
				ProfileContacttextBox->Enabled=1;
				ProfileChangePasswordSavebutton->Enabled=0;
				ProfileSecuritySavebutton->Enabled=0;
				ProfileSavebutton->Enabled=1;
				ProfileEditbutton->Enabled=0;

				
			 }
			 else
			 {
				ProfileErrorlabel->Text="Wrong Password";
				ProfileErrorlabel->Show();
			 }
		 }
private: System::Void ProfileSavebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 ProfileErrorlabel->Hide();
			 //Variables Declaration
			 String^ first_name2 = ProfileFirstNametextBox->Text;
			 String^ last_name2 = ProfileLastNametextBox->Text;
			 String^ email2 = ProfileemailtextBox->Text;
			 String^ contact2 = ProfileContacttextBox->Text;
			 int len1 = first_name2->Length;
			 int len3 = email2->Length;
			 int len4 = contact2->Length;
			 bool flag = true;

			 //Check Validity of information
			 //Checking empty fields
			 
			 if (len1 == 0)		//First name empty
			 {
				 ProfileErrorlabel->Text = "First Name field can't be empty";
				 ProfileErrorlabel->Show();
				 return;
			 }

			 if (len3 == 0)			//Email empty
			 {
				 ProfileErrorlabel->Text = "Email field can't be empty";
				 ProfileErrorlabel->Show();
				 return;
			 }

			 if(len4!=10&&len4!=0)
			 {
				 ProfileErrorlabel->Text = "Contact number is Incorrect";
				 ProfileErrorlabel->Show();
				 return;
			 }

			 //Preliminary tests
			 //Checking Validity of first name
			 for (int i = 0; i < len1; i++)
			 {
				 if (!(isalpha(first_name2[i])))		//Wrong firstname
				 {
					 ProfileErrorlabel->Text = "First Name contains non-valid character";
					 ProfileErrorlabel->Show();
					 return;
				 }


			 }

			 //Checking Validity of last name
			 if (last_name2 == "Last Name (Optional)")
			 {
				 last_name2 = "";
			 }
			 int len2 = last_name2->Length;


			 for (int i = 0; i < len2; i++)
			 {
				 if (!(isalpha(last_name2[i])))		//Wrong lastname
				 {
					 ProfileErrorlabel->Text = "Last Name contains non-valid character";
					 ProfileErrorlabel->Show();
					 return;
				 }
			 }

			 //Checking Validity of email
			 int count = 0;
			 int count1 = 0;
			 int count2 = 0;
			 int count3 = 0;

			 for (int i = 0; i < len3; i++)
			 {
				 if (!((isalnum(email2[i])) || email2[i] == '.' || email2[i] == '@' || email2[i] == '-' || email2[i] == '_'))
				 {
					 ProfileErrorlabel->Text = "Email contains non-valid character";
					 ProfileErrorlabel->Show();
					 return;
				 }
				 if (email2[i] == '@')
				 {
					 if (i == 0)
					 {
						 ProfileErrorlabel->Text = "'@' should be preceeded by atleast 1 character";
						 ProfileErrorlabel->Show();
						 return;
					 }
					 count++;
				 }
				 if (count > 1)		//More than 1 '@'
				 {
					 ProfileErrorlabel->Text = "Email contains multiple '@'";
					 ProfileErrorlabel->Show();
					 return;
				 }
				 if (count == 1 && count1==0 && email2[i]!='.' && email2[i]!='@')
				 {
					 count2++;
				 }

				 if (count == 1 && email2[i] == '.')
				 {
					 if (count2 == 0)
					 {
						 ProfileErrorlabel->Text = "Wrong trail after '@'";
						 ProfileErrorlabel->Show();
						 return;
					 }
					 count1++;
				 }

				 /*if (count1 > 1)		//More than 1 '.' after '@'
				 {
					 ProfileErrorlabel->Text = "Email contains multiple '.' after '@'";
					 ProfileErrorlabel->Show();
					 return;
				 }*/
				 if (count1 && email2[i]!='.')
				 {
					 count3++;
				 }
			 }

			 if (!count)
			 {
				 ProfileErrorlabel->Text = "Email does not contain '@'";
				 ProfileErrorlabel->Show();
				 return;
			 }

			 if (!count1)
			 {
				 ProfileErrorlabel->Text = "Email does not contain '.' after '@'";
				 ProfileErrorlabel->Show();
				 return;
			 }

			 if (!count3)
			 {
				 ProfileErrorlabel->Text = "'.' should be followed by atleast 1 character";
				 ProfileErrorlabel->Show();
				 return;
			 }

			 
			 //Checking Validity of contact
			 
			 
			 for (int i = 0; i < len4; i++)
			 {
				 if (!(isdigit(contact2[i])))		//Wrong username
				 {
					 ProfileErrorlabel->Text = "Contact contains non-valid character (Should be num)";
					 ProfileErrorlabel->Show();
					 return;
				 }


			 }

			 //Check for duplicate email
			 if(email!=email2)
			 {
				 try
				 {
					 connection->Open();
					 bool email_flag=false;
					 command->Connection=connection;
					 query = "Select * From Users Where Email = '"+email2+"'; ";
					 command->CommandText=query;
					 OleDbDataReader ^reader=command->ExecuteReader();
					 while(reader->Read())
					 {
						 ProfileErrorlabel->Text = "Entered email is already registered";
						 ProfileErrorlabel->Show();
						 email_flag=true;
						 break;
					 }
					 connection->Close();
					 if(email_flag)
					 {
						 return;
					 }
				 }
				 catch(Exception ^ex)
				 {

					MessageBox::Show(ex->Message,"Error in Duplicate Email checking");
					return;
				 }
				 
			}
			 


			try
			{
				connection->Open();
				command->Connection=connection;
				query="Update Users Set [FirstName]= '"+first_name2+"', [LastName]= '"+last_name2+"', [Contact]= '"+contact2+"' where UserName= '"+username+"';";
				command->CommandText=query;
				command->ExecuteNonQuery();
				//command->Dispose();
				connection->Close();
			}
			catch (Exception ^ ex)
			{
				MessageBox::Show(ex->Message,"Error while writing data from Profile section(SAVE Homepage)");
				return;
			}
			first_name=first_name2;
			last_name=last_name2;
			contact=contact2;
			
			 
			 
			 if(email!=email2)
			 {
				 //Proceeding to email verification if success
				 

				 //Send a code to email and verify
				 String ^code;
				
					 srand((unsigned)time(0)); 
					 int random_integer; 
					 int lowest=1000, highest=9999; 
					 int range=(highest-lowest)+1; 
					 random_integer = lowest+int(range*rand()/(RAND_MAX + 1.0));
					 code=""+random_integer+"";

				 int num=0;	
				 num+=SendEmail(email2,"Hello "+username+"\r\nVerification Code for Registration: "+code+"\r\n\r\nCheers\r\nTeam DSlearning", "Email verification Code for DS Learning S/W");
				 if(!num)
				 {
					MessageBox::Show("Service unavailable: Change Email not currently available, other fields are updated","Email Verification");
				 Profilecodebutton->Hide();
				 ProfilecodetextBox->Hide();
				 //Reload profile
				 System::Object ^sender;
				 System::EventArgs ^e;
				 this->button3_Click(sender,e);
				 }
				 else
				 {
					 MessageBox::Show("Fields other than Email Updated","Success");
					 email_code=code;
					 new_email=email2;
					 ProfilecodetextBox->Show();
					 ProfilecodetextBox->Text="CODE";
					 Profilecodebutton->Show();
				 }

				 

			 }
			 else
			 {
				 MessageBox::Show("Fields Updated","Success");
				 System::Object ^sender;
				 System::EventArgs ^e;
				 this->button3_Click(sender,e);
			 }
			 
			 
			 

		 }

	

		 
private: System::Void Profilecodebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 String ^email2=new_email;
			 String ^code=ProfilecodetextBox->Text;
			 if(code==email_code)
			 {
				 try
				 {
					 connection->Open();
					 command->Connection=connection;
					 query="Update Users Set [Email]= '"+email2+"' where UserName= '"+username+"';";
					 command->CommandText=query;
					 command->ExecuteNonQuery();
					 //command->Dispose();
					 connection->Close();
				 }
				 catch (Exception ^ex)
				 {
					 MessageBox::Show(ex->Message,"Error while writing data (Email)");
				 }

				 MessageBox::Show("Email Updated","Success");
				 email=email2;
				 ProfilecodetextBox->Hide();
				 ProfilecodetextBox->Text="CODE";
				 Profilecodebutton->Hide();
				 //Reload profile
				 System::Object ^sender;
				 System::EventArgs ^e;
				this->button3_Click(sender,e);

			 }
			 else
			 {
				 MessageBox::Show("Incorrect Security Code","Email Verification");

			 }
			 }
				 
				
		
private: System::Void ProfileChangePasswordSavebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^npass=ProfileNewPasswordtextBox->Text;
			 String ^cpass=ProfileConfirmPasswordtextBox->Text;
			 String ^opass=ProfileOldPasswordtextBox->Text;
			 if(opass!=password)
			 {
				MessageBox::Show("Current Password is incorrent","Change Password");
				return;
			 }
			 if(npass!=cpass)
			 {
				 MessageBox::Show("New Password and Confirm Password Don't match","Change Password");
				 return;
			 }
			 if(npass->Length<3)
			 {

				 MessageBox::Show("Password must be atleast 3 characters long","Change Password");
				 return;
			 }
			 for(int i=0;i<npass->Length;i++)
			 {

				 if(!(isalnum(npass[i])))
				 {
					 MessageBox::Show("New Password contains an invalid character (should be alnum)","Change Password");
					 return;
				 }
			 }

			 password=npass;
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Update Users Set [Password]= '"+password+"' where UserName= '"+username+"';";
				 command->CommandText=query;
				 command->ExecuteNonQuery();
				 //command->Dispose();
				 connection->Close();
			 }
			 catch (Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Error while writing data (Password)");
			 }

			 MessageBox::Show("Updated Successfully","Change Password");
			 ProfileOldPasswordtextBox->Text="Old Password";
			 ProfileNewPasswordtextBox->Text="New Password";
			ProfileConfirmPasswordtextBox->Text="Confirm Password";
			 
		 }
private: System::Void ProfileSecuritySavebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^pass=ProfileOldPasswordSecuritytextBox->Text;
			 if(pass!=password)
			 {
				 MessageBox::Show("Current Password is incorrent","Change Security Answer");
				 return;
			 }
			 String ^ans=ProfileSecurityAnswertextBox->Text;
			 if(ans->Length==0)
			 {
				 MessageBox::Show("Answer field is empty","Change Security Answer");
				 return;
			 }
			 String ^ques=ProfileSecuritycomboBox->Text;
			 if(ques=="Security Question")
			 {

				 MessageBox::Show("Please select one security question","Change Security Answer");
				 return;
			 }
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Update Users Set [SecurityAnswer]= '"+ans+"', [SecurityQuestion]= '"+ques+"' where UserName= '"+username+"';";
				 command->CommandText=query;
				 command->ExecuteNonQuery();
				 //command->Dispose();
				 connection->Close();
			 }
			 catch (Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Error while writing data (Password)");
			 }

			 MessageBox::Show("Updated Successfully","Change Security Answer");
			ProfileOldPasswordSecuritytextBox->Text="Password";
			ProfileSecuritycomboBox->Text="Security Question";
			ProfileSecurityAnswertextBox->Text="Answer";

		 }
private: System::Void HeaderLogoutbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
			 //this->Show();
			 
			 

		 }
private: System::Void progressBar2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void HeaderClosebutton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 HeaderClosebutton->BackColor=Color::Red;
		 }
private: System::Void HeaderClosebutton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 HeaderClosebutton->BackColor=Color::White;
		 }
private: System::Void vartextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //MessageBox::Show("var textbox changed");
			 username=vartextBox->Text;
			 if(username=="guest")
			 {
				 //HeaderProfilebutton->Enabled=0;
				 HomepanelStatuslabel->Text="Logged in as a guest (Progress won't be saved)";
				 HomepanelStatuslabel->BackColor=Color::LightBlue;
				 HomepanelStatuslabel->ForeColor=Color::Blue;
				 return;
			 }
			 
			 String ^projdirectory= System::IO::Directory::GetCurrentDirectory();
			 try
			 {
				 connection->Open();
				 command=gcnew OleDbCommand;
				 command->Connection=connection;

				 query="Select FirstName From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 first_name=command->ExecuteScalar()->ToString();

				 query="Select LastName From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 last_name=command->ExecuteScalar()->ToString();

				 query="Select UserId From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 userid=(command->ExecuteScalar()->ToString());


				 query="Select Password From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 password=command->ExecuteScalar()->ToString();

				 query="Select Email From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 email=command->ExecuteScalar()->ToString();

				 query="Select Contact From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 contact=command->ExecuteScalar()->ToString();



				 query="Select IsApproved From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 isapproved=command->ExecuteScalar()->ToString();

				 query="Select Designation From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 designation=command->ExecuteScalar()->ToString();

				 query="Select ArraysProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 array_progress=command->ExecuteScalar()->ToString();

				 query="Select LinkedListProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 ll_progress=command->ExecuteScalar()->ToString();

				 query="Select SearchingProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 searching_progress=command->ExecuteScalar()->ToString();

				 query="Select SortingProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 sorting_progress=command->ExecuteScalar()->ToString();

				 query="Select StacksProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 stack_progress=command->ExecuteScalar()->ToString();

				 query="Select QueuesProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 queue_progress=command->ExecuteScalar()->ToString();


				 connection->Close();
			 }
			 catch (Exception ^ex)
			 {	
				 MessageBox::Show(ex->Message,"Error while reading data on LOAD");
			 }

			 //status
			 //MessageBox::Show(isapproved);
			 if(designation=="prof")
			 {
				 if(isapproved=="False")
				 {
					 HomepanelStatuslabel->Text="Designation as 'Professor' not verified by admin (Limited Capabilities)";
					 HomepanelStatuslabel->BackColor=Color::LightPink;
					 HomepanelStatuslabel->ForeColor=Color::Red;
				 }
				 else
				 {
					 HomepanelStatuslabel->Text="Logged in as 'Professor'";
					 HomepanelStatuslabel->BackColor=Color::LightGreen;
					 HomepanelStatuslabel->ForeColor=Color::Green;
				 }
			 }
			 if(designation=="stud")
			 {
				 HomepanelStatuslabel->Text="Logged in as 'Student'";
				 HomepanelStatuslabel->BackColor=Color::LightGreen;
				 HomepanelStatuslabel->ForeColor=Color::Green;
			 }



			 //progress bars
			 ArrayprogressBar->Value=Convert::ToInt32(array_progress);
			 llprogressBar->Value=Convert::ToInt32(ll_progress);
			 searchingprogressBar->Value=Convert::ToInt32(searching_progress);
			 sortingprogressBar->Value=Convert::ToInt32(sorting_progress);
			 stackprogressBar->Value=Convert::ToInt32(stack_progress);
			 queueprogressBar->Value=Convert::ToInt32(queue_progress);

			 

			 //Checking and setting profile picture if it exists

			 String ^destinationpath=projdirectory+"\\..\\profilepic\\"+username+".jpg";
			 
			 if(IO::File::Exists(destinationpath))
			 {
				 System::IO::FileStream ^fs;
				 fs=gcnew System::IO::FileStream(destinationpath, IO::FileMode::Open, IO::FileAccess::Read);
				 ProfilepictureBox->Image=System::Drawing::Image::FromStream(fs);
				 ProfilepictureBox->SizeMode=PictureBoxSizeMode::StretchImage;
				 fs->Close();

			 }

			 

			 //Reading security questions
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query = "Select * From SQuestions; ";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				 while(reader->Read())
				 {
					 String ^ques=reader->GetString(1);
					 ProfileSecuritycomboBox->Items->Add(ques);

				 }
				 //command->Dispose();
				 connection->Close();
			 }
			 catch (Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Error while reading data (Security Questions)");
			 }

		 }
};
}
