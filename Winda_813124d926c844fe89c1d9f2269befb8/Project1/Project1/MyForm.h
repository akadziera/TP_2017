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
			 System::ComponentModel::Container ^components;
			 array<PictureBox^> ^tab;
			 
	public:
		MyForm(void)
		{
			InitializeComponent();
			tab = gcnew array<PictureBox^>(100);
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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  Gora;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer2;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Gora = (gcnew System::Windows::Forms::Button());
			this->ludzik = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ludzik))->BeginInit();
			this->SuspendLayout();
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
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(523, 528);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(328, 90);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 3;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// Gora
			// 
			this->Gora->Location = System::Drawing::Point(122, 190);
			this->Gora->Name = L"Gora";
			this->Gora->Size = System::Drawing::Size(165, 55);
			this->Gora->TabIndex = 2;
			this->Gora->Text = L"Gora";
			this->Gora->UseVisualStyleBackColor = true;
			this->Gora->Click += gcnew System::EventHandler(this, &MyForm::Gora_Click);
			// 
			// ludzik
			// 
			this->ludzik->Location = System::Drawing::Point(0, 0);
			this->ludzik->Name = L"ludzik";
			this->ludzik->Size = System::Drawing::Size(100, 50);
			this->ludzik->TabIndex = 0;
			this->ludzik->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(122, 267);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 53);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Dol";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 3;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(37, 475);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 29);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Stworz czlowieka";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// timer3
			// 
			this->timer3->Interval = 1;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(813, 537);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(29, 20);
			this->textBox1->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1346, 652);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Gora);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ludzik))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Gora_Click(System::Object^  sender, System::EventArgs^  e) {
		this->timer1->Start();
		
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		this->pictureBox2->Top += -3;
		this->textBox1->Top += -3;
		czas++;
		//if (przesuniecie = true)	this->ludzik->Top += -3;
		if (czas == 38) {
			this->timer1->Stop();
			czas = 0;
			pietro++;
			this->textBox1->Text = Convert::ToString(pietro);
		}
		}
	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->timer2->Start();
	//tab[2]->Parent = this;
	tab[2]->Location = System::Drawing::Point(102, 540);
	tab[2]->Size = System::Drawing::Size(51, 74);
	tab[2]->BringToFront();
	tab[2]->Load("GingerbreadMan1.jpg");
}
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
	this->pictureBox2->Top += 3;
	this->textBox1->Top += 3;
	//if(przesuniecie=true)	this->ludzik->Top += 3;
	czas++;
	if (czas == 38) {
		this->timer2->Stop();
		czas = 0;
		pietro--;
		this->textBox1->Text = Convert::ToString(pietro);
	}
	
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	ludzik->Parent = this;
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
}
		 
		 
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
	this->ludzik->Left += 5;
	czas++;
	if (czas == 100) {
		this->timer3->Stop();
		czas = 0;
	}
}
};
}
