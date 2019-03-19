#pragma once

#include <utility> 
#include <vector>
#include <string>
#include <algorithm>

namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1

	//************global variables************//
	int cnt=0,cntt=0,cntp;
	int tcnt=-2;
	int a,b=1;
	int arr[13];
	std::vector<std::pair<int,int> > vpp;
	//***********global variables************//


	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private: array< Label ^ > ^ labels;
	public:
		Form1(void)
		{
			InitializeComponent();
			/*
			int count = 0;
			//array< Label ^ > ^ labels;
			labels = gcnew array<Label^>(25);

			for (int index = 0; index < 25; ++index) 
			{
				Label ^ label = gcnew Label;
				label->Size = System::Drawing::Size(25, 25);
				label->Name = "C" + index;
				label->Text = Convert::ToString( index, 16 ); 
				label->Location = System::Drawing::Point(index, 10+index);
		   }
		   */
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  l1;
	private: System::Windows::Forms::Label^  l2;
	private: System::Windows::Forms::Label^  l3;
	private: System::Windows::Forms::Label^  l4;
	private: System::Windows::Forms::Label^  l5;
	private: System::Windows::Forms::Label^  l6;
	private: System::Windows::Forms::Label^  l7;
	private: System::Windows::Forms::Label^  l8;
	private: System::Windows::Forms::Label^  l9;
	private: System::Windows::Forms::Label^  l10;
	private: System::Windows::Forms::Label^  l11;
	private: System::Windows::Forms::Label^  l12;
	protected: 

	protected: 











	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  btnVisualize;
	private: System::Windows::Forms::Button^  btnPause;
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
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->l3 = (gcnew System::Windows::Forms::Label());
			this->l4 = (gcnew System::Windows::Forms::Label());
			this->l5 = (gcnew System::Windows::Forms::Label());
			this->l6 = (gcnew System::Windows::Forms::Label());
			this->l7 = (gcnew System::Windows::Forms::Label());
			this->l8 = (gcnew System::Windows::Forms::Label());
			this->l9 = (gcnew System::Windows::Forms::Label());
			this->l10 = (gcnew System::Windows::Forms::Label());
			this->l11 = (gcnew System::Windows::Forms::Label());
			this->l12 = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnVisualize = (gcnew System::Windows::Forms::Button());
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// l1
			// 
			this->l1->AutoSize = true;
			this->l1->Location = System::Drawing::Point(141, 175);
			this->l1->Name = L"l1";
			this->l1->Size = System::Drawing::Size(35, 13);
			this->l1->TabIndex = 0;
			this->l1->Text = L"label1";
			// 
			// l2
			// 
			this->l2->AutoSize = true;
			this->l2->Location = System::Drawing::Point(182, 175);
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size(35, 13);
			this->l2->TabIndex = 1;
			this->l2->Text = L"label2";
			// 
			// l3
			// 
			this->l3->AutoSize = true;
			this->l3->Location = System::Drawing::Point(223, 175);
			this->l3->Name = L"l3";
			this->l3->Size = System::Drawing::Size(35, 13);
			this->l3->TabIndex = 2;
			this->l3->Text = L"label3";
			// 
			// l4
			// 
			this->l4->AutoSize = true;
			this->l4->Location = System::Drawing::Point(264, 175);
			this->l4->Name = L"l4";
			this->l4->Size = System::Drawing::Size(35, 13);
			this->l4->TabIndex = 3;
			this->l4->Text = L"label4";
			// 
			// l5
			// 
			this->l5->AutoSize = true;
			this->l5->Location = System::Drawing::Point(305, 175);
			this->l5->Name = L"l5";
			this->l5->Size = System::Drawing::Size(35, 13);
			this->l5->TabIndex = 4;
			this->l5->Text = L"label5";
			// 
			// l6
			// 
			this->l6->AutoSize = true;
			this->l6->Location = System::Drawing::Point(366, 184);
			this->l6->Name = L"l6";
			this->l6->Size = System::Drawing::Size(35, 13);
			this->l6->TabIndex = 5;
			this->l6->Text = L"label6";
			// 
			// l7
			// 
			this->l7->AutoSize = true;
			this->l7->Location = System::Drawing::Point(641, 175);
			this->l7->Name = L"l7";
			this->l7->Size = System::Drawing::Size(35, 13);
			this->l7->TabIndex = 6;
			this->l7->Text = L"label7";
			// 
			// l8
			// 
			this->l8->AutoSize = true;
			this->l8->Location = System::Drawing::Point(725, 175);
			this->l8->Name = L"l8";
			this->l8->Size = System::Drawing::Size(35, 13);
			this->l8->TabIndex = 7;
			this->l8->Text = L"label8";
			// 
			// l9
			// 
			this->l9->AutoSize = true;
			this->l9->BackColor = System::Drawing::SystemColors::Control;
			this->l9->Location = System::Drawing::Point(813, 175);
			this->l9->Name = L"l9";
			this->l9->Size = System::Drawing::Size(35, 13);
			this->l9->TabIndex = 8;
			this->l9->Text = L"label9";
			// 
			// l10
			// 
			this->l10->AutoSize = true;
			this->l10->Location = System::Drawing::Point(901, 175);
			this->l10->Name = L"l10";
			this->l10->Size = System::Drawing::Size(41, 13);
			this->l10->TabIndex = 9;
			this->l10->Text = L"label10";
			// 
			// l11
			// 
			this->l11->AutoSize = true;
			this->l11->Location = System::Drawing::Point(979, 175);
			this->l11->Name = L"l11";
			this->l11->Size = System::Drawing::Size(41, 13);
			this->l11->TabIndex = 10;
			this->l11->Text = L"label11";
			// 
			// l12
			// 
			this->l12->AutoSize = true;
			this->l12->Location = System::Drawing::Point(1050, 175);
			this->l12->Name = L"l12";
			this->l12->Size = System::Drawing::Size(41, 13);
			this->l12->TabIndex = 11;
			this->l12->Text = L"label12";
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(882, 409);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 12;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(728, 409);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(100, 20);
			this->txt1->TabIndex = 14;
			// 
			// timer1
			// 
			this->timer1->Interval = 2500;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// btnVisualize
			// 
			this->btnVisualize->Location = System::Drawing::Point(999, 409);
			this->btnVisualize->Name = L"btnVisualize";
			this->btnVisualize->Size = System::Drawing::Size(75, 23);
			this->btnVisualize->TabIndex = 15;
			this->btnVisualize->Text = L"Visualize";
			this->btnVisualize->UseVisualStyleBackColor = true;
			this->btnVisualize->Click += gcnew System::EventHandler(this, &Form1::btnVisualize_Click);
			// 
			// btnPause
			// 
			this->btnPause->Location = System::Drawing::Point(1124, 408);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(75, 23);
			this->btnPause->TabIndex = 16;
			this->btnPause->Text = L"Pause";
			this->btnPause->UseVisualStyleBackColor = true;
			this->btnPause->Click += gcnew System::EventHandler(this, &Form1::btnPause_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->btnPause);
			this->Controls->Add(this->btnVisualize);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->l12);
			this->Controls->Add(this->l11);
			this->Controls->Add(this->l10);
			this->Controls->Add(this->l9);
			this->Controls->Add(this->l8);
			this->Controls->Add(this->l7);
			this->Controls->Add(this->l6);
			this->Controls->Add(this->l5);
			this->Controls->Add(this->l4);
			this->Controls->Add(this->l3);
			this->Controls->Add(this->l2);
			this->Controls->Add(this->l1);
			this->Name = L"Form1";
			this->Text = L"Bubble Sort";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 cnt++;
				 cntt=0;

				 switch (cnt){
					case 1:
						try{
							a=Convert::ToInt32(txt1->Text);
							l1->Text=txt1->Text;
							arr[cnt]=a;
							l1->Visible=true;
							l1->BackColor=System::Drawing::Color::White;
						}catch(...){
							MessageBox::Show("Please enter an Integer only");
							cnt--;
						}
						break;
					case 2:
						try{
							a=Convert::ToInt32(txt1->Text);
							l2->Text=txt1->Text;
							arr[cnt]=a;
							l2->Visible=true;
							l2->BackColor=System::Drawing::Color::White;
						}catch(...){
							MessageBox::Show("Please enter an Integer only");
							cnt--;
						}
						break;
					case 3:
						try{
							a=Convert::ToInt32(txt1->Text);
							l3->Text=txt1->Text;
							arr[cnt]=a;
							l3->Visible=true;
							l3->BackColor=System::Drawing::Color::White;
						}catch(...){
							MessageBox::Show("Please enter an Integer only");
							cnt--;
						}
						break;
					case 4:
						try{
							a=Convert::ToInt32(txt1->Text);
							l4->Text=txt1->Text;
							arr[cnt]=a;
							l4->Visible=true;
							l4->BackColor=System::Drawing::Color::White;
						}catch(...){
							MessageBox::Show("Please enter an Integer only");
							cnt--;
						}
						break;
					case 5:
						try{
							a=Convert::ToInt32(txt1->Text);
							l5->Text=txt1->Text;
							arr[cnt]=a;
							l5->Visible=true;
							l5->BackColor=System::Drawing::Color::White;
						}catch(...){
							MessageBox::Show("Please enter an Integer only");
							cnt--;
						}
						break;
					case 6:
						try{
							a=Convert::ToInt32(txt1->Text);
							l6->Text=txt1->Text;
							arr[cnt]=a;
							l6->Visible=true;
							l6->BackColor=System::Drawing::Color::White;
						}catch(...){
							MessageBox::Show("Please enter an Integer only");
							cnt--;
						}
						break;
					case 7:
						try{
							a=Convert::ToInt32(txt1->Text);
							l7->Text=txt1->Text;
							arr[cnt]=a;
							l7->Visible=true;
							l7->BackColor=System::Drawing::Color::White;
						}catch(...){
							MessageBox::Show("Please enter an Integer only");
							cnt--;
						}
						break;
					case 8:
						try{
							a=Convert::ToInt32(txt1->Text);
							l8->Text=txt1->Text;
							arr[cnt]=a;
							l8->Visible=true;
							l8->BackColor=System::Drawing::Color::White;
						}catch(...){
							MessageBox::Show("Please enter an Integer only");
							cnt--;
						}
						break;
					case 9:
						try{
							a=Convert::ToInt32(txt1->Text);
							l9->Text=txt1->Text;
							arr[cnt]=a;
							l9->Visible=true;
							l9->BackColor=System::Drawing::Color::White;
						}catch(...){
							MessageBox::Show("Please enter an Integer only");
							cnt--;
							b=0;
						}
						break;
					case 10:
						try{
							a=Convert::ToInt32(txt1->Text);
							l10->Text=txt1->Text;
							arr[cnt]=a;
							l10->Visible=true;
							l10->BackColor=System::Drawing::Color::White;
						}catch(...){
							MessageBox::Show("Please enter an Integer only");
							cnt--;
						}
						break;
					case 11:
						try{
							a=Convert::ToInt32(txt1->Text);
							l11->Text=txt1->Text;
							arr[cnt]=a;
							l11->Visible=true;
							l11->BackColor=System::Drawing::Color::White;
						}catch(...){
							MessageBox::Show("Please enter an Integer only");
							cnt--;
						}
						break;
					case 12:
						try{
							a=Convert::ToInt32(txt1->Text);
							l12->Text=txt1->Text;
							arr[cnt]=a;
							l12->Visible=true;
							l12->BackColor=System::Drawing::Color::White;
						}catch(...){
							MessageBox::Show("Please enter an Integer only");
							cnt--;
						}
						break;
					default:
						MessageBox::Show("Maximum Size Reached");
						cnt--;
						break;
				 }

	  }

	  //Bubble Sort Algorithm
	  void BubbleSort(){
		  vpp.clear();
		  int brr[100];
		  for(int i=1;i<=cnt;i++){
			brr[i]=arr[i];
		  }

		  for(int i=1;i<=cnt;i++){
			  for(int j=i+1;j<=cnt;j++){
				  if(brr[j]<brr[i]){
					  std::swap(brr[i],brr[j]);
					  vpp.push_back(std::make_pair(i,j));
				  }
			  }
		  }
	  }

