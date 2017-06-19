#pragma once

#include "Resource.h"
#include <vector>
#include <iostream>
#include <algorithm>


namespace Projekt2 {
	//Globals
	std::vector <int> floorPassengers;
	std::vector< std::vector<int> > floor;
	int i = 0;
	int s = 0;
	int weight = 0;
	int u1 = 0, u2 = 0, u3 = 0, u4 = 0, u5 = 0;
	int v = 0;
	int p = 0;

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
		String^ queue1;
		String^ queue2;
		String^ queue3;
		String^ queue4;
		String^ queue5;
		String^ person;
		String^ weightString;
		String^ passengersElevator;
		String^ passengerElevator;

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
	private: System::Windows::Forms::Label^  level2;
	private: System::Windows::Forms::Label^  level3;
	private: System::Windows::Forms::Label^  level4;
	private: System::Windows::Forms::Label^  level5;
	private: System::Windows::Forms::Label^  winda;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  weightFigure;
	private: System::Windows::Forms::Label^  weightSum;
	private: System::Windows::Forms::Label^  escalator;

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

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  level1;
	private: System::ComponentModel::IContainer^  components;
	protected:
	protected
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
			this->level2 = (gcnew System::Windows::Forms::Label());
			this->level3 = (gcnew System::Windows::Forms::Label());
			this->level4 = (gcnew System::Windows::Forms::Label());
			this->level5 = (gcnew System::Windows::Forms::Label());
			this->winda = (gcnew System::Windows::Forms::Label());
			this->escalator = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->weightFigure = (gcnew System::Windows::Forms::Label());
			this->weightSum = (gcnew System::Windows::Forms::Label());
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
			// level2
			// 
			this->level2->AutoSize = true;
			this->level2->Location = System::Drawing::Point(678, 322);
			this->level2->Name = L"level2";
			this->level2->Size = System::Drawing::Size(13, 13);
			this->level2->TabIndex = 55;
			this->level2->Text = L"0";
			// 
			// level3
			// 
			this->level3->AutoSize = true;
			this->level3->Location = System::Drawing::Point(71, 201);
			this->level3->Name = L"level3";
			this->level3->Size = System::Drawing::Size(13, 13);
			this->level3->TabIndex = 56;
			this->level3->Text = L"0";
			// 
			// level4
			// 
			this->level4->AutoSize = true;
			this->level4->Location = System::Drawing::Point(678, 91);
			this->level4->Name = L"level4";
			this->level4->Size = System::Drawing::Size(13, 13);
			this->level4->TabIndex = 57;
			this->level4->Text = L"0";
			this->level4->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// level5
			// 
			this->level5->AutoSize = true;
			this->level5->Location = System::Drawing::Point(71, 19);
			this->level5->Name = L"level5";
			this->level5->Size = System::Drawing::Size(13, 13);
			this->level5->TabIndex = 58;
			this->level5->Text = L"0";
			// 
			// winda
			// 
			this->winda->AutoSize = true;
			this->winda->Location = System::Drawing::Point(536, 19);
			this->winda->Name = L"winda";
			this->winda->Size = System::Drawing::Size(41, 13);
			this->winda->TabIndex = 59;
			this->winda->Text = L"Winda:";
			// 
			// escalator
			// 
			this->escalator->AutoSize = true;
			this->escalator->Location = System::Drawing::Point(583, 19);
			this->escalator->Name = L"escalator";
			this->escalator->Size = System::Drawing::Size(13, 13);
			this->escalator->TabIndex = 60;
			this->escalator->Text = L"0";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(847, 597);
			this->pictureBox1->TabIndex = 61;
			this->pictureBox1->TabStop = false;
			// 
			// weightFigure
			// 
			this->weightFigure->AutoSize = true;
			this->weightFigure->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->weightFigure->Location = System::Drawing::Point(533, 32);
			this->weightFigure->Name = L"weightFigure";
			this->weightFigure->Size = System::Drawing::Size(44, 13);
			this->weightFigure->TabIndex = 65;
			this->weightFigure->Text = L"Weight:";
			// 
			// weightSum
			// 
			this->weightSum->AutoSize = true;
			this->weightSum->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->weightSum->Location = System::Drawing::Point(584, 32);
			this->weightSum->Name = L"weightSum";
			this->weightSum->Size = System::Drawing::Size(13, 13);
			this->weightSum->TabIndex = 66;
			this->weightSum->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(849, 570);
			this->Controls->Add(this->weightSum);
			this->Controls->Add(this->weightFigure);
			this->Controls->Add(this->escalator);
			this->Controls->Add(this->winda);
			this->Controls->Add(this->level5);
			this->Controls->Add(this->level4);
			this->Controls->Add(this->level3);
			this->Controls->Add(this->level2);
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

