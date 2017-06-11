#pragma once

#include "Resource.h"
#include <vector>
#include <iostream>
#include <algorithm>

namespace Projekt2 {
	//Globals
	std::vector <int> floor;
	int i = 0;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		//
		String^ lvl1 = "1";
		String^ lvl2 = "2";
		String^ lvl3 = "3";
		String^ lvl4 = "4";
		String^ lvl5 = "5";
		String^ queue1;
		String^ queue2;
		String^ queue3;
		String^ queue4;
	private: System::Windows::Forms::Button^  button3_1;
	private: System::Windows::Forms::Button^  button3_2;
	private: System::Windows::Forms::Button^  button3_4;
	private: System::Windows::Forms::Button^  button3_5;
	private: System::Windows::Forms::Button^  button5_2;
	private: System::Windows::Forms::Button^  button5_1;
	private: System::Windows::Forms::Button^  button4_1;
	private: System::Windows::Forms::Button^  button4_2;
	private: System::Windows::Forms::Button^  button4_3;
	private: System::Windows::Forms::Button^  button4_5;
	private: System::Windows::Forms::Button^  button2_1;
	private: System::Windows::Forms::Button^  button2_3;
	private: System::Windows::Forms::Button^  button2_4;
	private: System::Windows::Forms::Button^  button2_5;
	private: System::Windows::Forms::Button^  button1_5;
	private: System::Windows::Forms::Button^  button1_4;
	private: System::Windows::Forms::Button^  button1_3;
	private: System::Windows::Forms::Button^  button1_2;
	private: System::Windows::Forms::Button^  button5_4;
	private: System::Windows::Forms::Button^  button5_3;
			 String^ queue5;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  timer1;









	private: System::Windows::Forms::Label^  level1;
	private: System::ComponentModel::IContainer^  components;


	protected:

	protected:

