#pragma once
#include<math.h>

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






	private: System::Windows::Forms::Panel^  msgpanel;
	private: System::Windows::Forms::Panel^  replypanel;
	private: System::Windows::Forms::ComboBox^  tagcombo;
	private: System::Windows::Forms::Button^  replybtn;
	private: System::Windows::Forms::RichTextBox^  replytxt;
	private: System::Windows::Forms::Panel^  message_detail;

	private: System::Windows::Forms::Button^  filterbtn;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;



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
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->filterbtn = (gcnew System::Windows::Forms::Button());
			this->msgpanel = (gcnew System::Windows::Forms::Panel());
			this->message_detail = (gcnew System::Windows::Forms::Panel());
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
			this->toppanel->Controls->Add(this->checkedListBox1);
			this->toppanel->Controls->Add(this->filterbtn);
			this->toppanel->Location = System::Drawing::Point(0, 0);
			this->toppanel->Name = L"toppanel";
			this->toppanel->Size = System::Drawing::Size(1104, 31);
			this->toppanel->TabIndex = 0;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Arrays", L"Linked List", L"Searching", 
				L"Sorting", L"Stack", L"Queue"});
			this->checkedListBox1->Location = System::Drawing::Point(26, 0);
			this->checkedListBox1->MaximumSize = System::Drawing::Size(933, 30);
			this->checkedListBox1->MinimumSize = System::Drawing::Size(933, 30);
			this->checkedListBox1->MultiColumn = true;
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(933, 21);
			this->checkedListBox1->TabIndex = 2;
			// 
			// filterbtn
			// 
			this->filterbtn->Location = System::Drawing::Point(987, 5);
			this->filterbtn->Name = L"filterbtn";
			this->filterbtn->Size = System::Drawing::Size(114, 23);
			this->filterbtn->TabIndex = 1;
			this->filterbtn->Text = L"Filter";
			this->filterbtn->UseVisualStyleBackColor = true;
			this->filterbtn->Click += gcnew System::EventHandler(this, &DiscussionForum::filterbtn_Click);
			// 
			// msgpanel
			// 
			this->msgpanel->AutoScroll = true;
			this->msgpanel->Location = System::Drawing::Point(0, 30);
			this->msgpanel->Name = L"msgpanel";
			this->msgpanel->Size = System::Drawing::Size(1104, 527);
			this->msgpanel->TabIndex = 1;
			// 
			// message_detail
			// 
			this->message_detail->AutoScroll = true;
			this->message_detail->BackColor = System::Drawing::SystemColors::Control;
			this->message_detail->Location = System::Drawing::Point(0, 30);
			this->message_detail->Name = L"message_detail";
			this->message_detail->Size = System::Drawing::Size(1104, 557);
			this->message_detail->TabIndex = 2;
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
			this->replybtn->Cursor = System::Windows::Forms::Cursors::Hand;
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
			this->replytxt->Cursor = System::Windows::Forms::Cursors::IBeam;
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
			this->Controls->Add(this->message_detail);
			this->Controls->Add(this->replypanel);
			this->Controls->Add(this->toppanel);
			this->Controls->Add(this->msgpanel);
			this->Name = L"DiscussionForum";
			this->Size = System::Drawing::Size(1104, 668);
			this->Load += gcnew System::EventHandler(this, &DiscussionForum::DiscussionForum_Load);
			this->toppanel->ResumeLayout(false);
			this->replypanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		public:
			int startx;
			int starty;
			int messagewidth;
			int widthheight;
			int usernamewidth;
			int datewidth;
			int tagwidth;
			int typewidth;
			int reportwidth;
			int messagebodywidth;
			String ^ reply_message;
			int message_id;
			// on load function
	private: System::Void DiscussionForum_Load(System::Object^  sender, System::EventArgs^  e) {
				 toppanel->Controls->Add(checkedListBox1);
				 checkedListBox1->CheckOnClick = true;
				 msgpanel->Controls->Clear();
				 reply_message="message";
				 msgpanel->Visible=true;
				 message_detail->Visible=false;
				 startx=10;
				 starty=msgpanel->Location.Y;
				 messagewidth=(msgpanel->Size.Width)*(0.45);
				 tagwidth=(msgpanel->Size.Width)*(0.1)-15;
				 usernamewidth=(msgpanel->Size.Width)*(0.15);
				 datewidth =(msgpanel->Size.Width)*(0.10);
				 typewidth = (msgpanel->Size.Width)*(0.1);
				 reportwidth = (msgpanel->Size.Width)*(0.1);  
				// to be done later select a field on load 
				 tagcombo->Text = "Array";
				 String ^ module_name = "Array";
				 try{
					 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\..\\Database.accdb";
					 DB_Connection->Open();
					 String ^ readString = "SELECT * FROM Messages WHERE FieldTag= '"+ module_name + "'  ORDER BY [Date&Time] DESC;";
					 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
					 OleDbDataReader ^ reader = cmd->ExecuteReader();
					 while(reader->Read())
					{
						RichTextBox ^ message_text = gcnew RichTextBox();
						Label ^ tag_text = gcnew Label();
						Label ^ username_text = gcnew Label();
						Label ^ date_text = gcnew Label();
						Label ^ type_text = gcnew Label();
						PictureBox ^ tag_pic = gcnew PictureBox();
						

						tag_pic->Size = Drawing::Size(15,15);
						tag_text->Size = Drawing::Size(tagwidth,15);
						username_text->Size = Drawing::Size(usernamewidth,15);
						date_text->Size = Drawing::Size(datewidth,15);
						type_text->Size = Drawing::Size(typewidth,15);
						

						username_text->Location = Drawing::Point(startx,starty-15);
						type_text->Location = Drawing::Point(startx+usernamewidth,starty-15);
						date_text->Location = Drawing::Point(startx+usernamewidth+typewidth,starty-15);
						tag_pic->Location = Drawing::Point(startx+usernamewidth+typewidth+datewidth,starty-15);
						tag_text->Location = Drawing::Point(startx+usernamewidth+typewidth+datewidth+15,starty-15);
						

						username_text->Text = "User: " + reader->GetString(5);
						type_text->Text = reader->GetString(6);
						date_text->Text = reader->GetDateTime(2).ToString();
						tag_text->Text = " " + reader->GetString(3);
						tag_pic->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\tag.png";
						tag_pic->SizeMode = PictureBoxSizeMode::StretchImage;
						


						msgpanel->Controls->Add(username_text);
						msgpanel->Controls->Add(type_text);
						msgpanel->Controls->Add(date_text);
						msgpanel->Controls->Add(tag_text);
						msgpanel->Controls->Add(tag_pic);
						



						message_text->Size = Drawing::Size(messagewidth,125);
						message_text->Location = Drawing::Point(startx,starty);
						message_text->Text = reader->GetString(1);
						message_text->Multiline = true;
						message_text->Tag = reader->GetValue(0);
						msgpanel->Controls->Add(message_text);
						message_text->ReadOnly = true;
						message_text->Click  += gcnew EventHandler(this, &DiscussionForum::message_text_click);
						message_text->Cursor= System::Windows::Forms::Cursors::Hand;
						startx+=(msgpanel->Size.Width)*(0.5);
						if(startx>2*messagewidth){startx=10;starty+=175;}

						
					}
				
				 }

				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				

			 }
		public: System::Void message_text_click(System::Object^  sender, System::EventArgs^  e) {
						
						RichTextBox	^ txt = gcnew RichTextBox;
						txt = static_cast<RichTextBox ^>(sender); 
						 message_id = static_cast<int>(txt->Tag);
						 refresh_messagebody(message_id);
						 
					}
				public: System::Void message_text_hover(System::Object^  sender, System::EventArgs^  e) {
							
							
							
						}
	
						// function for posting messages and replies