		void signals(int v, std::vector<int> &, std::vector< std::vector<int> > &)
		{
			if (floor[v][0] == FIRST_FLOOR)
				floor[6].push_back(1);
			else if (floor[v][0] == SECOND_FLOOR)
				floor[6].push_back(2);
			else if (floor[v][0] == THIRD_FLOOR)
				floor[6].push_back(3);
			else if (floor[v][0] == FOURTH_FLOOR)
				floor[6].push_back(4);
			else if (floor[v][0] == FIFTH_FLOOR)
				floor[6].push_back(5);
		}

		void signalConfiguration(std::vector<int> &, std::vector< std::vector<int> > &)
		{
			this->timer1->Stop();
				if (this->pictureBox2->Top == FIRST_FLOOR)
				{
					for (int o = 0; o <=floor[6].size(); o++)
					{
						if (floor[6][o] == 1)
						{
							floor[6].erase(floor[6].begin() + o);
							o = 0;
						}
						if ((floor[6].size() == 1) && (floor[6][0] == 1))
						{
							floor[6].clear();
							this->timer1->Start();
							return;
						}
					}
				}
				else if (this->pictureBox2->Top == SECOND_FLOOR)
				{
					for (int o = 0; o <floor[6].size(); o++)
					{
						if (floor[6][o] == 2)
						{
							floor[6].erase(floor[6].begin() + o);
							o = 0;
						}
						if ((floor[6].size() == 1) && (floor[6][0] == 2))
						{
							floor[6].clear();
							this->timer1->Start();
							return;
						}
					}
				}
				else if (this->pictureBox2->Top == THIRD_FLOOR)
				{
					for (int o = 0; o < floor[6].size(); o++)
					{
						if (floor[6][o] == 3)
						{
							floor[6].erase(floor[6].begin() + o);
							o = 0;
						}
						 if ((floor[6].size() == 1) && (floor[6][0] == 3))
						 {
							 floor[6].clear();
							 this->timer1->Start();
							 return;
						 }
					}
				}
				else if (this->pictureBox2->Top == FOURTH_FLOOR)
				{
					for (int o = 0; o < floor[6].size(); o++)
					{
						if (floor[6][o] == 4)
						{
							floor[6].erase(floor[6].begin() + o);
							o = 0;
						}
						 if ((floor[6].size() == 1) && (floor[6][0] == 4))
						 {
							 floor[6].clear();
							 this->timer1->Start();
							 return;
						 }
					}
				}
				else if (this->pictureBox2->Top == FIFTH_FLOOR)
				{
					for (int o = 0; o < floor[6].size(); o++)
					{
						if (floor[6][o] == 5)
						{
							floor[6].erase(floor[6].begin() + o);
							o = 0;
						}
						 if ((floor[6].size() == 1) && (floor[6][0] == 5))
						 {
							 floor[6].clear();
							 this->timer1->Start();
							 return;
						 }
					}
				}
			this->timer1->Start();
		}

		void weightElevator()
		{
			weightString = Convert::ToString(floor[6].size() * 70);
			weightSum->Text = weightString;
		}

