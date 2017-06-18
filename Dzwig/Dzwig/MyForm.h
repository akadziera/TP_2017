#pragma once

namespace Dzwig {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int licznik = 0;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
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
	private: System::Windows::Forms::Label^  tytul;
	protected:

	private: System::Windows::Forms::Button^  graj;

	private: System::Windows::Forms::Button^  DostosujDzwig;
	private: System::Windows::Forms::Button^  credits;
	private: System::Windows::Forms::PictureBox^  obraz1;
	private: System::Windows::Forms::PictureBox^  obraz2;
	private: System::Windows::Forms::Button^  menu;
	private: System::Windows::Forms::PictureBox^  dzwig;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::PictureBox^  hak;
	private: System::Windows::Forms::Button^  left;
	private: System::Windows::Forms::Button^  right;
	private: System::Windows::Forms::Button^  up;
	private: System::Windows::Forms::Button^  down;
	private: System::Windows::Forms::PictureBox^  obraz3;
	private: System::Windows::Forms::PictureBox^  box;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::PictureBox^  chain;







	protected:








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tytul = (gcnew System::Windows::Forms::Label());
			this->graj = (gcnew System::Windows::Forms::Button());
			this->DostosujDzwig = (gcnew System::Windows::Forms::Button());
			this->credits = (gcnew System::Windows::Forms::Button());
			this->obraz1 = (gcnew System::Windows::Forms::PictureBox());
			this->obraz2 = (gcnew System::Windows::Forms::PictureBox());
			this->menu = (gcnew System::Windows::Forms::Button());
			this->dzwig = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->hak = (gcnew System::Windows::Forms::PictureBox());
			this->left = (gcnew System::Windows::Forms::Button());
			this->right = (gcnew System::Windows::Forms::Button());
			this->up = (gcnew System::Windows::Forms::Button());
			this->down = (gcnew System::Windows::Forms::Button());
			this->obraz3 = (gcnew System::Windows::Forms::PictureBox());
			this->box = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->chain = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->obraz1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->obraz2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dzwig))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hak))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->obraz3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->box))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chain))->BeginInit();
			this->SuspendLayout();
			// 
			// tytul
			// 
			this->tytul->AutoSize = true;
			this->tytul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tytul->ForeColor = System::Drawing::SystemColors::MenuText;
			this->tytul->Location = System::Drawing::Point(278, 36);
			this->tytul->Name = L"tytul";
			this->tytul->Size = System::Drawing::Size(427, 42);
			this->tytul->TabIndex = 0;
			this->tytul->Text = L"Symulator dŸwigu 2017";
			// 
			// graj
			// 
			this->graj->Cursor = System::Windows::Forms::Cursors::Hand;
			this->graj->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->graj->Location = System::Drawing::Point(340, 132);
			this->graj->Name = L"graj";
			this->graj->Size = System::Drawing::Size(297, 65);
			this->graj->TabIndex = 1;
			this->graj->Text = L"Graj";
			this->graj->UseVisualStyleBackColor = true;
			this->graj->Click += gcnew System::EventHandler(this, &MyForm::graj_Click);
			// 
			// DostosujDzwig
			// 
			this->DostosujDzwig->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DostosujDzwig->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->DostosujDzwig->Location = System::Drawing::Point(340, 223);
			this->DostosujDzwig->Name = L"DostosujDzwig";
			this->DostosujDzwig->Size = System::Drawing::Size(297, 65);
			this->DostosujDzwig->TabIndex = 2;
			this->DostosujDzwig->Text = L"Dostosuj dŸwig";
			this->DostosujDzwig->UseVisualStyleBackColor = true;
			this->DostosujDzwig->Click += gcnew System::EventHandler(this, &MyForm::DostosujDzwig_Click);
			// 
			// credits
			// 
			this->credits->Cursor = System::Windows::Forms::Cursors::Hand;
			this->credits->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->credits->Location = System::Drawing::Point(340, 310);
			this->credits->Name = L"credits";
			this->credits->Size = System::Drawing::Size(297, 65);
			this->credits->TabIndex = 3;
			this->credits->Text = L"Credits";
			this->credits->UseVisualStyleBackColor = true;
			this->credits->Click += gcnew System::EventHandler(this, &MyForm::credits_Click);
			// 
			// obraz1
			// 
			this->obraz1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"obraz1.Image")));
			this->obraz1->Location = System::Drawing::Point(1, 52);
			this->obraz1->Name = L"obraz1";
			this->obraz1->Size = System::Drawing::Size(350, 406);
			this->obraz1->TabIndex = 4;
			this->obraz1->TabStop = false;
			// 
			// obraz2
			// 
			this->obraz2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"obraz2.Image")));
			this->obraz2->Location = System::Drawing::Point(504, 185);
			this->obraz2->Name = L"obraz2";
			this->obraz2->Size = System::Drawing::Size(526, 366);
			this->obraz2->TabIndex = 5;
			this->obraz2->TabStop = false;
			// 
			// menu
			// 
			this->menu->Location = System::Drawing::Point(504, 435);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(75, 23);
			this->menu->TabIndex = 6;
			this->menu->Text = L"MENU";
			this->menu->UseVisualStyleBackColor = true;
			this->menu->Visible = false;
			this->menu->Click += gcnew System::EventHandler(this, &MyForm::menu_Click);
			// 
			// dzwig
			// 
			this->dzwig->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dzwig.Image")));
			this->dzwig->Location = System::Drawing::Point(1, -14);
			this->dzwig->Name = L"dzwig";
			this->dzwig->Size = System::Drawing::Size(636, 486);
			this->dzwig->TabIndex = 7;
			this->dzwig->TabStop = false;
			this->dzwig->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"OpenSymbol", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(678, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 24);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Kolor DŸwigu";
			this->label1->Visible = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"OpenSymbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(645, 132);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 33);
			this->button1->TabIndex = 9;
			this->button1->Text = L"¿ó³ty";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"OpenSymbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(756, 132);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 33);
			this->button2->TabIndex = 10;
			this->button2->Text = L"zielony";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"OpenSymbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(645, 171);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 33);
			this->button3->TabIndex = 11;
			this->button3->Text = L"ró¿owy";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"OpenSymbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(756, 171);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(105, 33);
			this->button4->TabIndex = 12;
			this->button4->Text = L"niebieski";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"OpenSymbol", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(687, 232);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 24);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Kolor Haka";
			this->label2->Visible = false;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"OpenSymbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(756, 309);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(105, 33);
			this->button5->TabIndex = 17;
			this->button5->Text = L"niebieski";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"OpenSymbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(645, 309);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(105, 33);
			this->button6->TabIndex = 16;
			this->button6->Text = L"ró¿owy";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"OpenSymbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(756, 270);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(105, 33);
			this->button7->TabIndex = 15;
			this->button7->Text = L"zielony";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"OpenSymbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(645, 270);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(105, 33);
			this->button8->TabIndex = 14;
			this->button8->Text = L"¿ó³ty";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// hak
			// 
			this->hak->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hak.Image")));
			this->hak->Location = System::Drawing::Point(420, 88);
			this->hak->Name = L"hak";
			this->hak->Size = System::Drawing::Size(31, 65);
			this->hak->TabIndex = 18;
			this->hak->TabStop = false;
			this->hak->Visible = false;
			// 
			// left
			// 
			this->left->Cursor = System::Windows::Forms::Cursors::Hand;
			this->left->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"left.Image")));
			this->left->Location = System::Drawing::Point(874, 88);
			this->left->Name = L"left";
			this->left->Size = System::Drawing::Size(58, 58);
			this->left->TabIndex = 19;
			this->left->UseVisualStyleBackColor = true;
			this->left->Visible = false;
			this->left->Click += gcnew System::EventHandler(this, &MyForm::left_Click);
			// 
			// right
			// 
			this->right->Cursor = System::Windows::Forms::Cursors::Hand;
			this->right->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"right.Image")));
			this->right->Location = System::Drawing::Point(1002, 88);
			this->right->Name = L"right";
			this->right->Size = System::Drawing::Size(58, 58);
			this->right->TabIndex = 20;
			this->right->UseVisualStyleBackColor = true;
			this->right->Visible = false;
			this->right->Click += gcnew System::EventHandler(this, &MyForm::right_Click);
			// 
			// up
			// 
			this->up->Cursor = System::Windows::Forms::Cursors::Hand;
			this->up->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"up.Image")));
			this->up->Location = System::Drawing::Point(938, 56);
			this->up->Name = L"up";
			this->up->Size = System::Drawing::Size(58, 58);
			this->up->TabIndex = 21;
			this->up->UseVisualStyleBackColor = true;
			this->up->Visible = false;
			this->up->Click += gcnew System::EventHandler(this, &MyForm::up_Click);
			// 
			// down
			// 
			this->down->Cursor = System::Windows::Forms::Cursors::Hand;
			this->down->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"down.Image")));
			this->down->Location = System::Drawing::Point(938, 120);
			this->down->Name = L"down";
			this->down->Size = System::Drawing::Size(58, 58);
			this->down->TabIndex = 22;
			this->down->UseVisualStyleBackColor = true;
			this->down->Visible = false;
			this->down->Click += gcnew System::EventHandler(this, &MyForm::down_Click);
			// 
			// obraz3
			// 
			this->obraz3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"obraz3.Image")));
			this->obraz3->Location = System::Drawing::Point(701, 22);
			this->obraz3->Name = L"obraz3";
			this->obraz3->Size = System::Drawing::Size(58, 56);
			this->obraz3->TabIndex = 23;
			this->obraz3->TabStop = false;
			// 
			// box
			// 
			this->box->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"box.Image")));
			this->box->Location = System::Drawing::Point(291, 412);
			this->box->Name = L"box";
			this->box->Size = System::Drawing::Size(60, 60);
			this->box->TabIndex = 24;
			this->box->TabStop = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(1036, 185);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(124, 26);
			this->checkBox1->TabIndex = 25;
			this->checkBox1->Text = L"zwolnij hak";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			// 
			// chain
			// 
			this->chain->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chain.Image")));
			this->chain->Location = System::Drawing::Point(420, 88);
			this->chain->Name = L"chain";
			this->chain->Size = System::Drawing::Size(12, 26);
			this->chain->TabIndex = 26;
			this->chain->TabStop = false;
			this->chain->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1311, 470);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->box);
			this->Controls->Add(this->obraz3);
			this->Controls->Add(this->down);
			this->Controls->Add(this->up);
			this->Controls->Add(this->right);
			this->Controls->Add(this->left);
			this->Controls->Add(this->hak);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menu);
			this->Controls->Add(this->credits);
			this->Controls->Add(this->DostosujDzwig);
			this->Controls->Add(this->graj);
			this->Controls->Add(this->tytul);
			this->Controls->Add(this->obraz2);
			this->Controls->Add(this->obraz1);
			this->Controls->Add(this->chain);
			this->Controls->Add(this->dzwig);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"DŸwig";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->obraz1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->obraz2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dzwig))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hak))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->obraz3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->box))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chain))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void credits_Click(System::Object^  sender, System::EventArgs^  e) {

		MessageBox::Show("Kierownicy budowy: Marek Mikulski i Maciej Kura¿			Program stworzony za pomoc¹ Visual C++ Windows Forms", "Credits", MessageBoxButtons::OK);

	}
