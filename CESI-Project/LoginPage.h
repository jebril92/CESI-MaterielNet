#pragma once
#include "Form2.h"

namespace CESIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de LoginPage
	/// </summary>
	public ref class LoginPage : public System::Windows::Forms::Form
	{
	public:
		LoginPage(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~LoginPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginPage::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(-3, -4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1188, 682);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &LoginPage::otherclick);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::AliceBlue;
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Location = System::Drawing::Point(522, 315);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(452, 58);
			this->panel3->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox2->Location = System::Drawing::Point(22, 19);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(404, 19);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"Password";
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Click += gcnew System::EventHandler(this, &LoginPage::textBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &LoginPage::textBox2_TextChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::AliceBlue;
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(522, 237);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(452, 58);
			this->panel2->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox1->Location = System::Drawing::Point(22, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(404, 19);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Username";
			this->textBox1->Click += gcnew System::EventHandler(this, &LoginPage::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &LoginPage::textBox1_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(666, 401);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(185, 17);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"J\'accepte les termes et conditions";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &LoginPage::checkBox1_CheckedChanged);
			this->checkBox1->Click += gcnew System::EventHandler(this, &LoginPage::otherclick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Orange;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(522, 437);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(452, 46);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Connexion";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &LoginPage::button2_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12.25F));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label3->Location = System::Drawing::Point(487, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(564, 68);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Connectez-vous à votre compte afin que nous puissions importer les paramètres et "
				L"les préférences et ajuster votre expérience";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Click += gcnew System::EventHandler(this, &LoginPage::otherclick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(512, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(248, 58);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Connexion";
			this->label2->Click += gcnew System::EventHandler(this, &LoginPage::otherclick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 13.25F));
			this->label1->Location = System::Drawing::Point(172, 475);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Pas de compte \? ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &LoginPage::otherclick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Orange;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button1->Location = System::Drawing::Point(176, 502);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 46);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoginPage::button1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(61, 173);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(367, 99);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &LoginPage::otherclick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(46, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(394, 211);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// LoginPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1184, 681);
			this->Controls->Add(this->panel1);
			this->Name = L"LoginPage";
			this->Text = L"Connexion";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Username")
	{
		textBox1->Text = "";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Password";
	}
}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "Password")
	{
		textBox2->Text = "";
	}
	if (textBox1->Text == "")
	{
		textBox1->Text = "Username";
	}
}

private: System::Void otherclick(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "")
	{
		textBox1->Text = "Username";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Password";
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)
	{
		button2->Enabled = true;
	}
	else
	{
		button2->Enabled = false;
	}
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "")
	{
		textBox1->Text = "Username";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Password";
	}
	System::Diagnostics::Process::Start("https://github.com/jebril92");
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "admin")
	{
		if (textBox2->Text == "root")
		{
			MessageBox::Show("Connexion reussite !");
			Form2^ frm2 = gcnew Form2;
			frm2->Show();
		}
	}
	else
	{
		MessageBox::Show("Identifiant ou Mot de passe Incorrect !");
	}

	if (textBox1->Text == "")
	{
		textBox1->Text = "Username";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Password";
	}
}

};
}