	protected:


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obsługi projektanta — nie należy modyfikować 
		/// zawartość tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->level1 = (gcnew System::Windows::Forms::Label());
			this->button3_1 = (gcnew System::Windows::Forms::Button());
			this->button3_2 = (gcnew System::Windows::Forms::Button());
			this->button3_4 = (gcnew System::Windows::Forms::Button());
			this->button3_5 = (gcnew System::Windows::Forms::Button());
			this->button5_2 = (gcnew System::Windows::Forms::Button());
			this->button5_1 = (gcnew System::Windows::Forms::Button());
			this->button4_1 = (gcnew System::Windows::Forms::Button());
			this->button4_2 = (gcnew System::Windows::Forms::Button());
			this->button4_3 = (gcnew System::Windows::Forms::Button());
			this->button4_5 = (gcnew System::Windows::Forms::Button());
			this->button2_1 = (gcnew System::Windows::Forms::Button());
			this->button2_3 = (gcnew System::Windows::Forms::Button());
			this->button2_4 = (gcnew System::Windows::Forms::Button());
			this->button2_5 = (gcnew System::Windows::Forms::Button());
			this->button1_5 = (gcnew System::Windows::Forms::Button());
			this->button1_4 = (gcnew System::Windows::Forms::Button());
			this->button1_3 = (gcnew System::Windows::Forms::Button());
			this->button1_2 = (gcnew System::Windows::Forms::Button());
			this->button5_4 = (gcnew System::Windows::Forms::Button());
			this->button5_3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(307, 460);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(206, 110);
			this->pictureBox2->TabIndex = 27;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(851, 568);
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// level1
			// 
			this->level1->AutoSize = true;
			this->level1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->level1->Location = System::Drawing::Point(154, 430);
			this->level1->Name = L"level1";
			this->level1->Size = System::Drawing::Size(13, 13);
			this->level1->TabIndex = 34;
			this->level1->Text = L"0";
			// 
			// button3_1
			// 
			this->button3_1->Location = System::Drawing::Point(12, 247);
			this->button3_1->Name = L"button3_1";
			this->button3_1->Size = System::Drawing::Size(20, 24);
			this->button3_1->TabIndex = 35;
			this->button3_1->Text = L"1";
			this->button3_1->UseVisualStyleBackColor = true;
			this->button3_1->Click += gcnew System::EventHandler(this, &MyForm::button3_1_Click);
			// 
			// button3_2
			// 
			this->button3_2->Location = System::Drawing::Point(38, 247);
			this->button3_2->Name = L"button3_2";
			this->button3_2->Size = System::Drawing::Size(20, 24);
			this->button3_2->TabIndex = 36;
			this->button3_2->Text = L"2";
			this->button3_2->UseVisualStyleBackColor = true;
			this->button3_2->Click += gcnew System::EventHandler(this, &MyForm::button3_2_Click);
			// 
			// button3_4
			// 
			this->button3_4->Location = System::Drawing::Point(64, 247);
			this->button3_4->Name = L"button3_4";
			this->button3_4->Size = System::Drawing::Size(20, 24);
			this->button3_4->TabIndex = 37;
			this->button3_4->Text = L"4";
			this->button3_4->UseVisualStyleBackColor = true;
			this->button3_4->Click += gcnew System::EventHandler(this, &MyForm::button3_4_Click);
			// 
			// button3_5
			// 
			this->button3_5->Location = System::Drawing::Point(90, 247);
			this->button3_5->Name = L"button3_5";
			this->button3_5->Size = System::Drawing::Size(20, 24);
			this->button3_5->TabIndex = 38;
			this->button3_5->Text = L"5";
			this->button3_5->UseVisualStyleBackColor = true;
			this->button3_5->Click += gcnew System::EventHandler(this, &MyForm::button3_5_Click);
			// 
			// button5_2
			// 
			this->button5_2->Location = System::Drawing::Point(38, 47);
			this->button5_2->Name = L"button5_2";
			this->button5_2->Size = System::Drawing::Size(20, 24);
			this->button5_2->TabIndex = 39;
			this->button5_2->Text = L"2";
			this->button5_2->UseVisualStyleBackColor = true;
			this->button5_2->Click += gcnew System::EventHandler(this, &MyForm::button5_2_Click);
			// 
			// button5_1
			// 
			this->button5_1->Location = System::Drawing::Point(12, 47);
			this->button5_1->Name = L"button5_1";
			this->button5_1->Size = System::Drawing::Size(20, 24);
			this->button5_1->TabIndex = 40;
			this->button5_1->Text = L"1";
			this->button5_1->UseVisualStyleBackColor = true;
			this->button5_1->Click += gcnew System::EventHandler(this, &MyForm::button5_1_Click);
			// 
			// button4_1
			// 
			this->button4_1->Location = System::Drawing::Point(739, 138);
			this->button4_1->Name = L"button4_1";
			this->button4_1->Size = System::Drawing::Size(20, 24);
			this->button4_1->TabIndex = 41;
			this->button4_1->Text = L"1";
			this->button4_1->UseVisualStyleBackColor = true;
			this->button4_1->Click += gcnew System::EventHandler(this, &MyForm::button4_1_Click);
			// 
			// button4_2
			// 
			this->button4_2->Location = System::Drawing::Point(765, 138);
			this->button4_2->Name = L"button4_2";
			this->button4_2->Size = System::Drawing::Size(20, 24);
			this->button4_2->TabIndex = 42;
			this->button4_2->Text = L"2";
			this->button4_2->UseVisualStyleBackColor = true;
			this->button4_2->Click += gcnew System::EventHandler(this, &MyForm::button4_2_Click);
			// 
			// button4_3
			// 
			this->button4_3->Location = System::Drawing::Point(791, 138);
			this->button4_3->Name = L"button4_3";
			this->button4_3->Size = System::Drawing::Size(20, 24);
			this->button4_3->TabIndex = 43;
			this->button4_3->Text = L"3";
			this->button4_3->UseVisualStyleBackColor = true;
			this->button4_3->Click += gcnew System::EventHandler(this, &MyForm::button4_3_Click);
			// 
			// button4_5
			// 
			this->button4_5->Location = System::Drawing::Point(817, 138);
			this->button4_5->Name = L"button4_5";
			this->button4_5->Size = System::Drawing::Size(20, 24);
			this->button4_5->TabIndex = 44;
			this->button4_5->Text = L"5";
			this->button4_5->UseVisualStyleBackColor = true;
			this->button4_5->Click += gcnew System::EventHandler(this, &MyForm::button4_5_Click);
			// 
			// button2_1
			// 
			this->button2_1->Location = System::Drawing::Point(739, 366);
			this->button2_1->Name = L"button2_1";
			this->button2_1->Size = System::Drawing::Size(20, 24);
			this->button2_1->TabIndex = 45;
			this->button2_1->Text = L"1";
			this->button2_1->UseVisualStyleBackColor = true;
			this->button2_1->Click += gcnew System::EventHandler(this, &MyForm::button2_1_Click);
			// 
			// button2_3
			// 
			this->button2_3->Location = System::Drawing::Point(765, 366);
			this->button2_3->Name = L"button2_3";
			this->button2_3->Size = System::Drawing::Size(20, 24);
			this->button2_3->TabIndex = 46;
			this->button2_3->Text = L"3";
			this->button2_3->UseVisualStyleBackColor = true;
			this->button2_3->Click += gcnew System::EventHandler(this, &MyForm::button2_3_Click);
			// 
			// button2_4
			// 
			this->button2_4->Location = System::Drawing::Point(791, 366);
			this->button2_4->Name = L"button2_4";
			this->button2_4->Size = System::Drawing::Size(20, 24);
			this->button2_4->TabIndex = 47;
			this->button2_4->Text = L"4";
			this->button2_4->UseVisualStyleBackColor = true;
			this->button2_4->Click += gcnew System::EventHandler(this, &MyForm::button2_4_Click);
			// 
			// button2_5
			// 
			this->button2_5->Location = System::Drawing::Point(817, 366);
			this->button2_5->Name = L"button2_5";
			this->button2_5->Size = System::Drawing::Size(20, 24);
			this->button2_5->TabIndex = 48;
			this->button2_5->Text = L"5";
			this->button2_5->UseVisualStyleBackColor = true;
			this->button2_5->Click += gcnew System::EventHandler(this, &MyForm::button2_5_Click);
			// 
			// button1_5
			// 
			this->button1_5->Location = System::Drawing::Point(90, 484);
			this->button1_5->Name = L"button1_5";
			this->button1_5->Size = System::Drawing::Size(20, 24);
			this->button1_5->TabIndex = 49;
			this->button1_5->Text = L"5";
			this->button1_5->UseVisualStyleBackColor = true;
			this->button1_5->Click += gcnew System::EventHandler(this, &MyForm::button1_5_Click);
			// 
			// button1_4
			// 
			this->button1_4->Location = System::Drawing::Point(64, 484);
			this->button1_4->Name = L"button1_4";
			this->button1_4->Size = System::Drawing::Size(20, 24);
			this->button1_4->TabIndex = 50;
			this->button1_4->Text = L"4";
			this->button1_4->UseVisualStyleBackColor = true;
			this->button1_4->Click += gcnew System::EventHandler(this, &MyForm::button1_4_Click);
			// 
			// button1_3
			// 
			this->button1_3->Location = System::Drawing::Point(38, 484);
			this->button1_3->Name = L"button1_3";
			this->button1_3->Size = System::Drawing::Size(20, 24);
			this->button1_3->TabIndex = 51;
			this->button1_3->Text = L"3";
			this->button1_3->UseVisualStyleBackColor = true;
			this->button1_3->Click += gcnew System::EventHandler(this, &MyForm::button1_3_Click);
			// 
			// button1_2
			// 
			this->button1_2->Location = System::Drawing::Point(12, 484);
			this->button1_2->Name = L"button1_2";
			this->button1_2->Size = System::Drawing::Size(20, 24);
			this->button1_2->TabIndex = 52;
			this->button1_2->Text = L"2";
			this->button1_2->UseVisualStyleBackColor = true;
			this->button1_2->Click += gcnew System::EventHandler(this, &MyForm::button1_2_Click);
			// 
			// button5_4
			// 
			this->button5_4->Location = System::Drawing::Point(90, 47);
			this->button5_4->Name = L"button5_4";
			this->button5_4->Size = System::Drawing::Size(20, 24);
			this->button5_4->TabIndex = 53;
			this->button5_4->Text = L"4";
			this->button5_4->UseVisualStyleBackColor = true;
			this->button5_4->Click += gcnew System::EventHandler(this, &MyForm::button5_4_Click);
			// 
			// button5_3
			// 
			this->button5_3->Location = System::Drawing::Point(64, 47);
			this->button5_3->Name = L"button5_3";
			this->button5_3->Size = System::Drawing::Size(20, 24);
			this->button5_3->TabIndex = 54;
			this->button5_3->Text = L"3";
			this->button5_3->UseVisualStyleBackColor = true;
			this->button5_3->Click += gcnew System::EventHandler(this, &MyForm::button5_3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(849, 570);
			this->Controls->Add(this->button5_3);
			this->Controls->Add(this->button5_4);
			this->Controls->Add(this->button1_2);
			this->Controls->Add(this->button1_3);
			this->Controls->Add(this->button1_4);
			this->Controls->Add(this->button1_5);
			this->Controls->Add(this->button2_5);
			this->Controls->Add(this->button2_4);
			this->Controls->Add(this->button2_3);
			this->Controls->Add(this->button2_1);
			this->Controls->Add(this->button4_5);
			this->Controls->Add(this->button4_3);
			this->Controls->Add(this->button4_2);
			this->Controls->Add(this->button4_1);
			this->Controls->Add(this->button5_1);
			this->Controls->Add(this->button5_2);
			this->Controls->Add(this->button3_5);
			this->Controls->Add(this->button3_4);
			this->Controls->Add(this->button3_2);
			this->Controls->Add(this->button3_1);
			this->Controls->Add(this->level1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}



		//Elevator controll

void Elevator(int x)
{
	if (i != 75)
	{
		i++;
		return;
	}
	if (this->pictureBox2->Top < x)
		this->pictureBox2->Top += 1;
	else if (this->pictureBox2->Top > x)
		this->pictureBox2->Top -= 1;
	else
	{
		i = 0;
		floor.erase(floor.begin());
	}
	if(floor.empty())
		this->timer1->Stop();
}


void Passengers(std::vector<int>&)
{
	for (int i = 0; i < floor.size(); i++)
	{
		int x = floor[i];
		for (int j = i+1; j < floor.size(); j++)
		{
			if (floor[j] == x)
			{
				floor.erase(floor.begin()+j);
			}
		}
	}
	
}
/*void Sort(std::vector<int>&)
{



	
	int x, y, z;
	 x = floor[0];
	 y = floor[1];
	if (x < y)
	{
		for (int i; i < floor.size(); i++)
		{
			if (floor[i] == 5)
				 z = i;
		}
		sort(floor.begin(), floor.end());
	}

}*/



	#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		Elevator(floor[0]);
	}
	/*private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FIRST_FLOOR);
			this->timer1->Start();
			queue1 = queue1 + "," + lvl1;
			level1->Text = queue1;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(SECOND_FLOOR);
		this->timer1->Start();

		queue1 = queue1 + "," + lvl2;
		level1->Text = queue1;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(THIRD_FLOOR);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl3;
		level1->Text = queue1;
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FOURTH_FLOOR);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl4;
		level1->Text = queue1;
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FIFTH_FLOOR);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl5;
		level1->Text = queue1;
	}*/

