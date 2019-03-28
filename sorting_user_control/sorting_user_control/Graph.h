#pragma once

#include <utility> 
#include <vector>
#include <string>
#include <algorithm>


namespace{

	//************global variables************//
	int n,m,addcounter=0,pause;
	int nodes[100];
	int vis[1000];
	std::vector<int> adj[1000];
	std::vector<std::pair<int,int> > store;
	int c1=0,t1=-1,check=0;
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
	/// Summary for Graph
	/// </summary>
	public ref class Graph : public System::Windows::Forms::UserControl
	{
	public:
		Graph(void)
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
		~Graph()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  txtFrom;
	private: System::Windows::Forms::Label^  l1;
	private: System::Windows::Forms::Label^  l2;
	private: System::Windows::Forms::Label^  l3;
	private: System::Windows::Forms::Label^  l4;
	private: System::Windows::Forms::TextBox^  txtTo;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnDFS;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnPause;
	private: System::Windows::Forms::Button^  btnDecrease;
	private: System::Windows::Forms::Button^  btnIncrease;
	private: System::Windows::Forms::Label^  l5;
	private: System::Windows::Forms::Label^  l6;
	private: System::Windows::Forms::Label^  l7;
	private: System::Windows::Forms::Label^  l8;

	protected: 
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
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->txtFrom = (gcnew System::Windows::Forms::TextBox());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->l3 = (gcnew System::Windows::Forms::Label());
			this->l4 = (gcnew System::Windows::Forms::Label());
			this->txtTo = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDFS = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->btnDecrease = (gcnew System::Windows::Forms::Button());
			this->btnIncrease = (gcnew System::Windows::Forms::Button());
			this->l5 = (gcnew System::Windows::Forms::Label());
			this->l6 = (gcnew System::Windows::Forms::Label());
			this->l7 = (gcnew System::Windows::Forms::Label());
			this->l8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 2501;
			this->timer1->Tick += gcnew System::EventHandler(this, &Graph::timer1_Tick);
			// 
			// txtFrom
			// 
			this->txtFrom->Location = System::Drawing::Point(247, 476);
			this->txtFrom->Name = L"txtFrom";
			this->txtFrom->Size = System::Drawing::Size(100, 20);
			this->txtFrom->TabIndex = 0;
			this->txtFrom->TextChanged += gcnew System::EventHandler(this, &Graph::txtFrom_TextChanged);
			// 
			// l1
			// 
			this->l1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l1->Location = System::Drawing::Point(538, 25);
			this->l1->Name = L"l1";
			this->l1->Size = System::Drawing::Size(30, 30);
			this->l1->TabIndex = 1;
			this->l1->Text = L"1";
			this->l1->Visible = false;
			this->l1->Click += gcnew System::EventHandler(this, &Graph::l1_Click);
			// 
			// l2
			// 
			this->l2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l2->Location = System::Drawing::Point(617, 155);
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size(30, 30);
			this->l2->TabIndex = 2;
			this->l2->Text = L"2";
			this->l2->Visible = false;
			this->l2->Click += gcnew System::EventHandler(this, &Graph::l2_Click);
			// 
			// l3
			// 
			this->l3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l3->Location = System::Drawing::Point(414, 185);
			this->l3->Name = L"l3";
			this->l3->Size = System::Drawing::Size(30, 30);
			this->l3->TabIndex = 3;
			this->l3->Text = L"3";
			this->l3->Visible = false;
			this->l3->Click += gcnew System::EventHandler(this, &Graph::l3_Click);
			// 
			// l4
			// 
			this->l4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l4->Location = System::Drawing::Point(225, 266);
			this->l4->Name = L"l4";
			this->l4->Size = System::Drawing::Size(30, 30);
			this->l4->TabIndex = 4;
			this->l4->Text = L"4";
			this->l4->Visible = false;
			this->l4->Click += gcnew System::EventHandler(this, &Graph::l4_Click);
			// 
			// txtTo
			// 
			this->txtTo->Location = System::Drawing::Point(418, 476);
			this->txtTo->Name = L"txtTo";
			this->txtTo->Size = System::Drawing::Size(100, 20);
			this->txtTo->TabIndex = 5;
			this->txtTo->Visible = false;
			this->txtTo->TextChanged += gcnew System::EventHandler(this, &Graph::txtTo_TextChanged);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(572, 476);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 41);
			this->btnAdd->TabIndex = 6;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Graph::btnAdd_Click);
			// 
			// btnDFS
			// 
			this->btnDFS->Location = System::Drawing::Point(681, 476);
			this->btnDFS->Name = L"btnDFS";
			this->btnDFS->Size = System::Drawing::Size(75, 41);
			this->btnDFS->TabIndex = 7;
			this->btnDFS->Text = L"DFS";
			this->btnDFS->UseVisualStyleBackColor = true;
			this->btnDFS->Visible = false;
			this->btnDFS->Click += gcnew System::EventHandler(this, &Graph::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 476);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Enter number of Nodes";
			this->label1->Click += gcnew System::EventHandler(this, &Graph::label1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(243, 510);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Edge Node 1";
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &Graph::label2_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(414, 510);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Edge Node 2";
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &Graph::label3_Click);
			// 
			// btnPause
			// 
			this->btnPause->Location = System::Drawing::Point(789, 476);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(75, 41);
			this->btnPause->TabIndex = 11;
			this->btnPause->Text = L"Pause";
			this->btnPause->UseVisualStyleBackColor = true;
			this->btnPause->Visible = false;
			this->btnPause->Click += gcnew System::EventHandler(this, &Graph::btnPause_Click);
			// 
			// btnDecrease
			// 
			this->btnDecrease->Location = System::Drawing::Point(891, 476);
			this->btnDecrease->Name = L"btnDecrease";
			this->btnDecrease->Size = System::Drawing::Size(75, 41);
			this->btnDecrease->TabIndex = 12;
			this->btnDecrease->Text = L"Decrease Speed";
			this->btnDecrease->UseVisualStyleBackColor = true;
			this->btnDecrease->Visible = false;
			this->btnDecrease->Click += gcnew System::EventHandler(this, &Graph::btnDecrease_Click);
			// 
			// btnIncrease
			// 
			this->btnIncrease->Location = System::Drawing::Point(993, 476);
			this->btnIncrease->Name = L"btnIncrease";
			this->btnIncrease->Size = System::Drawing::Size(75, 41);
			this->btnIncrease->TabIndex = 13;
			this->btnIncrease->Text = L"Increase Speed";
			this->btnIncrease->UseVisualStyleBackColor = true;
			this->btnIncrease->Visible = false;
			this->btnIncrease->Click += gcnew System::EventHandler(this, &Graph::btnIncrease_Click);
			// 
			// l5
			// 
			this->l5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l5->Location = System::Drawing::Point(726, 290);
			this->l5->Name = L"l5";
			this->l5->Size = System::Drawing::Size(30, 30);
			this->l5->TabIndex = 14;
			this->l5->Text = L"5";
			this->l5->Visible = false;
			// 
			// l6
			// 
			this->l6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l6->Location = System::Drawing::Point(488, 305);
			this->l6->Name = L"l6";
			this->l6->Size = System::Drawing::Size(30, 30);
			this->l6->TabIndex = 15;
			this->l6->Text = L"6";
			this->l6->Visible = false;
			// 
			// l7
			// 
			this->l7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l7->Location = System::Drawing::Point(860, 145);
			this->l7->Name = L"l7";
			this->l7->Size = System::Drawing::Size(30, 30);
			this->l7->TabIndex = 16;
			this->l7->Text = L"7";
			this->l7->Visible = false;
			// 
			// l8
			// 
			this->l8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l8->Location = System::Drawing::Point(243, 69);
			this->l8->Name = L"l8";
			this->l8->Size = System::Drawing::Size(30, 30);
			this->l8->TabIndex = 17;
			this->l8->Text = L"8";
			this->l8->Visible = false;
			// 
			// Graph
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->l8);
			this->Controls->Add(this->l7);
			this->Controls->Add(this->l6);
			this->Controls->Add(this->l5);
			this->Controls->Add(this->btnIncrease);
			this->Controls->Add(this->btnDecrease);
			this->Controls->Add(this->btnPause);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnDFS);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtTo);
			this->Controls->Add(this->l4);
			this->Controls->Add(this->l3);
			this->Controls->Add(this->l2);
			this->Controls->Add(this->l1);
			this->Controls->Add(this->txtFrom);
			this->Name = L"Graph";
			this->Size = System::Drawing::Size(1088, 631);
			this->Load += gcnew System::EventHandler(this, &Graph::Graph_Load);
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

	  void reset(){
			n=0;
			m=0;
			addcounter=0;
			check=0;
			for(int i=0;i<100;i++){
				vis[i]=0;	
				adj[i].clear();
			}
	  
	  }

		void dfsUtil(int s){
			vis[s]=1;
			store.push_back(std::make_pair(s,1));
			for(int i=0;i<adj[s].size();i++){
				if(vis[adj[s][i]]==0){
					dfsUtil(adj[s][i]);
				}
			}
			store.push_back(std::make_pair(s,0));
		}

		void dfs(){
			for(int i=1;i<=n;i++){
				if(vis[i]==0){
					dfsUtil(i);
				}
			}
		
		}

	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
				 addcounter++;
				 if(addcounter==1){
						try{
						   n=Convert::ToInt32(txtFrom->Text);
						   for(int i=1;i<=n;i++){
								lvisible(i,1);
						   }
						   label1->Text="Enter the Number of Edges";
						 }catch(...){
						   MessageBox::Show("Number of nodes should be Interger Only");
						   addcounter--;
						 }
				 }
			     else if(addcounter==2){
						try{
						   m=Convert::ToInt32(txtFrom->Text);
						   label1->Text="Enter the Edges";
						   txtTo->Visible=true;
						   label1->Visible=true;
						   label2->Visible=true;
						   label3->Visible=true;

						 }catch(...){
						   MessageBox::Show("Please Enter the Number of Edges as Integer Only");
						   addcounter--;
						}
					
				 }else if(addcounter>=3 && addcounter<=m+2){
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
						 
						 if(p==1 && (a>n || b>n)){
							MessageBox::Show("Node Id's should be less than number of Nodes");
							addcounter--;
						 }else if(p==1 && a==b){
							MessageBox::Show("No Self Loop Allowed");
							addcounter--;

						 }else if(p==1){
							adj[a].push_back(b);
							adj[b].push_back(a);
							MessageBox::Show("Edge Entered Succesfully");
						 }else{
							addcounter--;
						 }

						 if(addcounter==m+2){
							label1->Text="Graph entered Successfully";
							txtFrom->Visible=false;
							txtTo->Visible=false;
							btnAdd->Visible=false;
							btnDFS->Visible=true;
							label2->Visible=false;
							label3->Visible=false;
							btnDecrease->Visible=true;
							btnIncrease->Visible=true;
							btnPause->Visible=true;
							check=1;
						 }
				 
				 }else{
						 MessageBox::Show("Graph has been already entered Successfully");
					
				 }


				 
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(check==0){
				 MessageBox::Show("Enter the Graph First");
			 }else{
				 for(int i=1;i<=n;i++){
					 colour(i,0);
					 vis[i]=0;
				 }
				 store.clear();
				 t1=-1;
				 dfs();
			     timer1->Enabled=true;
			 }
				 
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				t1++;
				if(t1==store.size()){
					timer1->Enabled=false;
				}else{
					int x=store[t1].first;
					int y=store[t1].second;
					colour(x,y);
				}

		 }

private: System::Void Graph_Load(System::Object^  sender, System::EventArgs^  e) {
				reset();
		 }
private: System::Void btnPause_Click(System::Object^  sender, System::EventArgs^  e) {
			 pause++;
			 if(pause%2==1){
				timer1->Enabled=false;
			 }else{
				timer1->Enabled=true;
			 }
		 }
private: System::Void btnIncrease_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(timer1->Interval>=500)timer1->Interval-=500;
		 }
private: System::Void btnDecrease_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Interval+=500;
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void txtTo_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void l4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void l3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void l2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void l1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void txtFrom_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
