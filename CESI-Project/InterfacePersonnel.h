#pragma once

namespace CESIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de InterfacePersonnel
	/// </summary>
	public ref class InterfacePersonnel : public System::Windows::Forms::Form
	{
	public:
		InterfacePersonnel(void)
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
		~InterfacePersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::Label^ labelPrenom;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ labelPays;
	private: System::Windows::Forms::TextBox^ textBoxPays;
	private: System::Windows::Forms::TextBox^ textBoxVille;
	private: System::Windows::Forms::Label^ labelVille;
	private: System::Windows::Forms::TextBox^ textBoxCP;
	private: System::Windows::Forms::Label^ labelCodePostal;
	private: System::Windows::Forms::TextBox^ textBoxRue;
	private: System::Windows::Forms::Label^ labelRue;
	private: System::Windows::Forms::TextBox^ textBoxNumRue;
	private: System::Windows::Forms::Label^ labelNumRue;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->labelPrenom = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelPays = (gcnew System::Windows::Forms::Label());
			this->textBoxPays = (gcnew System::Windows::Forms::TextBox());
			this->textBoxVille = (gcnew System::Windows::Forms::TextBox());
			this->labelVille = (gcnew System::Windows::Forms::Label());
			this->textBoxCP = (gcnew System::Windows::Forms::TextBox());
			this->labelCodePostal = (gcnew System::Windows::Forms::Label());
			this->textBoxRue = (gcnew System::Windows::Forms::TextBox());
			this->labelRue = (gcnew System::Windows::Forms::Label());
			this->textBoxNumRue = (gcnew System::Windows::Forms::TextBox());
			this->labelNumRue = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Gray;
			this->label1->Location = System::Drawing::Point(67, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom";
			// 
			// textBoxNom
			// 
			this->textBoxNom->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->textBoxNom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxNom->Location = System::Drawing::Point(121, 76);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(234, 15);
			this->textBoxNom->TabIndex = 1;
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->textBoxPrenom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxPrenom->Location = System::Drawing::Point(121, 109);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(234, 15);
			this->textBoxPrenom->TabIndex = 3;
			// 
			// labelPrenom
			// 
			this->labelPrenom->AutoSize = true;
			this->labelPrenom->ForeColor = System::Drawing::Color::Gray;
			this->labelPrenom->Location = System::Drawing::Point(52, 108);
			this->labelPrenom->Name = L"labelPrenom";
			this->labelPrenom->Size = System::Drawing::Size(54, 16);
			this->labelPrenom->TabIndex = 2;
			this->labelPrenom->Text = L"Prénom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Gray;
			this->label2->Location = System::Drawing::Point(32, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Date d\'embauche ";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(155, 137);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// labelPays
			// 
			this->labelPays->AutoSize = true;
			this->labelPays->ForeColor = System::Drawing::Color::Gray;
			this->labelPays->Location = System::Drawing::Point(459, 74);
			this->labelPays->Name = L"labelPays";
			this->labelPays->Size = System::Drawing::Size(38, 16);
			this->labelPays->TabIndex = 6;
			this->labelPays->Text = L"Pays";
			// 
			// textBoxPays
			// 
			this->textBoxPays->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->textBoxPays->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxPays->Location = System::Drawing::Point(503, 76);
			this->textBoxPays->Name = L"textBoxPays";
			this->textBoxPays->Size = System::Drawing::Size(234, 15);
			this->textBoxPays->TabIndex = 7;
			// 
			// textBoxVille
			// 
			this->textBoxVille->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->textBoxVille->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxVille->Location = System::Drawing::Point(503, 109);
			this->textBoxVille->Name = L"textBoxVille";
			this->textBoxVille->Size = System::Drawing::Size(125, 15);
			this->textBoxVille->TabIndex = 9;
			// 
			// labelVille
			// 
			this->labelVille->AutoSize = true;
			this->labelVille->ForeColor = System::Drawing::Color::Gray;
			this->labelVille->Location = System::Drawing::Point(459, 107);
			this->labelVille->Name = L"labelVille";
			this->labelVille->Size = System::Drawing::Size(33, 16);
			this->labelVille->TabIndex = 8;
			this->labelVille->Text = L"Ville";
			// 
			// textBoxCP
			// 
			this->textBoxCP->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->textBoxCP->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxCP->Location = System::Drawing::Point(679, 109);
			this->textBoxCP->Name = L"textBoxCP";
			this->textBoxCP->Size = System::Drawing::Size(98, 15);
			this->textBoxCP->TabIndex = 11;
			// 
			// labelCodePostal
			// 
			this->labelCodePostal->AutoSize = true;
			this->labelCodePostal->ForeColor = System::Drawing::Color::Gray;
			this->labelCodePostal->Location = System::Drawing::Point(644, 107);
			this->labelCodePostal->Name = L"labelCodePostal";
			this->labelCodePostal->Size = System::Drawing::Size(25, 16);
			this->labelCodePostal->TabIndex = 10;
			this->labelCodePostal->Text = L"CP";
			// 
			// textBoxRue
			// 
			this->textBoxRue->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->textBoxRue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxRue->Location = System::Drawing::Point(623, 142);
			this->textBoxRue->Name = L"textBoxRue";
			this->textBoxRue->Size = System::Drawing::Size(154, 15);
			this->textBoxRue->TabIndex = 15;
			// 
			// labelRue
			// 
			this->labelRue->AutoSize = true;
			this->labelRue->ForeColor = System::Drawing::Color::Gray;
			this->labelRue->Location = System::Drawing::Point(585, 140);
			this->labelRue->Name = L"labelRue";
			this->labelRue->Size = System::Drawing::Size(32, 16);
			this->labelRue->TabIndex = 14;
			this->labelRue->Text = L"Rue";
			// 
			// textBoxNumRue
			// 
			this->textBoxNumRue->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->textBoxNumRue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxNumRue->Location = System::Drawing::Point(503, 142);
			this->textBoxNumRue->Name = L"textBoxNumRue";
			this->textBoxNumRue->Size = System::Drawing::Size(46, 15);
			this->textBoxNumRue->TabIndex = 13;
			this->textBoxNumRue->TextChanged += gcnew System::EventHandler(this, &InterfacePersonnel::textBoxNumRue_TextChanged);
			// 
			// labelNumRue
			// 
			this->labelNumRue->AutoSize = true;
			this->labelNumRue->ForeColor = System::Drawing::Color::Gray;
			this->labelNumRue->Location = System::Drawing::Point(447, 140);
			this->labelNumRue->Name = L"labelNumRue";
			this->labelNumRue->Size = System::Drawing::Size(49, 16);
			this->labelNumRue->TabIndex = 12;
			this->labelNumRue->Text = L"N° Rue";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(623, 177);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(154, 15);
			this->textBox1->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Gray;
			this->label3->Location = System::Drawing::Point(550, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 16);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Residence";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(500, 177);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(46, 15);
			this->textBox2->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Gray;
			this->label4->Location = System::Drawing::Point(444, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 16);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Etage";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Gray;
			this->label5->Location = System::Drawing::Point(130, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(213, 25);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Informations Générales";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Gray;
			this->label6->Location = System::Drawing::Point(515, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(209, 25);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Adresse de Résidence";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Green;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(486, 282);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 34);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(646, 282);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 34);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Annuler";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// InterfacePersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->ClientSize = System::Drawing::Size(815, 349);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxRue);
			this->Controls->Add(this->labelRue);
			this->Controls->Add(this->textBoxNumRue);
			this->Controls->Add(this->labelNumRue);
			this->Controls->Add(this->textBoxCP);
			this->Controls->Add(this->labelCodePostal);
			this->Controls->Add(this->textBoxVille);
			this->Controls->Add(this->labelVille);
			this->Controls->Add(this->textBoxPays);
			this->Controls->Add(this->labelPays);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->labelPrenom);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->label1);
			this->Name = L"InterfacePersonnel";
			this->Text = L"Insérer un Personnel";
			this->Load += gcnew System::EventHandler(this, &InterfacePersonnel::InterfacePersonnel_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InterfacePersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBoxNumRue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
