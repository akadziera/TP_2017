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

	PictureBox^ *Buff;


	struct ciastki
	{
		bool Wsiald = 0;
		bool Wysiadl = 0;
		int Start;
		int Koniec;
		PictureBox^ *Picturewskaz;
	};

	static vector<ciastki> Ciastkozbior;
	static vector<int> Kolejka;
	static int ekrany[25];

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		static
			int czas = 0;
		bool przesuniecie=false;
			 int pietro = 0;
			 int czlek=0;
			 int gdzie_jedziemy = 0;
			 int waga = 0;
			 int numer_kolejki = 0;
			 
	private: System::Windows::Forms::MaskedTextBox^  maskedekran_pietro;
	private: System::Windows::Forms::Button^  button3;
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
	private: System::Windows::Forms::MaskedTextBox^  winda;

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

























	private: System::ComponentModel::IContainer^  components;

			 //array<PictureBox^> ^tab;
			 
	public:
		MyForm(void)
		{
			InitializeComponent();
		//	tab = gcnew array<PictureBox^>(100);
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
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Timer^  timer3;


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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->ekran_pietro = (gcnew System::Windows::Forms::TextBox());
			this->maskedekran_pietro = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->winda = (gcnew System::Windows::Forms::MaskedTextBox());
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
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1159, 572);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 29);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Stworz czlowieka";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// timer3
			// 
			this->timer3->Interval = 1;
			// 
			// ekran_pietro
			// 
			this->ekran_pietro->Location = System::Drawing::Point(813, 537);
			this->ekran_pietro->Name = L"ekran_pietro";
			this->ekran_pietro->Size = System::Drawing::Size(29, 20);
			this->ekran_pietro->TabIndex = 6;
			// 
			// maskedekran_pietro
			// 
			this->maskedekran_pietro->Location = System::Drawing::Point(751, 12);
			this->maskedekran_pietro->Name = L"maskedekran_pietro";
			this->maskedekran_pietro->Size = System::Drawing::Size(100, 20);
			this->maskedekran_pietro->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(767, 38);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// Parter
			// 
			this->Parter->Interval = 1;
			this->Parter->Tick += gcnew System::EventHandler(this, &MyForm::Parter_Tick_1);
			// 
			// Masa
			// 
			this->Masa->Location = System::Drawing::Point(1130, 12);
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
			this->t01->Location = System::Drawing::Point(104, 481);
			this->t01->Name = L"t01";
			this->t01->Size = System::Drawing::Size(51, 20);
			this->t01->TabIndex = 14;
			// 
			// t02
			// 
			this->t02->Location = System::Drawing::Point(161, 481);
			this->t02->Name = L"t02";
			this->t02->Size = System::Drawing::Size(55, 20);
			this->t02->TabIndex = 15;
			// 
			// t03
			// 
			this->t03->Location = System::Drawing::Point(222, 481);
			this->t03->Name = L"t03";
			this->t03->Size = System::Drawing::Size(55, 20);
			this->t03->TabIndex = 16;
			// 
			// t04
			// 
			this->t04->Location = System::Drawing::Point(283, 481);
			this->t04->Name = L"t04";
			this->t04->Size = System::Drawing::Size(55, 20);
			this->t04->TabIndex = 17;
			// 
			// winda
			// 
			this->winda->Location = System::Drawing::Point(623, 563);
			this->winda->Name = L"winda";
			this->winda->Size = System::Drawing::Size(116, 20);
			this->winda->TabIndex = 18;
			// 
			// w1
			// 
			this->w1->Location = System::Drawing::Point(1077, 456);
			this->w1->Name = L"w1";
			this->w1->Size = System::Drawing::Size(116, 20);
			this->w1->TabIndex = 19;
			// 
			// w2
			// 
			this->w2->Location = System::Drawing::Point(283, 335);
			this->w2->Name = L"w2";
			this->w2->Size = System::Drawing::Size(116, 20);
			this->w2->TabIndex = 20;
			// 
			// w3
			// 
			this->w3->Location = System::Drawing::Point(986, 225);
			this->w3->Name = L"w3";
			this->w3->Size = System::Drawing::Size(116, 20);
			this->w3->TabIndex = 21;
			// 
			// w4
			// 
			this->w4->Location = System::Drawing::Point(304, 107);
			this->w4->Name = L"w4";
			this->w4->Size = System::Drawing::Size(116, 20);
			this->w4->TabIndex = 22;
			// 
			// w0
			// 
			this->w0->Location = System::Drawing::Point(255, 572);
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
			this->p30->Location = System::Drawing::Point(1280, 133);
			this->p30->Name = L"p30";
			this->p30->Size = System::Drawing::Size(24, 24);
			this->p30->TabIndex = 32;
			this->p30->Text = L"0";
			this->p30->UseVisualStyleBackColor = true;
			this->p30->Click += gcnew System::EventHandler(this, &MyForm::p30_Click);
			// 
			// p31
			// 
			this->p31->Location = System::Drawing::Point(1280, 163);
			this->p31->Name = L"p31";
			this->p31->Size = System::Drawing::Size(24, 24);
			this->p31->TabIndex = 33;
			this->p31->Text = L"1";
			this->p31->UseVisualStyleBackColor = true;
			this->p31->Click += gcnew System::EventHandler(this, &MyForm::p31_Click);
			// 
			// p32
			// 
			this->p32->Location = System::Drawing::Point(1280, 193);
			this->p32->Name = L"p32";
			this->p32->Size = System::Drawing::Size(24, 24);
			this->p32->TabIndex = 34;
			this->p32->Text = L"2";
			this->p32->UseVisualStyleBackColor = true;
			this->p32->Click += gcnew System::EventHandler(this, &MyForm::p32_Click);
			// 
			// p34
			// 
			this->p34->Location = System::Drawing::Point(1280, 223);
			this->p34->Name = L"p34";
			this->p34->Size = System::Drawing::Size(24, 24);
			this->p34->TabIndex = 35;
			this->p34->Text = L"4";
			this->p34->UseVisualStyleBackColor = true;
			this->p34->Click += gcnew System::EventHandler(this, &MyForm::p34_Click);
			// 
			// p40
			// 
			this->p40->Location = System::Drawing::Point(12, 32);
			this->p40->Name = L"p40";
			this->p40->Size = System::Drawing::Size(24, 24);
			this->p40->TabIndex = 36;
			this->p40->Text = L"0";
			this->p40->UseVisualStyleBackColor = true;
			this->p40->Click += gcnew System::EventHandler(this, &MyForm::p40_Click);
			// 
			// p41
			// 
			this->p41->Location = System::Drawing::Point(12, 62);
			this->p41->Name = L"p41";
			this->p41->Size = System::Drawing::Size(24, 24);
			this->p41->TabIndex = 37;
			this->p41->Text = L"1";
			this->p41->UseVisualStyleBackColor = true;
			this->p41->Click += gcnew System::EventHandler(this, &MyForm::p41_Click);
			// 
			// p42
			// 
			this->p42->Location = System::Drawing::Point(12, 92);
			this->p42->Name = L"p42";
			this->p42->Size = System::Drawing::Size(24, 24);
			this->p42->TabIndex = 38;
			this->p42->Text = L"2";
			this->p42->UseVisualStyleBackColor = true;
			this->p42->Click += gcnew System::EventHandler(this, &MyForm::p42_Click);
			// 
			// p43
			// 
			this->p43->Location = System::Drawing::Point(12, 122);
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
			this->t40->Location = System::Drawing::Point(132, 62);
			this->t40->Name = L"t40";
			this->t40->Size = System::Drawing::Size(51, 20);
			this->t40->TabIndex = 52;
			// 
			// t41
			// 
			this->t41->Location = System::Drawing::Point(189, 62);
			this->t41->Name = L"t41";
			this->t41->Size = System::Drawing::Size(51, 20);
			this->t41->TabIndex = 53;
			// 
			// t42
			// 
			this->t42->Location = System::Drawing::Point(246, 62);
			this->t42->Name = L"t42";
			this->t42->Size = System::Drawing::Size(51, 20);
			this->t42->TabIndex = 54;
			// 
			// t43
			// 
			this->t43->Location = System::Drawing::Point(303, 62);
			this->t43->Name = L"t43";
			this->t43->Size = System::Drawing::Size(51, 20);
			this->t43->TabIndex = 55;
			// 
			// r0
			// 
			this->r0->Location = System::Drawing::Point(430, 401);
			this->r0->Name = L"r0";
			this->r0->Size = System::Drawing::Size(74, 20);
			this->r0->TabIndex = 56;
			// 
			// r1
			// 
			this->r1->Location = System::Drawing::Point(859, 285);
			this->r1->Name = L"r1";
			this->r1->Size = System::Drawing::Size(74, 20);
			this->r1->TabIndex = 57;
			// 
			// r2
			// 
			this->r2->Location = System::Drawing::Point(430, 167);
			this->r2->Name = L"r2";
			this->r2->Size = System::Drawing::Size(74, 20);
			this->r2->TabIndex = 58;
			// 
			// r3
			// 
			this->r3->Location = System::Drawing::Point(868, 92);
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
			this->Liczniki->Interval = 1;
			this->Liczniki->Tick += gcnew System::EventHandler(this, &MyForm::Liczniki_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1346, 652);
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
			this->Controls->Add(this->winda);
			this->Controls->Add(this->t04);
			this->Controls->Add(this->t03);
			this->Controls->Add(this->t02);
			this->Controls->Add(this->t01);
			this->Controls->Add(this->p04);
			this->Controls->Add(this->p03);
			this->Controls->Add(this->p02);
			this->Controls->Add(this->p01);
			this->Controls->Add(this->Masa);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->maskedekran_pietro);
			this->Controls->Add(this->ekran_pietro);
			this->Controls->Add(this->button2);
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

		public: PictureBox^ *Kreator(int X, int Y, PictureBox^ * &Buff)
		{
			PictureBox^ Ludz = gcnew PictureBox();
			Ludz->Location = Point(X, Y);
			Ludz->Size = System::Drawing::Size(51, 74);
			Ludz->Load("GingerbreadMan1.jpg");
			Ludz->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(Ludz);
			Ludz->BringToFront();
			PictureBox^ *Wsk = &Ludz;
			Buff = &Ludz;
			return Wsk;
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
		this->Parter->Start();
	if(numer_kolejki<Kolejka.size())	numer_kolejki++;
	}
}
	public:void Dopychanie(int a, int b)
	{
		for (int i = 0; i < Kolejka.size(); i++) {
			if (Kolejka[i] == a) break;
			if (i = Kolejka.size() - 1) Kolejka.push_back(a);
		}
		for (int i = 0; i < Kolejka.size(); i++) {
			if (Kolejka[i] == b) break;
			if (i = Kolejka.size() - 1) Kolejka.push_back(b);
		}
	}

