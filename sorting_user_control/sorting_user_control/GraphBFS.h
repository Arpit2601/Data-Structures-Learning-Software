#pragma once

#include <utility> 
#include <vector>
#include <string>
#include <algorithm>
#include <queue>


namespace{

	//************global variables************//
	int bn,bm,baddcounter=0,bpause;
	int bnodes[100];
	int bvis[1000];
	std::vector<int> badj[1000];
	std::vector<std::pair<int,int> > bstore;
	int bc1=0,bt1=-1,bcheck=0;
	//***********global variables************//
	
}



namespace sorting_user_control {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GraphBFS
	/// </summary>
	public ref class GraphBFS : public System::Windows::Forms::UserControl
	{
	public:
		GraphBFS(void)
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
		~GraphBFS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnIncrease;
	protected: 
	private: System::Windows::Forms::Button^  btnDecrease;
	private: System::Windows::Forms::Button^  btnPause;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnBFS;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::TextBox^  txtTo;




	private: System::Windows::Forms::TextBox^  txtFrom;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  l8;
	private: System::Windows::Forms::Label^  l7;
	private: System::Windows::Forms::Label^  l6;
	private: System::Windows::Forms::Label^  l5;
	private: System::Windows::Forms::Label^  l4;
	private: System::Windows::Forms::Label^  l3;
	private: System::Windows::Forms::Label^  l2;
	private: System::Windows::Forms::Label^  l1;





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
			this->btnIncrease = (gcnew System::Windows::Forms::Button());
			this->btnDecrease = (gcnew System::Windows::Forms::Button());
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBFS = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtTo = (gcnew System::Windows::Forms::TextBox());
			this->txtFrom = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->l8 = (gcnew System::Windows::Forms::Label());
			this->l7 = (gcnew System::Windows::Forms::Label());
			this->l6 = (gcnew System::Windows::Forms::Label());
			this->l5 = (gcnew System::Windows::Forms::Label());
			this->l4 = (gcnew System::Windows::Forms::Label());
			this->l3 = (gcnew System::Windows::Forms::Label());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnIncrease
			// 
			this->btnIncrease->Location = System::Drawing::Point(1002, 514);
			this->btnIncrease->Name = L"btnIncrease";
			this->btnIncrease->Size = System::Drawing::Size(75, 41);
			this->btnIncrease->TabIndex = 27;
			this->btnIncrease->Text = L"Increase Speed";
			this->btnIncrease->UseVisualStyleBackColor = true;
			this->btnIncrease->Visible = false;
			this->btnIncrease->Click += gcnew System::EventHandler(this, &GraphBFS::btnIncrease_Click);
			// 
			// btnDecrease
			// 
			this->btnDecrease->Location = System::Drawing::Point(900, 514);
			this->btnDecrease->Name = L"btnDecrease";
			this->btnDecrease->Size = System::Drawing::Size(75, 41);
			this->btnDecrease->TabIndex = 26;
			this->btnDecrease->Text = L"Decrease Speed";
			this->btnDecrease->UseVisualStyleBackColor = true;
			this->btnDecrease->Visible = false;
			this->btnDecrease->Click += gcnew System::EventHandler(this, &GraphBFS::btnDecrease_Click);
			// 
			// btnPause
			// 
			this->btnPause->Location = System::Drawing::Point(798, 514);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(75, 41);
			this->btnPause->TabIndex = 25;
			this->btnPause->Text = L"Pause";
			this->btnPause->UseVisualStyleBackColor = true;
			this->btnPause->Visible = false;
			this->btnPause->Click += gcnew System::EventHandler(this, &GraphBFS::btnPause_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(423, 548);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 20);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Edge Node 2";
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(252, 548);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 20);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Edge Node 1";
			this->label2->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 514);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 20);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Enter number of Nodes";
			// 
			// btnBFS
			// 
			this->btnBFS->Location = System::Drawing::Point(690, 514);
			this->btnBFS->Name = L"btnBFS";
			this->btnBFS->Size = System::Drawing::Size(75, 41);
			this->btnBFS->TabIndex = 21;
			this->btnBFS->Text = L"BFS";
			this->btnBFS->UseVisualStyleBackColor = true;
			this->btnBFS->Visible = false;
			this->btnBFS->Click += gcnew System::EventHandler(this, &GraphBFS::btnBFS_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(581, 514);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 41);
			this->btnAdd->TabIndex = 20;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &GraphBFS::btnAdd_Click);
			// 
			// txtTo
			// 
			this->txtTo->Location = System::Drawing::Point(427, 514);
			this->txtTo->Name = L"txtTo";
			this->txtTo->Size = System::Drawing::Size(100, 20);
			this->txtTo->TabIndex = 19;
			this->txtTo->Visible = false;
			// 
			// txtFrom
			// 
			this->txtFrom->Location = System::Drawing::Point(256, 514);
			this->txtFrom->Name = L"txtFrom";
			this->txtFrom->Size = System::Drawing::Size(100, 20);
			this->txtFrom->TabIndex = 14;
			// 
			// timer1
			// 
			this->timer1->Interval = 2501;
			this->timer1->Tick += gcnew System::EventHandler(this, &GraphBFS::timer1_Tick);
			// 
			// l8
			// 
			this->l8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l8->Location = System::Drawing::Point(230, 77);
			this->l8->Name = L"l8";
			this->l8->Size = System::Drawing::Size(30, 30);
			this->l8->TabIndex = 35;
			this->l8->Text = L"8";
			this->l8->Visible = false;
			// 
			// l7
			// 
			this->l7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l7->Location = System::Drawing::Point(847, 153);
			this->l7->Name = L"l7";
			this->l7->Size = System::Drawing::Size(30, 30);
			this->l7->TabIndex = 34;
			this->l7->Text = L"7";
			this->l7->Visible = false;
			// 
			// l6
			// 
			this->l6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l6->Location = System::Drawing::Point(475, 313);
			this->l6->Name = L"l6";
			this->l6->Size = System::Drawing::Size(30, 30);
			this->l6->TabIndex = 33;
			this->l6->Text = L"6";
			this->l6->Visible = false;
			// 
			// l5
			// 
			this->l5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l5->Location = System::Drawing::Point(713, 298);
			this->l5->Name = L"l5";
			this->l5->Size = System::Drawing::Size(30, 30);
			this->l5->TabIndex = 32;
			this->l5->Text = L"5";
			this->l5->Visible = false;
			// 
			// l4
			// 
			this->l4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l4->Location = System::Drawing::Point(212, 274);
			this->l4->Name = L"l4";
			this->l4->Size = System::Drawing::Size(30, 30);
			this->l4->TabIndex = 31;
			this->l4->Text = L"4";
			this->l4->Visible = false;
			// 
			// l3
			// 
			this->l3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l3->Location = System::Drawing::Point(401, 193);
			this->l3->Name = L"l3";
			this->l3->Size = System::Drawing::Size(30, 30);
			this->l3->TabIndex = 30;
			this->l3->Text = L"3";
			this->l3->Visible = false;
			// 
			// l2
			// 
			this->l2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l2->Location = System::Drawing::Point(604, 163);
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size(30, 30);
			this->l2->TabIndex = 29;
			this->l2->Text = L"2";
			this->l2->Visible = false;
			// 
			// l1
			// 
			this->l1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l1->Location = System::Drawing::Point(525, 33);
			this->l1->Name = L"l1";
			this->l1->Size = System::Drawing::Size(30, 30);
			this->l1->TabIndex = 28;
			this->l1->Text = L"1";
			this->l1->Visible = false;
			// 
			// GraphBFS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->l8);
			this->Controls->Add(this->l7);
			this->Controls->Add(this->l6);
			this->Controls->Add(this->l5);
			this->Controls->Add(this->l4);
			this->Controls->Add(this->l3);
			this->Controls->Add(this->l2);
			this->Controls->Add(this->l1);
			this->Controls->Add(this->btnIncrease);
			this->Controls->Add(this->btnDecrease);
			this->Controls->Add(this->btnPause);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnBFS);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtTo);
			this->Controls->Add(this->txtFrom);
			this->Name = L"GraphBFS";
			this->Size = System::Drawing::Size(1088, 631);
			this->Load += gcnew System::EventHandler(this, &GraphBFS::GraphBFS_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		//assign a colour to a label
	  //0->white,1->red,2->yellow,3->skyblue
	  void colour(int l,int c){
		switch(l){
			case 1:
				if(c==0)l1->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l1->BackColor=System::Drawing::Color::Pink;
				if(c==2)l1->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l1->BackColor=System::Drawing::Color::White;
				break;
			case 2:
				if(c==0)l2->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l2->BackColor=System::Drawing::Color::Pink;
				if(c==2)l2->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l2->BackColor=System::Drawing::Color::White;
				break;
			case 3:
				if(c==0)l3->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l3->BackColor=System::Drawing::Color::Pink;
				if(c==2)l3->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l3->BackColor=System::Drawing::Color::White;
				break;
			case 4:
				if(c==0)l4->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l4->BackColor=System::Drawing::Color::Pink;
				if(c==2)l4->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l4->BackColor=System::Drawing::Color::White;
				break;
			case 5:
				if(c==0)l5->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l5->BackColor=System::Drawing::Color::Pink;
				if(c==2)l5->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l5->BackColor=System::Drawing::Color::White;
				break;
			case 6:
				if(c==0)l6->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l6->BackColor=System::Drawing::Color::Pink;
				if(c==2)l6->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l6->BackColor=System::Drawing::Color::White;
				break;
			case 7:
				if(c==0)l7->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l7->BackColor=System::Drawing::Color::Pink;
				if(c==2)l7->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l7->BackColor=System::Drawing::Color::White;
				break;
			case 8:
				if(c==0)l8->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l8->BackColor=System::Drawing::Color::Pink;
				if(c==2)l8->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l8->BackColor=System::Drawing::Color::White;
				break;
			/*case 9:
				if(c==0)l9->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l9->BackColor=System::Drawing::Color::Pink;
				if(c==2)l9->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l9->BackColor=System::Drawing::Color::White;
				break;
			case 10:
				if(c==0)l10->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l10->BackColor=System::Drawing::Color::Pink;
				if(c==2)l10->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l10->BackColor=System::Drawing::Color::White;
				break;
			case 11:
				if(c==0)l11->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l11->BackColor=System::Drawing::Color::Pink;
				if(c==2)l11->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l11->BackColor=System::Drawing::Color::White;
				break;
			case 12:
				if(c==0)l12->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l12->BackColor=System::Drawing::Color::Pink;
				if(c==2)l12->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l12->BackColor=System::Drawing::Color::White;
				break;
			case 13:
				if(c==0)l13->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l13->BackColor=System::Drawing::Color::Pink;
				if(c==2)l13->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l13->BackColor=System::Drawing::Color::White;
				break;
			case 14:
				if(c==0)l14->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l14->BackColor=System::Drawing::Color::Pink;
				if(c==2)l14->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l14->BackColor=System::Drawing::Color::White;
				break;
			case 15:
				if(c==0)l15->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l15->BackColor=System::Drawing::Color::Pink;
				if(c==2)l15->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l15->BackColor=System::Drawing::Color::White;
				break;*/
			default:
				break;
			
		  }
	  }

	  //making arrows visible
	  void lvisible(int p,int i){
		switch(p){
			case 1:
				if(i==0)l1->Visible=false;
				if(i==1)l1->Visible=true;
				break;
			case 2:
				if(i==0)l2->Visible=false;
				if(i==1)l2->Visible=true;
				break;
			case 3:
				if(i==0)l3->Visible=false;
				if(i==1)l3->Visible=true;
				break;
			case 4:
				if(i==0)l4->Visible=false;
				if(i==1)l4->Visible=true;
				break;
			case 5:
				if(i==0)l5->Visible=false;
				if(i==1)l5->Visible=true;
				break;
			case 6:
				if(i==0)l6->Visible=false;
				if(i==1)l6->Visible=true;
				break;
			case 7:
				if(i==0)l7->Visible=false;
				if(i==1)l7->Visible=true;
				break;
			case 8:
				if(i==0)l8->Visible=false;
				if(i==1)l8->Visible=true;
				break;
			/*case 9:
				if(i==0)p9->Visible=false;
				if(i==1)p9->Visible=true;
				break;
			case 10:
				if(i==0)p10->Visible=false;
				if(i==1)p10->Visible=true;
				break;
			case 11:
				if(i==0)p11->Visible=false;
				if(i==1)p11->Visible=true;
				break;
			case 12:
				if(i==0)p12->Visible=false;
				if(i==1)p12->Visible=true;
				break;
			case 13:
				if(i==0)p13->Visible=false;
				if(i==1)p13->Visible=true;
				break;
			case 14:
				if(i==0)p14->Visible=false;
				if(i==1)p14->Visible=true;
				break;
			case 15:
				if(i==0)p15->Visible=false;
				if(i==1)p15->Visible=true;
				break;*/
			default:
				break;
		}
	  }

	  //bfs of the graph
	  void bfsUtil(int s){
			std::queue<int> q;
			q.push(s);
			while(q.empty()!=1){
				int p=q.front();
				bvis[p]=1;
				q.pop();
				for(int i=0;i<badj[p].size();i++){
					if(bvis[badj[p][i]]==0){
						q.push(badj[p][i]);
					}
				}
				bstore.push_back(std::make_pair(p,1));
			
			}
	  }

	  void bfs(){
			for(int i=1;i<=bn;i++){
				if(bvis[i]==0){
					bfsUtil(i);
				}
			}
		
	 }


	  //resetting the graph
	  void reset(){
			bn=0;
			bm=0;
			baddcounter=0;
			bcheck=0;
			for(int i=0;i<100;i++){
				bvis[i]=0;	
				badj[i].clear();
			}
	  
	  }




	private: System::Void GraphBFS_Load(System::Object^  sender, System::EventArgs^  e) {
				 reset();
			 }
private: System::Void btnPause_Click(System::Object^  sender, System::EventArgs^  e) {
				 bpause++;
				 if(bpause%2==1){
					timer1->Enabled=false;
				 }else{
					timer1->Enabled=true;
				 }
		 }
private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
				 baddcounter++;
				 if(baddcounter==1){
						try{
						   bn=Convert::ToInt32(txtFrom->Text);
						   for(int i=1;i<=bn;i++){
								lvisible(i,1);
						   }
						   label1->Text="Enter the Number of Edges";
						 }catch(...){
						   MessageBox::Show("Number of nodes should be Interger Only");
						   baddcounter--;
						 }
				 }
			     else if(baddcounter==2){
					 int check=1;
						try{
						   bm=Convert::ToInt32(txtFrom->Text);
						   label1->Text="Enter the Edges";
						   txtTo->Visible=true;
						   label1->Visible=true;
						   label2->Visible=true;
						   label3->Visible=true;

						 }catch(...){
						   MessageBox::Show("Please Enter the Number of Edges as Integer Only");
						   baddcounter--;
						   check=0;
						}

						if(check){
							if(bm>(bn*(bn-1))/2){
								MessageBox::Show("Number of Edges can't be more than Complete graph with same number of nodes");
								baddcounter--;
							}
						}


					
				 }else if(baddcounter>=3 && baddcounter<=bm+2){
						 int a,b;
						 int p=1;
						 try{
						   a=Convert::ToInt32(txtFrom->Text);
						 }catch(...){
						   MessageBox::Show("Node1::Please enter an Integer only");
						   p=0;
						 }
						 if(p==1){
							 try{
							   b=Convert::ToInt32(txtTo->Text);
							 }catch(...){
							   MessageBox::Show("Node2::Please enter an Integer only");
							   p=0;
							 }
						 }
						 
						 if(p==1 && (a>bn || b>bn)){
							MessageBox::Show("Node Id's should be less than number of Nodes");
							baddcounter--;
						 }else if(p==1 && a==b){
							MessageBox::Show("No Self Loop Allowed");
							baddcounter--;

						 }else if(p==1){
							badj[a].push_back(b);
							badj[b].push_back(a);
							MessageBox::Show("Edge Entered Succesfully");
						 }else{
							baddcounter--;
						 }

						 if(baddcounter==bm+2){
							label1->Text="Graph entered Successfully";
							txtFrom->Visible=false;
							txtTo->Visible=false;
							btnAdd->Visible=false;
							btnBFS->Visible=true;
							label2->Visible=false;
							label3->Visible=false;
							btnDecrease->Visible=true;
							btnIncrease->Visible=true;
							btnPause->Visible=true;
							bcheck=1;
						 }
				 
				 }else{
						 MessageBox::Show("Graph has been already entered Successfully");
					
				 }

		 }
private: System::Void btnBFS_Click(System::Object^  sender, System::EventArgs^  e) {
						if(bcheck==0){
							MessageBox::Show("Enter the Graph First");
						}else{
							for(int i=1;i<=bn;i++){
								colour(i,0);
								bvis[i]=0;
							}
							bstore.clear();
							bt1=-1;
							bfs();
						    timer1->Enabled=true;
						}
		 }
private: System::Void btnDecrease_Click(System::Object^  sender, System::EventArgs^  e) {
						timer1->Interval+=500;
		 }
private: System::Void btnIncrease_Click(System::Object^  sender, System::EventArgs^  e) {
						if(timer1->Interval>=500)timer1->Interval-=500;
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
						bt1++;
						if(bt1==bstore.size()){
							timer1->Enabled=false;
						}else{
							int x=bstore[bt1].first;
							int y=bstore[bt1].second;
							colour(x,y);
						}
						
		 }
};
}
