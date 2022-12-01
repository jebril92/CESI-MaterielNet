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




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ connexionButton;
	private: System::Windows::Forms::CheckBox^ termsCheck;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ passwordTextBox;



	private: System::Windows::Forms::Button^ btneyes;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->btneyes = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->termsCheck = (gcnew System::Windows::Forms::CheckBox());
			this->connexionButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->termsCheck);
			this->panel1->Controls->Add(this->connexionButton);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->btneyes);
			this->panel1->Location = System::Drawing::Point(-3, -4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1206, 682);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &LoginPage::otherclick);
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginPage::panel1_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12));
			this->label3->Location = System::Drawing::Point(853, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(186, 21);
			this->label3->TabIndex = 17;
			this->label3->Text = L"afin d\'accéder au logiciel.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12));
			this->label1->Location = System::Drawing::Point(791, 141);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(310, 21);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Remplissez vos informations de connexion ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &LoginPage::label1_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, -33);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(715, 665);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button1->Location = System::Drawing::Point(1014, 353);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Besoin d\'aide\?";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoginPage::button1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::AliceBlue;
			this->panel3->Controls->Add(this->passwordTextBox);
			this->panel3->Location = System::Drawing::Point(764, 288);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(363, 58);
			this->panel3->TabIndex = 11;
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->passwordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->passwordTextBox->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->passwordTextBox->Location = System::Drawing::Point(22, 19);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->passwordTextBox->Size = System::Drawing::Size(324, 19);
			this->passwordTextBox->TabIndex = 0;
			this->passwordTextBox->Text = L"Password";
			this->passwordTextBox->UseSystemPasswordChar = true;
			this->passwordTextBox->Click += gcnew System::EventHandler(this, &LoginPage::passwordTextBox_Click);
			this->passwordTextBox->TextChanged += gcnew System::EventHandler(this, &LoginPage::passwordTextBox_TextChanged);
			this->passwordTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginPage::passwordTextBox_KeyDown);
			// 
			// btneyes
			// 
			this->btneyes->BackColor = System::Drawing::Color::Transparent;
			this->btneyes->FlatAppearance->BorderSize = 0;
			this->btneyes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btneyes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btneyes.Image")));
			this->btneyes->Location = System::Drawing::Point(1129, 300);
			this->btneyes->Name = L"btneyes";
			this->btneyes->Size = System::Drawing::Size(40, 33);
			this->btneyes->TabIndex = 14;
			this->btneyes->UseVisualStyleBackColor = false;
			this->btneyes->Click += gcnew System::EventHandler(this, &LoginPage::btneyes_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::AliceBlue;
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(764, 212);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(363, 58);
			this->panel2->TabIndex = 10;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginPage::panel2_Paint);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox1->Location = System::Drawing::Point(22, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(324, 19);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Utilisateur";
			this->textBox1->Click += gcnew System::EventHandler(this, &LoginPage::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &LoginPage::textBox1_TextChanged);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginPage::textBox1_KeyDown);
			// 
			// termsCheck
			// 
			this->termsCheck->AutoSize = true;
			this->termsCheck->BackColor = System::Drawing::Color::Transparent;
			this->termsCheck->Checked = true;
			this->termsCheck->CheckState = System::Windows::Forms::CheckState::Checked;
			this->termsCheck->Location = System::Drawing::Point(764, 363);
			this->termsCheck->Name = L"termsCheck";
			this->termsCheck->Size = System::Drawing::Size(185, 17);
			this->termsCheck->TabIndex = 8;
			this->termsCheck->Text = L"J\'accepte les termes et conditions";
			this->termsCheck->UseVisualStyleBackColor = false;
			this->termsCheck->CheckedChanged += gcnew System::EventHandler(this, &LoginPage::termsCheck_CheckedChanged);
			this->termsCheck->Click += gcnew System::EventHandler(this, &LoginPage::otherclick);
			// 
			// connexionButton
			// 
			this->connexionButton->AutoSize = true;
			this->connexionButton->BackColor = System::Drawing::Color::Crimson;
			this->connexionButton->FlatAppearance->BorderSize = 0;
			this->connexionButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->connexionButton->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->connexionButton->ForeColor = System::Drawing::Color::White;
			this->connexionButton->Location = System::Drawing::Point(764, 405);
			this->connexionButton->Name = L"connexionButton";
			this->connexionButton->Size = System::Drawing::Size(363, 39);
			this->connexionButton->TabIndex = 9;
			this->connexionButton->Text = L"Connexion";
			this->connexionButton->UseVisualStyleBackColor = false;
			this->connexionButton->Click += gcnew System::EventHandler(this, &LoginPage::connexionButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(768, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(359, 36);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Bienvenue sur Materiel.Net";
			this->label2->Click += gcnew System::EventHandler(this, &LoginPage::otherclick);
			// 
			// LoginPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1173, 626);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1189, 665);
			this->MinimumSize = System::Drawing::Size(1189, 665);
			this->Name = L"LoginPage";
			this->Text = L"Connexion";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "Utilisateur")
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
			textBox1->Text = "Utilisateur";
		}
	}

	private: System::Void otherclick(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")
		{
			textBox1->Text = "Utilisateur";
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
			textBox1->Text = "Utilisateur";
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
			textBox1->Text = "Utilisateur";
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
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