#pragma endregion
	private: System::Void Gora_Click(System::Object^  sender, System::EventArgs^  e) {
		this->zegar_gora->Start();
		
	}
	private: System::Void zegar_gora_Tick(System::Object^  sender, System::EventArgs^  e) {
		this->pictureBox2->Top += -3;
		this->ekran_pietro->Top += -3;
		this->winda->Top += -3;
		czas++;
		//if (przesuniecie = true)	this->ludzik->Top += -3;
		if (czas == 38) {
			this->zegar_gora->Stop();
			czas = 0;
			pietro++;
			this->ekran_pietro->Text = Convert::ToString(pietro);
			Jazda(Kolejka[numer_kolejki]);
		}
		}
	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->zegar_dol->Start();
	
	//tab[2]->Parent = this;
	//tab[2]->Location = System::Drawing::Point(102, 540);
	//tab[2]->Size = System::Drawing::Size(51, 74);
	//tab[2]->BringToFront();
	//tab[2]->Load("GingerbreadMan1.jpg");
}
private: System::Void zegar_dol_Tick(System::Object^  sender, System::EventArgs^  e) {
	this->pictureBox2->Top += 3;
	this->ekran_pietro->Top += 3;
	this->winda->Top += 3;
	//if(przesuniecie=true)	this->ludzik->Top += 3;
	czas++;
	if (czas == 38) {
		this->zegar_dol->Stop();
		czas = 0;
		pietro--;
		this->ekran_pietro->Text = Convert::ToString(pietro);
		Jazda(Kolejka[numer_kolejki]);
	}
	
}


