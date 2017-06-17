#pragma once
#include<string>
#include<vector>
#include<iostream>

namespace Project1 {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace std;

	static vector<int> Kolejka;
	static int ekrany[35];

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		static
		int czas = 0;
		int pietro = 0;
		int gdzie_jedziemy = 0;
		int waga = 0;
		int numer_kolejki = 0;
		int ciezar = 0;



	private: System::Windows::Forms::Timer^  Parter;
	private: System::Windows::Forms::TextBox^  Masa;
	private: System::Windows::Forms::Button^  p01;
	private: System::Windows::Forms::Button^  p02;
	private: System::Windows::Forms::Button^  p03;
	private: System::Windows::Forms::Button^  p04;
	private: System::Windows::Forms::MaskedTextBox^  t01;
	private: System::Windows::Forms::MaskedTextBox^  t02;
	private: System::Windows::Forms::MaskedTextBox^  t03;
	private: System::Windows::Forms::MaskedTextBox^  t04;
	private: System::Windows::Forms::MaskedTextBox^  winda0;


	private: System::Windows::Forms::MaskedTextBox^  w1;
	private: System::Windows::Forms::MaskedTextBox^  w2;
	private: System::Windows::Forms::MaskedTextBox^  w3;
	private: System::Windows::Forms::MaskedTextBox^  w4;
	private: System::Windows::Forms::MaskedTextBox^  w0;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  p10;
	private: System::Windows::Forms::Button^  p12;
	private: System::Windows::Forms::Button^  p13;
	private: System::Windows::Forms::Button^  p14;
	private: System::Windows::Forms::Button^  p20;
	private: System::Windows::Forms::Button^  p21;
	private: System::Windows::Forms::Button^  p23;
	private: System::Windows::Forms::Button^  p24;
	private: System::Windows::Forms::Button^  p30;
	private: System::Windows::Forms::Button^  p31;
	private: System::Windows::Forms::Button^  p32;
	private: System::Windows::Forms::Button^  p34;
	private: System::Windows::Forms::Button^  p40;
	private: System::Windows::Forms::Button^  p41;
	private: System::Windows::Forms::Button^  p42;
	private: System::Windows::Forms::Button^  p43;
	private: System::Windows::Forms::MaskedTextBox^  t10;
	private: System::Windows::Forms::MaskedTextBox^  t12;
	private: System::Windows::Forms::MaskedTextBox^  t13;
	private: System::Windows::Forms::MaskedTextBox^  t14;
	private: System::Windows::Forms::MaskedTextBox^  t20;
	private: System::Windows::Forms::MaskedTextBox^  t21;
	private: System::Windows::Forms::MaskedTextBox^  t23;
	private: System::Windows::Forms::MaskedTextBox^  t24;
	private: System::Windows::Forms::MaskedTextBox^  t30;
	private: System::Windows::Forms::MaskedTextBox^  t31;
	private: System::Windows::Forms::MaskedTextBox^  t32;
	private: System::Windows::Forms::MaskedTextBox^  t34;
	private: System::Windows::Forms::MaskedTextBox^  t40;
	private: System::Windows::Forms::MaskedTextBox^  t41;
	private: System::Windows::Forms::MaskedTextBox^  t42;
	private: System::Windows::Forms::MaskedTextBox^  t43;
	private: System::Windows::Forms::MaskedTextBox^  r0;
	private: System::Windows::Forms::MaskedTextBox^  r1;
	private: System::Windows::Forms::MaskedTextBox^  r2;
	private: System::Windows::Forms::MaskedTextBox^  r3;
	private: System::Windows::Forms::MaskedTextBox^  r4;
	private: System::Windows::Forms::Timer^  Liczniki;
	private: System::Windows::Forms::Timer^  postoj;
	private: System::Windows::Forms::Timer^  biernie;
	private: System::Windows::Forms::MaskedTextBox^  winda1;
	private: System::Windows::Forms::MaskedTextBox^  winda2;
	private: System::Windows::Forms::MaskedTextBox^  winda3;
	private: System::Windows::Forms::MaskedTextBox^  winda4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::Label^  label53;
	private: System::ComponentModel::IContainer^  components;

	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  ekran_pietro;
	protected:

	protected:

	protected:


	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Timer^  zegar_gora;



	private: System::Windows::Forms::Timer^  zegar_dol;

