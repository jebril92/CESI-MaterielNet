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
	/// Description r�sum�e de InterfaceClient
	/// </summary>
	public ref class InterfaceClient : public System::Windows::Forms::Form
	{
	public:
		InterfaceClient(void)
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
		~InterfaceClient()
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


	private: System::Windows::Forms::Label^ labelPays;

	private: System::Windows::Forms::TextBox^ textBoxVille;
	private: System::Windows::Forms::Label^ labelVille;
	private: System::Windows::Forms::TextBox^ textBoxCP;
	private: System::Windows::Forms::Label^ labelCodePostal;
	private: System::Windows::Forms::TextBox^ textBoxRue;
	private: System::Windows::Forms::Label^ labelRue;
	private: System::Windows::Forms::TextBox^ textBoxNumRue;
	private: System::Windows::Forms::Label^ labelNumRue;
	private: System::Windows::Forms::TextBox^ textBoxResidence;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxEtage;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBoxNumTel;
	private: System::Windows::Forms::Label^ labelNumTel;
	private: System::Windows::Forms::TextBox^ textBoxadressemail;
	private: System::Windows::Forms::Label^ labelAdresseMail;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBoxSexe;
	private: System::Windows::Forms::ComboBox^ comboBoxPays;







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
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->labelPrenom = (gcnew System::Windows::Forms::Label());
			this->labelPays = (gcnew System::Windows::Forms::Label());
			this->textBoxVille = (gcnew System::Windows::Forms::TextBox());
			this->labelVille = (gcnew System::Windows::Forms::Label());
			this->textBoxCP = (gcnew System::Windows::Forms::TextBox());
			this->labelCodePostal = (gcnew System::Windows::Forms::Label());
			this->textBoxRue = (gcnew System::Windows::Forms::TextBox());
			this->labelRue = (gcnew System::Windows::Forms::Label());
			this->textBoxNumRue = (gcnew System::Windows::Forms::TextBox());
			this->labelNumRue = (gcnew System::Windows::Forms::Label());
			this->textBoxResidence = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxEtage = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBoxNumTel = (gcnew System::Windows::Forms::TextBox());
			this->labelNumTel = (gcnew System::Windows::Forms::Label());
			this->textBoxadressemail = (gcnew System::Windows::Forms::TextBox());
			this->labelAdresseMail = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBoxSexe = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxPays = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(67, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom";
			// 
			// textBoxNom
			// 
			this->textBoxNom->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxNom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxNom->Location = System::Drawing::Point(121, 76);
			this->textBoxNom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(235, 15);
			this->textBoxNom->TabIndex = 1;
			this->textBoxNom->TextChanged += gcnew System::EventHandler(this, &InterfaceClient::textBoxNom_TextChanged);
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxPrenom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxPrenom->Location = System::Drawing::Point(121, 108);
			this->textBoxPrenom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(235, 15);
			this->textBoxPrenom->TabIndex = 3;
			// 
			// labelPrenom
			// 
			this->labelPrenom->AutoSize = true;
			this->labelPrenom->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelPrenom->Location = System::Drawing::Point(52, 107);
			this->labelPrenom->Name = L"labelPrenom";
			this->labelPrenom->Size = System::Drawing::Size(54, 16);
			this->labelPrenom->TabIndex = 2;
			this->labelPrenom->Text = L"Prénom";
			// 
			// labelPays
			// 
			this->labelPays->AutoSize = true;
			this->labelPays->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelPays->Location = System::Drawing::Point(459, 74);
			this->labelPays->Name = L"labelPays";
			this->labelPays->Size = System::Drawing::Size(38, 16);
			this->labelPays->TabIndex = 6;
			this->labelPays->Text = L"Pays";
			// 
			// textBoxVille
			// 
			this->textBoxVille->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxVille->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxVille->Location = System::Drawing::Point(503, 110);
			this->textBoxVille->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxVille->Name = L"textBoxVille";
			this->textBoxVille->Size = System::Drawing::Size(125, 15);
			this->textBoxVille->TabIndex = 9;
			// 
			// labelVille
			// 
			this->labelVille->AutoSize = true;
			this->labelVille->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelVille->Location = System::Drawing::Point(459, 107);
			this->labelVille->Name = L"labelVille";
			this->labelVille->Size = System::Drawing::Size(33, 16);
			this->labelVille->TabIndex = 8;
			this->labelVille->Text = L"Ville";
			// 
			// textBoxCP
			// 
			this->textBoxCP->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxCP->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxCP->Location = System::Drawing::Point(679, 110);
			this->textBoxCP->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxCP->Name = L"textBoxCP";
			this->textBoxCP->Size = System::Drawing::Size(99, 15);
			this->textBoxCP->TabIndex = 11;
			// 
			// labelCodePostal
			// 
			this->labelCodePostal->AutoSize = true;
			this->labelCodePostal->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelCodePostal->Location = System::Drawing::Point(644, 107);
			this->labelCodePostal->Name = L"labelCodePostal";
			this->labelCodePostal->Size = System::Drawing::Size(25, 16);
			this->labelCodePostal->TabIndex = 10;
			this->labelCodePostal->Text = L"CP";
			// 
			// textBoxRue
			// 
			this->textBoxRue->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxRue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxRue->Location = System::Drawing::Point(623, 142);
			this->textBoxRue->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxRue->Name = L"textBoxRue";
			this->textBoxRue->Size = System::Drawing::Size(155, 15);
			this->textBoxRue->TabIndex = 15;
			// 
			// labelRue
			// 
			this->labelRue->AutoSize = true;
			this->labelRue->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelRue->Location = System::Drawing::Point(585, 140);
			this->labelRue->Name = L"labelRue";
			this->labelRue->Size = System::Drawing::Size(32, 16);
			this->labelRue->TabIndex = 14;
			this->labelRue->Text = L"Rue";
			// 
			// textBoxNumRue
			// 
			this->textBoxNumRue->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxNumRue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxNumRue->Location = System::Drawing::Point(503, 142);
			this->textBoxNumRue->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNumRue->Name = L"textBoxNumRue";
			this->textBoxNumRue->Size = System::Drawing::Size(45, 15);
			this->textBoxNumRue->TabIndex = 13;
			this->textBoxNumRue->TextChanged += gcnew System::EventHandler(this, &InterfaceClient::textBoxNumRue_TextChanged);
			// 
			// labelNumRue
			// 
			this->labelNumRue->AutoSize = true;
			this->labelNumRue->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelNumRue->Location = System::Drawing::Point(447, 140);
			this->labelNumRue->Name = L"labelNumRue";
			this->labelNumRue->Size = System::Drawing::Size(49, 16);
			this->labelNumRue->TabIndex = 12;
			this->labelNumRue->Text = L"N° Rue";
			// 
			// textBoxResidence
			// 
			this->textBoxResidence->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxResidence->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxResidence->Location = System::Drawing::Point(623, 177);
			this->textBoxResidence->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxResidence->Name = L"textBoxResidence";
			this->textBoxResidence->Size = System::Drawing::Size(155, 15);
			this->textBoxResidence->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label3->Location = System::Drawing::Point(549, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 16);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Residence";
			// 
			// textBoxEtage
			// 
			this->textBoxEtage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxEtage->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxEtage->Location = System::Drawing::Point(500, 177);
			this->textBoxEtage->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxEtage->Name = L"textBoxEtage";
			this->textBoxEtage->Size = System::Drawing::Size(45, 15);
			this->textBoxEtage->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::WhiteSmoke;
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
			this->label5->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label5->Location = System::Drawing::Point(131, 25);
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
			this->label6->ForeColor = System::Drawing::Color::WhiteSmoke;
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
			this->button1->Location = System::Drawing::Point(485, 282);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 34);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &InterfaceClient::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(645, 282);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 34);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Annuler";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &InterfaceClient::button2_Click);
			// 
			// textBoxNumTel
			// 
			this->textBoxNumTel->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxNumTel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxNumTel->Location = System::Drawing::Point(123, 177);
			this->textBoxNumTel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNumTel->Name = L"textBoxNumTel";
			this->textBoxNumTel->Size = System::Drawing::Size(235, 15);
			this->textBoxNumTel->TabIndex = 25;
			// 
			// labelNumTel
			// 
			this->labelNumTel->AutoSize = true;
			this->labelNumTel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelNumTel->Location = System::Drawing::Point(38, 175);
			this->labelNumTel->Name = L"labelNumTel";
			this->labelNumTel->Size = System::Drawing::Size(78, 16);
			this->labelNumTel->TabIndex = 24;
			this->labelNumTel->Text = L"Numéro Tel";
			// 
			// textBoxadressemail
			// 
			this->textBoxadressemail->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxadressemail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxadressemail->Location = System::Drawing::Point(123, 210);
			this->textBoxadressemail->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxadressemail->Name = L"textBoxadressemail";
			this->textBoxadressemail->Size = System::Drawing::Size(235, 15);
			this->textBoxadressemail->TabIndex = 27;
			// 
			// labelAdresseMail
			// 
			this->labelAdresseMail->AutoSize = true;
			this->labelAdresseMail->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelAdresseMail->Location = System::Drawing::Point(29, 210);
			this->labelAdresseMail->Name = L"labelAdresseMail";
			this->labelAdresseMail->Size = System::Drawing::Size(86, 16);
			this->labelAdresseMail->TabIndex = 26;
			this->labelAdresseMail->Text = L"Adresse Mail";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label7->Location = System::Drawing::Point(52, 137);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 16);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Sexe";
			// 
			// comboBoxSexe
			// 
			this->comboBoxSexe->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"Mr;", L"Mme;" });
			this->comboBoxSexe->FormattingEnabled = true;
			this->comboBoxSexe->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Mr", L"Mme" });
			this->comboBoxSexe->Location = System::Drawing::Point(121, 134);
			this->comboBoxSexe->Margin = System::Windows::Forms::Padding(4);
			this->comboBoxSexe->Name = L"comboBoxSexe";
			this->comboBoxSexe->Size = System::Drawing::Size(233, 24);
			this->comboBoxSexe->TabIndex = 29;
			// 
			// comboBoxPays
			// 
			this->comboBoxPays->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"Mr;", L"Mme;" });
			this->comboBoxPays->FormattingEnabled = true;
			this->comboBoxPays->Items->AddRange(gcnew cli::array< System::Object^  >(259) {
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
			this->comboBoxPays->Location = System::Drawing::Point(507, 66);
			this->comboBoxPays->Margin = System::Windows::Forms::Padding(4);
			this->comboBoxPays->Name = L"comboBoxPays";
			this->comboBoxPays->Size = System::Drawing::Size(268, 24);
			this->comboBoxPays->TabIndex = 30;
			// 
			// InterfaceClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->ClientSize = System::Drawing::Size(815, 350);
			this->Controls->Add(this->comboBoxPays);
			this->Controls->Add(this->comboBoxSexe);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxadressemail);
			this->Controls->Add(this->labelAdresseMail);
			this->Controls->Add(this->textBoxNumTel);
			this->Controls->Add(this->labelNumTel);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxResidence);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxEtage);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxRue);
			this->Controls->Add(this->labelRue);
			this->Controls->Add(this->textBoxNumRue);
			this->Controls->Add(this->labelNumRue);
			this->Controls->Add(this->textBoxCP);
			this->Controls->Add(this->labelCodePostal);
			this->Controls->Add(this->textBoxVille);
			this->Controls->Add(this->labelVille);
			this->Controls->Add(this->labelPays);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->labelPrenom);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"InterfaceClient";
			this->Text = L"Insérer un Client";
			this->Load += gcnew System::EventHandler(this, &InterfaceClient::InterfaceClient_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InterfaceClient_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxNumRue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxNom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		String^ nom = textBoxNom->Text;
		String^ prenom = textBoxPrenom->Text;
		String^ numero_telephone = textBoxNumTel->Text;
		String^ adresse_mail = textBoxadressemail->Text;
		String^ sexe = comboBoxSexe->Text;
		String^ pays = comboBoxPays->Text;
		String^ ville = textBoxVille->Text;
		String^ codepostal = textBoxCP->Text;
		String^ n_rue = textBoxNumRue->Text;
		String^ rue = textBoxRue->Text;
		String^ etage = textBoxEtage->Text;
		String^ residence = textBoxResidence->Text;
		con->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("insert into clients(nom,prenom,numero_telephone,adresse_mail,sexe,pays,ville,codepostal,n_rue,rue,etage,residence) values('" + nom + "','" + prenom + "','" + numero_telephone + "','" + adresse_mail + "','" + sexe + "','" + pays + "','" + ville + "','" + codepostal + "','" + n_rue + "','" + rue + "','" + etage + "','" + residence + "')", con);
		cmd->ExecuteReader();
		MessageBox::Show("Le Client : " + nom + " " + prenom + " a été ajouté(e) avec succès ! ");
		con->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}