private: System::Void DostosujDzwig_Click(System::Object^  sender, System::EventArgs^  e) {

	obraz1->Visible = false;
	obraz2->Visible = false;
	obraz3->Visible = false;
	tytul->Visible = false;
	graj->Visible = false;
	credits->Visible = false;
	DostosujDzwig->Visible = false;
	up->Visible = false;
	down->Visible = false;
	left->Visible = false;
	right->Visible = false;
	checkBox1->Visible = false;
	chain->Visible = false;

	dzwig->Visible = true;
	menu->Visible = true;
	button1->Visible = true;
	button2->Visible = true;
	button3->Visible = true;
	button4->Visible = true;
	button5->Visible = true;
	button6->Visible = true;
	button7->Visible = true;
	button8->Visible = true;
	label1->Visible = true;
	label2->Visible = true;
	hak->Visible = true;
	hak->Location = System::Drawing::Point(395, 88);



}
private: System::Void menu_Click(System::Object^  sender, System::EventArgs^  e) {

	obraz1->Visible = true;
	obraz2->Visible = true;
	obraz3->Visible = true;
	tytul->Visible = true;
	graj->Visible = true;
	credits->Visible = true;
	DostosujDzwig->Visible = true;

	dzwig->Visible = false;
	menu->Visible = false;
	button1->Visible = false;
	button2->Visible = false;
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
	label1->Visible = false;
	label2->Visible = false;
	hak->Visible = false;
	up->Visible = false;
	down->Visible = false;
	left->Visible = false;
	right->Visible = false;
	box->Visible = false;
	checkBox1->Visible = false;
	chain->Visible = false;

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	dzwig->Load("crane.png");

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	dzwig->Load("craneg.png");

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	dzwig->Load("cranep.png");
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	dzwig->Load("craneb.png");
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	hak->Load("hak.png");
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	hak->Load("hakg.png");
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	hak->Load("hakp.png");
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	hak->Load("hakb.png");
}
private: System::Void graj_Click(System::Object^  sender, System::EventArgs^  e) {

	dzwig->Visible = true;
	chain->Visible = true;
	hak->Visible = true;
	menu->Visible = true;
	up->Visible = true;
	down->Visible = true;
	left->Visible = true;
	right->Visible = true;
	box->Visible = true;
	checkBox1->Visible = true;
	chain->Location = System::Drawing::Point(hak->Location.X + 10, 88);
	chain->Size = System::Drawing::Size(12, hak->Location.Y - 88);

	obraz1->Visible = false;
	obraz2->Visible = false;
	obraz3->Visible = false;
	tytul->Visible = false;
	graj->Visible = false;
	credits->Visible = false;
	DostosujDzwig->Visible = false;



}
private: System::Void right_Click(System::Object^  sender, System::EventArgs^  e) {
	if (hak->Location.X < 550) {
		chain->Location = System::Drawing::Point(hak->Location.X + 30, chain->Location.Y);
		hak->Location = System::Drawing::Point(hak->Location.X + 20, hak->Location.Y);
	}
	if (checkBox1->Checked == false)
	{
		if (box->Location.Y >= hak->Location.Y  && box->Location.Y <= hak->Location.Y + 83 && (hak->Location.X >= box->Location.X && hak->Location.X <= box->Location.X + 50))
		{

			box->Location = System::Drawing::Point(hak->Location.X - 20, hak->Location.Y + 53);
			licznik++;

			do {
				box->Location = System::Drawing::Point(hak->Location.X - 20, hak->Location.Y + 53);


			} while (box->Location.Y <= 350 && licznik == 1);
		}
	
	}
	else if (checkBox1->Checked == true && box->Location.Y <= 390) {

		box->Location = System::Drawing::Point(box->Location.X, 415);
		MessageBox::Show("O matko! Kto da³ Ci pozwolenie na u¿ywanie dŸwigu!? nie puszcza siê skrzyñ z takiej wysokoœci", "JEB!!!", MessageBoxButtons::OK);

	}
}
private: System::Void down_Click(System::Object^  sender, System::EventArgs^  e) {
	if (hak->Location.Y < 350) {
		chain->Size = System::Drawing::Size(12, hak->Location.Y - 68);
		hak->Location = System::Drawing::Point(hak->Location.X, hak->Location.Y + 20);
	}
	

	if (checkBox1->Checked == false)
	{
		if (/*hak->Location.Y >= 341 && (*/box->Location.Y >= hak->Location.Y && box->Location.Y <= hak->Location.Y + 83 && hak->Location.X >= box->Location.X && hak->Location.X <= box->Location.X + 50)
		{

			box->Location = System::Drawing::Point(hak->Location.X - 20, hak->Location.Y + 53);
			licznik++;

			do {
				box->Location = System::Drawing::Point(hak->Location.X - 20, hak->Location.Y + 40);


			} while (box->Location.Y <= 350 && licznik == 1);
		}
	}
	else if (checkBox1->Checked == true && box->Location.Y <= 390) {

		box->Location = System::Drawing::Point(box->Location.X, 415);
		MessageBox::Show("O matko! Kto da³ Ci pozwolenie na u¿ywanie dŸwigu!? nie puszcza siê skrzyñ z takiej wysokoœci", "JEB!!!", MessageBoxButtons::OK);

	}
		//MessageBox::Show("teraz ma byæ przycisk chwyæ/zwolnij", "Jest na dole", MessageBoxButtons::OK);

}
private: System::Void up_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (checkBox1->Checked == false)
	{																											//PORUSZANIE BOXA W GÓRÊ
		if (box->Location.Y >= hak->Location.Y + 60 && box->Location.Y <= hak->Location.Y + 83 && hak->Location.X >= box->Location.X && hak->Location.X <= box->Location.X + 50)
		{

			box->Location = System::Drawing::Point(hak->Location.X - 20, hak->Location.Y + 53);
			licznik++;

			do {
				box->Location = System::Drawing::Point(hak->Location.X - 20, hak->Location.Y + 40);


			} while (box->Location.Y <= 350 && licznik == 1);
		}
	}
	else if (checkBox1->Checked == true && box->Location.Y <= 390) {
		
		box->Location = System::Drawing::Point(box->Location.X , 415);
		MessageBox::Show("O matko! Kto da³ Ci pozwolenie na u¿ywanie dŸwigu!? nie puszcza siê skrzyñ z takiej wysokoœci", "JEB!!!", MessageBoxButtons::OK);

	}

	if (hak->Location.Y > 88) {														 //RUSZANIE W GÓRÊ
		chain->Size = System::Drawing::Size(12, hak->Location.Y - 88);
		hak->Location = System::Drawing::Point(hak->Location.X, hak->Location.Y - 20);
	}
}
private: System::Void left_Click(System::Object^  sender, System::EventArgs^  e) {
	if (hak->Location.X > 295) {
		chain->Location = System::Drawing::Point(hak->Location.X - 10, chain->Location.Y);
		hak->Location = System::Drawing::Point(hak->Location.X - 20, hak->Location.Y);
	}
	

	if (checkBox1->Checked == false)
	{
		if (box->Location.Y >= hak->Location.Y  && box->Location.Y <= hak->Location.Y + 83 && (hak->Location.X >= box->Location.X && hak->Location.X <= box->Location.X + 50))
		{

			box->Location = System::Drawing::Point(hak->Location.X - 20, hak->Location.Y + 53);
			licznik++;

			do {
				box->Location = System::Drawing::Point(hak->Location.X - 20, hak->Location.Y + 53);


			} while (box->Location.Y <= 350 && licznik == 1);
		}
	}
	else if (checkBox1->Checked == true && box->Location.Y <= 390) {

		box->Location = System::Drawing::Point(box->Location.X, 415);
		MessageBox::Show("O matko! Kto da³ Ci pozwolenie na u¿ywanie dŸwigu!? nie puszcza siê skrzyñ z takiej wysokoœci", "JEB!!!", MessageBoxButtons::OK);

	}
}
private: System::Void zwolnij_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
