#pragma once

using namespace System;
using namespace System::Diagnostics;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for LinearSearch
	/// </summary>
	public ref class LinearSearch : public System::Windows::Forms::UserControl
	{
	public:
		LinearSearch(void)
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
		~LinearSearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  AnimationPanel;
	private: System::Windows::Forms::TextBox^  txtInput;
	private: System::Windows::Forms::Button^  btnEnterInput;
	private: System::Windows::Forms::Label^  lblErrorMessage;
	private: System::Windows::Forms::Button^  btnAnimate;
	private: System::Windows::Forms::TextBox^  txtSearch;

	private: System::Windows::Forms::Button^  btnSearch;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  btnPause;
	private: System::Windows::Forms::Button^  btnReset;
	private: System::ComponentModel::IContainer^  components;
	protected: 

	protected: 

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AnimationPanel = (gcnew System::Windows::Forms::Panel());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->btnEnterInput = (gcnew System::Windows::Forms::Button());
			this->lblErrorMessage = (gcnew System::Windows::Forms::Label());
			this->btnAnimate = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LemonChiffon;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(408, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Linear Search";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AnimationPanel
			// 
			this->AnimationPanel->BackColor = System::Drawing::Color::White;
			this->AnimationPanel->Location = System::Drawing::Point(25, 157);
			this->AnimationPanel->Name = L"AnimationPanel";
			this->AnimationPanel->Size = System::Drawing::Size(1038, 200);
			this->AnimationPanel->TabIndex = 1;
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(356, 417);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(100, 20);
			this->txtInput->TabIndex = 2;
			// 
			// btnEnterInput
			// 
			this->btnEnterInput->Location = System::Drawing::Point(501, 415);
			this->btnEnterInput->Name = L"btnEnterInput";
			this->btnEnterInput->Size = System::Drawing::Size(75, 23);
			this->btnEnterInput->TabIndex = 3;
			this->btnEnterInput->Text = L"Enter Input";
			this->btnEnterInput->UseVisualStyleBackColor = true;
			this->btnEnterInput->Click += gcnew System::EventHandler(this, &LinearSearch::btnEnterInput_Click);
			// 
			// lblErrorMessage
			// 
			this->lblErrorMessage->AutoSize = true;
			this->lblErrorMessage->Location = System::Drawing::Point(644, 415);
			this->lblErrorMessage->Name = L"lblErrorMessage";
			this->lblErrorMessage->Size = System::Drawing::Size(35, 13);
			this->lblErrorMessage->TabIndex = 4;
			this->lblErrorMessage->Text = L"label2";
			// 
			// btnAnimate
			// 
			this->btnAnimate->Location = System::Drawing::Point(237, 417);
			this->btnAnimate->Name = L"btnAnimate";
			this->btnAnimate->Size = System::Drawing::Size(75, 23);
			this->btnAnimate->TabIndex = 5;
			this->btnAnimate->Text = L"Animate";
			this->btnAnimate->UseVisualStyleBackColor = true;
			this->btnAnimate->Click += gcnew System::EventHandler(this, &LinearSearch::btnAnimate_Click);
			// 
			// txtSearch
			// 
			this->txtSearch->Location = System::Drawing::Point(365, 476);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(100, 20);
			this->txtSearch->TabIndex = 6;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(497, 481);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(142, 23);
			this->btnSearch->TabIndex = 7;
			this->btnSearch->Text = L"Enter input to search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &LinearSearch::btnSearch_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &LinearSearch::timer1_Tick);
			// 
			// btnPause
			// 
			this->btnPause->Location = System::Drawing::Point(822, 435);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(75, 23);
			this->btnPause->TabIndex = 8;
			this->btnPause->Text = L"Pause";
			this->btnPause->UseVisualStyleBackColor = true;
			this->btnPause->Click += gcnew System::EventHandler(this, &LinearSearch::btnPause_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(843, 394);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(75, 23);
			this->btnReset->TabIndex = 9;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &LinearSearch::btnReset_Click);
			// 
			// LinearSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnPause);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->btnAnimate);
			this->Controls->Add(this->lblErrorMessage);
			this->Controls->Add(this->btnEnterInput);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->AnimationPanel);
			this->Controls->Add(this->label1);
			this->Name = L"LinearSearch";
			this->Size = System::Drawing::Size(1088, 631);
			this->Load += gcnew System::EventHandler(this, &LinearSearch::LinearSearch_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: int numInputs;
			int maxInputs;
			int maxLength;
			int startX;
			int startY;
			int boxWidth;
			int boxHeight;
			System::Collections::Generic::List<int> input;
			int searchInput;
			System::Collections::Generic::List<Label ^> labelList;
			int id;
			PictureBox ^arrow;
			int arrowHeight;

			bool inputValidate(System::String ^input){

				 if(numInputs == maxInputs){
					lblErrorMessage->Text = "You can enter maximum of " + maxInputs + " inputs.";
					return false;
				 }

				 if(input == ""){
					 lblErrorMessage->Text = "Enter an input value first.";
					 return false;
				 }
				 else if(input->Length > maxLength){
					 lblErrorMessage->Text = "Limit exceeded. Please enter a smaller number";
					 return false;
				 }

				 for(int i = 0; i < input->Length; i++){
					 if(input[i] < '0' || input[i] > '9'){
						 lblErrorMessage->Text = "Invalid input. Please enter an integer.";
						 return false;
					 }
				 }

				 return true;
			}

	private: System::Void btnEnterInput_Click(System::Object^  sender, System::EventArgs^  e) {
				 // Data Validation
				 bool check = inputValidate(txtInput->Text);

				 if(check){
					 // Enter input into animation
					 numInputs++;
					 Label ^newLabel = gcnew Label();
					 newLabel->Location = Drawing::Point(startX+numInputs*boxWidth, startY);
					 newLabel->Size = Drawing::Size(boxWidth, boxHeight);
					 newLabel->Text = txtInput->Text;
					 newLabel->BackColor = Color::LightSkyBlue;
					 newLabel->BorderStyle = Windows::Forms::BorderStyle::FixedSingle;
					 newLabel->TextAlign = ContentAlignment::MiddleCenter;
					 newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
					 input.Add(int::Parse(txtInput->Text));
					 labelList.Add(newLabel);
					 AnimationPanel->Controls->Add(newLabel);

					 Label ^newLabel2 = gcnew Label();
					 newLabel2->Text = (numInputs-1).ToString();
					 newLabel2->Location = Drawing::Point(startX+numInputs*boxWidth, startY+boxHeight);
					 newLabel2->Size = Drawing::Size(boxWidth, boxHeight);
					 newLabel2->TextAlign = ContentAlignment::TopCenter;
					 newLabel2->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 AnimationPanel->Controls->Add(newLabel2);

					 txtInput->Text = "";
				 }
			 }

	private: System::Void LinearSearch_Load(System::Object^  sender, System::EventArgs^  e) {
				 numInputs = 0;
				 maxInputs = 15;
				 maxLength = 5;
				 boxHeight = 60;
				 boxWidth = 60;
				 startX = 0;
				 startY = (AnimationPanel->Size.Height)/2;
				 searchInput = -1;
				 id = -1;
				 arrowHeight = 75;
				 arrow = gcnew PictureBox();
				 
			 }

	private: System::Void btnSearch_Click(System::Object^  sender, System::EventArgs^  e) {
				 bool check = inputValidate(txtSearch->Text);

				 if(check){
					 Label ^newLabel = gcnew Label();
					 newLabel->Text = "Input to search: " + txtSearch->Text;
					 newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
					 newLabel->Size = Drawing::Size(175, 20);
					 newLabel->Location = Drawing::Point((AnimationPanel->Size.Width)-(newLabel->Size.Width), 0);
					 searchInput = int::Parse(txtSearch->Text);
					 AnimationPanel->Controls->Add(newLabel);
					 newLabel->BringToFront();

					 txtSearch->Text = "";
				 }
			 }

	private: System::Void btnAnimate_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(searchInput == -1){
					 lblErrorMessage->Text = "Enter input to search.";
					 return;
				 }

				 timer1->Enabled = true;
			 }

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(id == -1){
					 arrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrow.png";
					 Debug::WriteLine(IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrow.png");
					 arrow->SizeMode = PictureBoxSizeMode::StretchImage;
					 arrow->Size = Drawing::Size(boxWidth, arrowHeight);
					 arrow->Location = Drawing::Point(startX+(id+2)*boxWidth, startY-arrowHeight);
					 AnimationPanel->Controls->Add(arrow);
					 id++;
					 labelList[id]->BackColor = Color::LemonChiffon;
					 return;
				 }
				 else if(id >= numInputs){
					 Label ^newLabel = gcnew Label();
					 newLabel->Text = "Input not found!";
					 newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
					 newLabel->Size = Drawing::Size(175, 20);
					 newLabel->Location = Drawing::Point(0, 0);
					 AnimationPanel->Controls->Add(newLabel);
					 timer1->Enabled = false;
					 return;
				 }

				 if(input[id] == searchInput){
					 labelList[id]->BackColor = Color::PaleGreen;
					 Label ^newLabel = gcnew Label();
					 newLabel->Text = "Input found!";
					 newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
					 newLabel->Size = Drawing::Size(175, 20);
					 newLabel->Location = Drawing::Point(0, 0);
					 AnimationPanel->Controls->Add(newLabel);
					 timer1->Enabled = false;
				 }
				 else{
					 labelList[id]->BackColor = Color::LightCoral;
					 id++;
					 labelList[id]->BackColor = Color::LemonChiffon;
					 arrow->Location = Drawing::Point(startX+(id+1)*boxWidth, startY-arrowHeight);
				 }
			 }

	private: System::Void btnPause_Click(System::Object^  sender, System::EventArgs^  e) {
				 timer1->Enabled = false;
			 }

	private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
				 timer1->Enabled = false;
				 AnimationPanel->Controls->Clear();
				 numInputs = 0;
				 maxInputs = 15;
				 maxLength = 5;
				 boxHeight = 60;
				 boxWidth = 60;
				 startX = 0;
				 startY = (AnimationPanel->Size.Height)/2;
				 searchInput = -1;
				 id = -1;
				 arrowHeight = 75;
				 arrow = gcnew PictureBox();
				 input.Clear();
				 labelList.Clear();
			 }
};
}