private: System::Void replybtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 // function for posting message and replies on clicking post button
			 if(reply_message=="message")
			 {
				 DialogResult result = MessageBox::Show("You sure want to post ?", "Post", 
					 MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);
				 if(result==DialogResult::Yes)
				 {

					 try{
						 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
						 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\..\\Database.accdb";

						 // username and designation and to be later on taken from main page
						 String ^ messagetext = replytxt->Text;
						 String ^  date = System::DateTime::Now.ToString();
						 String ^ tag = tagcombo->Text;
						 String ^ closed = "NO";
						 String ^ username = "SD";
						 String ^ designation = "as";
						 String ^ reportedabuse = "NO";



						 String ^ insertString = "insert into Messages([Message],[Date&Time],[FieldTag],[Closed],[Username],[Designation],[ReportedAbuse]) VALUES('" +messagetext+ "','" + date + "' , '" +tag+ "', '" +closed+ "', '" +username+ "', '" +designation+ "', '" +reportedabuse+ "' );";

						 DB_Connection->Open();

						 OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
						 cmd->ExecuteNonQuery();
						 DB_Connection->Close();
						 MessageBox::Show("Your message has been recorded.");
						 replytxt->Text = "";
					 }

					 catch(Exception ^ ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 DiscussionForum_Load(sender,e);
				 }
			 }
				 else if(reply_message=="reply")
				 {
					 
					 DialogResult result = MessageBox::Show("You sure want to reply ?", "Post", 
						 MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);
					 if(result==DialogResult::Yes)
					 {

						 try{
							 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
							 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\..\\Database.accdb";

							 // username and designation and to be later on taken from main page
							 String ^ replytext = replytxt->Text;
							 String ^  date = System::DateTime::Now.ToString();
							 int message_id_for_reply = message_id;
							
							 String ^ closed = "NO";
							 String ^ username = "SD";
							 String ^ designation = "as";
							 String ^ reportedabuse = "NO";



							 String ^ insertString = "insert into Replies([MessageID],[UserName],[Reply],[Date&Time],[Designation],[ReportedAbuse]) VALUES(" + message_id_for_reply + ",'" + username + "' , '" + replytext + "', '" + date + "', '" + designation + "', '" + reportedabuse + "' );";

							 DB_Connection->Open();

							 OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
							 cmd->ExecuteNonQuery();
							 DB_Connection->Close();
							 MessageBox::Show("Your reply has been recorded.");
							 replytxt->Text = "";
						 }

						 catch(Exception ^ ex)
						 {
							 MessageBox::Show(ex->Message);
						 }
						 refresh_messagebody(message_id);
					 }

				 }


			 }

		 // function for refreshing message detail page after clicking on post