	private: System::Windows::Forms::PictureBox^  ludzik;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->zegar_gora = (gcnew System::Windows::Forms::Timer(this->components));
			this->ludzik = (gcnew System::Windows::Forms::PictureBox());
			this->zegar_dol = (gcnew System::Windows::Forms::Timer(this->components));
			this->ekran_pietro = (gcnew System::Windows::Forms::TextBox());
			this->Parter = (gcnew System::Windows::Forms::Timer(this->components));
			this->Masa = (gcnew System::Windows::Forms::TextBox());
			this->p01 = (gcnew System::Windows::Forms::Button());
			this->p02 = (gcnew System::Windows::Forms::Button());
			this->p03 = (gcnew System::Windows::Forms::Button());
			this->p04 = (gcnew System::Windows::Forms::Button());
			this->t01 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t02 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t03 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t04 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->winda0 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->w1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->w2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->w3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->w4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->w0 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->p10 = (gcnew System::Windows::Forms::Button());
			this->p12 = (gcnew System::Windows::Forms::Button());
			this->p13 = (gcnew System::Windows::Forms::Button());
			this->p14 = (gcnew System::Windows::Forms::Button());
			this->p20 = (gcnew System::Windows::Forms::Button());
			this->p21 = (gcnew System::Windows::Forms::Button());
			this->p23 = (gcnew System::Windows::Forms::Button());
			this->p24 = (gcnew System::Windows::Forms::Button());
			this->p30 = (gcnew System::Windows::Forms::Button());
			this->p31 = (gcnew System::Windows::Forms::Button());
			this->p32 = (gcnew System::Windows::Forms::Button());
			this->p34 = (gcnew System::Windows::Forms::Button());
			this->p40 = (gcnew System::Windows::Forms::Button());
			this->p41 = (gcnew System::Windows::Forms::Button());
			this->p42 = (gcnew System::Windows::Forms::Button());
			this->p43 = (gcnew System::Windows::Forms::Button());
			this->t10 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t12 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t13 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t14 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t20 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t21 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t23 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t24 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t30 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t31 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t32 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t34 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t40 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t41 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t42 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->t43 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->r0 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->r1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->r2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->r3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->r4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Liczniki = (gcnew System::Windows::Forms::Timer(this->components));
			this->postoj = (gcnew System::Windows::Forms::Timer(this->components));
			this->biernie = (gcnew System::Windows::Forms::Timer(this->components));
			this->winda1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->winda2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->winda3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->winda4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ludzik))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(523, 528);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(328, 90);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// zegar_gora
			// 
			this->zegar_gora->Interval = 3;
			this->zegar_gora->Tick += gcnew System::EventHandler(this, &MyForm::zegar_gora_Tick);
			// 
			// ludzik
			// 
			this->ludzik->Location = System::Drawing::Point(0, 0);
			this->ludzik->Name = L"ludzik";
			this->ludzik->Size = System::Drawing::Size(100, 50);
			this->ludzik->TabIndex = 0;
			this->ludzik->TabStop = false;
			// 
			// zegar_dol
			// 
			this->zegar_dol->Interval = 3;
			this->zegar_dol->Tick += gcnew System::EventHandler(this, &MyForm::zegar_dol_Tick);
			// 
			// ekran_pietro
			// 
			this->ekran_pietro->Location = System::Drawing::Point(813, 537);
			this->ekran_pietro->Name = L"ekran_pietro";
			this->ekran_pietro->Size = System::Drawing::Size(29, 20);
			this->ekran_pietro->TabIndex = 6;
			// 
			// Parter
			// 
			this->Parter->Interval = 5000;
			this->Parter->Tick += gcnew System::EventHandler(this, &MyForm::Parter_Tick_1);
			// 
			// Masa
			// 
			this->Masa->Location = System::Drawing::Point(859, 512);
			this->Masa->Name = L"Masa";
			this->Masa->Size = System::Drawing::Size(133, 20);
			this->Masa->TabIndex = 9;
			// 
			// p01
			// 
			this->p01->Location = System::Drawing::Point(12, 452);
			this->p01->Name = L"p01";
			this->p01->Size = System::Drawing::Size(24, 24);
			this->p01->TabIndex = 10;
			this->p01->Text = L"1";
			this->p01->UseVisualStyleBackColor = true;
			this->p01->Click += gcnew System::EventHandler(this, &MyForm::p01_Click);
			// 
			// p02
			// 
			this->p02->Location = System::Drawing::Point(12, 482);
			this->p02->Name = L"p02";
			this->p02->Size = System::Drawing::Size(24, 24);
			this->p02->TabIndex = 11;
			this->p02->Text = L"2";
			this->p02->UseVisualStyleBackColor = true;
			this->p02->Click += gcnew System::EventHandler(this, &MyForm::p02_Click_1);
			// 
			// p03
			// 
			this->p03->Location = System::Drawing::Point(12, 512);
			this->p03->Name = L"p03";
			this->p03->Size = System::Drawing::Size(24, 24);
			this->p03->TabIndex = 12;
			this->p03->Text = L"3";
			this->p03->UseVisualStyleBackColor = true;
			this->p03->Click += gcnew System::EventHandler(this, &MyForm::p03_Click);
			// 
			// p04
			// 
			this->p04->Location = System::Drawing::Point(12, 542);
			this->p04->Name = L"p04";
			this->p04->Size = System::Drawing::Size(24, 24);
			this->p04->TabIndex = 13;
			this->p04->Text = L"4";
			this->p04->UseVisualStyleBackColor = true;
			this->p04->Click += gcnew System::EventHandler(this, &MyForm::p04_Click);
			// 
			// t01
			// 
			this->t01->Location = System::Drawing::Point(114, 512);
			this->t01->Name = L"t01";
			this->t01->Size = System::Drawing::Size(51, 20);
			this->t01->TabIndex = 14;
			// 
			// t02
			// 
			this->t02->Location = System::Drawing::Point(171, 512);
			this->t02->Name = L"t02";
			this->t02->Size = System::Drawing::Size(55, 20);
			this->t02->TabIndex = 15;
			// 
			// t03
			// 
			this->t03->Location = System::Drawing::Point(232, 512);
			this->t03->Name = L"t03";
			this->t03->Size = System::Drawing::Size(55, 20);
			this->t03->TabIndex = 16;
			// 
			// t04
			// 
			this->t04->Location = System::Drawing::Point(293, 512);
			this->t04->Name = L"t04";
			this->t04->Size = System::Drawing::Size(55, 20);
			this->t04->TabIndex = 17;
			// 
			// winda0
			// 
			this->winda0->Location = System::Drawing::Point(563, 582);
			this->winda0->Name = L"winda0";
			this->winda0->Size = System::Drawing::Size(47, 20);
			this->winda0->TabIndex = 18;
			// 
			// w1
			// 
			this->w1->Location = System::Drawing::Point(868, 469);
			this->w1->Name = L"w1";
			this->w1->Size = System::Drawing::Size(116, 20);
			this->w1->TabIndex = 19;
			// 
			// w2
			// 
			this->w2->Location = System::Drawing::Point(388, 347);
			this->w2->Name = L"w2";
			this->w2->Size = System::Drawing::Size(116, 20);
			this->w2->TabIndex = 20;
			// 
			// w3
			// 
			this->w3->Location = System::Drawing::Point(868, 243);
			this->w3->Name = L"w3";
			this->w3->Size = System::Drawing::Size(116, 20);
			this->w3->TabIndex = 21;
			// 
			// w4
			// 
			this->w4->Location = System::Drawing::Point(388, 122);
			this->w4->Name = L"w4";
			this->w4->Size = System::Drawing::Size(116, 20);
			this->w4->TabIndex = 22;
			// 
			// w0
			// 
			this->w0->Location = System::Drawing::Point(388, 582);
			this->w0->Name = L"w0";
			this->w0->Size = System::Drawing::Size(116, 20);
			this->w0->TabIndex = 23;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1335, 637);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// p10
			// 
			this->p10->Location = System::Drawing::Point(1280, 311);
			this->p10->Name = L"p10";
			this->p10->Size = System::Drawing::Size(24, 24);
			this->p10->TabIndex = 24;
			this->p10->Text = L"0";
			this->p10->UseVisualStyleBackColor = true;
			this->p10->Click += gcnew System::EventHandler(this, &MyForm::p10_Click);
			// 
			// p12
			// 
			this->p12->Location = System::Drawing::Point(1280, 341);
			this->p12->Name = L"p12";
			this->p12->Size = System::Drawing::Size(24, 24);
			this->p12->TabIndex = 25;
			this->p12->Text = L"2";
			this->p12->UseVisualStyleBackColor = true;
			this->p12->Click += gcnew System::EventHandler(this, &MyForm::p12_Click);
			// 
			// p13
			// 
			this->p13->Location = System::Drawing::Point(1280, 371);
			this->p13->Name = L"p13";
			this->p13->Size = System::Drawing::Size(24, 24);
			this->p13->TabIndex = 26;
			this->p13->Text = L"3";
			this->p13->UseVisualStyleBackColor = true;
			this->p13->Click += gcnew System::EventHandler(this, &MyForm::p13_Click);
			// 
			// p14
			// 
			this->p14->Location = System::Drawing::Point(1280, 401);
			this->p14->Name = L"p14";
			this->p14->Size = System::Drawing::Size(24, 24);
			this->p14->TabIndex = 27;
			this->p14->Text = L"4";
			this->p14->UseVisualStyleBackColor = true;
			this->p14->Click += gcnew System::EventHandler(this, &MyForm::p14_Click);
			// 
			// p20
			// 
			this->p20->Location = System::Drawing::Point(12, 225);
			this->p20->Name = L"p20";
			this->p20->Size = System::Drawing::Size(24, 24);
			this->p20->TabIndex = 28;
			this->p20->Text = L"0";
			this->p20->UseVisualStyleBackColor = true;
			this->p20->Click += gcnew System::EventHandler(this, &MyForm::p20_Click);
			// 
			// p21
			// 
			this->p21->Location = System::Drawing::Point(12, 255);
			this->p21->Name = L"p21";
			this->p21->Size = System::Drawing::Size(24, 24);
			this->p21->TabIndex = 29;
			this->p21->Text = L"1";
			this->p21->UseVisualStyleBackColor = true;
			this->p21->Click += gcnew System::EventHandler(this, &MyForm::p21_Click);
			// 
			// p23
			// 
			this->p23->Location = System::Drawing::Point(12, 285);
			this->p23->Name = L"p23";
			this->p23->Size = System::Drawing::Size(24, 24);
			this->p23->TabIndex = 30;
			this->p23->Text = L"3";
			this->p23->UseVisualStyleBackColor = true;
			this->p23->Click += gcnew System::EventHandler(this, &MyForm::p23_Click);
			// 
			// p24
			// 
			this->p24->Location = System::Drawing::Point(12, 315);
			this->p24->Name = L"p24";
			this->p24->Size = System::Drawing::Size(24, 24);
			this->p24->TabIndex = 31;
			this->p24->Text = L"4";
			this->p24->UseVisualStyleBackColor = true;
			this->p24->Click += gcnew System::EventHandler(this, &MyForm::p24_Click);
			// 
			// p30
			// 
			this->p30->Location = System::Drawing::Point(1280, 80);
			this->p30->Name = L"p30";
			this->p30->Size = System::Drawing::Size(24, 24);
			this->p30->TabIndex = 32;
			this->p30->Text = L"0";
			this->p30->UseVisualStyleBackColor = true;
			this->p30->Click += gcnew System::EventHandler(this, &MyForm::p30_Click);
			// 
			// p31
			// 
			this->p31->Location = System::Drawing::Point(1280, 110);
			this->p31->Name = L"p31";
			this->p31->Size = System::Drawing::Size(24, 24);
			this->p31->TabIndex = 33;
			this->p31->Text = L"1";
			this->p31->UseVisualStyleBackColor = true;
			this->p31->Click += gcnew System::EventHandler(this, &MyForm::p31_Click);
			// 
			// p32
			// 
			this->p32->Location = System::Drawing::Point(1280, 140);
			this->p32->Name = L"p32";
			this->p32->Size = System::Drawing::Size(24, 24);
			this->p32->TabIndex = 34;
			this->p32->Text = L"2";
			this->p32->UseVisualStyleBackColor = true;
			this->p32->Click += gcnew System::EventHandler(this, &MyForm::p32_Click);
			// 
			// p34
			// 
			this->p34->Location = System::Drawing::Point(1280, 170);
			this->p34->Name = L"p34";
			this->p34->Size = System::Drawing::Size(24, 24);
			this->p34->TabIndex = 35;
			this->p34->Text = L"4";
			this->p34->UseVisualStyleBackColor = true;
			this->p34->Click += gcnew System::EventHandler(this, &MyForm::p34_Click);
			// 
			// p40
			// 
			this->p40->Location = System::Drawing::Point(12, 19);
			this->p40->Name = L"p40";
			this->p40->Size = System::Drawing::Size(24, 24);
			this->p40->TabIndex = 36;
			this->p40->Text = L"0";
			this->p40->UseVisualStyleBackColor = true;
			this->p40->Click += gcnew System::EventHandler(this, &MyForm::p40_Click);
			// 
			// p41
			// 
			this->p41->Location = System::Drawing::Point(12, 49);
			this->p41->Name = L"p41";
			this->p41->Size = System::Drawing::Size(24, 24);
			this->p41->TabIndex = 37;
			this->p41->Text = L"1";
			this->p41->UseVisualStyleBackColor = true;
			this->p41->Click += gcnew System::EventHandler(this, &MyForm::p41_Click);
			// 
			// p42
			// 
			this->p42->Location = System::Drawing::Point(12, 76);
			this->p42->Name = L"p42";
			this->p42->Size = System::Drawing::Size(24, 24);
			this->p42->TabIndex = 38;
			this->p42->Text = L"2";
			this->p42->UseVisualStyleBackColor = true;
			this->p42->Click += gcnew System::EventHandler(this, &MyForm::p42_Click);
			// 
			// p43
			// 
			this->p43->Location = System::Drawing::Point(12, 106);
			this->p43->Name = L"p43";
			this->p43->Size = System::Drawing::Size(24, 24);
			this->p43->TabIndex = 39;
			this->p43->Text = L"3";
			this->p43->UseVisualStyleBackColor = true;
			this->p43->Click += gcnew System::EventHandler(this, &MyForm::p43_Click);
			// 
			// t10
			// 
			this->t10->Location = System::Drawing::Point(938, 401);
			this->t10->Name = L"t10";
			this->t10->Size = System::Drawing::Size(51, 20);
			this->t10->TabIndex = 40;
			// 
			// t12
			// 
			this->t12->Location = System::Drawing::Point(995, 401);
			this->t12->Name = L"t12";
			this->t12->Size = System::Drawing::Size(51, 20);
			this->t12->TabIndex = 41;
			// 
			// t13
			// 
			this->t13->Location = System::Drawing::Point(1052, 401);
			this->t13->Name = L"t13";
			this->t13->Size = System::Drawing::Size(51, 20);
			this->t13->TabIndex = 42;
			// 
			// t14
			// 
			this->t14->Location = System::Drawing::Point(1109, 401);
			this->t14->Name = L"t14";
			this->t14->Size = System::Drawing::Size(51, 20);
			this->t14->TabIndex = 43;
			// 
			// t20
			// 
			this->t20->Location = System::Drawing::Point(114, 285);
			this->t20->Name = L"t20";
			this->t20->Size = System::Drawing::Size(51, 20);
			this->t20->TabIndex = 44;
			// 
			// t21
			// 
			this->t21->Location = System::Drawing::Point(171, 285);
			this->t21->Name = L"t21";
			this->t21->Size = System::Drawing::Size(51, 20);
			this->t21->TabIndex = 45;
			// 
			// t23
			// 
			this->t23->Location = System::Drawing::Point(228, 285);
			this->t23->Name = L"t23";
			this->t23->Size = System::Drawing::Size(51, 20);
			this->t23->TabIndex = 46;
			// 
			// t24
			// 
			this->t24->Location = System::Drawing::Point(285, 285);
			this->t24->Name = L"t24";
			this->t24->Size = System::Drawing::Size(51, 20);
			this->t24->TabIndex = 47;
			// 
			// t30
			// 
			this->t30->Location = System::Drawing::Point(938, 163);
			this->t30->Name = L"t30";
			this->t30->Size = System::Drawing::Size(51, 20);
			this->t30->TabIndex = 48;
			// 
			// t31
			// 
			this->t31->Location = System::Drawing::Point(995, 163);
			this->t31->Name = L"t31";
			this->t31->Size = System::Drawing::Size(51, 20);
			this->t31->TabIndex = 49;
			// 
			// t32
			// 
			this->t32->Location = System::Drawing::Point(1052, 163);
			this->t32->Name = L"t32";
			this->t32->Size = System::Drawing::Size(51, 20);
			this->t32->TabIndex = 50;
			// 
			// t34
			// 
			this->t34->Location = System::Drawing::Point(1109, 163);
			this->t34->Name = L"t34";
			this->t34->Size = System::Drawing::Size(51, 20);
			this->t34->TabIndex = 51;
			// 
			// t40
			// 
			this->t40->Location = System::Drawing::Point(114, 80);
			this->t40->Name = L"t40";
			this->t40->Size = System::Drawing::Size(51, 20);
			this->t40->TabIndex = 52;
			// 
			// t41
			// 
			this->t41->Location = System::Drawing::Point(171, 80);
			this->t41->Name = L"t41";
			this->t41->Size = System::Drawing::Size(51, 20);
			this->t41->TabIndex = 53;
			// 
			// t42
			// 
			this->t42->Location = System::Drawing::Point(228, 80);
			this->t42->Name = L"t42";
			this->t42->Size = System::Drawing::Size(51, 20);
			this->t42->TabIndex = 54;
			// 
			// t43
			// 
			this->t43->Location = System::Drawing::Point(285, 80);
			this->t43->Name = L"t43";
			this->t43->Size = System::Drawing::Size(51, 20);
			this->t43->TabIndex = 55;
			// 
			// r0
			// 
			this->r0->Location = System::Drawing::Point(439, 401);
			this->r0->Name = L"r0";
			this->r0->Size = System::Drawing::Size(74, 20);
			this->r0->TabIndex = 56;
			// 
			// r1
			// 
			this->r1->Location = System::Drawing::Point(868, 285);
			this->r1->Name = L"r1";
			this->r1->Size = System::Drawing::Size(74, 20);
			this->r1->TabIndex = 57;
			// 
			// r2
			// 
			this->r2->Location = System::Drawing::Point(439, 166);
			this->r2->Name = L"r2";
			this->r2->Size = System::Drawing::Size(74, 20);
			this->r2->TabIndex = 58;
			// 
			// r3
			// 
			this->r3->Location = System::Drawing::Point(859, 66);
			this->r3->Name = L"r3";
			this->r3->Size = System::Drawing::Size(74, 20);
			this->r3->TabIndex = 59;
			// 
			// r4
			// 
			this->r4->Location = System::Drawing::Point(439, 12);
			this->r4->Name = L"r4";
			this->r4->Size = System::Drawing::Size(74, 20);
			this->r4->TabIndex = 60;
			// 
			// Liczniki
			// 
			this->Liczniki->Enabled = true;
			this->Liczniki->Interval = 5;
			this->Liczniki->Tick += gcnew System::EventHandler(this, &MyForm::Liczniki_Tick);
			// 
			// postoj
			// 
			this->postoj->Interval = 500;
			this->postoj->Tick += gcnew System::EventHandler(this, &MyForm::postoj_Tick);
			// 
			// biernie
			// 
			this->biernie->Interval = 1;
			this->biernie->Tick += gcnew System::EventHandler(this, &MyForm::biernie_Tick);
			// 
			// winda1
			// 
			this->winda1->Location = System::Drawing::Point(616, 582);
			this->winda1->Name = L"winda1";
			this->winda1->Size = System::Drawing::Size(43, 20);
			this->winda1->TabIndex = 61;
			// 
			// winda2
			// 
			this->winda2->Location = System::Drawing::Point(665, 582);
			this->winda2->Name = L"winda2";
			this->winda2->Size = System::Drawing::Size(46, 20);
			this->winda2->TabIndex = 62;
			// 
			// winda3
			// 
			this->winda3->Location = System::Drawing::Point(717, 582);
			this->winda3->Name = L"winda3";
			this->winda3->Size = System::Drawing::Size(42, 20);
			this->winda3->TabIndex = 63;
			// 
			// winda4
			// 
			this->winda4->Location = System::Drawing::Point(765, 582);
			this->winda4->Name = L"winda4";
			this->winda4->Size = System::Drawing::Size(39, 20);
			this->winda4->TabIndex = 64;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(168, 452);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 13);
			this->label1->TabIndex = 65;
			this->label1->Text = L"Osoby jadace na piêtro:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(992, 347);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 13);
			this->label2->TabIndex = 66;
			this->label2->Text = L"Osoby jadace na piêtro:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(168, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 13);
			this->label3->TabIndex = 67;
			this->label3->Text = L"Osoby jadace na piêtro:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(992, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 13);
			this->label4->TabIndex = 68;
			this->label4->Text = L"Osoby jadace na piêtro:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(168, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(119, 13);
			this->label5->TabIndex = 69;
			this->label5->Text = L"Osoby jadace na piêtro:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(133, 488);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 70;
			this->label6->Text = L"1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(188, 261);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 71;
			this->label7->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1014, 133);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 72;
			this->label8->Text = L"1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(188, 43);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 73;
			this->label9->Text = L"1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Cursor = System::Windows::Forms::Cursors::Default;
			this->label10->Location = System::Drawing::Point(188, 488);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 74;
			this->label10->Text = L"2";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Cursor = System::Windows::Forms::Cursors::Default;
			this->label11->Location = System::Drawing::Point(1014, 377);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 75;
			this->label11->Text = L"2";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Cursor = System::Windows::Forms::Cursors::Default;
			this->label12->Location = System::Drawing::Point(1069, 133);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 76;
			this->label12->Text = L"2";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Cursor = System::Windows::Forms::Cursors::Default;
			this->label13->Location = System::Drawing::Point(248, 43);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 13);
			this->label13->TabIndex = 77;
			this->label13->Text = L"2";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Cursor = System::Windows::Forms::Cursors::Default;
			this->label14->Location = System::Drawing::Point(248, 488);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 78;
			this->label14->Text = L"3";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Cursor = System::Windows::Forms::Cursors::Default;
			this->label15->Location = System::Drawing::Point(1069, 377);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 79;
			this->label15->Text = L"3";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Cursor = System::Windows::Forms::Cursors::Default;
			this->label16->Location = System::Drawing::Point(248, 261);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 80;
			this->label16->Text = L"3";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Cursor = System::Windows::Forms::Cursors::Default;
			this->label17->Location = System::Drawing::Point(304, 43);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 81;
			this->label17->Text = L"3";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Cursor = System::Windows::Forms::Cursors::Default;
			this->label18->Location = System::Drawing::Point(314, 488);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 82;
			this->label18->Text = L"4";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Cursor = System::Windows::Forms::Cursors::Default;
			this->label19->Location = System::Drawing::Point(1128, 377);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(13, 13);
			this->label19->TabIndex = 83;
			this->label19->Text = L"4";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Cursor = System::Windows::Forms::Cursors::Default;
			this->label20->Location = System::Drawing::Point(304, 261);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(13, 13);
			this->label20->TabIndex = 84;
			this->label20->Text = L"4";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Cursor = System::Windows::Forms::Cursors::Default;
			this->label21->Location = System::Drawing::Point(1128, 133);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(13, 13);
			this->label21->TabIndex = 85;
			this->label21->Text = L"4";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Cursor = System::Windows::Forms::Cursors::Default;
			this->label22->Location = System::Drawing::Point(955, 377);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(13, 13);
			this->label22->TabIndex = 86;
			this->label22->Text = L"0";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Cursor = System::Windows::Forms::Cursors::Default;
			this->label23->Location = System::Drawing::Point(133, 261);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(13, 13);
			this->label23->TabIndex = 87;
			this->label23->Text = L"0";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Cursor = System::Windows::Forms::Cursors::Default;
			this->label24->Location = System::Drawing::Point(955, 133);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(13, 13);
			this->label24->TabIndex = 88;
			this->label24->Text = L"0";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Cursor = System::Windows::Forms::Cursors::Default;
			this->label25->Location = System::Drawing::Point(133, 43);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(13, 13);
			this->label25->TabIndex = 89;
			this->label25->Text = L"0";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(634, 566);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(13, 13);
			this->label26->TabIndex = 90;
			this->label26->Text = L"1";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(680, 566);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(13, 13);
			this->label27->TabIndex = 91;
			this->label27->Text = L"2";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Cursor = System::Windows::Forms::Cursors::Default;
			this->label28->Location = System::Drawing::Point(733, 566);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(13, 13);
			this->label28->TabIndex = 92;
			this->label28->Text = L"3";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Cursor = System::Windows::Forms::Cursors::Default;
			this->label29->Location = System::Drawing::Point(777, 566);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(13, 13);
			this->label29->TabIndex = 93;
			this->label29->Text = L"4";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Cursor = System::Windows::Forms::Cursors::Default;
			this->label30->Location = System::Drawing::Point(579, 566);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(13, 13);
			this->label30->TabIndex = 94;
			this->label30->Text = L"0";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(540, 544);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(119, 13);
			this->label31->TabIndex = 95;
			this->label31->Text = L"Osoby jadace na pietro:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(770, 540);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(37, 13);
			this->label32->TabIndex = 96;
			this->label32->Text = L"Piêtro:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(365, 19);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(68, 13);
			this->label33->TabIndex = 97;
			this->label33->Text = L"Osoby razem";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(939, 69);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(68, 13);
			this->label34->TabIndex = 98;
			this->label34->Text = L"Osoby razem";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(365, 169);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(68, 13);
			this->label35->TabIndex = 99;
			this->label35->Text = L"Osoby razem";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(948, 288);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(68, 13);
			this->label36->TabIndex = 100;
			this->label36->Text = L"Osoby razem";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(365, 404);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(68, 13);
			this->label37->TabIndex = 101;
			this->label37->Text = L"Osoby razem";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(261, 585);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(121, 13);
			this->label38->TabIndex = 102;
			this->label38->Text = L"Osoby które przyjecha³y";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(990, 472);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(121, 13);
			this->label39->TabIndex = 103;
			this->label39->Text = L"Osoby które przyjecha³y";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(261, 350);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(121, 13);
			this->label40->TabIndex = 104;
			this->label40->Text = L"Osoby które przyjecha³y";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(990, 246);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(121, 13);
			this->label41->TabIndex = 105;
			this->label41->Text = L"Osoby które przyjecha³y";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(261, 125);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(121, 13);
			this->label42->TabIndex = 106;
			this->label42->Text = L"Osoby które przyjecha³y";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(865, 535);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(87, 13);
			this->label43->TabIndex = 107;
			this->label43->Text = L"Masa pasa¿erów";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(9, 569);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(176, 13);
			this->label44->TabIndex = 108;
			this->label44->Text = L"Stwórz pasa¿era jad¹cego na piêtro";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(1147, 295);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(176, 13);
			this->label45->TabIndex = 109;
			this->label45->Text = L"Stwórz pasa¿era jad¹cego na piêtro";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(9, 342);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(176, 13);
			this->label46->TabIndex = 110;
			this->label46->Text = L"Stwórz pasa¿era jad¹cego na piêtro";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(12, 133);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(176, 13);
			this->label47->TabIndex = 111;
			this->label47->Text = L"Stwórz pasa¿era jad¹cego na piêtro";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(1147, 55);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(176, 13);
			this->label48->TabIndex = 112;
			this->label48->Text = L"Stwórz pasa¿era jad¹cego na piêtro";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(461, 469);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(43, 13);
			this->label49->TabIndex = 113;
			this->label49->Text = L"Piêtro 0";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(865, 350);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(43, 13);
			this->label50->TabIndex = 114;
			this->label50->Text = L"Piêtro 1";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(461, 246);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(43, 13);
			this->label51->TabIndex = 115;
			this->label51->Text = L"Piêtro 2";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(865, 163);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(43, 13);
			this->label52->TabIndex = 116;
			this->label52->Text = L"Piêtro 3";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(461, 73);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(43, 13);
			this->label53->TabIndex = 117;
			this->label53->Text = L"Piêtro 4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1346, 652);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->winda4);
			this->Controls->Add(this->winda3);
			this->Controls->Add(this->winda2);
			this->Controls->Add(this->winda1);
			this->Controls->Add(this->r4);
			this->Controls->Add(this->r3);
			this->Controls->Add(this->r2);
			this->Controls->Add(this->r1);
			this->Controls->Add(this->r0);
			this->Controls->Add(this->t43);
			this->Controls->Add(this->t42);
			this->Controls->Add(this->t41);
			this->Controls->Add(this->t40);
			this->Controls->Add(this->t34);
			this->Controls->Add(this->t32);
			this->Controls->Add(this->t31);
			this->Controls->Add(this->t30);
			this->Controls->Add(this->t24);
			this->Controls->Add(this->t23);
			this->Controls->Add(this->t21);
			this->Controls->Add(this->t20);
			this->Controls->Add(this->t14);
			this->Controls->Add(this->t13);
			this->Controls->Add(this->t12);
			this->Controls->Add(this->t10);
			this->Controls->Add(this->p43);
			this->Controls->Add(this->p42);
			this->Controls->Add(this->p41);
			this->Controls->Add(this->p40);
			this->Controls->Add(this->p34);
			this->Controls->Add(this->p32);
			this->Controls->Add(this->p31);
			this->Controls->Add(this->p30);
			this->Controls->Add(this->p24);
			this->Controls->Add(this->p23);
			this->Controls->Add(this->p21);
			this->Controls->Add(this->p20);
			this->Controls->Add(this->p14);
			this->Controls->Add(this->p13);
			this->Controls->Add(this->p12);
			this->Controls->Add(this->p10);
			this->Controls->Add(this->w0);
			this->Controls->Add(this->w4);
			this->Controls->Add(this->w3);
			this->Controls->Add(this->w2);
			this->Controls->Add(this->w1);
			this->Controls->Add(this->winda0);
			this->Controls->Add(this->t04);
			this->Controls->Add(this->t03);
			this->Controls->Add(this->t02);
			this->Controls->Add(this->t01);
			this->Controls->Add(this->p04);
			this->Controls->Add(this->p03);
			this->Controls->Add(this->p02);
			this->Controls->Add(this->p01);
			this->Controls->Add(this->Masa);
			this->Controls->Add(this->ekran_pietro);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ludzik))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	public:void Jazda(int gdzie_jedziemy)
	{
		this->Parter->Stop();
		if (pietro > gdzie_jedziemy) {
			this->zegar_dol->Start();
		}
		if (pietro < gdzie_jedziemy) {
			this->zegar_gora->Start();
		}

		if (pietro == gdzie_jedziemy) {

			Wsiadanie(pietro);

			if (numer_kolejki + 1 < Kolejka.size()) {
				postoj->Start();
			}
			else {	
				for (int m = 0; m < 5; m++) {
					if (ekrany[25 + m] != 0) Kolejka.push_back(m);
				}
				if (numer_kolejki + 1 < Kolejka.size()) {
					postoj->Start();
				}
				else{
					biernie->Start();
					this->Parter->Start();
				}
			}
		}
	}
	public:void Dopychanie(int a, int b) {
		int t1 = 0;
		for (int i = numer_kolejki; i < Kolejka.size(); i++) {
			if (Kolejka[i] == a) { goto xd; }
		}
		Kolejka.push_back(a);
				xd:
		for (int i = numer_kolejki; i < Kolejka.size(); i++) {
			if (t1 == 0) {
				if (Kolejka[i] == a)  t1 = 1;
			}
			if (t1 == 1) {
				if (Kolejka[i] == b)  t1 = 2;
			}
		}
		if(t1<2)  Kolejka.push_back(b);
		
		
		
		
	}
	
	public:void Wsiadanie(int pietro) {
		int przerzutka = 0;
		bool omg = 0;
		for (int i = 0; i < 30; i++) {
			if (ekrany[25 + pietro] != 0) {
				ekrany[25 + pietro]--;
				ekrany[30 + pietro]++;
				ciezar = ciezar - 60;
				
			}
			if (ciezar > 650)   break;
						
			if (przerzutka == 4) continue;
			
			if (ekrany[(5 * pietro) + przerzutka] != 0)
			{
				ekrany[(5 * pietro) + przerzutka]--;
				ciezar = ciezar + 60;
				if (pietro == 0)  ekrany[25 + 1+przerzutka]++; 
				if (pietro == 1) {
					if (przerzutka == 0) ekrany[25]++;
					else ekrany[25 + 1 + przerzutka]++;
				}
				if (pietro == 2) {
					if (przerzutka < 2) ekrany[25+przerzutka]++;
					else ekrany[25 + 1 + przerzutka]++;
				}
				if (pietro == 3) {
					if (przerzutka < 3) ekrany[25 + przerzutka]++;
					else ekrany[25 + 1 + przerzutka]++;
					}
				if (pietro == 4) ekrany[25 + przerzutka]++;
										}
				
			
			else przerzutka++;
			
		} 
	}
	