private: System::Void btnVisualize_Click(System::Object^  sender, System::EventArgs^  e) {
			cntt++;
			if(cntt>1){
				MessageBox::Show("Array Already Sorted");
			}else{
				BubbleSort();
				tcnt=-2;
				timer1->Enabled=true;
			}	

		 }

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				int n=vpp.size();
				int a,b;
				tcnt++;

				if(tcnt==n){
					timer1->Enabled=false;
					l1->BackColor=System::Drawing::Color::White;
					l2->BackColor=System::Drawing::Color::White;
					l3->BackColor=System::Drawing::Color::White;
					l4->BackColor=System::Drawing::Color::White;
					l5->BackColor=System::Drawing::Color::White;
					l6->BackColor=System::Drawing::Color::White;
					l7->BackColor=System::Drawing::Color::White;
					l8->BackColor=System::Drawing::Color::White;
					l9->BackColor=System::Drawing::Color::White;
					l10->BackColor=System::Drawing::Color::White;
					l11->BackColor=System::Drawing::Color::White;
					l12->BackColor=System::Drawing::Color::White;

				}
				
				if(tcnt>=0 && tcnt<=n-1){
					a=vpp[tcnt].first;
					b=vpp[tcnt].second;
				
					switch(a){
						case 1:
							//l1->BackColor=System::Drawing::Color::Yellow;
							l1->Text = Convert::ToString(arr[b]);
							break;
						case 2:
							//l2->BackColor=System::Drawing::Color::Yellow;
							l2->Text = Convert::ToString(arr[b]);
							break;
						case 3:
							//l3->BackColor=System::Drawing::Color::Yellow;
							l3->Text = Convert::ToString(arr[b]);
							break;
						case 4:
							//l4->BackColor=System::Drawing::Color::Yellow;
							l4->Text = Convert::ToString(arr[b]);
							break;
						case 5:
							//l5->BackColor=System::Drawing::Color::Yellow;
							l5->Text = Convert::ToString(arr[b]);
							break;
						case 6:
							//l6->BackColor=System::Drawing::Color::Yellow;
							l6->Text = Convert::ToString(arr[b]);
							break;
						case 7:
							//l7->BackColor=System::Drawing::Color::Yellow;
							l7->Text = Convert::ToString(arr[b]);
							break;
						case 8:
							//l8->BackColor=System::Drawing::Color::Yellow;
							l8->Text = Convert::ToString(arr[b]);
							break;
						case 9:
							//l9->BackColor=System::Drawing::Color::Yellow;
							l9->Text = Convert::ToString(arr[b]);
							break;
						case 10:
							//l10->BackColor=System::Drawing::Color::Yellow;
							l10->Text = Convert::ToString(arr[b]);
							break;
						case 11:
							//l11->BackColor=System::Drawing::Color::Yellow;
							l11->Text = Convert::ToString(arr[b]);
							break;
						case 12:
							//l12->BackColor=System::Drawing::Color::Yellow;
							l12->Text = Convert::ToString(arr[b]);
							break;
						default:
							break;
					}

				switch(b){
					case 1:
						//l1->BackColor=System::Drawing::Color::SkyBlue;
						l1->Text = Convert::ToString(arr[a]);
						break;
					case 2:
						//l2->BackColor=System::Drawing::Color::SkyBlue;
						l2->Text = Convert::ToString(arr[a]);
						break;
					case 3:
						//l3->BackColor=System::Drawing::Color::SkyBlue;
						l3->Text = Convert::ToString(arr[a]);
						break;
					case 4:
						//l4->BackColor=System::Drawing::Color::SkyBlue;
						l4->Text = Convert::ToString(arr[a]);
						break;
					case 5:
						//l5->BackColor=System::Drawing::Color::SkyBlue;
						l5->Text = Convert::ToString(arr[a]);
						break;
					case 6:
					    //l6->BackColor=System::Drawing::Color::SkyBlue;
						l6->Text = Convert::ToString(arr[a]);
						break;
					case 7:
						//l7->BackColor=System::Drawing::Color::SkyBlue;
						l7->Text = Convert::ToString(arr[a]);
						break;
					case 8:
						//l8->BackColor=System::Drawing::Color::SkyBlue;
						l8->Text = Convert::ToString(arr[a]);
						break;
					case 9:
						//l9->BackColor=System::Drawing::Color::SkyBlue;
						l9->Text = Convert::ToString(arr[a]);
						break;
					case 10:
						//l10->BackColor=System::Drawing::Color::SkyBlue;
						l10->Text = Convert::ToString(arr[a]);
						break;
					case 11:
						//l11->BackColor=System::Drawing::Color::SkyBlue;
						l11->Text = Convert::ToString(arr[a]);
						break;
					case 12:
						//l12->BackColor=System::Drawing::Color::SkyBlue;
						l12->Text = Convert::ToString(arr[a]);
						break;
					default:
						break;
				}
				std::swap(arr[a],arr[b]);
			}   
			    
					l1->BackColor=System::Drawing::Color::White;
					l2->BackColor=System::Drawing::Color::White;
					l3->BackColor=System::Drawing::Color::White;
					l4->BackColor=System::Drawing::Color::White;
					l5->BackColor=System::Drawing::Color::White;
					l6->BackColor=System::Drawing::Color::White;
					l7->BackColor=System::Drawing::Color::White;
					l8->BackColor=System::Drawing::Color::White;
					l9->BackColor=System::Drawing::Color::White;
					l10->BackColor=System::Drawing::Color::White;
					l11->BackColor=System::Drawing::Color::White;
					l12->BackColor=System::Drawing::Color::White;
				

				if(tcnt<=n-2){
					int a,b;
					a=vpp[tcnt+1].first;
					b=vpp[tcnt+1].second;
					switch(a){
						case 1:
						l1->BackColor=System::Drawing::Color::Yellow;
						break;
						case 2:
						l2->BackColor=System::Drawing::Color::Yellow;
						break;
					case 3:
						l3->BackColor=System::Drawing::Color::Yellow;
						break;
					case 4:
						l4->BackColor=System::Drawing::Color::Yellow;
						break;
					case 5:
						l5->BackColor=System::Drawing::Color::Yellow;
						break;
					case 6:
						l6->BackColor=System::Drawing::Color::Yellow;
						break;
					case 7:
						l7->BackColor=System::Drawing::Color::Yellow;
						break;
					case 8:
						l8->BackColor=System::Drawing::Color::Yellow;
						break;
					case 9:
						l9->BackColor=System::Drawing::Color::Yellow;
						break;
					case 10:
						l10->BackColor=System::Drawing::Color::Yellow;
						break;
					case 11:
						l11->BackColor=System::Drawing::Color::Yellow;
						break;
					case 12:
						l12->BackColor=System::Drawing::Color::Yellow;
						break;
					default:
						break;

					}
					switch(b){
					case 1:
						l1->BackColor=System::Drawing::Color::SkyBlue;
						break;
					case 2:
						l2->BackColor=System::Drawing::Color::SkyBlue;
						break;
					case 3:
						l3->BackColor=System::Drawing::Color::SkyBlue;
						break;
					case 4:
						l4->BackColor=System::Drawing::Color::SkyBlue;
						break;
					case 5:
						l5->BackColor=System::Drawing::Color::SkyBlue;
						break;
					case 6:
					    l6->BackColor=System::Drawing::Color::SkyBlue;
						break;
					case 7:
						l7->BackColor=System::Drawing::Color::SkyBlue;
						break;
					case 8:
						l8->BackColor=System::Drawing::Color::SkyBlue;
						break;
					case 9:
						l9->BackColor=System::Drawing::Color::SkyBlue;
						break;
					case 10:
						l10->BackColor=System::Drawing::Color::SkyBlue;
						break;
					case 11:
						l11->BackColor=System::Drawing::Color::SkyBlue;
						break;
					case 12:
						l12->BackColor=System::Drawing::Color::SkyBlue;
						break;
					default:
						break;
				}

					
				}
			}

		
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 l1->Visible=false;
			 l2->Visible=false;
			 l3->Visible=false;
			 l4->Visible=false;
			 l5->Visible=false;
			 l6->Visible=false;
			 l7->Visible=false;
			 l8->Visible=false;
			 l9->Visible=false;
			 l10->Visible=false;
			 l11->Visible=false;
			 l12->Visible=false;

		 }
private: System::Void btnPause_Click(System::Object^  sender, System::EventArgs^  e) {
			 cntp++;
			 if(cntp%2==1){
				timer1->Enabled=false;
			 }else{
				timer1->Enabled=true;
			 }
		 }
};
}

