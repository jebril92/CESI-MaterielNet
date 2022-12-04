#pragma once

namespace CESIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Description r�sum�e de InterfaceProduit
	/// </summary>
	public ref class InterfaceProduit : public System::Windows::Forms::Form
	{
	public:
		InterfaceProduit(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~InterfaceProduit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxNomArticle;
	private: System::Windows::Forms::TextBox^ textBoxNombreArticle;
	protected:


	private: System::Windows::Forms::Label^ labelNombreArticle;




















	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;




	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxPrixHT;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxTauxTVA;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxPrixTVA;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxQuantiteDispo;










	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxNomArticle = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNombreArticle = (gcnew System::Windows::Forms::TextBox());
			this->labelNombreArticle = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxPrixHT = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTauxTVA = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxPrixTVA = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxQuantiteDispo = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(41, 61);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom Article";
			this->label1->Click += gcnew System::EventHandler(this, &InterfaceProduit::label1_Click);
			// 
			// textBoxNomArticle
			// 
			this->textBoxNomArticle->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxNomArticle->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxNomArticle->Location = System::Drawing::Point(105, 62);
			this->textBoxNomArticle->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomArticle->Name = L"textBoxNomArticle";
			this->textBoxNomArticle->Size = System::Drawing::Size(176, 13);
			this->textBoxNomArticle->TabIndex = 1;
			this->textBoxNomArticle->TextChanged += gcnew System::EventHandler(this, &InterfaceProduit::textBoxNom_TextChanged);
			// 
			// textBoxNombreArticle
			// 
			this->textBoxNombreArticle->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxNombreArticle->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxNombreArticle->Location = System::Drawing::Point(105, 88);
			this->textBoxNombreArticle->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNombreArticle->Name = L"textBoxNombreArticle";
			this->textBoxNombreArticle->Size = System::Drawing::Size(176, 13);
			this->textBoxNombreArticle->TabIndex = 3;
			// 
			// labelNombreArticle
			// 
			this->labelNombreArticle->AutoSize = true;
			this->labelNombreArticle->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelNombreArticle->Location = System::Drawing::Point(28, 87);
			this->labelNombreArticle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelNombreArticle->Name = L"labelNombreArticle";
			this->labelNombreArticle->Size = System::Drawing::Size(76, 13);
			this->labelNombreArticle->TabIndex = 2;
			this->labelNombreArticle->Text = L"Nombre Article";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label5->Location = System::Drawing::Point(105, 21);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 20);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Informations Générales";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label6->Location = System::Drawing::Point(455, 21);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 20);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Prix";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Green;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(364, 189);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 28);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &InterfaceProduit::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(484, 189);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 28);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Annuler";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &InterfaceProduit::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label7->Location = System::Drawing::Point(7, 111);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 13);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Quantité Disponible";
			// 
			// textBoxPrixHT
			// 
			this->textBoxPrixHT->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxPrixHT->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxPrixHT->Location = System::Drawing::Point(406, 87);
			this->textBoxPrixHT->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPrixHT->Name = L"textBoxPrixHT";
			this->textBoxPrixHT->Size = System::Drawing::Size(176, 13);
			this->textBoxPrixHT->TabIndex = 33;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label3->Location = System::Drawing::Point(355, 86);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Prix HT";
			// 
			// textBoxTauxTVA
			// 
			this->textBoxTauxTVA->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxTauxTVA->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxTauxTVA->Location = System::Drawing::Point(406, 61);
			this->textBoxTauxTVA->Margin = System::Windows::Forms::Padding(2);
			this->textBoxTauxTVA->Name = L"textBoxTauxTVA";
			this->textBoxTauxTVA->Size = System::Drawing::Size(176, 13);
			this->textBoxTauxTVA->TabIndex = 31;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label4->Location = System::Drawing::Point(346, 60);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Taux TVA";
			// 
			// textBoxPrixTVA
			// 
			this->textBoxPrixTVA->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxPrixTVA->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxPrixTVA->Location = System::Drawing::Point(406, 111);
			this->textBoxPrixTVA->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPrixTVA->Name = L"textBoxPrixTVA";
			this->textBoxPrixTVA->Size = System::Drawing::Size(176, 13);
			this->textBoxPrixTVA->TabIndex = 35;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Location = System::Drawing::Point(352, 110);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Prix TVA";
			// 
			// textBoxQuantiteDispo
			// 
			this->textBoxQuantiteDispo->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxQuantiteDispo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxQuantiteDispo->Location = System::Drawing::Point(105, 111);
			this->textBoxQuantiteDispo->Margin = System::Windows::Forms::Padding(2);
			this->textBoxQuantiteDispo->Name = L"textBoxQuantiteDispo";
			this->textBoxQuantiteDispo->Size = System::Drawing::Size(176, 13);
			this->textBoxQuantiteDispo->TabIndex = 36;
			// 
			// InterfaceProduit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->ClientSize = System::Drawing::Size(600, 245);
			this->Controls->Add(this->textBoxQuantiteDispo);
			this->Controls->Add(this->textBoxPrixTVA);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxPrixHT);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxTauxTVA);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxNombreArticle);
			this->Controls->Add(this->labelNombreArticle);
			this->Controls->Add(this->textBoxNomArticle);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"InterfaceProduit";
			this->Text = L"Créer un Produit";
			this->Load += gcnew System::EventHandler(this, &InterfaceProduit::InterfaceProduit_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InterfaceProduit_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxNumRue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxNom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		String^ type_article = textBoxNomArticle->Text;
		String^ nombre_articles = textBoxNombreArticle->Text;
		String^ taux_tva = textBoxTauxTVA->Text;
		String^ prix_ht = textBoxPrixHT->Text;
		String^ prix_tva = textBoxPrixTVA->Text;
		String^ quantite_dispo = textBoxQuantiteDispo->Text;
		con->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("insert into article(type_article,nombre_articles,taux_tva,prix_ht,prix_tva,quantite_dispo) values('" + type_article + "','" + nombre_articles + "','" + taux_tva + "','" + prix_ht + "','" + prix_tva + "','" + quantite_dispo + "')", con);
		cmd->ExecuteReader();
		MessageBox::Show("L'article : " + type_article + " a été ajouté(e) avec succès !");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}