#pragma endregion
	private: System::Void zegar_gora_Tick(System::Object^  sender, System::EventArgs^  e) {
		this->pictureBox2->Top += -3;
		this->ekran_pietro->Top += -3;
		this->winda0->Top += -3;
		this->winda1->Top += -3;
		this->winda2->Top += -3;
		this->winda3->Top += -3;
		this->winda4->Top += -3;
		this->label31->Top += -3;
		this->label32->Top += -3;
		this->label30->Top += -3;
		this->label26->Top += -3;
		this->label27->Top += -3;
		this->label28->Top += -3;
		this->label29->Top += -3;
		czas++;
		if (czas == 38) {
			this->zegar_gora->Stop();
			czas = 0;
			pietro++;
			this->ekran_pietro->Text = Convert::ToString(pietro);
			Jazda(Kolejka[numer_kolejki]);
		}
		}
private: System::Void zegar_dol_Tick(System::Object^  sender, System::EventArgs^  e) {
	this->pictureBox2->Top += 3;
	this->ekran_pietro->Top += 3;
	this->winda0->Top += 3;
	this->winda1->Top += 3;
	this->winda2->Top += 3;
	this->winda3->Top += 3;
	this->winda4->Top += 3;
	this->label31->Top += 3;
	this->label32->Top += 3;
	this->label30->Top += 3;
	this->label26->Top += 3;
	this->label27->Top += 3;
	this->label28->Top += 3;
	this->label29->Top += 3;
	czas++;
	if (czas == 38) {
		this->zegar_dol->Stop();
		czas = 0;
		pietro--;
		this->ekran_pietro->Text = Convert::ToString(pietro);
		Jazda(Kolejka[numer_kolejki]);
	}
	
}


