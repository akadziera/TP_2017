#pragma once

namespace Projekt2 {

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
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	protected:


























	protected:

	protected:


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(132, 444);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(22, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"5";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(100, 446);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(26, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"4";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(72, 444);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(22, 25);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(44, 446);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(24, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 446);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(22, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"1";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(674, 320);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(22, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"1";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(678, 107);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(22, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"1";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-4, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(841, 576);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(12, 12);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(22, 23);
			this->button8->TabIndex = 8;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click_1);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(12, 219);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(22, 23);
			this->button9->TabIndex = 9;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(40, 12);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(24, 23);
			this->button10->TabIndex = 10;
			this->button10->Text = L"2";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click_1);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(702, 320);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(24, 23);
			this->button11->TabIndex = 11;
			this->button11->Text = L"2";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click_1);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(706, 109);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(24, 23);
			this->button12->TabIndex = 12;
			this->button12->Text = L"2";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click_1);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(44, 219);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(24, 23);
			this->button13->TabIndex = 13;
			this->button13->Text = L"2";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click_1);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(72, 12);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(22, 25);
			this->button14->TabIndex = 14;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click_1);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(736, 107);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(22, 25);
			this->button15->TabIndex = 15;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click_1);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(74, 219);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(22, 25);
			this->button16->TabIndex = 16;
			this->button16->Text = L"3";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click_1);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(732, 318);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(22, 25);
			this->button17->TabIndex = 17;
			this->button17->Text = L"3";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click_1);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(100, 13);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(26, 23);
			this->button18->TabIndex = 18;
			this->button18->Text = L"4";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click_1);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(102, 219);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(26, 23);
			this->button19->TabIndex = 19;
			this->button19->Text = L"4";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click_1);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(764, 107);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(26, 23);
			this->button20->TabIndex = 20;
			this->button20->Text = L"4";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click_1);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(760, 320);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(26, 23);
			this->button21->TabIndex = 21;
			this->button21->Text = L"4";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click_1);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(132, 14);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(22, 23);
			this->button22->TabIndex = 22;
			this->button22->Text = L"5";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click_1);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(134, 219);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(22, 23);
			this->button23->TabIndex = 23;
			this->button23->Text = L"5";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click_1);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(796, 107);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(22, 23);
			this->button24->TabIndex = 24;
			this->button24->Text = L"5";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click_1);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(796, 320);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(22, 23);
			this->button25->TabIndex = 25;
			this->button25->Text = L"5";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(849, 570);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click_2(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button8_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button9_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button7_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button10_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button11_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button12_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button13_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button16_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button14_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button15_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button17_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button21_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button20_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button19_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button18_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button25_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button24_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button23_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button22_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
};

}