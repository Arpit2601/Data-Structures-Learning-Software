#pragma once

#include <utility> 
#include <vector>
#include <string>
#include <algorithm>

namespace{

	//************global variables************//
	int scnt=0,scntt=0,scntp;
	int stcnt=-2,stcnt2=0;  //timer_tick counters
	int sa,sb=1;
	int sarr[20];  //store the input form
	int sbrr[20];   //in the sorting functions
	int scrr[20];  //in the timer1_tick
	int salgo=0;   //to decide in timer1_tick which sorting algo it is
	std::vector<std::pair<int,int> > svpp;
	std::vector<std::pair<std::pair<int,int> ,int> > sivpp;
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
	/// Summary for SelectionSort
	/// </summary>
	public ref class SelectionSort : public System::Windows::Forms::UserControl
	{
	public:
		SelectionSort(void)
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
		~SelectionSort()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnDecreaseSpeed;
	protected: 
	private: System::Windows::Forms::Button^  btnIncreaseSpeed;
	private: System::Windows::Forms::Button^  btnReset;
	private: System::Windows::Forms::Button^  btnPause;
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  p15;
	private: System::Windows::Forms::PictureBox^  p14;
	private: System::Windows::Forms::PictureBox^  p13;
	private: System::Windows::Forms::PictureBox^  p12;
	private: System::Windows::Forms::PictureBox^  p11;
	private: System::Windows::Forms::PictureBox^  p10;
	private: System::Windows::Forms::PictureBox^  p9;
	private: System::Windows::Forms::PictureBox^  p8;
	private: System::Windows::Forms::PictureBox^  p7;
	private: System::Windows::Forms::PictureBox^  p6;
	private: System::Windows::Forms::PictureBox^  p5;
	private: System::Windows::Forms::PictureBox^  p4;
	private: System::Windows::Forms::PictureBox^  p3;
	private: System::Windows::Forms::PictureBox^  p2;
	private: System::Windows::Forms::PictureBox^  p1;
	private: System::Windows::Forms::Label^  l1;
	private: System::Windows::Forms::Label^  l14;
	private: System::Windows::Forms::Label^  l15;
	private: System::Windows::Forms::Label^  l13;
	private: System::Windows::Forms::Label^  l12;
	private: System::Windows::Forms::Label^  l11;
	private: System::Windows::Forms::Label^  l9;
	private: System::Windows::Forms::Label^  l10;
	private: System::Windows::Forms::Label^  l8;
	private: System::Windows::Forms::Label^  l7;
	private: System::Windows::Forms::Label^  l6;
	private: System::Windows::Forms::Label^  l4;
	private: System::Windows::Forms::Label^  l5;
	private: System::Windows::Forms::Label^  l3;
	private: System::Windows::Forms::Label^  l2;
	private: System::Windows::Forms::Button^  btnSS;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SelectionSort::typeid));
			this->btnDecreaseSpeed = (gcnew System::Windows::Forms::Button());
			this->btnIncreaseSpeed = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->p15 = (gcnew System::Windows::Forms::PictureBox());
			this->p14 = (gcnew System::Windows::Forms::PictureBox());
			this->p13 = (gcnew System::Windows::Forms::PictureBox());
			this->p12 = (gcnew System::Windows::Forms::PictureBox());
			this->p11 = (gcnew System::Windows::Forms::PictureBox());
			this->p10 = (gcnew System::Windows::Forms::PictureBox());
			this->p9 = (gcnew System::Windows::Forms::PictureBox());
			this->p8 = (gcnew System::Windows::Forms::PictureBox());
			this->p7 = (gcnew System::Windows::Forms::PictureBox());
			this->p6 = (gcnew System::Windows::Forms::PictureBox());
			this->p5 = (gcnew System::Windows::Forms::PictureBox());
			this->p4 = (gcnew System::Windows::Forms::PictureBox());
			this->p3 = (gcnew System::Windows::Forms::PictureBox());
			this->p2 = (gcnew System::Windows::Forms::PictureBox());
			this->p1 = (gcnew System::Windows::Forms::PictureBox());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->l14 = (gcnew System::Windows::Forms::Label());
			this->l15 = (gcnew System::Windows::Forms::Label());
			this->l13 = (gcnew System::Windows::Forms::Label());
			this->l12 = (gcnew System::Windows::Forms::Label());
			this->l11 = (gcnew System::Windows::Forms::Label());
			this->l9 = (gcnew System::Windows::Forms::Label());
			this->l10 = (gcnew System::Windows::Forms::Label());
			this->l8 = (gcnew System::Windows::Forms::Label());
			this->l7 = (gcnew System::Windows::Forms::Label());
			this->l6 = (gcnew System::Windows::Forms::Label());
			this->l4 = (gcnew System::Windows::Forms::Label());
			this->l5 = (gcnew System::Windows::Forms::Label());
			this->l3 = (gcnew System::Windows::Forms::Label());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->btnSS = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnDecreaseSpeed
			// 
			this->btnDecreaseSpeed->Location = System::Drawing::Point(798, 467);
			this->btnDecreaseSpeed->Name = L"btnDecreaseSpeed";
			this->btnDecreaseSpeed->Size = System::Drawing::Size(75, 41);
			this->btnDecreaseSpeed->TabIndex = 51;
			this->btnDecreaseSpeed->Text = L"Decrease Speed";
			this->btnDecreaseSpeed->UseVisualStyleBackColor = true;
			this->btnDecreaseSpeed->Click += gcnew System::EventHandler(this, &SelectionSort::btnDecreaseSpeed_Click);
			// 
			// btnIncreaseSpeed
			// 
			this->btnIncreaseSpeed->Location = System::Drawing::Point(674, 468);
			this->btnIncreaseSpeed->Name = L"btnIncreaseSpeed";
			this->btnIncreaseSpeed->Size = System::Drawing::Size(75, 41);
			this->btnIncreaseSpeed->TabIndex = 50;
			this->btnIncreaseSpeed->Text = L"Increase Speed";
			this->btnIncreaseSpeed->UseVisualStyleBackColor = true;
			this->btnIncreaseSpeed->Click += gcnew System::EventHandler(this, &SelectionSort::btnIncreaseSpeed_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(931, 468);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(75, 41);
			this->btnReset->TabIndex = 49;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &SelectionSort::btnReset_Click);
			// 
			// btnPause
			// 
			this->btnPause->Location = System::Drawing::Point(540, 467);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(75, 41);
			this->btnPause->TabIndex = 48;
			this->btnPause->Text = L"Pause";
			this->btnPause->UseVisualStyleBackColor = true;
			this->btnPause->Click += gcnew System::EventHandler(this, &SelectionSort::btnPause_Click);
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(101, 478);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(100, 20);
			this->txt1->TabIndex = 47;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(299, 468);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 40);
			this->btnAdd->TabIndex = 46;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &SelectionSort::btnAdd_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->p15);
			this->panel1->Controls->Add(this->p14);
			this->panel1->Controls->Add(this->p13);
			this->panel1->Controls->Add(this->p12);
			this->panel1->Controls->Add(this->p11);
			this->panel1->Controls->Add(this->p10);
			this->panel1->Controls->Add(this->p9);
			this->panel1->Controls->Add(this->p8);
			this->panel1->Controls->Add(this->p7);
			this->panel1->Controls->Add(this->p6);
			this->panel1->Controls->Add(this->p5);
			this->panel1->Controls->Add(this->p4);
			this->panel1->Controls->Add(this->p3);
			this->panel1->Controls->Add(this->p2);
			this->panel1->Controls->Add(this->p1);
			this->panel1->Controls->Add(this->l1);
			this->panel1->Controls->Add(this->l14);
			this->panel1->Controls->Add(this->l15);
			this->panel1->Controls->Add(this->l13);
			this->panel1->Controls->Add(this->l12);
			this->panel1->Controls->Add(this->l11);
			this->panel1->Controls->Add(this->l9);
			this->panel1->Controls->Add(this->l10);
			this->panel1->Controls->Add(this->l8);
			this->panel1->Controls->Add(this->l7);
			this->panel1->Controls->Add(this->l6);
			this->panel1->Controls->Add(this->l4);
			this->panel1->Controls->Add(this->l5);
			this->panel1->Controls->Add(this->l3);
			this->panel1->Controls->Add(this->l2);
			this->panel1->Location = System::Drawing::Point(25, 121);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1038, 200);
			this->panel1->TabIndex = 45;
			// 
			// p15
			// 
			this->p15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p15.Image")));
			this->p15->Location = System::Drawing::Point(961, 43);
			this->p15->Name = L"p15";
			this->p15->Size = System::Drawing::Size(31, 38);
			this->p15->TabIndex = 50;
			this->p15->TabStop = false;
			this->p15->Visible = false;
			// 
			// p14
			// 
			this->p14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p14.Image")));
			this->p14->Location = System::Drawing::Point(894, 43);
			this->p14->Name = L"p14";
			this->p14->Size = System::Drawing::Size(31, 38);
			this->p14->TabIndex = 49;
			this->p14->TabStop = false;
			this->p14->Visible = false;
			// 
			// p13
			// 
			this->p13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p13.Image")));
			this->p13->Location = System::Drawing::Point(827, 43);
			this->p13->Name = L"p13";
			this->p13->Size = System::Drawing::Size(31, 38);
			this->p13->TabIndex = 48;
			this->p13->TabStop = false;
			this->p13->Visible = false;
			// 
			// p12
			// 
			this->p12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p12.Image")));
			this->p12->Location = System::Drawing::Point(760, 43);
			this->p12->Name = L"p12";
			this->p12->Size = System::Drawing::Size(31, 38);
			this->p12->TabIndex = 47;
			this->p12->TabStop = false;
			this->p12->Visible = false;
			// 
			// p11
			// 
			this->p11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p11.Image")));
			this->p11->Location = System::Drawing::Point(693, 43);
			this->p11->Name = L"p11";
			this->p11->Size = System::Drawing::Size(31, 38);
			this->p11->TabIndex = 46;
			this->p11->TabStop = false;
			this->p11->Visible = false;
			// 
			// p10
			// 
			this->p10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p10.Image")));
			this->p10->Location = System::Drawing::Point(626, 43);
			this->p10->Name = L"p10";
			this->p10->Size = System::Drawing::Size(31, 38);
			this->p10->TabIndex = 45;
			this->p10->TabStop = false;
			this->p10->Visible = false;
			// 
			// p9
			// 
			this->p9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p9.Image")));
			this->p9->Location = System::Drawing::Point(559, 43);
			this->p9->Name = L"p9";
			this->p9->Size = System::Drawing::Size(31, 38);
			this->p9->TabIndex = 44;
			this->p9->TabStop = false;
			this->p9->Visible = false;
			// 
			// p8
			// 
			this->p8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p8.Image")));
			this->p8->Location = System::Drawing::Point(492, 43);
			this->p8->Name = L"p8";
			this->p8->Size = System::Drawing::Size(31, 38);
			this->p8->TabIndex = 43;
			this->p8->TabStop = false;
			this->p8->Visible = false;
			// 
			// p7
			// 
			this->p7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p7.Image")));
			this->p7->Location = System::Drawing::Point(425, 43);
			this->p7->Name = L"p7";
			this->p7->Size = System::Drawing::Size(31, 38);
			this->p7->TabIndex = 42;
			this->p7->TabStop = false;
			this->p7->Visible = false;
			// 
			// p6
			// 
			this->p6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p6.Image")));
			this->p6->Location = System::Drawing::Point(358, 43);
			this->p6->Name = L"p6";
			this->p6->Size = System::Drawing::Size(31, 38);
			this->p6->TabIndex = 41;
			this->p6->TabStop = false;
			this->p6->Visible = false;
			// 
			// p5
			// 
			this->p5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p5.Image")));
			this->p5->Location = System::Drawing::Point(291, 43);
			this->p5->Name = L"p5";
			this->p5->Size = System::Drawing::Size(31, 38);
			this->p5->TabIndex = 40;
			this->p5->TabStop = false;
			this->p5->Visible = false;
			// 
			// p4
			// 
			this->p4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p4.Image")));
			this->p4->Location = System::Drawing::Point(224, 43);
			this->p4->Name = L"p4";
			this->p4->Size = System::Drawing::Size(31, 38);
			this->p4->TabIndex = 39;
			this->p4->TabStop = false;
			this->p4->Visible = false;
			// 
			// p3
			// 
			this->p3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p3.Image")));
			this->p3->Location = System::Drawing::Point(157, 43);
			this->p3->Name = L"p3";
			this->p3->Size = System::Drawing::Size(31, 38);
			this->p3->TabIndex = 38;
			this->p3->TabStop = false;
			this->p3->Visible = false;
			// 
			// p2
			// 
			this->p2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p2.Image")));
			this->p2->Location = System::Drawing::Point(90, 43);
			this->p2->Name = L"p2";
			this->p2->Size = System::Drawing::Size(31, 38);
			this->p2->TabIndex = 37;
			this->p2->TabStop = false;
			this->p2->Visible = false;
			// 
			// p1
			// 
			this->p1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1.Image")));
			this->p1->Location = System::Drawing::Point(23, 43);
			this->p1->Name = L"p1";
			this->p1->Size = System::Drawing::Size(31, 38);
			this->p1->TabIndex = 36;
			this->p1->TabStop = false;
			this->p1->Visible = false;
			// 
			// l1
			// 
			this->l1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l1->Location = System::Drawing::Point(20, 84);
			this->l1->Name = L"l1";
			this->l1->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l1->Size = System::Drawing::Size(61, 60);
			this->l1->TabIndex = 23;
			this->l1->Text = L"2";
			// 
			// l14
			// 
			this->l14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l14->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l14->Location = System::Drawing::Point(891, 84);
			this->l14->Name = L"l14";
			this->l14->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l14->Size = System::Drawing::Size(61, 60);
			this->l14->TabIndex = 35;
			this->l14->Text = L"14";
			// 
			// l15
			// 
			this->l15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l15->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l15->Location = System::Drawing::Point(958, 84);
			this->l15->Name = L"l15";
			this->l15->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l15->Size = System::Drawing::Size(61, 60);
			this->l15->TabIndex = 34;
			this->l15->Text = L"15";
			// 
			// l13
			// 
			this->l13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l13->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l13->Location = System::Drawing::Point(824, 84);
			this->l13->Name = L"l13";
			this->l13->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l13->Size = System::Drawing::Size(61, 60);
			this->l13->TabIndex = 33;
			this->l13->Text = L"13";
			// 
			// l12
			// 
			this->l12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l12->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l12->Location = System::Drawing::Point(757, 84);
			this->l12->Name = L"l12";
			this->l12->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l12->Size = System::Drawing::Size(61, 60);
			this->l12->TabIndex = 32;
			this->l12->Text = L"12278";
			// 
			// l11
			// 
			this->l11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l11->Location = System::Drawing::Point(690, 84);
			this->l11->Name = L"l11";
			this->l11->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l11->Size = System::Drawing::Size(61, 60);
			this->l11->TabIndex = 31;
			this->l11->Text = L"11455";
			// 
			// l9
			// 
			this->l9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l9->Location = System::Drawing::Point(556, 84);
			this->l9->Name = L"l9";
			this->l9->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l9->Size = System::Drawing::Size(61, 60);
			this->l9->TabIndex = 30;
			this->l9->Text = L"9";
			// 
			// l10
			// 
			this->l10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l10->Location = System::Drawing::Point(623, 84);
			this->l10->Name = L"l10";
			this->l10->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l10->Size = System::Drawing::Size(61, 60);
			this->l10->TabIndex = 29;
			this->l10->Text = L"10";
			// 
			// l8
			// 
			this->l8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l8->Location = System::Drawing::Point(489, 84);
			this->l8->Name = L"l8";
			this->l8->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l8->Size = System::Drawing::Size(61, 60);
			this->l8->TabIndex = 28;
			this->l8->Text = L"8";
			// 
			// l7
			// 
			this->l7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l7->Location = System::Drawing::Point(422, 84);
			this->l7->Name = L"l7";
			this->l7->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l7->Size = System::Drawing::Size(61, 60);
			this->l7->TabIndex = 27;
			this->l7->Text = L"7";
			// 
			// l6
			// 
			this->l6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l6->Location = System::Drawing::Point(355, 84);
			this->l6->Name = L"l6";
			this->l6->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l6->Size = System::Drawing::Size(61, 60);
			this->l6->TabIndex = 26;
			this->l6->Text = L"6";
			// 
			// l4
			// 
			this->l4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l4->Location = System::Drawing::Point(221, 84);
			this->l4->Name = L"l4";
			this->l4->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l4->Size = System::Drawing::Size(61, 60);
			this->l4->TabIndex = 25;
			this->l4->Text = L"4";
			// 
			// l5
			// 
			this->l5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l5->Location = System::Drawing::Point(288, 84);
			this->l5->Name = L"l5";
			this->l5->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l5->Size = System::Drawing::Size(61, 60);
			this->l5->TabIndex = 24;
			this->l5->Text = L"5";
			// 
			// l3
			// 
			this->l3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l3->Location = System::Drawing::Point(154, 84);
			this->l3->Name = L"l3";
			this->l3->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l3->Size = System::Drawing::Size(61, 60);
			this->l3->TabIndex = 23;
			this->l3->Text = L"3";
			// 
			// l2
			// 
			this->l2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l2->Location = System::Drawing::Point(87, 84);
			this->l2->Name = L"l2";
			this->l2->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l2->Size = System::Drawing::Size(61, 60);
			this->l2->TabIndex = 22;
			this->l2->Text = L"2";
			// 
			// btnSS
			// 
			this->btnSS->Location = System::Drawing::Point(421, 467);
			this->btnSS->Name = L"btnSS";
			this->btnSS->Size = System::Drawing::Size(75, 41);
			this->btnSS->TabIndex = 52;
			this->btnSS->Text = L"Selection Sort";
			this->btnSS->UseVisualStyleBackColor = true;
			this->btnSS->Click += gcnew System::EventHandler(this, &SelectionSort::btnSS_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 2501;
			this->timer1->Tick += gcnew System::EventHandler(this, &SelectionSort::timer1_Tick);
			// 
			// SelectionSort
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btnSS);
			this->Controls->Add(this->btnDecreaseSpeed);
			this->Controls->Add(this->btnIncreaseSpeed);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnPause);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->panel1);
			this->Name = L"SelectionSort";
			this->Size = System::Drawing::Size(1088, 631);
			this->Load += gcnew System::EventHandler(this, &SelectionSort::SelectionSort_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p1))->EndInit();
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
				if(c==3)l1->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 2:
				if(c==0)l2->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l2->BackColor=System::Drawing::Color::Pink;
				if(c==2)l2->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l2->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 3:
				if(c==0)l3->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l3->BackColor=System::Drawing::Color::Pink;
				if(c==2)l3->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l3->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 4:
				if(c==0)l4->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l4->BackColor=System::Drawing::Color::Pink;
				if(c==2)l4->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l4->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 5:
				if(c==0)l5->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l5->BackColor=System::Drawing::Color::Pink;
				if(c==2)l5->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l5->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 6:
				if(c==0)l6->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l6->BackColor=System::Drawing::Color::Pink;
				if(c==2)l6->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l6->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 7:
				if(c==0)l7->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l7->BackColor=System::Drawing::Color::Pink;
				if(c==2)l7->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l7->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 8:
				if(c==0)l8->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l8->BackColor=System::Drawing::Color::Pink;
				if(c==2)l8->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l8->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 9:
				if(c==0)l9->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l9->BackColor=System::Drawing::Color::Pink;
				if(c==2)l9->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l9->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 10:
				if(c==0)l10->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l10->BackColor=System::Drawing::Color::Pink;
				if(c==2)l10->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l10->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 11:
				if(c==0)l11->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l11->BackColor=System::Drawing::Color::Pink;
				if(c==2)l11->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l11->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 12:
				if(c==0)l12->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l12->BackColor=System::Drawing::Color::Pink;
				if(c==2)l12->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l12->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 13:
				if(c==0)l13->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l13->BackColor=System::Drawing::Color::Pink;
				if(c==2)l13->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l13->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 14:
				if(c==0)l14->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l14->BackColor=System::Drawing::Color::Pink;
				if(c==2)l14->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l14->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 15:
				if(c==0)l15->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l15->BackColor=System::Drawing::Color::Pink;
				if(c==2)l15->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l15->BackColor=System::Drawing::Color::SkyBlue;
				break;
			default:
				break;
			
		  }
	  }

	  //assign a value to a label
	  void value(int l,int v){
		switch(l){
			case 1:
				l1->Text = Convert::ToString(v);
				break;
			case 2:
				l2->Text = Convert::ToString(v);
				break;
			case 3:
				l3->Text = Convert::ToString(v);
				break;
			case 4:
				l4->Text = Convert::ToString(v);
				break;
			case 5:
				l5->Text = Convert::ToString(v);
				break;
			case 6:
				l6->Text = Convert::ToString(v);
				break;
			case 7:
				l7->Text = Convert::ToString(v);
				break;
			case 8:
				l8->Text = Convert::ToString(v);
				break;
			case 9:
				l9->Text = Convert::ToString(v);
				break;
			case 10:
				l10->Text = Convert::ToString(v);
				break;
			case 11:
				l11->Text = Convert::ToString(v);
				break;
			case 12:
				l12->Text = Convert::ToString(v);
				break;
			case 13:
				l13->Text = Convert::ToString(v);
				break;
			case 14:
				l14->Text = Convert::ToString(v);
				break;
			case 15:
				l15->Text = Convert::ToString(v);
				break;
			default:
				break;
		}
	  }

	  //making arrows visible
	  void arrow(int p,int i){
		switch(p){
			case 1:
				if(i==0)p1->Visible=false;
				if(i==1)p1->Visible=true;
				break;
			case 2:
				if(i==0)p2->Visible=false;
				if(i==1)p2->Visible=true;
				break;
			case 3:
				if(i==0)p3->Visible=false;
				if(i==1)p3->Visible=true;
				break;
			case 4:
				if(i==0)p4->Visible=false;
				if(i==1)p4->Visible=true;
				break;
			case 5:
				if(i==0)p5->Visible=false;
				if(i==1)p5->Visible=true;
				break;
			case 6:
				if(i==0)p6->Visible=false;
				if(i==1)p6->Visible=true;
				break;
			case 7:
				if(i==0)p7->Visible=false;
				if(i==1)p7->Visible=true;
				break;
			case 8:
				if(i==0)p8->Visible=false;
				if(i==1)p8->Visible=true;
				break;
			case 9:
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
				break;
			default:
				break;
		}
	  }

	     //hiding the labels
		 void hideLabels(){
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
			 l13->Visible=false;
			 l14->Visible=false;
			 l15->Visible=false;
		 }

		 //Selection Sort Algorithm
	   void selectionSort(){
			salgo=2;
		    svpp.clear();
			for(int i=1;i<=scnt;i++){
			value(i,sarr[i]);
			colour(i,0);
		    }
		    for(int i=1;i<=scnt;i++){
			  sbrr[i]=sarr[i];
			  scrr[i]=sarr[i];
		    }	

			int i, j, min_idx; 
			for (i = 1; i <= scnt-1; i++){ 
				min_idx = i; 
				for (j = i+1; j <=scnt; j++){ 
					if (sbrr[j] < sbrr[min_idx]){
						min_idx = j; 
					}
				}
				std::swap(sbrr[min_idx], sbrr[i]);
				svpp.push_back(std::make_pair(min_idx,i));
			} 
	  }

	private: System::Void SelectionSort_Load(System::Object^  sender, System::EventArgs^  e) {
				 hideLabels();
				 scnt=0;
			 }