private: System::Void Parter_Tick_1(System::Object^  sender, System::EventArgs^  e) {
	czas++;
	if (czas == 1) {
		Parter->Stop();
		czas = 0;
		numer_kolejki++;
		Kolejka.push_back(0);
		Jazda(Kolejka[numer_kolejki]);
	}

}

private: System::Void postoj_Tick(System::Object^  sender, System::EventArgs^  e) {
	czas++;
	if (czas == 2) {
		this->postoj->Stop();
		czas = 0;
		numer_kolejki++;
		Jazda(Kolejka[numer_kolejki]);
	}
	
}
private: System::Void biernie_Tick(System::Object^  sender, System::EventArgs^  e) {
	
	if (Kolejka.size() - numer_kolejki > 1) {
		biernie->Stop();
		Wsiadanie(pietro);
		Jazda(Kolejka[numer_kolejki]);
	}
}


private: System::Void p01_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[0]++;
	Dopychanie(0, 1);

}
private: System::Void p02_Click_1(System::Object^  sender, System::EventArgs^  e) {
	ekrany[1]++;
	Dopychanie(0, 2);
}
private: System::Void p03_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[2]++;
	Dopychanie(0, 3);
}
private: System::Void p04_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[3]++;
	Dopychanie(0, 4);
}
private: System::Void p10_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[5]++;
	Dopychanie(1, 0);
}
private: System::Void p12_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[6]++;
	Dopychanie(1, 2);
}
private: System::Void p13_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[7]++;
	Dopychanie(1, 3);
}
private: System::Void p14_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[8]++;
	Dopychanie(1, 4);
}
private: System::Void p20_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[10]++;
	Dopychanie(2, 0);
}
private: System::Void p21_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[11]++;
	Dopychanie(2, 1);
}
private: System::Void p23_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[12]++;
	Dopychanie(2, 3);
}
private: System::Void p24_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[13]++;
	Dopychanie(2, 4);
}
private: System::Void p30_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[15]++;
	Dopychanie(3, 0);
}
private: System::Void p31_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[16]++;
	Dopychanie(3, 1);
}
private: System::Void p32_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[17]++;
	Dopychanie(3, 2);
}
private: System::Void p34_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[18]++;
	Dopychanie(3, 4);
}
private: System::Void p40_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[20]++;
	Dopychanie(4, 0);
}
private: System::Void p41_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[21]++;
	Dopychanie(4, 1);
}
private: System::Void p42_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[22]++;
	Dopychanie(4, 2);
}
private: System::Void p43_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[23]++;
	Dopychanie(4, 3);
}