private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Kolejka.push_back(Convert::ToInt32(maskedekran_pietro->Text));
	Jazda(Kolejka[numer_kolejki]);

}

private: System::Void Parter_Tick_1(System::Object^  sender, System::EventArgs^  e) {
	czas++;
	if (czas == 1) {
		
		czas = 0;
	}

}

private: System::Void p01_Click(System::Object^  sender, System::EventArgs^  e) {
		ekrany[0]++;
		ekrany[4]++;
		Dopychanie(0, 1);
		
	}
private: System::Void p02_Click_1(System::Object^  sender, System::EventArgs^  e) {
	ekrany[1]++;
	ekrany[4]++;
	Dopychanie(0, 2);
}
private: System::Void p03_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[2]++;
	ekrany[4]++;
	Dopychanie(0, 3);
}
private: System::Void p04_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[3]++;
	ekrany[4]++;
	Dopychanie(0, 4);
}
private: System::Void p10_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[5]++;
	ekrany[9]++;
	Dopychanie(1, 0);
}
private: System::Void p12_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[6]++;
	ekrany[9]++;
	Dopychanie(1, 2);
}
private: System::Void p13_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[7]++;
	ekrany[9]++;
	Dopychanie(1, 3);
}
private: System::Void p14_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[8]++;
	ekrany[9]++;
	Dopychanie(1, 4);
}
private: System::Void p20_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[10]++;
	ekrany[14]++;
	Dopychanie(2, 0);
}
private: System::Void p21_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[11]++;
	ekrany[14]++;
	Dopychanie(2, 1);
}
private: System::Void p23_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[12]++;
	ekrany[14]++;
	Dopychanie(1, 2);
}
private: System::Void p24_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[13]++;
	ekrany[14]++;
	Dopychanie(2, 4);
}
private: System::Void p30_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[15]++;
	ekrany[19]++;
	Dopychanie(3, 0);
}
private: System::Void p31_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[16]++;
	ekrany[19]++;
	Dopychanie(3, 1);
}
private: System::Void p32_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[17]++;
	ekrany[19]++;
	Dopychanie(3, 2);
}
private: System::Void p34_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[18]++;
	ekrany[19]++;
	Dopychanie(3, 4);
}
private: System::Void p40_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[20]++;
	ekrany[24]++;
	Dopychanie(4, 0);
}
private: System::Void p41_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[21]++;
	ekrany[24]++;
	Dopychanie(4, 1);
}
private: System::Void p42_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[22]++;
	ekrany[24]++;
	Dopychanie(4, 2);
}
private: System::Void p43_Click(System::Object^  sender, System::EventArgs^  e) {
	ekrany[23]++;
	ekrany[24]++;
	Dopychanie(4, 3);
}
		 
