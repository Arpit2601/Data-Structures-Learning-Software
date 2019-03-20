#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;
using namespace System::Globalization;

namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for DiscussionForum
	/// </summary>
	public ref class DiscussionForum : public System::Windows::Forms::UserControl
	{
	public:
		DiscussionForum(void)
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
		~DiscussionForum()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  toppanel;
	protected: 
	private: System::Windows::Forms::CheckBox^  queuecheck;
	private: System::Windows::Forms::CheckBox^  stackcheck;
	private: System::Windows::Forms::CheckBox^  sortcheck;
	private: System::Windows::Forms::CheckBox^  searchcheck;
	private: System::Windows::Forms::CheckBox^  llcheck;
	private: System::Windows::Forms::CheckBox^  arraycheck;
	private: System::Windows::Forms::Panel^  msgpanel;
	private: System::Windows::Forms::Panel^  replypanel;
	private: System::Windows::Forms::ComboBox^  tagcombo;
	private: System::Windows::Forms::Button^  replybtn;
	private: System::Windows::Forms::RichTextBox^  replytxt;

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
			this->toppanel = (gcnew System::Windows::Forms::Panel());
			this->queuecheck = (gcnew System::Windows::Forms::CheckBox());
			this->stackcheck = (gcnew System::Windows::Forms::CheckBox());
			this->sortcheck = (gcnew System::Windows::Forms::CheckBox());
			this->searchcheck = (gcnew System::Windows::Forms::CheckBox());
			this->llcheck = (gcnew System::Windows::Forms::CheckBox());
			this->arraycheck = (gcnew System::Windows::Forms::CheckBox());
			this->msgpanel = (gcnew System::Windows::Forms::Panel());
			this->replypanel = (gcnew System::Windows::Forms::Panel());
			this->tagcombo = (gcnew System::Windows::Forms::ComboBox());
			this->replybtn = (gcnew System::Windows::Forms::Button());
			this->replytxt = (gcnew System::Windows::Forms::RichTextBox());
			this->toppanel->SuspendLayout();
			this->replypanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// toppanel
			// 
			this->toppanel->Controls->Add(this->queuecheck);
			this->toppanel->Controls->Add(this->stackcheck);
			this->toppanel->Controls->Add(this->sortcheck);
			this->toppanel->Controls->Add(this->searchcheck);
			this->toppanel->Controls->Add(this->llcheck);
			this->toppanel->Controls->Add(this->arraycheck);
			this->toppanel->Location = System::Drawing::Point(0, 0);
			this->toppanel->Name = L"toppanel";
			this->toppanel->Size = System::Drawing::Size(1104, 31);
			this->toppanel->TabIndex = 0;
			// 
			// queuecheck
			// 
			this->queuecheck->AutoSize = true;
			this->queuecheck->Location = System::Drawing::Point(762, 3);
			this->queuecheck->Name = L"queuecheck";
			this->queuecheck->Size = System::Drawing::Size(73, 21);
			this->queuecheck->TabIndex = 5;
			this->queuecheck->Text = L"Queue";
			this->queuecheck->UseVisualStyleBackColor = true;
			// 
			// stackcheck
			// 
			this->stackcheck->AutoSize = true;
			this->stackcheck->Location = System::Drawing::Point(632, 3);
			this->stackcheck->Name = L"stackcheck";
			this->stackcheck->Size = System::Drawing::Size(65, 21);
			this->stackcheck->TabIndex = 4;
			this->stackcheck->Text = L"Stack";
			this->stackcheck->UseVisualStyleBackColor = true;
			// 
			// sortcheck
			// 
			this->sortcheck->AutoSize = true;
			this->sortcheck->Location = System::Drawing::Point(486, 3);
			this->sortcheck->Name = L"sortcheck";
			this->sortcheck->Size = System::Drawing::Size(75, 21);
			this->sortcheck->TabIndex = 3;
			this->sortcheck->Text = L"Sorting";
			this->sortcheck->UseVisualStyleBackColor = true;
			// 
			// searchcheck
			// 
			this->searchcheck->AutoSize = true;
			this->searchcheck->Location = System::Drawing::Point(341, 3);
			this->searchcheck->Name = L"searchcheck";
			this->searchcheck->Size = System::Drawing::Size(94, 21);
			this->searchcheck->TabIndex = 2;
			this->searchcheck->Text = L"Searching";
			this->searchcheck->UseVisualStyleBackColor = true;
			// 
			// llcheck
			// 
			this->llcheck->AutoSize = true;
			this->llcheck->Location = System::Drawing::Point(206, 3);
			this->llcheck->Name = L"llcheck";
			this->llcheck->Size = System::Drawing::Size(98, 21);
			this->llcheck->TabIndex = 1;
			this->llcheck->Text = L"Linked List";
			this->llcheck->UseVisualStyleBackColor = true;
			// 
			// arraycheck
			// 
			this->arraycheck->AutoSize = true;
			this->arraycheck->Location = System::Drawing::Point(62, 3);
			this->arraycheck->Name = L"arraycheck";
			this->arraycheck->Size = System::Drawing::Size(64, 21);
			this->arraycheck->TabIndex = 0;
			this->arraycheck->Text = L"Array";
			this->arraycheck->UseVisualStyleBackColor = true;
			// 
			// msgpanel
			// 
			this->msgpanel->Location = System::Drawing::Point(0, 30);
			this->msgpanel->Name = L"msgpanel";
			this->msgpanel->Size = System::Drawing::Size(1104, 527);
			this->msgpanel->TabIndex = 1;
			this->msgpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &DiscussionForum::msgpanel_Paint);
			// 
			// replypanel
			// 
			this->replypanel->Controls->Add(this->tagcombo);
			this->replypanel->Controls->Add(this->replybtn);
			this->replypanel->Controls->Add(this->replytxt);
			this->replypanel->Location = System::Drawing::Point(0, 555);
			this->replypanel->Name = L"replypanel";
			this->replypanel->Size = System::Drawing::Size(1104, 110);
			this->replypanel->TabIndex = 1;
			// 
			// tagcombo
			// 
			this->tagcombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->tagcombo->FormattingEnabled = true;
			this->tagcombo->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Array", L"Linked List", L"Searching", L"Sorting", 
				L"Stack", L"Queue"});
			this->tagcombo->Location = System::Drawing::Point(882, 57);
			this->tagcombo->Name = L"tagcombo";
			this->tagcombo->Size = System::Drawing::Size(155, 24);
			this->tagcombo->TabIndex = 2;
			// 
			// replybtn
			// 
			this->replybtn->Location = System::Drawing::Point(882, 8);
			this->replybtn->Name = L"replybtn";
			this->replybtn->Size = System::Drawing::Size(155, 43);
			this->replybtn->TabIndex = 1;
			this->replybtn->Text = L"Post";
			this->replybtn->UseVisualStyleBackColor = true;
			this->replybtn->Click += gcnew System::EventHandler(this, &DiscussionForum::replybtn_Click);
			// 
			// replytxt
			// 
			this->replytxt->Location = System::Drawing::Point(26, 8);
			this->replytxt->Name = L"replytxt";
			this->replytxt->Size = System::Drawing::Size(831, 90);
			this->replytxt->TabIndex = 0;
			this->replytxt->Text = L"";
			// 
			// DiscussionForum
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->replypanel);
			this->Controls->Add(this->msgpanel);
			this->Controls->Add(this->toppanel);
			this->Name = L"DiscussionForum";
			this->Size = System::Drawing::Size(1104, 668);
			this->Load += gcnew System::EventHandler(this, &DiscussionForum::DiscussionForum_Load);
			this->toppanel->ResumeLayout(false);
			this->toppanel->PerformLayout();
			this->replypanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void DiscussionForum_Load(System::Object^  sender, System::EventArgs^  e) {
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\..\\Database.accdb";

				 DB_Connection->Open();

			 }
	private: System::Void msgpanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {


			 }