private: System::Void Liczniki_Tick(System::Object^  sender, System::EventArgs^  e) {
	this->t01->Text = Convert::ToString(ekrany[0]);
	this->t02->Text = Convert::ToString(ekrany[1]);
	this->t03->Text = Convert::ToString(ekrany[2]);
	this->t04->Text = Convert::ToString(ekrany[3]);
	this->r0->Text = Convert::ToString(ekrany[0] + ekrany[1] + ekrany[2] + ekrany[3]);
	this->t10->Text = Convert::ToString(ekrany[5]);
	this->t12->Text = Convert::ToString(ekrany[6]);
	this->t13->Text = Convert::ToString(ekrany[7]);
	this->t14->Text = Convert::ToString(ekrany[8]);
	this->r1->Text = Convert::ToString(ekrany[5] + ekrany[6] + ekrany[7] + ekrany[8]);
	this->t20->Text = Convert::ToString(ekrany[10]);
	this->t21->Text = Convert::ToString(ekrany[11]);
	this->t23->Text = Convert::ToString(ekrany[12]);
	this->t24->Text = Convert::ToString(ekrany[13]);
	this->r2->Text = Convert::ToString(ekrany[10] + ekrany[11] + ekrany[12] + ekrany[13]);
	this->t30->Text = Convert::ToString(ekrany[15]);
	this->t31->Text = Convert::ToString(ekrany[16]);
	this->t32->Text = Convert::ToString(ekrany[17]);
	this->t34->Text = Convert::ToString(ekrany[18]);
	this->r3->Text = Convert::ToString(ekrany[15] + ekrany[16] + ekrany[17] + ekrany[18]);
	this->t40->Text = Convert::ToString(ekrany[20]);
	this->t41->Text = Convert::ToString(ekrany[21]);
	this->t42->Text = Convert::ToString(ekrany[22]);
	this->t43->Text = Convert::ToString(ekrany[23]);
	this->r4->Text = Convert::ToString(ekrany[20] + ekrany[21] + ekrany[22] + ekrany[23]);
	this->winda0->Text = Convert::ToString(ekrany[25]);
	this->winda1->Text = Convert::ToString(ekrany[26]);
	this->winda2->Text = Convert::ToString(ekrany[27]);
	this->winda3->Text = Convert::ToString(ekrany[28]);
	this->winda4->Text = Convert::ToString(ekrany[29]);
	this->w0->Text = Convert::ToString(ekrany[30]);
	this->w1->Text = Convert::ToString(ekrany[31]);
	this->w2->Text = Convert::ToString(ekrany[32]);
	this->w3->Text = Convert::ToString(ekrany[33]);
	this->w4->Text = Convert::ToString(ekrany[34]);

	if (numer_kolejki < Kolejka.size()) {
		if (numer_kolejki == 0)   Jazda(Kolejka[numer_kolejki]);
	}
	this->Masa->Text = Convert::ToString(ciezar);

}
};
}