private: System::Void btnSS_Click(System::Object^  sender, System::EventArgs^  e) {
					timer1->Interval=2501;
					if(scnt==0){
						MessageBox::Show("Please Enter Some Input");
					}else{
						selectionSort();
						stcnt=-2;
						timer1->Enabled=true;

					}
		 }
private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {

		 scnt++;
         scntt=0;
         int p=1;
         try{
           sa=Convert::ToInt32(txt1->Text);
         }catch(...){
           MessageBox::Show("Please enter an Integer only");
           scnt--;
           p=0;
         }


         if(p)switch (scnt){
          case 1:
            try{
              l1->Text=txt1->Text;
              sarr[scnt]=sa;
              l1->Visible=true;
              l1->BackColor=System::Drawing::Color::White;
            }catch(...){
              MessageBox::Show("Please enter an Integer only");
              scnt--;
            }
            break;
          case 2:
            try{
              l2->Text=txt1->Text;
              sarr[scnt]=sa;
              l2->Visible=true;
              l2->BackColor=System::Drawing::Color::White;
            }catch(...){
              MessageBox::Show("Please enter an Integer only");
              scnt--;
            }
            break;
          case 3:
            try{
              l3->Text=txt1->Text;
              sarr[scnt]=sa;
              l3->Visible=true;
              l3->BackColor=System::Drawing::Color::White;
            }catch(...){
              MessageBox::Show("Please enter an Integer only");
              scnt--;
            }
            break;
          case 4:
            try{
              l4->Text=txt1->Text;
              sarr[scnt]=sa;
              l4->Visible=true;
              l4->BackColor=System::Drawing::Color::White;
            }catch(...){
              MessageBox::Show("Please enter an Integer only");
              scnt--;
            }
            break;
          case 5:
            try{
              l5->Text=txt1->Text;
              sarr[scnt]=sa;
              l5->Visible=true;
              l5->BackColor=System::Drawing::Color::White;
            }catch(...){
              MessageBox::Show("Please enter an Integer only");
              scnt--;
            }
            break;
          case 6:
            try{
              l6->Text=txt1->Text;
              sarr[scnt]=sa;
              l6->Visible=true;
              l6->BackColor=System::Drawing::Color::White;
            }catch(...){
              MessageBox::Show("Please enter an Integer only");
              scnt--;
            }
            break;
          case 7:
            try{
              l7->Text=txt1->Text;
              sarr[scnt]=sa;
              l7->Visible=true;
              l7->BackColor=System::Drawing::Color::White;
            }catch(...){
              MessageBox::Show("Please enter an Integer only");
              scnt--;
            }
            break;
          case 8:
            try{
              l8->Text=txt1->Text;
              sarr[scnt]=sa;
              l8->Visible=true;
              l8->BackColor=System::Drawing::Color::White;
            }catch(...){
              MessageBox::Show("Please enter an Integer only");
              scnt--;
            }
            break;
          case 9:
            try{
              l9->Text=txt1->Text;
              sarr[scnt]=sa;
              l9->Visible=true;
              l9->BackColor=System::Drawing::Color::White;
            }catch(...){
              MessageBox::Show("Please enter an Integer only");
              scnt--;
            }
            break;
          case 10:
            try{
              l10->Text=txt1->Text;
              sarr[scnt]=sa;
              l10->Visible=true;
              l10->BackColor=System::Drawing::Color::White;
            }catch(...){
              MessageBox::Show("Please enter an Integer only");
              scnt--;
            }
            break;
          case 11:
            try{
              l11->Text=txt1->Text;
              sarr[scnt]=sa;
              l11->Visible=true;
              l11->BackColor=System::Drawing::Color::White;
            }catch(...){
              MessageBox::Show("Please enter an Integer only");
              scnt--;
            }
            break;
          case 12:
            try{
              l12->Text=txt1->Text;
              sarr[scnt]=sa;
              l12->Visible=true;
              l12->BackColor=System::Drawing::Color::White;
            }catch(...){
              MessageBox::Show("Please enter an Integer only");
              scnt--;
            }
            break;
          case 13:
            try{
              l13->Text=txt1->Text;
              sarr[scnt]=sa;
              l13->Visible=true;
              l13->BackColor=System::Drawing::Color::White;
            }catch(...){
              MessageBox::Show("Please enter an Integer only");
              scnt--;
            }
            break;
          case 14:
            try{
              l14->Text=txt1->Text;
              sarr[scnt]=sa;
              l14->Visible=true;
              l14->BackColor=System::Drawing::Color::White;
            }catch(...){
              MessageBox::Show("Please enter an Integer only");
              scnt--;
            }
            break;
          case 15:
            try{
              l15->Text=txt1->Text;
              sarr[scnt]=sa;
              l15->Visible=true;
              l15->BackColor=System::Drawing::Color::White;
            }catch(...){
              MessageBox::Show("Please enter an Integer only");
              scnt--;
            }
            break;
          default:
            MessageBox::Show("Maximum Size Reached");
            scnt--;
            break;
         }
         for(int i=1;i<=scnt;i++){
          colour(i,0);
		  arrow(i,0);
         }
         timer1->Enabled=false;
		 }