private: System::Void replybtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 /*OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\..\\Database.accdb";

			 DB_Connection->Open();*/

			 try{
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\..\\Database.accdb";

				 String ^ messagetext = replytxt->Text;
				 //DateTime ^ date = System::DateTime::Now;
				 String ^ tag = tagcombo->Text;
				 String ^ closed = "NO";
				 String ^ username = "SD";
				 String ^ designation = "as";
				 String ^ reportedabuse = "No";

				 /*Debug::WriteLine(firstname);
				 Debug::WriteLine("\n\n\n");
				 */

				 String ^ insertString = "insert into Messages([Message],[Date&Time],[FieldTag],[Closed],[Username],[Designation],[ReportedAbuse]) VALUES('" +messagetext+ "',@Password+"'" , '" +tag+ "', '" +closed+ "', '" +username+ "', '" +designation+ "', '" +reportedabuse+ "' );";
				 //String ^ insertString = "insert into User([Email],[Password],[Contact_Number],[Approved],[First_Name],[Last_Name],[Category]) values(@email,@password,@contact,@approved,@firstname,@lastname,@category);";
				 //String ^ insertString = "insert into [User] values('" +email+ "', '" +password+ "', '" +contact+ "', '" +approved+ "', '" +firstname+ "', '" +lastname+ "', '" +category+ "' );";


				 //OleDbDataReader ^ dr;
				 DB_Connection->Open();

				 OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
				 //dr = cmd->ExecuteReader();
				 //cmd->ExecuteNonQuery();
				 cmd->Parameters->Add(gcnew OleDbParameter("@Email",Convert::ToString(messagetext)));
				 cmd->Parameters->AddWithValue("@Password",DateTime::Now);
				cmd->Parameters->Add(gcnew OleDbParameter("@Contact_Number",Convert::ToString(tag)));
				 cmd->Parameters->Add(gcnew OleDbParameter("@Approved",Convert::ToString(closed)));
				 cmd->Parameters->Add(gcnew OleDbParameter("@First_Name",Convert::ToString(username)));
				 cmd->Parameters->Add(gcnew OleDbParameter("@Last_Name",Convert::ToString(designation)));
				 cmd->Parameters->Add(gcnew OleDbParameter("@Category",Convert::ToString(reportedabuse)));
				 
				 //cmd->Parameters->AddWithValue("@email",Register_Email->Text);
				 //cmd->Parameters->AddWithValue("@password",Register_Password->Text);
				 //cmd->Parameters->AddWithValue("@contact",Register_Contact->Text);
				 //cmd->Parameters->AddWithValue("@approved","NO");
				 //cmd->Parameters->AddWithValue("@firstname",Register_First_Name->Text);
				 //cmd->Parameters->AddWithValue("@lastname",Register_Last_Name->Text);
				 //cmd->Parameters->AddWithValue("@category",Register_Category->Text);

				 cmd->ExecuteNonQuery();
				 DB_Connection->Close();

			 }

			 catch(Exception ^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }


		 }
};
}
