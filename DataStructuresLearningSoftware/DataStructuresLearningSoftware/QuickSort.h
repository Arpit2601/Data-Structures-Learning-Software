#pragma once

#include <utility>
#include <vector>
#include <string>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Diagnostics;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

typedef std::pair<int, int> pii;
#define mp std::make_pair

namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for QuickSort
	/// </summary>
	public ref class QuickSort : public System::Windows::Forms::UserControl
	{
	public:
		QuickSort(void)
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
		~QuickSort()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  AnimationPanel;
	protected: 

	private: System::Windows::Forms::TextBox^  txtInput;
	private: System::Windows::Forms::Button^  btnEnterInput;
	private: System::Windows::Forms::Button^  btnAnimate;
	private: System::Windows::Forms::Button^  btnPause;
	private: System::Windows::Forms::Button^  btnReset;

	private: System::Windows::Forms::Label^  lblErrorMessage;
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
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->btnEnterInput = (gcnew System::Windows::Forms::Button());
			this->btnAnimate = (gcnew System::Windows::Forms::Button());
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->lblErrorMessage = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// AnimationPanel
			// 
			this->AnimationPanel->BackColor = System::Drawing::Color::White;
			this->AnimationPanel->Location = System::Drawing::Point(25, 100);
			this->AnimationPanel->Name = L"AnimationPanel";
			this->AnimationPanel->Size = System::Drawing::Size(1038, 200);
			this->AnimationPanel->TabIndex = 0;
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(36, 341);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(100, 20);
			this->txtInput->TabIndex = 1;
			// 
			// btnEnterInput
			// 
			this->btnEnterInput->Location = System::Drawing::Point(165, 349);
			this->btnEnterInput->Name = L"btnEnterInput";
			this->btnEnterInput->Size = System::Drawing::Size(75, 23);
			this->btnEnterInput->TabIndex = 2;
			this->btnEnterInput->Text = L"Enter Input";
			this->btnEnterInput->UseVisualStyleBackColor = true;
			this->btnEnterInput->Click += gcnew System::EventHandler(this, &QuickSort::btnEnterInput_Click);
			// 
			// btnAnimate
			// 
			this->btnAnimate->Location = System::Drawing::Point(596, 338);
			this->btnAnimate->Name = L"btnAnimate";
			this->btnAnimate->Size = System::Drawing::Size(75, 23);
			this->btnAnimate->TabIndex = 4;
			this->btnAnimate->Text = L"Animate";
			this->btnAnimate->UseVisualStyleBackColor = true;
			this->btnAnimate->Click += gcnew System::EventHandler(this, &QuickSort::btnAnimate_Click);
			// 
			// btnPause
			// 
			this->btnPause->Location = System::Drawing::Point(695, 342);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(75, 23);
			this->btnPause->TabIndex = 5;
			this->btnPause->Text = L"Pause";
			this->btnPause->UseVisualStyleBackColor = true;
			this->btnPause->Click += gcnew System::EventHandler(this, &QuickSort::btnPause_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(828, 338);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(75, 23);
			this->btnReset->TabIndex = 6;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &QuickSort::btnReset_Click);
			// 
			// lblErrorMessage
			// 
			this->lblErrorMessage->AutoSize = true;
			this->lblErrorMessage->Location = System::Drawing::Point(701, 395);
			this->lblErrorMessage->Name = L"lblErrorMessage";
			this->lblErrorMessage->Size = System::Drawing::Size(35, 13);
			this->lblErrorMessage->TabIndex = 7;
			this->lblErrorMessage->Text = L"label1";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &QuickSort::timer1_Tick);
			// 
			// QuickSort
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->lblErrorMessage);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnPause);
			this->Controls->Add(this->btnAnimate);
			this->Controls->Add(this->btnEnterInput);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->AnimationPanel);
			this->Name = L"QuickSort";
			this->Size = System::Drawing::Size(1088, 3200);
			this->Load += gcnew System::EventHandler(this, &QuickSort::QuickSort_Load);
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
			System::Collections::Generic::List<Label ^> labelList;
			System::Collections::Generic::List<int> inputQuicksort;
			System::Collections::Generic::List<Label ^> indexList;
			Label ^outputLabel;
			Label ^label_si;
			Label ^label_ei;
			Label ^label_pivot;
			int si, ei, id, pivot;
			PictureBox ^arrow;
			int arrowHeight;
			pii *quicksortIdList;
			int quicksortId;
			int id2, x;

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

			void quicksort(int si, int ei){
				quicksortIdList[quicksortId] = mp(si, ei);
				quicksortId++;

				if(si >= ei) return;

				int pivot = ei;
				for(int i = si; i < pivot; i++){
					if(inputQuicksort[i] > inputQuicksort[pivot]){
						int temp = inputQuicksort[pivot-1];
						inputQuicksort[pivot-1] = inputQuicksort[pivot];
						inputQuicksort[pivot] = temp;

						pivot--;

						if(i != pivot){
							temp = inputQuicksort[i];
							inputQuicksort[i] = inputQuicksort[pivot+1];
							inputQuicksort[pivot+1] = temp;

							i--;
						}
					}
				}

				quicksort(si, pivot-1);
				quicksort(pivot+1, ei);
			}

	private: System::Void QuickSort_Load(System::Object^  sender, System::EventArgs^  e) {
				 lblErrorMessage->Text = "";
				 numInputs = 0;
				 maxInputs = 15;
				 maxLength = 5;
				 boxHeight = 60;
				 boxWidth = 60;
				 startX = 0;
				 startY = (AnimationPanel->Size.Height)/2;
				 outputLabel = gcnew Label();
				 label_si = gcnew Label();
				 label_pivot = gcnew Label();
				 label_ei = gcnew Label();
				 si = ei = -5;
				 arrowHeight = 75;
				 arrow = gcnew PictureBox();
				 arrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrow.png";
				 Debug::WriteLine(IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrow.png");
				 arrow->SizeMode = PictureBoxSizeMode::StretchImage;
				 arrow->Size = Drawing::Size(boxWidth, arrowHeight);
			 }

	private: System::Void btnEnterInput_Click(System::Object^  sender, System::EventArgs^  e) {
				 lblErrorMessage->Text = "";
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
					 inputQuicksort.Add(int::Parse(txtInput->Text));

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
	
	private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
				 lblErrorMessage->Text = "";
				 AnimationPanel->Controls->Clear();
				 numInputs = 0;
				 maxInputs = 15;
				 maxLength = 5;
				 boxHeight = 60;
				 boxWidth = 60;
				 startX = 0;
				 startY = (AnimationPanel->Size.Height)/2;
				 input.Clear();
				 labelList.Clear();
				 indexList.Clear();
				 outputLabel->Text = "";
				 si = -5;
				 ei = -5;
			}

	private: System::Void btnPause_Click(System::Object^  sender, System::EventArgs^  e) {
				 lblErrorMessage->Text = "";
				 timer1->Enabled = false;
			 }

	private: System::Void btnAnimate_Click(System::Object^  sender, System::EventArgs^  e) {
				 lblErrorMessage->Text = "";
				 quicksortId = 0;
				 quicksortIdList = new pii[4*numInputs];
				 quicksort(0, numInputs-1);
				
				 x = 0;

				 helper();
			 }

	public: void helper(){
				if(x >= quicksortId) return;

				int si = quicksortIdList[x].first;
				int ei = quicksortIdList[x].second;

				labelList[ei]->BackColor = Color::LemonChiffon;

				indexList[si]->ForeColor = Color::DarkBlue; 
				indexList[ei]->ForeColor = Color::DarkBlue;

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

				id2 = si;
				pivot = ei;

				labelList[id2]->BackColor = Color::LemonChiffon;

				timer1->Enabled = true;
			}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(id2 >= pivot){
					 timer1->Enabled = false;
					 x++;
					 helper();
					 return;
				 }

				 labelList[pivot]->BackColor = Color::LightSkyBlue;
				 labelList[id2]->BackColor = Color::LightSkyBlue;

				 Label ^comparison = gcnew Label();

				 if(input[id2] > input[pivot]){

					 comparison->Text = input[id2]+" > "+input[pivot]+": Swap";
					 comparison->Location = Drawing::Point((AnimationPanel->Size.Width - comparison->Size.Width)/2, 0);
					 comparison->TextAlign = ContentAlignment::TopCenter;
					 comparison->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 comparison->ForeColor = Color::Firebrick;
					 AnimationPanel->Controls->Add(comparison);

					 int temp = input[pivot-1];
					 input[pivot-1] = input[pivot];
					 labelList[pivot-1]->Text = Convert::ToString(input[pivot]);
					 input[pivot] = temp;
					 labelList[pivot]->Text = Convert::ToString(temp);

					 pivot--;

					 if(id2 != pivot){
						 temp = input[id2];
						 input[id2] = input[pivot+1];
						 labelList[id2]->Text = Convert::ToString(input[pivot+1]);
						 input[pivot+1] = temp;
						 labelList[pivot+1]->Text = Convert::ToString(temp);

						 id2--;
					 }
				 }
				 else{
					 comparison->Text = input[id2]+" < "+input[pivot];
					 comparison->Location = Drawing::Point((AnimationPanel->Size.Width - comparison->Size.Width)/2, 0);
					 comparison->TextAlign = ContentAlignment::TopCenter;
					 comparison->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 comparison->ForeColor = Color::Firebrick;
					 AnimationPanel->Controls->Add(comparison);
				 }

				 labelList[pivot]->BackColor = Color::LemonChiffon;

				 id2++;

				 labelList[id2]->BackColor = Color::LemonChiffon;
			 }
};

}