private: System::Void btnPause_Click(System::Object^  sender, System::EventArgs^  e) {
			 scntp++;
			 if(scntp%2==1){
				timer1->Enabled=false;
			 }else{
				timer1->Enabled=true;
			 }
		 }

private: System::Void btnIncreaseSpeed_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(timer1->Interval>=500)timer1->Interval-=500;
		 }
private: System::Void btnDecreaseSpeed_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Interval+=500;
		 }
private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
			 scnt=0;
			 hideLabels();
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			    int n=svpp.size();
				int a,b;
				stcnt++;

				if(stcnt==n){
					timer1->Enabled=false;
					for(int i=1;i<=15;i++){
						colour(i,1);
					}

				}
				
				if(stcnt>=0 && stcnt<=n-1){
					a=svpp[stcnt].first;
					b=svpp[stcnt].second;
					value(a,scrr[b]);
					value(b,scrr[a]);
					std::swap(scrr[a],scrr[b]);
				}   
			    
				for(int i=1;i<=15;i++){
					colour(i,0);
					arrow(i,0);
				}
				

				if(stcnt<=n-2){
					int a,b;
					a=svpp[stcnt+1].first;
					b=svpp[stcnt+1].second;
					colour(a,2);
					colour(b,3);
					arrow(a,1);
					arrow(b,1);
			
				}

				for(int i=1;i<=scnt;i++){
						if(scrr[i]==sbrr[i]){
							colour(i,1);
						}else{
							break;
						}
				}


		 }
};
}
