#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace AandLink {

	/// <summary>
	/// Summary for Array_Traversal
	/// </summary>
	public ref class Array_Traversal : public System::Windows::Forms::UserControl
	{
	public:
		Array_Traversal(void)
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
		~Array_Traversal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  trav_lab_ar;
	protected: 
	private: System::Windows::Forms::Panel^  panelForTraversal;
	private: System::Windows::Forms::Label^  Llabel;
	private: System::Windows::Forms::Button^  btnPlay;
	private: System::Windows::Forms::Button^  btnPause;
	private: System::Windows::Forms::Label^  lbel7;
	private: System::Windows::Forms::Label^  lbel6;
	private: System::Windows::Forms::Button^  btnStart;
	private: System::Windows::Forms::Label^  lbel5;
	private: System::Windows::Forms::Label^  lbel4;
	private: System::Windows::Forms::Label^  lbel3;
	private: System::Windows::Forms::Label^  lbel2;
	private: System::Windows::Forms::Label^  lbel1;
	private: System::Windows::Forms::Label^  LB5;
	private: System::Windows::Forms::Label^  LB3;
	private: System::Windows::Forms::Label^  LB7;
	private: System::Windows::Forms::Label^  LB6;
	private: System::Windows::Forms::Label^  LB4;
	private: System::Windows::Forms::Label^  LB2;
	private: System::Windows::Forms::Label^  LB1;
	private: System::Windows::Forms::Timer^  timerTraversal;

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
			this->trav_lab_ar = (gcnew System::Windows::Forms::Label());
			this->panelForTraversal = (gcnew System::Windows::Forms::Panel());
			this->Llabel = (gcnew System::Windows::Forms::Label());
			this->btnPlay = (gcnew System::Windows::Forms::Button());
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->lbel7 = (gcnew System::Windows::Forms::Label());
			this->lbel6 = (gcnew System::Windows::Forms::Label());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->lbel5 = (gcnew System::Windows::Forms::Label());
			this->lbel4 = (gcnew System::Windows::Forms::Label());
			this->lbel3 = (gcnew System::Windows::Forms::Label());
			this->lbel2 = (gcnew System::Windows::Forms::Label());
			this->lbel1 = (gcnew System::Windows::Forms::Label());
			this->LB5 = (gcnew System::Windows::Forms::Label());
			this->LB3 = (gcnew System::Windows::Forms::Label());
			this->LB7 = (gcnew System::Windows::Forms::Label());
			this->LB6 = (gcnew System::Windows::Forms::Label());
			this->LB4 = (gcnew System::Windows::Forms::Label());
			this->LB2 = (gcnew System::Windows::Forms::Label());
			this->LB1 = (gcnew System::Windows::Forms::Label());
			this->timerTraversal = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelForTraversal->SuspendLayout();
			this->SuspendLayout();
			// 
			// trav_lab_ar
			// 
			this->trav_lab_ar->AutoSize = true;
			this->trav_lab_ar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->trav_lab_ar->Location = System::Drawing::Point(14, 10);
			this->trav_lab_ar->Name = L"trav_lab_ar";
			this->trav_lab_ar->Size = System::Drawing::Size(115, 28);
			this->trav_lab_ar->TabIndex = 7;
			this->trav_lab_ar->Text = L"Traversal";
			// 
			// panelForTraversal
			// 
			this->panelForTraversal->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panelForTraversal->Controls->Add(this->Llabel);
			this->panelForTraversal->Controls->Add(this->btnPlay);
			this->panelForTraversal->Controls->Add(this->btnPause);
			this->panelForTraversal->Controls->Add(this->lbel7);
			this->panelForTraversal->Controls->Add(this->lbel6);
			this->panelForTraversal->Controls->Add(this->btnStart);
			this->panelForTraversal->Controls->Add(this->lbel5);
			this->panelForTraversal->Controls->Add(this->lbel4);
			this->panelForTraversal->Controls->Add(this->lbel3);
			this->panelForTraversal->Controls->Add(this->lbel2);
			this->panelForTraversal->Controls->Add(this->lbel1);
			this->panelForTraversal->Controls->Add(this->LB5);
			this->panelForTraversal->Controls->Add(this->LB3);
			this->panelForTraversal->Controls->Add(this->LB7);
			this->panelForTraversal->Controls->Add(this->LB6);
			this->panelForTraversal->Controls->Add(this->LB4);
			this->panelForTraversal->Controls->Add(this->LB2);
			this->panelForTraversal->Controls->Add(this->LB1);
			this->panelForTraversal->Location = System::Drawing::Point(28, 276);
			this->panelForTraversal->Name = L"panelForTraversal";
			this->panelForTraversal->Size = System::Drawing::Size(1002, 307);
			this->panelForTraversal->TabIndex = 8;
			// 
			// Llabel
			// 
			this->Llabel->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->Llabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Llabel->Location = System::Drawing::Point(11, 53);
			this->Llabel->Name = L"Llabel";
			this->Llabel->Size = System::Drawing::Size(100, 50);
			this->Llabel->TabIndex = 15;
			this->Llabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnPlay
			// 
			this->btnPlay->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPlay->Location = System::Drawing::Point(877, 11);
			this->btnPlay->Name = L"btnPlay";
			this->btnPlay->Size = System::Drawing::Size(103, 31);
			this->btnPlay->TabIndex = 4;
			this->btnPlay->Text = L"Play";
			this->btnPlay->UseVisualStyleBackColor = true;
			this->btnPlay->Click += gcnew System::EventHandler(this, &Array_Traversal::btnPlay_Click);
			// 
			// btnPause
			// 
			this->btnPause->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPause->Location = System::Drawing::Point(771, 11);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(100, 31);
			this->btnPause->TabIndex = 5;
			this->btnPause->Text = L"Pause";
			this->btnPause->UseVisualStyleBackColor = true;
			this->btnPause->Click += gcnew System::EventHandler(this, &Array_Traversal::btnPause_Click);
			// 
			// lbel7
			// 
			this->lbel7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbel7->Location = System::Drawing::Point(805, 226);
			this->lbel7->Name = L"lbel7";
			this->lbel7->Size = System::Drawing::Size(100, 50);
			this->lbel7->TabIndex = 14;
			this->lbel7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbel6
			// 
			this->lbel6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbel6->Location = System::Drawing::Point(685, 226);
			this->lbel6->Name = L"lbel6";
			this->lbel6->Size = System::Drawing::Size(100, 50);
			this->lbel6->TabIndex = 13;
			this->lbel6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnStart
			// 
			this->btnStart->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnStart->Location = System::Drawing::Point(665, 11);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(100, 31);
			this->btnStart->TabIndex = 3;
			this->btnStart->Text = L"Start";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &Array_Traversal::btnStart_Click);
			// 
			// lbel5
			// 
			this->lbel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbel5->Location = System::Drawing::Point(565, 226);
			this->lbel5->Name = L"lbel5";
			this->lbel5->Size = System::Drawing::Size(100, 50);
			this->lbel5->TabIndex = 12;
			this->lbel5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbel4
			// 
			this->lbel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbel4->Location = System::Drawing::Point(445, 226);
			this->lbel4->Name = L"lbel4";
			this->lbel4->Size = System::Drawing::Size(100, 50);
			this->lbel4->TabIndex = 11;
			this->lbel4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbel3
			// 
			this->lbel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbel3->Location = System::Drawing::Point(325, 226);
			this->lbel3->Name = L"lbel3";
			this->lbel3->Size = System::Drawing::Size(100, 50);
			this->lbel3->TabIndex = 10;
			this->lbel3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbel2
			// 
			this->lbel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbel2->Location = System::Drawing::Point(205, 226);
			this->lbel2->Name = L"lbel2";
			this->lbel2->Size = System::Drawing::Size(100, 50);
			this->lbel2->TabIndex = 9;
			this->lbel2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbel1
			// 
			this->lbel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbel1->Location = System::Drawing::Point(85, 226);
			this->lbel1->Name = L"lbel1";
			this->lbel1->Size = System::Drawing::Size(100, 50);
			this->lbel1->TabIndex = 8;
			this->lbel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB5
			// 
			this->LB5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LB5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LB5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LB5->Location = System::Drawing::Point(565, 113);
			this->LB5->Name = L"LB5";
			this->LB5->Size = System::Drawing::Size(100, 100);
			this->LB5->TabIndex = 6;
			this->LB5->Text = L"45";
			this->LB5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB3
			// 
			this->LB3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LB3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LB3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LB3->Location = System::Drawing::Point(325, 113);
			this->LB3->Name = L"LB3";
			this->LB3->Size = System::Drawing::Size(100, 100);
			this->LB3->TabIndex = 5;
			this->LB3->Text = L"897";
			this->LB3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB7
			// 
			this->LB7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LB7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LB7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LB7->Location = System::Drawing::Point(805, 113);
			this->LB7->Name = L"LB7";
			this->LB7->Size = System::Drawing::Size(100, 100);
			this->LB7->TabIndex = 4;
			this->LB7->Text = L"245";
			this->LB7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB6
			// 
			this->LB6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LB6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LB6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LB6->Location = System::Drawing::Point(685, 113);
			this->LB6->Name = L"LB6";
			this->LB6->Size = System::Drawing::Size(100, 100);
			this->LB6->TabIndex = 3;
			this->LB6->Text = L"64";
			this->LB6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB4
			// 
			this->LB4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LB4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LB4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LB4->Location = System::Drawing::Point(445, 113);
			this->LB4->Name = L"LB4";
			this->LB4->Size = System::Drawing::Size(100, 100);
			this->LB4->TabIndex = 2;
			this->LB4->Text = L"23";
			this->LB4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB2
			// 
			this->LB2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LB2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LB2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LB2->Location = System::Drawing::Point(205, 113);
			this->LB2->Name = L"LB2";
			this->LB2->Size = System::Drawing::Size(100, 100);
			this->LB2->TabIndex = 1;
			this->LB2->Text = L"244";
			this->LB2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB1
			// 
			this->LB1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LB1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LB1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LB1->Location = System::Drawing::Point(85, 113);
			this->LB1->Name = L"LB1";
			this->LB1->Size = System::Drawing::Size(100, 100);
			this->LB1->TabIndex = 0;
			this->LB1->Text = L"10";
			this->LB1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timerTraversal
			// 
			this->timerTraversal->Interval = 1;
			this->timerTraversal->Tick += gcnew System::EventHandler(this, &Array_Traversal::timerTraversal_Tick);
			// 
			// Array_Traversal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panelForTraversal);
			this->Controls->Add(this->trav_lab_ar);
			this->Name = L"Array_Traversal";
			this->Size = System::Drawing::Size(1059, 610);
			this->panelForTraversal->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void timerTraversal_Tick(System::Object^  sender, System::EventArgs^  e) {

			 int var = this->Llabel->Location.X;
			 if(var<=this->LB7->Location.X + 73){
				 if(var==this->LB1->Location.X )
				 {
					this->LB1->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->LB1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbel1->Text = this->LB1->Text;
				 }
				else if(var==this->LB2->Location.X )
				{
					this->LB2->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->LB2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbel2->Text = this->LB2->Text;
				}
				else if(var==this->LB3->Location.X )
				{
					this->LB3->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->LB3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbel3->Text = this->LB3->Text;
				}
				else if(var==this->LB4->Location.X )
				{
					this->LB4->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->LB4->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbel4->Text = this->LB4->Text;
				}
				else if(var==this->LB5->Location.X )
				{
					this->LB5->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->LB5->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbel5->Text = this->LB5->Text;
				}
				else if(var==this->LB6->Location.X)
				{
					this->LB6->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->LB6->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbel6->Text = this->LB6->Text;
				}
				else if(var==this->LB7->Location.X)
				{

					this->LB7->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->LB7->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbel7->Text = this->LB7->Text;
				}
				/*else{
					this->Llabel->Location = System::Drawing::Point(this->Llabel->Location.X + 1 , this->Llabel->Location.Y);
					MessageBox::Show("T");
				}*/
				this->Llabel->Location = System::Drawing::Point(this->Llabel->Location.X + 1 , this->Llabel->Location.Y);
			}
			else
			{
				timerTraversal->Enabled = false;
				MessageBox::Show("Traversal Done");
				this->lbel1->Text = "";
				this->lbel2->Text = "";
				this->lbel3->Text = "";
				this->lbel4->Text = "";
				this->lbel5->Text = "";
				this->lbel6->Text = "";
				this->lbel7->Text = "";
				this->Llabel->Location = System::Drawing::Point( 9, this->Llabel->Location.Y);
			}
			
		 
		 }
private: System::Void btnStart_Click(System::Object^  sender, System::EventArgs^  e) {
			 timerTraversal->Enabled = true;
		 }
private: System::Void btnPlay_Click(System::Object^  sender, System::EventArgs^  e) {
			 timerTraversal->Enabled = true;
}
private: System::Void btnPause_Click(System::Object^  sender, System::EventArgs^  e) {
			 timerTraversal->Enabled = false;
		 }

};
}