		void peopleLevel1()
		{
			queue1 = " ";
			for (int o = 0; o < floor[1].size(); o++)
			{
				if (floor[1][o] == FIRST_FLOOR) person = Convert::ToString(1);
				else if (floor[1][o] == SECOND_FLOOR) person = Convert::ToString(2);
				else if (floor[1][o] == THIRD_FLOOR) person = Convert::ToString(3);
				else if (floor[1][o] == FOURTH_FLOOR) person = Convert::ToString(4);
				else if (floor[1][o] == FIFTH_FLOOR) person = Convert::ToString(5);
				queue1 = queue1 + " " + person;
				level1->Text = queue1;
			}
			if (floor[1].empty()) level1->Text = " ";
		}
		void peopleLevel2()
		{
			queue2 = " ";
			for (int o = 0; o < floor[2].size(); o++)
			{
				if (floor[2][o] == FIRST_FLOOR) person = Convert::ToString(1);
				else if (floor[2][o] == SECOND_FLOOR) person = Convert::ToString(2);
				else if (floor[2][o] == THIRD_FLOOR) person = Convert::ToString(3);
				else if (floor[2][o] == FOURTH_FLOOR) person = Convert::ToString(4);
				else if (floor[2][o] == FIFTH_FLOOR) person = Convert::ToString(5);
				queue2 = queue2 + " " + person;
				level2->Text = queue2;
			}
			if (floor[2].empty()) level2->Text = " ";
		}
		void peopleLevel3()
		{
			queue3 = " ";
			for (int o = 0; o < floor[3].size(); o++)
			{
				if (floor[3][o] == FIRST_FLOOR) person = Convert::ToString(1);
				else if (floor[3][o] == SECOND_FLOOR) person = Convert::ToString(2);
				else if (floor[3][o] == THIRD_FLOOR) person = Convert::ToString(3);
				else if (floor[3][o] == FOURTH_FLOOR) person = Convert::ToString(4);
				else if (floor[3][o] == FIFTH_FLOOR) person = Convert::ToString(5);
				queue3 = queue3 + " " + person;
				level3->Text = queue3;
			}
			if (floor[3].empty()) level3->Text = " ";
		}
		void peopleLevel4()
		{
			queue4 = " ";
			for (int o = 0; o < floor[4].size(); o++)
			{
				if (floor[4][o] == FIRST_FLOOR) person = Convert::ToString(1);
				else if (floor[4][o] == SECOND_FLOOR) person = Convert::ToString(2);
				else if (floor[4][o] == THIRD_FLOOR) person = Convert::ToString(3);
				else if (floor[4][o] == FOURTH_FLOOR) person = Convert::ToString(4);
				else if (floor[4][o] == FIFTH_FLOOR) person = Convert::ToString(5);
				queue4 = queue4 + " " + person;
				level4->Text = queue4;
			}
			if (floor[4].empty()) level4->Text = " ";
		}
		void peopleLevel5()
		{
			queue5 = " ";
			for (int o = 0; o < floor[5].size(); o++)
			{
				if (floor[5][o] == FIRST_FLOOR) person = Convert::ToString(1);
				else if (floor[5][o] == SECOND_FLOOR) person = Convert::ToString(2);
				else if (floor[5][o] == THIRD_FLOOR) person = Convert::ToString(3);
				else if (floor[5][o] == FOURTH_FLOOR) person = Convert::ToString(4);
				else if (floor[5][o] == FIFTH_FLOOR) person = Convert::ToString(5);
				queue5 = queue5 + " " + person;
				level5->Text = queue5;
			}
			if (floor[5].empty()) level5->Text = " ";
		}

		void peopleElevator()
		{
			passengersElevator = " ";
			for (int o = 0; o < floor[6].size(); o++)
			{
				passengerElevator = Convert::ToString(floor[6][o]);
				passengersElevator = passengersElevator + " " + passengerElevator;
				escalator->Text = passengersElevator;
			}
			if (floor[6].empty()) escalator->Text = " ";
		}