	//Buttons
	private: System::Void button1_2_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FIRST_FLOOR);
		floor.push_back(SECOND_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button1_3_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FIRST_FLOOR);
		floor.push_back(THIRD_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button1_4_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FIRST_FLOOR);
		floor.push_back(FOURTH_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button1_5_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FIRST_FLOOR);
		floor.push_back(FIFTH_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button2_1_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(SECOND_FLOOR);
		floor.push_back(FIRST_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button2_3_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(SECOND_FLOOR);
		floor.push_back(THIRD_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button2_4_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(SECOND_FLOOR);
		floor.push_back(FOURTH_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button2_5_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(SECOND_FLOOR);
		floor.push_back(FIFTH_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button3_1_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(THIRD_FLOOR);
		floor.push_back(FIRST_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button3_2_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(THIRD_FLOOR);
		floor.push_back(SECOND_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button3_4_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(THIRD_FLOOR);
		floor.push_back(FOURTH_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button3_5_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(THIRD_FLOOR);
		floor.push_back(FIFTH_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button4_1_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FOURTH_FLOOR);
		floor.push_back(FIRST_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button4_2_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FOURTH_FLOOR);
		floor.push_back(SECOND_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button4_3_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FOURTH_FLOOR);
		floor.push_back(THIRD_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button4_5_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FOURTH_FLOOR);
		floor.push_back(FIFTH_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button5_1_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FIFTH_FLOOR);
		floor.push_back(FIRST_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button5_2_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FIFTH_FLOOR);
		floor.push_back(SECOND_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button5_3_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FIFTH_FLOOR);
		floor.push_back(THIRD_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	private: System::Void button5_4_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FIFTH_FLOOR);
		floor.push_back(FOURTH_FLOOR);
		Passengers(floor);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl1;
		level1->Text = queue1;
	}
	};

}
