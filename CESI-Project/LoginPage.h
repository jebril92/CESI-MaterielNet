#include <iostream>
#include "Dashboard.h"

namespace CESIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;


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
			
			/*this->Text = String::Empty;
			this->ControlBox = false;*/
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


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ connexionButton;
	private: System::Windows::Forms::CheckBox^ termsCheck;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ passwordTextBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ btneyes;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginPage::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btneyes = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->termsCheck = (gcnew System::Windows::Forms::CheckBox());
			this->connexionButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->btneyes);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->termsCheck);
			this->panel1->Controls->Add(this->connexionButton);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Location = System::Drawing::Point(-4, -5);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1584, 839);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &LoginPage::otherclick);
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginPage::panel1_Paint);
			// 
			// btneyes
			// 
			this->btneyes->BackColor = System::Drawing::Color::Transparent;
			this->btneyes->FlatAppearance->BorderSize = 0;
			this->btneyes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btneyes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btneyes.Image")));
			this->btneyes->Location = System::Drawing::Point(1323, 402);
			this->btneyes->Margin = System::Windows::Forms::Padding(4);
			this->btneyes->Name = L"btneyes";
			this->btneyes->Size = System::Drawing::Size(53, 41);
			this->btneyes->TabIndex = 14;
			this->btneyes->UseVisualStyleBackColor = false;
			this->btneyes->Click += gcnew System::EventHandler(this, &LoginPage::btneyes_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1264, 801);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 33);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Designed by";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::AliceBlue;
			this->panel3->Controls->Add(this->passwordTextBox);
			this->panel3->Location = System::Drawing::Point(696, 388);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(603, 71);
			this->panel3->TabIndex = 11;
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->passwordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->passwordTextBox->Location = System::Drawing::Point(29, 23);
			this->passwordTextBox->Margin = System::Windows::Forms::Padding(4);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->passwordTextBox->Size = System::Drawing::Size(539, 24);
			this->passwordTextBox->TabIndex = 0;
			this->passwordTextBox->Text = L"Password";
			this->passwordTextBox->UseSystemPasswordChar = true;
			this->passwordTextBox->Click += gcnew System::EventHandler(this, &LoginPage::passwordTextBox_Click);
			this->passwordTextBox->TextChanged += gcnew System::EventHandler(this, &LoginPage::passwordTextBox_TextChanged);
			this->passwordTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginPage::passwordTextBox_KeyDown);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::AliceBlue;
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(696, 292);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(603, 71);
			this->panel2->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox1->Location = System::Drawing::Point(29, 23);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(539, 24);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Username";
			this->textBox1->Click += gcnew System::EventHandler(this, &LoginPage::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &LoginPage::textBox1_TextChanged);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginPage::textBox1_KeyDown);
			// 
			// termsCheck
			// 
			this->termsCheck->AutoSize = true;
			this->termsCheck->BackColor = System::Drawing::Color::Transparent;
			this->termsCheck->Checked = false;
			this->termsCheck->CheckState = System::Windows::Forms::CheckState::Checked;
			this->termsCheck->Location = System::Drawing::Point(888, 494);
			this->termsCheck->Margin = System::Windows::Forms::Padding(4);
			this->termsCheck->Name = L"termsCheck";
			this->termsCheck->Size = System::Drawing::Size(231, 20);
			this->termsCheck->TabIndex = 8;
			this->termsCheck->Text = L"J\'accepte les termes et conditions";
			this->termsCheck->UseVisualStyleBackColor = false;
			this->termsCheck->CheckedChanged += gcnew System::EventHandler(this, &LoginPage::termsCheck_CheckedChanged);
			this->termsCheck->Click += gcnew System::EventHandler(this, &LoginPage::otherclick);
			// 
			// connexionButton
			// 
			this->connexionButton->AutoSize = true;
			this->connexionButton->BackColor = System::Drawing::Color::Orange;
			this->connexionButton->FlatAppearance->BorderSize = 0;
			this->connexionButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->connexionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->connexionButton->ForeColor = System::Drawing::Color::Black;
			this->connexionButton->Location = System::Drawing::Point(696, 538);
			this->connexionButton->Margin = System::Windows::Forms::Padding(4);
			this->connexionButton->Name = L"connexionButton";
			this->connexionButton->Size = System::Drawing::Size(603, 57);
			this->connexionButton->TabIndex = 9;
			this->connexionButton->Text = L"Connexion";
			this->connexionButton->UseVisualStyleBackColor = false;
			this->connexionButton->Click += gcnew System::EventHandler(this, &LoginPage::connexionButton_Click); 
				// 
				// label3
				// 
				this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12.25F));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label3->Location = System::Drawing::Point(649, 180);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(752, 84);
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
			this->label2->Location = System::Drawing::Point(853, 107);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(310, 73);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Connexion";
			this->label2->Click += gcnew System::EventHandler(this, &LoginPage::otherclick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 13.25F));
			this->label1->Location = System::Drawing::Point(229, 585);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 31);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Besoin d\'aide \? ";
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
			this->button1->Location = System::Drawing::Point(235, 618);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 57);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Support";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoginPage::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(61, 33);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(560, 306);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1247, 759);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(489, 122);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 13;
			this->pictureBox3->TabStop = false;
			// 
			// LoginPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1579, 836);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1597, 883);
			this->MinimumSize = System::Drawing::Size(1597, 883);
			this->Name = L"LoginPage";
			this->Text = L"Connexion";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
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
		if (passwordTextBox->Text == "")
		{
			passwordTextBox->Text = "Password";
		}
	}

	private: System::Void passwordTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void passwordTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (passwordTextBox->Text == "Password")
		{
			passwordTextBox->Text = "";
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
		if (passwordTextBox->Text == "")
		{
			passwordTextBox->Text = "Password";
		}
	}
	private: System::Void termsCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (termsCheck->Checked)
		{
			connexionButton->Enabled = true;
		}
		else
		{
			connexionButton->Enabled = false;
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")
		{
			textBox1->Text = "Username";
		}
		if (passwordTextBox->Text == "")
		{
			passwordTextBox->Text = "Password";
		}

		System::Diagnostics::Process::Start("mailto:servicesupport@materiel.net?subject=Service Issue | ");
	}

	private: System::Void connexionButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "admin")
		{
			if (passwordTextBox->Text == "root")
			{
				Dashboard^ frm2 = gcnew Dashboard;
				frm2->Show();
				this->Hide();
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
		if (passwordTextBox->Text == "")
		{
			passwordTextBox->Text = "Password";
		}
	}

	private: System::Void btneyes_Click(System::Object^ sender, System::EventArgs^ e) {
		if (passwordTextBox->UseSystemPasswordChar == true)
		{
			passwordTextBox->UseSystemPasswordChar = false;
		}
		else
		{
			passwordTextBox->UseSystemPasswordChar = true;
		}
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			passwordTextBox->Focus();
		}
	}
	private: System::Void passwordTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			connexionButton->PerformClick();
		}
	}
	};
}