private: System::Void Liczniki_Tick(System::Object^  sender, System::EventArgs^  e) {
	this->t01->Text = Convert::ToString(ekrany[0]);
	this->t02->Text = Convert::ToString(ekrany[1]);
	this->t03->Text = Convert::ToString(ekrany[2]);
	this->t04->Text = Convert::ToString(ekrany[3]);
	this->r0->Text = Convert::ToString(ekrany[4]);
	this->t10->Text = Convert::ToString(ekrany[5]);
	this->t12->Text = Convert::ToString(ekrany[6]);
	this->t13->Text = Convert::ToString(ekrany[7]);
	this->t14->Text = Convert::ToString(ekrany[8]);
	this->r1->Text = Convert::ToString(ekrany[9]);
	this->t20->Text = Convert::ToString(ekrany[10]);
	this->t21->Text = Convert::ToString(ekrany[11]);
	this->t23->Text = Convert::ToString(ekrany[12]);
	this->t24->Text = Convert::ToString(ekrany[13]);
	this->r2->Text = Convert::ToString(ekrany[14]);
	this->t30->Text = Convert::ToString(ekrany[15]);
	this->t31->Text = Convert::ToString(ekrany[16]);
	this->t32->Text = Convert::ToString(ekrany[17]);
	this->t34->Text = Convert::ToString(ekrany[18]);
	this->r3->Text = Convert::ToString(ekrany[19]);
	this->t40->Text = Convert::ToString(ekrany[20]);
	this->t41->Text = Convert::ToString(ekrany[21]);
	this->t42->Text = Convert::ToString(ekrany[22]);
	this->t43->Text = Convert::ToString(ekrany[23]);
	this->r4->Text = Convert::ToString(ekrany[24]);


}
};
}

/*private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

/*ludzik->Parent = this;
ludzik->Location = System::Drawing::Point(102, 540);
ludzik->Size = System::Drawing::Size(51 ,74);
ludzik->BringToFront();
ludzik->TabIndex = 10;
ludzik->Name = L"ludzik";
ludzik->Load("GingerbreadMan1.jpg");
tab[1] = ludzik;
tab[2] = tab[1];

if (pietro == 0) {
this->timer3->Start();
przesuniecie = true;

}

ciastki Ludz;
Ludz.Picturewskaz=Kreator(102, 540, Buff);
Ciastkozbior.push_back(Ludz);
this->timer3->Start();

}


private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
Ciastkozbior[0].Picturewskaz = Kreator(110+czas+czas+czas, 540, Buff);
czas++;

if (czas == 150) {
//	delete(&Ciastkozbior[0].Picturewskaz);
this->timer3->Stop();
czas = 0;
waga = waga + 70;
this->Masa->Text = Convert::ToString(waga);
}
}
*/