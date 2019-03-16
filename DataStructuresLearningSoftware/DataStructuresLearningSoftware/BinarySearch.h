#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Diagnostics;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for BinarySearch
	/// </summary>
	public ref class BinarySearch : public System::Windows::Forms::UserControl
	{
	public:
		BinarySearch(void)
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
		~BinarySearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  AnimationPanel;
	protected: 

	private: System::Windows::Forms::Button^  btnAnimate;
	private: System::Windows::Forms::TextBox^  txtInput;
	private: System::Windows::Forms::Button^  btnEnterInput;
	private: System::Windows::Forms::TextBox^  txtSearch;
	private: System::Windows::Forms::Button^  btnSearch;
	private: System::Windows::Forms::Label^  lblErrorMessage;
	private: System::Windows::Forms::Button^  btnReset;
	private: System::Windows::Forms::Button^  btnPause;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;


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
			this->AnimationPanel = (gcnew System::Windows::Forms::Panel());
			this->btnAnimate = (gcnew System::Windows::Forms::Button());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->btnEnterInput = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->lblErrorMessage = (gcnew System::Windows::Forms::Label());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// AnimationPanel
			// 
			this->AnimationPanel->BackColor = System::Drawing::Color::White;
			this->AnimationPanel->Location = System::Drawing::Point(25, 157);
			this->AnimationPanel->Name = L"AnimationPanel";
			this->AnimationPanel->Size = System::Drawing::Size(1038, 200);
			this->AnimationPanel->TabIndex = 0;
			// 
			// btnAnimate
			// 
			this->btnAnimate->Location = System::Drawing::Point(106, 409);
			this->btnAnimate->Name = L"btnAnimate";
			this->btnAnimate->Size = System::Drawing::Size(75, 23);
			this->btnAnimate->TabIndex = 1;
			this->btnAnimate->Text = L"Animate";
			this->btnAnimate->UseVisualStyleBackColor = true;
			this->btnAnimate->Click += gcnew System::EventHandler(this, &BinarySearch::btnAnimate_Click_1);
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(265, 396);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(100, 20);
			this->txtInput->TabIndex = 2;
			// 
			// btnEnterInput
			// 
			this->btnEnterInput->ForeColor = System::Drawing::Color::Black;
			this->btnEnterInput->Location = System::Drawing::Point(391, 401);
			this->btnEnterInput->Name = L"btnEnterInput";
			this->btnEnterInput->Size = System::Drawing::Size(75, 23);
			this->btnEnterInput->TabIndex = 3;
			this->btnEnterInput->Text = L"Enter input";
			this->btnEnterInput->UseVisualStyleBackColor = true;
			this->btnEnterInput->Click += gcnew System::EventHandler(this, &BinarySearch::btnEnterInput_Click_1);
			// 
			// txtSearch
			// 
			this->txtSearch->Location = System::Drawing::Point(272, 469);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(100, 20);
			this->txtSearch->TabIndex = 4;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(400, 467);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(131, 23);
			this->btnSearch->TabIndex = 5;
			this->btnSearch->Text = L"Enter input to search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &BinarySearch::btnSearch_Click_1);
			// 
			// lblErrorMessage
			// 
			this->lblErrorMessage->AutoSize = true;
			this->lblErrorMessage->ForeColor = System::Drawing::Color::DarkGreen;
			this->lblErrorMessage->Location = System::Drawing::Point(595, 396);
			this->lblErrorMessage->Name = L"lblErrorMessage";
			this->lblErrorMessage->Size = System::Drawing::Size(35, 13);
			this->lblErrorMessage->TabIndex = 6;
			this->lblErrorMessage->Text = L"label1";
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(662, 406);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(75, 23);
			this->btnReset->TabIndex = 7;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &BinarySearch::btnReset_Click_1);
			// 
			// btnPause
			// 
			this->btnPause->Location = System::Drawing::Point(680, 464);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(75, 23);
			this->btnPause->TabIndex = 8;
			this->btnPause->Text = L"Pause";
			this->btnPause->UseVisualStyleBackColor = true;
			this->btnPause->Click += gcnew System::EventHandler(this, &BinarySearch::btnPause_Click_1);
			// 
			// timer1
			// 
			this->timer1->Interval = 1500;
			this->timer1->Tick += gcnew System::EventHandler(this, &BinarySearch::timer1_Tick_1);
			// 
			// BinarySearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->lblErrorMessage);
			this->Controls->Add(this->btnPause);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->btnEnterInput);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->btnAnimate);
			this->Controls->Add(this->AnimationPanel);
			this->Name = L"BinarySearch";
			this->Size = System::Drawing::Size(1088, 631);
			this->Load += gcnew System::EventHandler(this, &BinarySearch::BinarySearch_Load);
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
			int si;
			int ei;
			PictureBox ^arrow;
			int arrowHeight;
			System::Collections::Generic::List<Label ^> indexList;
			Label ^label_si;
			Label ^label_ei;
			Label ^label_mid;

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

	private: System::Void BinarySearch_Load(System::Object^  sender, System::EventArgs^  e) {
				 numInputs = 0;
				 maxInputs = 15;
				 maxLength = 5;
				 boxHeight = 60;
				 boxWidth = 60;
				 startX = 0;
				 startY = (AnimationPanel->Size.Height)/2;
				 searchInput = -1;
				 si = -5;
				 ei = -5;
				 arrowHeight = 75;
				 arrow = gcnew PictureBox();
				 label_si = gcnew Label();
				 label_mid = gcnew Label();
				 label_ei = gcnew Label();
			 }

	private: System::Void btnEnterInput_Click_1(System::Object^  sender, System::EventArgs^  e) {
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
					 newLabel2->Size = Drawing::Size(boxWidth, 20);
					 newLabel2->TextAlign = ContentAlignment::TopCenter;
					 indexList.Add(newLabel2);
					 newLabel2->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 AnimationPanel->Controls->Add(newLabel2);

					 txtInput->Text = "";
				 }
			 }

	private: System::Void btnSearch_Click_1(System::Object^  sender, System::EventArgs^  e) {
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
	
	private: System::Void btnReset_Click_1(System::Object^  sender, System::EventArgs^  e) {
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
				 si = -5;
				 ei = -5;
				 arrowHeight = 75;
				 arrow = gcnew PictureBox();
				 input.Clear();
				 labelList.Clear();
				 indexList.Clear();
			 }

	private: System::Void btnPause_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 timer1->Enabled = false;
			 }
	
	private: System::Void btnAnimate_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 if(searchInput == -1){
					 lblErrorMessage->Text = "Enter input to search.";
					 return;
				 }

				 int x = input[0];
				 for(int i = 1; i < input.Count; i++){
					 if(input[i] < x){
						 lblErrorMessage->Text = "The input is not in ascending order.";
						 return;
					 }
					 x = input[i];
				 }

				 timer1->Enabled = true;
			 }
	
	private: System::Void timer1_Tick_1(System::Object^  sender, System::EventArgs^  e) {
				 if(si == -5){
					 si = 0;
					 ei = numInputs-1;

					 int mid = (si+ei)/2;
					 labelList[mid]->BackColor = Color::LemonChiffon;
					 arrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrow.png";
					 Debug::WriteLine(IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrow.png");
					 arrow->SizeMode = PictureBoxSizeMode::StretchImage;
					 arrow->Size = Drawing::Size(boxWidth, arrowHeight);
					 arrow->Location = Drawing::Point(startX+(mid+1)*boxWidth, startY-arrowHeight);
					 AnimationPanel->Controls->Add(arrow);

					 indexList[si]->ForeColor = Color::DarkBlue; 
					 indexList[ei]->ForeColor = Color::DarkBlue;
					 indexList[mid]->ForeColor = Color::DarkOrange;
					 
					 label_si->Text = "start";
					 label_si->Location = Drawing::Point(startX+(si+1)*boxWidth, startY+boxHeight+20);
					 label_si->Size = Drawing::Size(boxWidth, 20);
					 label_si->TextAlign = ContentAlignment::TopCenter;
					 label_si->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 label_si->ForeColor = Color::DarkBlue;
					 AnimationPanel->Controls->Add(label_si);

					 label_ei->Text = "end";
					 label_ei->Location = Drawing::Point(startX+(ei+1)*boxWidth, startY+boxHeight+20);
					 label_ei->Size = Drawing::Size(boxWidth, 20);
					 label_ei->TextAlign = ContentAlignment::TopCenter;
					 label_ei->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 label_ei->ForeColor = Color::DarkBlue;
					 AnimationPanel->Controls->Add(label_ei);
	
					 label_mid->Text = "mid";
					 label_mid->Location = Drawing::Point(startX+(mid+1)*boxWidth, startY+boxHeight+20);
					 label_mid->Size = Drawing::Size(boxWidth, 20);
					 label_mid->TextAlign = ContentAlignment::TopCenter;
					 label_mid->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 label_mid->ForeColor = Color::DarkOrange;
					 AnimationPanel->Controls->Add(label_mid);

					 return;
				 }

				 int mid = (si+ei)/2;

				 label_si->Text = "";
				 label_ei->Text = "";
				 indexList[si]->ForeColor = Color::Black;
				 indexList[ei]->ForeColor = Color::Black;
				 label_mid->Text = "";
				 indexList[mid]->ForeColor = Color::Black;
				 
				 if(input[mid] < searchInput){
					 si = mid+1;
				 }
				 else if(searchInput < input[mid]){
					 ei = mid-1;
				 }
				 else{
					 si = mid;
					 ei = mid;
				 }

				 mid = (si+ei)/2;
				 labelList[mid]->BackColor = Color::LemonChiffon;
				 arrow->Location = Drawing::Point(startX+(mid+1)*boxWidth, startY-arrowHeight);

				 if(si < ei){
					 for(int i = 0; i < numInputs; i++){
						 if(i < si || i > ei){
							 labelList[i]->BackColor = Color::LightCoral;
						 }
					 }

					 indexList[mid]->ForeColor = Color::DarkOrange;
					 indexList[si]->ForeColor = Color::DarkBlue; 
					 indexList[ei]->ForeColor = Color::DarkBlue;
					 
					 label_mid->Text = "mid";
					 label_mid->Location = Drawing::Point(startX+(mid+1)*boxWidth, startY+boxHeight+20);
					 label_mid->Size = Drawing::Size(boxWidth, 20);
					 label_mid->TextAlign = ContentAlignment::TopCenter;
					 label_mid->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 label_mid->ForeColor = Color::DarkOrange;

					 label_ei->Text = "end";
					 label_ei->Location = Drawing::Point(startX+(ei+1)*boxWidth, startY+boxHeight+20);
					 label_ei->Size = Drawing::Size(boxWidth, 20);
					 label_ei->TextAlign = ContentAlignment::TopCenter;
					 label_ei->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 label_ei->ForeColor = Color::DarkBlue;
					 AnimationPanel->Controls->Add(label_ei);

					 label_si->Text = "start";
					 label_si->Location = Drawing::Point(startX+(si+1)*boxWidth, startY+boxHeight+20);
					 label_si->Size = Drawing::Size(boxWidth, 20);
					 label_si->TextAlign = ContentAlignment::TopCenter;
					 label_si->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 label_si->ForeColor = Color::DarkBlue;
					 AnimationPanel->Controls->Add(label_si);

					 AnimationPanel->Controls->Add(label_mid);
				 }
				 else if(si == ei){
					 for(int i = 0; i < numInputs; i++){
						 if(i == mid) continue;
						 labelList[i]->BackColor = Color::LightCoral;
					 }

					 if(input[mid] != searchInput){
						 labelList[mid]->BackColor = Color::LemonChiffon;
						 indexList[mid]->ForeColor = Color::DarkOrange;
						 label_mid->Text = "mid";
						 label_mid->Location = Drawing::Point(startX+(mid+1)*boxWidth, startY+boxHeight+20);
						 label_mid->Size = Drawing::Size(boxWidth, 20);
						 label_mid->TextAlign = ContentAlignment::TopCenter;
						 label_mid->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
						 label_mid->ForeColor = Color::DarkOrange;
						 AnimationPanel->Controls->Add(label_mid);
						 label_mid->BringToFront();
						 return;
					 }

					 labelList[mid]->BackColor = Color::PaleGreen;
					 indexList[mid]->ForeColor = Color::DarkGreen;

					 label_mid->Text = "mid";
					 label_mid->Location = Drawing::Point(startX+(mid+1)*boxWidth, startY+boxHeight+20);
					 label_mid->Size = Drawing::Size(boxWidth, 20);
					 label_mid->TextAlign = ContentAlignment::TopCenter;
					 label_mid->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 label_mid->ForeColor = Color::DarkGreen;
					 AnimationPanel->Controls->Add(label_mid);
					 label_mid->BringToFront();

					 Label ^newLabel = gcnew Label();
					 newLabel->Text = "Input found!";
					 newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
					 newLabel->Size = Drawing::Size(175, 20);
					 newLabel->Location = Drawing::Point(0, 0);
					 AnimationPanel->Controls->Add(newLabel);
					 timer1->Enabled = false;
				 }
				 else{
					 for(int i = 0; i < numInputs; i++){
						 labelList[i]->BackColor = Color::LightCoral;
					 }

					 Label ^newLabel = gcnew Label();
					 newLabel->Text = "Input not found!";
					 newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
					 newLabel->Size = Drawing::Size(175, 20);
					 newLabel->Location = Drawing::Point(0, 0);
					 AnimationPanel->Controls->Add(newLabel);
					 timer1->Enabled = false;
					 return;
				 }
			 }
};
}