public: Void refresh_messagebody(int message_id)
		{
			message_detail->Controls->Clear();
			reply_message="reply";
			msgpanel->Visible=false;
			message_detail->Visible=true;
			try{
				OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\..\\Database.accdb";
				DB_Connection->Open();
				String ^ readString = "SELECT * FROM Messages WHERE MessageID=" + message_id ;
				OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				OleDbDataReader ^ reader = cmd->ExecuteReader();
				reader->Read();

				tagcombo->Visible=false;

				messagebodywidth = message_detail->Size.Width;
				startx = message_detail->Location.X;
				starty = message_detail->Location.Y;
				String ^ messagebody= reader->GetString(1);

				Label ^ messagetext = gcnew Label();
				Label ^ usernametext = gcnew Label();
				Label ^ datetext = gcnew Label();
				Label ^ typetext = gcnew Label();
				Button ^ reportabuse = gcnew Button();
				Label ^ replylabel = gcnew Label();

				
				
				usernametext->Text = reader->GetString(5);
				datetext->Text = reader->GetDateTime(2).ToString();
				typetext->Text = reader->GetString(6);
				reportabuse->Text="Report Abuse";
				replylabel->Text = "Replies:";
				
				
				usernametext->Size = Drawing::Size(messagebodywidth*0.3,25);
				datetext->Size = Drawing::Size(messagebodywidth*0.1,25);
				typetext->Size =  Drawing::Size(messagebodywidth*0.2,25);
				reportabuse->Size =  Drawing::Size(messagebodywidth*0.3,25);
				messagetext->MaximumSize = Drawing::Size(messagebodywidth*0.9,0);
				messagetext->AutoSize=true;
				messagetext->Text = messagebody;
				messagetext->Size = Drawing::Size(messagetext->PreferredWidth,messagetext->PreferredHeight);
				replylabel->Size = Drawing::Size(80,40);

				messagetext->Location = Drawing::Point(startx,starty+25);
				usernametext->Location = Drawing::Point(startx,starty);
				datetext->Location = Drawing::Point(startx+messagebodywidth*0.3,starty);
				typetext->Location = Drawing::Point(startx+messagebodywidth*0.4,starty);
				reportabuse->Location = Drawing::Point(startx+messagebodywidth*0.6,starty);
				replylabel->Location = Drawing::Point(startx,starty+messagetext->Height+60);
				
				replylabel->Font = gcnew System::Drawing::Font("Times New Roman", 15,FontStyle::Bold);

				reportabuse->Cursor= System::Windows::Forms::Cursors::Hand;
				reportabuse->Tag = "M" + reader->GetValue(0);
				reportabuse->Click  += gcnew EventHandler(this, &DiscussionForum::reportabuse_Click);

				message_detail->Controls->Add(messagetext);
				message_detail->Controls->Add(usernametext);
				message_detail->Controls->Add(datetext);
				message_detail->Controls->Add(typetext);
				message_detail->Controls->Add(reportabuse);
				message_detail->Controls->Add(replylabel);

				// showing all the replies
				String ^ readStringreply = "SELECT * FROM Replies WHERE MessageID=" + message_id ;
				cmd = gcnew OleDbCommand(readStringreply, DB_Connection);
				OleDbDataReader ^ readerreply = cmd->ExecuteReader();
				int replystartx=startx;
				int replystarty=starty+messagetext->Height+60+50;
				int replybodywidth=messagebodywidth*0.7;
				while (readerreply->Read())
				{
					Label ^ reply = gcnew Label();
					Label ^ usernametext = gcnew Label();
					Label ^ datetext = gcnew Label();
					Label ^ typetext = gcnew Label();
					Button ^ reportabuse = gcnew Button();

					usernametext->Text = readerreply->GetString(2);
					datetext->Text = readerreply->GetDateTime(4).ToString();
					typetext->Text = readerreply->GetString(5);
					reportabuse->Text="Report Abuse";
					
					usernametext->Size = Drawing::Size(replybodywidth*0.3,25);
					datetext->Size = Drawing::Size(replybodywidth*0.1,25);
					typetext->Size =  Drawing::Size(replybodywidth*0.2,25);
					reportabuse->Size =  Drawing::Size(replybodywidth*0.3,25);
					reply->MaximumSize = Drawing::Size(replybodywidth*0.9,0);
					reply->AutoSize=true;
					reply->Text = readerreply->GetString(3);
					reply->Size = Drawing::Size(reply->PreferredWidth,reply->PreferredHeight);
					
					reply->Location = Drawing::Point(replystartx,replystarty+25);
					usernametext->Location = Drawing::Point(replystartx,replystarty);
					datetext->Location = Drawing::Point(replystartx+replybodywidth*0.3,replystarty);
					typetext->Location = Drawing::Point(replystartx+replybodywidth*0.4,replystarty);
					reportabuse->Location = Drawing::Point(replystartx+replybodywidth*0.6,replystarty);
					
					reportabuse->Click  += gcnew EventHandler(this, &DiscussionForum::reportabuse_Click);
					reportabuse->Tag = "R" + readerreply->GetValue(0);
					reportabuse->Cursor= System::Windows::Forms::Cursors::Hand;

					message_detail->Controls->Add(reply);
					message_detail->Controls->Add(usernametext);
					message_detail->Controls->Add(datetext);
					message_detail->Controls->Add(typetext);
					message_detail->Controls->Add(reportabuse);
					replystarty += reply->Height + 40;
	
				}

			}
			catch(Exception ^ ex)
			{
				MessageBox::Show(ex->Message);
			}
			
		}
		
