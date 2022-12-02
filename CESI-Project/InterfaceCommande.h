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
	/// Description r�sum�e de InterfaceCommande
	/// </summary>
	public ref class InterfaceCommande : public System::Windows::Forms::Form
	{
	public:
		InterfaceCommande(void)
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
		~InterfaceCommande()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::Label^ labelProduit;
	protected:























	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBoxPays2;


















	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxResidence2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxEtage2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxRue2;

	private: System::Windows::Forms::Label^ labelRue;
	private: System::Windows::Forms::TextBox^ textBoxNumRue2;

	private: System::Windows::Forms::Label^ labelNumRue;
	private: System::Windows::Forms::TextBox^ textBoxCP2;

	private: System::Windows::Forms::Label^ labelCodePostal;
	private: System::Windows::Forms::TextBox^ textBoxVille2;

	private: System::Windows::Forms::Label^ labelVille;
	private: System::Windows::Forms::Label^ labelPays;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ NomCommande;
	private: System::Windows::Forms::Label^ PrenomCommande;
	private: System::Windows::Forms::TextBox^ textBoxNomCommande;
	private: System::Windows::Forms::TextBox^ textBoxPrenomCommande;
	private: System::Windows::Forms::TextBox^ textBoxPrixCommande;
	private: System::Windows::Forms::Label^ labelPrixCommande;











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
			this->labelProduit = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBoxPays2 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxResidence2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxEtage2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxRue2 = (gcnew System::Windows::Forms::TextBox());
			this->labelRue = (gcnew System::Windows::Forms::Label());
			this->textBoxNumRue2 = (gcnew System::Windows::Forms::TextBox());
			this->labelNumRue = (gcnew System::Windows::Forms::Label());
			this->textBoxCP2 = (gcnew System::Windows::Forms::TextBox());
			this->labelCodePostal = (gcnew System::Windows::Forms::Label());
			this->textBoxVille2 = (gcnew System::Windows::Forms::TextBox());
			this->labelVille = (gcnew System::Windows::Forms::Label());
			this->labelPays = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->NomCommande = (gcnew System::Windows::Forms::Label());
			this->PrenomCommande = (gcnew System::Windows::Forms::Label());
			this->textBoxNomCommande = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenomCommande = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrixCommande = (gcnew System::Windows::Forms::TextBox());
			this->labelPrixCommande = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelProduit
			// 
			this->labelProduit->AutoSize = true;
			this->labelProduit->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelProduit->Location = System::Drawing::Point(59, 140);
			this->labelProduit->Name = L"labelProduit";
			this->labelProduit->Size = System::Drawing::Size(49, 16);
			this->labelProduit->TabIndex = 2;
			this->labelProduit->Text = L"Produit";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label5->Location = System::Drawing::Point(140, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(213, 25);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Informations Générales";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Green;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(485, 233);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 34);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &InterfaceCommande::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(645, 233);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 34);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Annuler";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &InterfaceCommande::button2_Click);
			// 
			// comboBoxPays2
			// 
			this->comboBoxPays2->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"Mr;", L"Mme;" });
			this->comboBoxPays2->FormattingEnabled = true;
			this->comboBoxPays2->Items->AddRange(gcnew cli::array< System::Object^  >(259) {
				L"Afghanistan", L"Afrique du Sud", L"Akrotiri",
					L"Albanie", L"Algérie", L"Allemagne", L"Andorre", L"Angola", L"Anguilla", L"Antarctique", L"Antigua-et-Barbuda", L"Arabie saoudite",
					L"Arctic Ocean", L"Argentine", L"Arménie", L"Aruba", L"Ashmore and Cartier Islands", L"Atlantic Ocean", L"Australie", L"Autriche",
					L"Azerbaïdjan", L"Bahamas", L"Bahreïn", L"Bangladesh", L"Barbade", L"Belau", L"Belgique", L"Belize", L"Bénin", L"Bermudes", L"Bhoutan",
					L"Biélorussie", L"Birmanie", L"Bolivie", L"Bosnie-Herzégovine", L"Botswana", L"Brésil", L"Brunei", L"Bulgarie", L"Burkina Faso",
					L"Burundi", L"Cambodge", L"Cameroun", L"Canada", L"Cap-Vert", L"Chili", L"Chine", L"Chypre", L"Clipperton Island", L"Colombie",
					L"Comores", L"Congo", L"Coral Sea Islands", L"Corée du Nord", L"Corée du Sud", L"Costa Rica", L"Côte d\'Ivoire", L"Croatie",
					L"Cuba", L"Curacao", L"Danemark", L"Dhekelia", L"Djibouti", L"Dominique", L"Égypte", L"Émirats arabes unis", L"Équateur", L"Érythrée",
					L"Espagne", L"Estonie", L"États-Unis", L"Éthiopie", L"ex-République yougoslave de Macédoine", L"Finlande", L"France", L"Gabon",
					L"Gambie", L"Gaza Strip", L"Géorgie", L"Ghana", L"Gibraltar", L"Grèce", L"Grenade", L"Groenland", L"Guam", L"Guatemala", L"Guernsey",
					L"Guinée", L"Guinée équatoriale", L"Guinée-Bissao", L"Guyana", L"Haïti", L"Honduras", L"Hong Kong", L"Hongrie", L"Ile Bouvet",
					L"Ile Christmas", L"Ile Norfolk", L"Iles Cayman", L"Iles Cook", L"Iles des Cocos (Keeling)", L"Iles Falkland", L"Iles Féroé",
					L"Iles Fidji", L"Iles Géorgie du Sud et Sandwich du Sud", L"Iles Heard et McDonald", L"Iles Marshall", L"Iles Pitcairn", L"Iles Salomon",
					L"Iles Svalbard et Jan Mayen", L"Iles Turks-et-Caicos", L"Iles Vierges américaines", L"Iles Vierges britanniques", L"Inde", L"Indian Ocean",
					L"Indonésie", L"Iran", L"Iraq", L"Irlande", L"Islande", L"Israël", L"Italie", L"Jamaïque", L"Jan Mayen", L"Japon", L"Jersey",
					L"Jordanie", L"Kazakhstan", L"Kenya", L"Kirghizistan", L"Kiribati", L"Kosovo", L"Koweït", L"Laos", L"Lesotho", L"Lettonie", L"Liban",
					L"Liberia", L"Libye", L"Liechtenstein", L"Lituanie", L"Luxembourg", L"Macao", L"Madagascar", L"Malaisie", L"Malawi", L"Maldives",
					L"Mali", L"Malte", L"Man, Isle of", L"Mariannes du Nord", L"Maroc", L"Maurice", L"Mauritanie", L"Mexique", L"Micronésie", L"Moldavie",
					L"Monaco", L"Monde", L"Mongolie", L"Monténégro", L"Montserrat", L"Mozambique", L"Namibie", L"Nauru", L"Navassa Island", L"Népal",
					L"Nicaragua", L"Niger", L"Nigeria", L"Nioué", L"Norvège", L"Nouvelle-Calédonie", L"Nouvelle-Zélande", L"Oman", L"Ouganda", L"Ouzbékistan",
					L"Pacific Ocean", L"Pakistan", L"Panama", L"Papouasie-Nouvelle-Guinée", L"Paracel Islands", L"Paraguay", L"Pays-Bas", L"Pérou",
					L"Philippines", L"Pologne", L"Polynésie française", L"Porto Rico", L"Portugal", L"Qatar", L"République centrafricaine", L"République démocratique du Congo",
					L"République dominicaine", L"Roumanie", L"Royaume-Uni", L"Russie", L"Rwanda", L"Sahara occidental", L"Saint-Barthélemy", L"Saint-Christophe-et-Niévès",
					L"Sainte-Hélène", L"Sainte-Lucie", L"Saint-Marin", L"Saint-Martin", L"Saint-Pierre-et-Miquelon", L"Saint-Siège", L"Saint-Vincent-et-les-Grenadines",
					L"Salvador", L"Samoa", L"Samoa américaines", L"Sao Tomé-et-Principe", L"Sénégal", L"Serbie", L"Seychelles", L"Sierra Leone",
					L"Singapour", L"Sint Maarten", L"Slovaquie", L"Slovénie", L"Somalie", L"Soudan", L"Soudan du Sud", L"Southern Ocean", L"Spratly Islands",
					L"Sri Lanka", L"Suède", L"Suisse", L"Suriname", L"Swaziland", L"Syrie", L"Tadjikistan", L"Taïwan", L"Tanzanie", L"Tchad", L"Terres australes françaises",
					L"Territoire britannique de l\'Océan Indien", L"Thaïlande", L"Timor Oriental", L"Togo", L"Tokélaou", L"Tonga", L"Trinité-et-Tobago",
					L"Tunisie", L"Turkménistan", L"Turquie", L"Tuvalu", L"Ukraine", L"Union européenne", L"Uruguay", L"Vanuatu", L"Venezuela", L"Viêt Nam",
					L"Wake Island", L"Wallis-et-Futuna", L"West Bank", L"Yémen", L"Zambie", L"Zimbabwe"
			});
			this->comboBoxPays2->Location = System::Drawing::Point(514, 66);
			this->comboBoxPays2->Margin = System::Windows::Forms::Padding(4);
			this->comboBoxPays2->Name = L"comboBoxPays2";
			this->comboBoxPays2->Size = System::Drawing::Size(268, 24);
			this->comboBoxPays2->TabIndex = 51;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label6->Location = System::Drawing::Point(522, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(195, 25);
			this->label6->TabIndex = 50;
			this->label6->Text = L"Adresse de Livraison";
			// 
			// textBoxResidence2
			// 
			this->textBoxResidence2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxResidence2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxResidence2->Location = System::Drawing::Point(630, 177);
			this->textBoxResidence2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxResidence2->Name = L"textBoxResidence2";
			this->textBoxResidence2->Size = System::Drawing::Size(155, 15);
			this->textBoxResidence2->TabIndex = 49;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label3->Location = System::Drawing::Point(556, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 16);
			this->label3->TabIndex = 48;
			this->label3->Text = L"Residence";
			// 
			// textBoxEtage2
			// 
			this->textBoxEtage2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxEtage2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxEtage2->Location = System::Drawing::Point(507, 177);
			this->textBoxEtage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxEtage2->Name = L"textBoxEtage2";
			this->textBoxEtage2->Size = System::Drawing::Size(45, 15);
			this->textBoxEtage2->TabIndex = 47;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label4->Location = System::Drawing::Point(451, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 16);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Etage";
			// 
			// textBoxRue2
			// 
			this->textBoxRue2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxRue2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxRue2->Location = System::Drawing::Point(630, 142);
			this->textBoxRue2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxRue2->Name = L"textBoxRue2";
			this->textBoxRue2->Size = System::Drawing::Size(155, 15);
			this->textBoxRue2->TabIndex = 45;
			// 
			// labelRue
			// 
			this->labelRue->AutoSize = true;
			this->labelRue->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelRue->Location = System::Drawing::Point(592, 140);
			this->labelRue->Name = L"labelRue";
			this->labelRue->Size = System::Drawing::Size(32, 16);
			this->labelRue->TabIndex = 44;
			this->labelRue->Text = L"Rue";
			// 
			// textBoxNumRue2
			// 
			this->textBoxNumRue2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxNumRue2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxNumRue2->Location = System::Drawing::Point(510, 142);
			this->textBoxNumRue2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNumRue2->Name = L"textBoxNumRue2";
			this->textBoxNumRue2->Size = System::Drawing::Size(45, 15);
			this->textBoxNumRue2->TabIndex = 43;
			// 
			// labelNumRue
			// 
			this->labelNumRue->AutoSize = true;
			this->labelNumRue->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelNumRue->Location = System::Drawing::Point(454, 140);
			this->labelNumRue->Name = L"labelNumRue";
			this->labelNumRue->Size = System::Drawing::Size(49, 16);
			this->labelNumRue->TabIndex = 42;
			this->labelNumRue->Text = L"N° Rue";
			// 
			// textBoxCP2
			// 
			this->textBoxCP2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxCP2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxCP2->Location = System::Drawing::Point(686, 110);
			this->textBoxCP2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxCP2->Name = L"textBoxCP2";
			this->textBoxCP2->Size = System::Drawing::Size(99, 15);
			this->textBoxCP2->TabIndex = 41;
			// 
			// labelCodePostal
			// 
			this->labelCodePostal->AutoSize = true;
			this->labelCodePostal->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelCodePostal->Location = System::Drawing::Point(651, 107);
			this->labelCodePostal->Name = L"labelCodePostal";
			this->labelCodePostal->Size = System::Drawing::Size(25, 16);
			this->labelCodePostal->TabIndex = 40;
			this->labelCodePostal->Text = L"CP";
			// 
			// textBoxVille2
			// 
			this->textBoxVille2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxVille2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxVille2->Location = System::Drawing::Point(510, 110);
			this->textBoxVille2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxVille2->Name = L"textBoxVille2";
			this->textBoxVille2->Size = System::Drawing::Size(125, 15);
			this->textBoxVille2->TabIndex = 39;
			// 
			// labelVille
			// 
			this->labelVille->AutoSize = true;
			this->labelVille->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelVille->Location = System::Drawing::Point(466, 107);
			this->labelVille->Name = L"labelVille";
			this->labelVille->Size = System::Drawing::Size(33, 16);
			this->labelVille->TabIndex = 38;
			this->labelVille->Text = L"Ville";
			// 
			// labelPays
			// 
			this->labelPays->AutoSize = true;
			this->labelPays->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelPays->Location = System::Drawing::Point(466, 74);
			this->labelPays->Name = L"labelPays";
			this->labelPays->Size = System::Drawing::Size(38, 16);
			this->labelPays->TabIndex = 37;
			this->labelPays->Text = L"Pays";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(140, 136);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(235, 24);
			this->comboBox1->TabIndex = 52;
			this->comboBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &InterfaceCommande::comboBox1_MouseClick);
			// 
			// NomCommande
			// 
			this->NomCommande->AutoSize = true;
			this->NomCommande->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->NomCommande->Location = System::Drawing::Point(59, 74);
			this->NomCommande->Name = L"NomCommande";
			this->NomCommande->Size = System::Drawing::Size(36, 16);
			this->NomCommande->TabIndex = 53;
			this->NomCommande->Text = L"Nom";
			// 
			// PrenomCommande
			// 
			this->PrenomCommande->AutoSize = true;
			this->PrenomCommande->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->PrenomCommande->Location = System::Drawing::Point(59, 107);
			this->PrenomCommande->Name = L"PrenomCommande";
			this->PrenomCommande->Size = System::Drawing::Size(54, 16);
			this->PrenomCommande->TabIndex = 54;
			this->PrenomCommande->Text = L"Prénom";
			// 
			// textBoxNomCommande
			// 
			this->textBoxNomCommande->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxNomCommande->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxNomCommande->Location = System::Drawing::Point(140, 74);
			this->textBoxNomCommande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomCommande->Name = L"textBoxNomCommande";
			this->textBoxNomCommande->Size = System::Drawing::Size(213, 15);
			this->textBoxNomCommande->TabIndex = 55;
			this->textBoxNomCommande->TextChanged += gcnew System::EventHandler(this, &InterfaceCommande::textBoxNomCommande_TextChanged);
			// 
			// textBoxPrenomCommande
			// 
			this->textBoxPrenomCommande->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxPrenomCommande->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxPrenomCommande->Location = System::Drawing::Point(140, 108);
			this->textBoxPrenomCommande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrenomCommande->Name = L"textBoxPrenomCommande";
			this->textBoxPrenomCommande->Size = System::Drawing::Size(213, 15);
			this->textBoxPrenomCommande->TabIndex = 56;
			// 
			// textBoxPrixCommande
			// 
			this->textBoxPrixCommande->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxPrixCommande->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxPrixCommande->Location = System::Drawing::Point(140, 176);
			this->textBoxPrixCommande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrixCommande->Name = L"textBoxPrixCommande";
			this->textBoxPrixCommande->Size = System::Drawing::Size(213, 15);
			this->textBoxPrixCommande->TabIndex = 58;
			// 
			// labelPrixCommande
			// 
			this->labelPrixCommande->AutoSize = true;
			this->labelPrixCommande->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelPrixCommande->Location = System::Drawing::Point(59, 175);
			this->labelPrixCommande->Name = L"labelPrixCommande";
			this->labelPrixCommande->Size = System::Drawing::Size(29, 16);
			this->labelPrixCommande->TabIndex = 57;
			this->labelPrixCommande->Text = L"Prix";
			// 
			// InterfaceCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->ClientSize = System::Drawing::Size(800, 302);
			this->Controls->Add(this->textBoxPrixCommande);
			this->Controls->Add(this->labelPrixCommande);
			this->Controls->Add(this->textBoxPrenomCommande);
			this->Controls->Add(this->textBoxNomCommande);
			this->Controls->Add(this->PrenomCommande);
			this->Controls->Add(this->NomCommande);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->comboBoxPays2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxResidence2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxEtage2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxRue2);
			this->Controls->Add(this->labelRue);
			this->Controls->Add(this->textBoxNumRue2);
			this->Controls->Add(this->labelNumRue);
			this->Controls->Add(this->textBoxCP2);
			this->Controls->Add(this->labelCodePostal);
			this->Controls->Add(this->textBoxVille2);
			this->Controls->Add(this->labelVille);
			this->Controls->Add(this->labelPays);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->labelProduit);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"InterfaceCommande";
			this->Text = L"Créer un Article";
			this->Load += gcnew System::EventHandler(this, &InterfaceCommande::InterfaceCommande_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InterfaceCommande_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBoxNom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		String^ nom2 = textBoxNomCommande->Text;
		String^ prenom2 = textBoxPrenomCommande->Text;
		String^ Produit = comboBox1->Text;
		String^ Prix = textBoxPrixCommande->Text;
		//String^ pays = comboBoxPays2->Text;
		//String^ ville = textBoxVille2->Text;
		//String^ codepostal = textBoxCP2->Text;
		//String^ n_rue = textBoxNumRue2->Text;
		//String^ rue = textBoxRue2->Text;
		//String^ etage = textBoxEtage2->Text;
		//String^ Residence = textBoxResidence2->Text;
		con->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("insert into commande(nom2,prenom2,Produit,Prix) values('" + nom2 + "','" + prenom2 + "','" + Produit + "','" + Prix + "')", con);
		cmd->ExecuteReader();
		MessageBox::Show("L'article : " + Produit + " a été commandé(e) avec succès !");
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
private: System::Void comboBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select type_article, prix_ht, CONCAT(type_article,' | ',prix_ht, ' euros') as Result from projet.article", con);
	DataTable^ dt = gcnew DataTable();
	sda->Fill(dt);
	comboBox1->DataSource = dt;
	comboBox1->DisplayMember = "Result";
}

private: System::Void comboBoxPrix_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

}
private: System::Void textBoxNomCommande_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}