		//Elevator controll
		void Elevator(int x, std::vector<int> &, std::vector< std::vector<int> > &)
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
				this->timer1->Stop();
				i = 0;
				if (!floor[0].empty())
					floor[0].erase(floor[0].begin());
				if(!floor[6].empty())
				signalConfiguration(floorPassengers, floor);
				if (this->pictureBox2->Top == FIRST_FLOOR)
				{
					if (!floor[1].empty())
					{
						v = 1;
						while (!floor[1].empty())
						{
							floor[0].push_back(floor[1][0]);
							signals(v, floorPassengers, floor);
							floor[1].erase(floor[1].begin());
						}
					}
					peopleElevator();
					weightElevator();
				}
				else if (this->pictureBox2->Top == SECOND_FLOOR)
				{
					if (!floor[2].empty())
					{
						v = 2;
						while (!floor[2].empty())
						{
							floor[0].push_back(floor[2][0]);
							signals(v, floorPassengers, floor);
							floor[2].erase(floor[2].begin());
						}
					}
					peopleElevator();
					weightElevator();
				}
				else if (this->pictureBox2->Top == THIRD_FLOOR)
				{
					if (!floor[3].empty())
					{
						v = 3;
						while (!floor[3].empty())
						{
							floor[0].push_back(floor[3][0]);
							signals(v, floorPassengers, floor);
							floor[3].erase(floor[3].begin());
						}
					}
					peopleElevator();
					weightElevator();
				}
				else if (this->pictureBox2->Top == FOURTH_FLOOR)
				{
					if (!floor[4].empty())
					{
						v = 4;
						while (!floor[4].empty())
						{
							floor[0].push_back(floor[4][0]);
							signals(v, floorPassengers, floor);
							floor[4].erase(floor[4].begin());
						}
					}
					peopleElevator();
					weightElevator();
				}
				else if (this->pictureBox2->Top == FIFTH_FLOOR)
				{
					if (!floor[5].empty())
					{
						v = 5;
						while (!floor[5].empty())
						{
							floor[0].push_back(floor[5][0]);
							signals(v, floorPassengers, floor);
							floor[5].erase(floor[5].begin());
						}
					}
					peopleElevator();
					weightElevator();
				}
			}
			this->timer1->Start();
		}


		void Passengers(std::vector<int>&)
		{
			for (int i = 0; i < floor[0].size(); i++)
			{
				int x = floor[0][i];
				for (int j = i + 1; j < floor[0].size(); j++)
				{
					if (floor[0][j] == x)
					{
						floor[0].erase(floor[0].begin() + j);
					}
				}
			}
		}

		void vectorInizialization(std::vector<int> &, std::vector< std::vector<int> > &)
		{
			for (int q = 0; q < 7; q++) {
				floor.push_back(floorPassengers);
			}
		}


		void control(int e,int r, int p, std::vector<int> &, std::vector< std::vector<int> > &)
		{
			this->timer1->Stop();
			floor[0].push_back(e);
			floor[p].push_back(r);
			this->timer1->Start();
			Passengers(floor[0]);
		}

#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		vectorInizialization(floorPassengers, floor);
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (!floor[0].empty()) {
			Elevator(floor[0][0], floorPassengers, floor);
		}
		else
		{
			s++;
			if (s == 240)
			{
				floor[0].push_back(FIRST_FLOOR);
				s = 0;
			}
		}
		peopleLevel1();
		peopleLevel2();
		peopleLevel3();
		peopleLevel4();
		peopleLevel5();
		Passengers(floor[0]);
	}
			 //Buttons
	private: System::Void button1_2_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 1;
		control(FIRST_FLOOR, SECOND_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button1_3_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 1;
		control(FIRST_FLOOR, THIRD_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button1_4_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 1;
		control(FIRST_FLOOR, FOURTH_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button1_5_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 1;
		control(FIRST_FLOOR, FIFTH_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button2_1_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 2;
		control(SECOND_FLOOR, FIRST_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button2_3_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 2;
		control(SECOND_FLOOR, THIRD_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button2_4_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 2;
		control(SECOND_FLOOR, FOURTH_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button2_5_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 2;
		control(SECOND_FLOOR, FIFTH_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button3_1_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 3;
		control(THIRD_FLOOR, FIRST_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button3_2_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 3;
		control(THIRD_FLOOR, SECOND_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button3_4_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 3;
		control(THIRD_FLOOR, FOURTH_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button3_5_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 3;
		control(THIRD_FLOOR, FIFTH_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button4_1_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 4;
		control(FOURTH_FLOOR, FIRST_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button4_2_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 4;
		control(FOURTH_FLOOR, SECOND_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button4_3_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 4;
		control(FOURTH_FLOOR, THIRD_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button4_5_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 4;
		control(FOURTH_FLOOR, FIFTH_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button5_1_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 5;
		control(FIFTH_FLOOR, FIRST_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button5_2_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 5;
		control(FIFTH_FLOOR, SECOND_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button5_3_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 5;
		control(FIFTH_FLOOR, THIRD_FLOOR, p, floorPassengers, floor);
	}
	private: System::Void button5_4_Click(System::Object^  sender, System::EventArgs^  e) {
		p = 5;
		control(FIFTH_FLOOR, FOURTH_FLOOR, p, floorPassengers, floor);
	}
	};

}