public: System::Void reportabuse_Click(System::Object^  sender, System::EventArgs^  e) {
			Button	^ reportbtn = gcnew Button;
			reportbtn = static_cast<Button ^>(sender); 
			String ^ reply_message_id = static_cast<String ^>(reportbtn->Tag);
			if(reply_message_id[0]=='M')
			{
				
				reply_message_id = reply_message_id->Remove(0,1);
				OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\..\\Database.accdb";
				DB_Connection->Open();
				String ^ readString = "SELECT * FROM Messages WHERE MessageID=" + reply_message_id ;
				OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				OleDbDataReader ^ reader = cmd->ExecuteReader();
				reader->Read();
				DialogResult result = MessageBox::Show("You sure want report abuse ?", "Post", 
					MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if(result==DialogResult::Yes)
				{
					try
					{
						readString = "update Messages set ReportedAbuse= '" + "YES" + "' where MessageID=" + reply_message_id  ; 
						cmd = gcnew OleDbCommand(readString, DB_Connection);
						cmd->ExecuteNonQuery();
						MessageBox::Show("Reported Abuse");
					}
					catch(Exception ^ ex)
					{
						MessageBox::Show(ex->Message);
					}
					 
				}
				
			}

			else if(reply_message_id[0]=='R')
			{
				
				reply_message_id = reply_message_id->Remove(0,1);
				OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\..\\Database.accdb";
				DB_Connection->Open();
				String ^ readString = "SELECT * FROM Replies WHERE ReplyID=" + reply_message_id ;
				OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				OleDbDataReader ^ reader = cmd->ExecuteReader();
				reader->Read();
				DialogResult result = MessageBox::Show("You sure want report abuse ?", "Post", 
					MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if(result==DialogResult::Yes)
				{
					try
					{
						readString = "update Replies set ReportedAbuse= '" + "YES" + "' where ReplyID=" + reply_message_id  ; 
						cmd = gcnew OleDbCommand(readString, DB_Connection);
						cmd->ExecuteNonQuery();
						MessageBox::Show("Reported Abuse");
					}
					catch(Exception ^ ex)
					{
						MessageBox::Show(ex->Message);
					}

				}

			}
			
		}

		 
private: System::Void filterbtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i=0;
			 for (i=0;i<checkedListBox1->CheckedItems->Count;i++)
			 {
				 checkedListBox1->CheckedItems[i]->ToString();
			 }
		 }
};
}
