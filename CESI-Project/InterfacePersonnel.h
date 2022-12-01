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
	/// Description r�sum�e de InterfacePersonnel
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
		/// Nettoyage des ressources utilis�es.
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


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBoxsuperieur;



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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBoxsuperieur = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(50, 61);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom";
			// 
			// textBoxNom
			// 
			this->textBoxNom->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxNom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxNom->Location = System::Drawing::Point(91, 62);
			this->textBoxNom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(176, 13);
			this->textBoxNom->TabIndex = 1;
			this->textBoxNom->TextChanged += gcnew System::EventHandler(this, &InterfacePersonnel::textBoxNom_TextChanged);
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxPrenom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxPrenom->Location = System::Drawing::Point(91, 88);
			this->textBoxPrenom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(176, 13);
			this->textBoxPrenom->TabIndex = 3;
			// 
			// labelPrenom
			// 
			this->labelPrenom->AutoSize = true;
			this->labelPrenom->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelPrenom->Location = System::Drawing::Point(39, 87);
			this->labelPrenom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelPrenom->Name = L"labelPrenom";
			this->labelPrenom->Size = System::Drawing::Size(43, 13);
			this->labelPrenom->TabIndex = 2;
			this->labelPrenom->Text = L"Pr�nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Location = System::Drawing::Point(24, 140);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Date d\'embauche ";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(116, 136);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(151, 20);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// labelPays
			// 
			this->labelPays->AutoSize = true;
			this->labelPays->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelPays->Location = System::Drawing::Point(344, 60);
			this->labelPays->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelPays->Name = L"labelPays";
			this->labelPays->Size = System::Drawing::Size(30, 13);
			this->labelPays->TabIndex = 6;
			this->labelPays->Text = L"Pays";
			// 
			// textBoxVille
			// 
			this->textBoxVille->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxVille->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxVille->Location = System::Drawing::Point(377, 89);
			this->textBoxVille->Margin = System::Windows::Forms::Padding(2);
			this->textBoxVille->Name = L"textBoxVille";
			this->textBoxVille->Size = System::Drawing::Size(94, 13);
			this->textBoxVille->TabIndex = 9;
			// 
			// labelVille
			// 
			this->labelVille->AutoSize = true;
			this->labelVille->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelVille->Location = System::Drawing::Point(344, 87);
			this->labelVille->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelVille->Name = L"labelVille";
			this->labelVille->Size = System::Drawing::Size(26, 13);
			this->labelVille->TabIndex = 8;
			this->labelVille->Text = L"Ville";
			// 
			// textBoxCP
			// 
			this->textBoxCP->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxCP->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxCP->Location = System::Drawing::Point(509, 89);
			this->textBoxCP->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCP->Name = L"textBoxCP";
			this->textBoxCP->Size = System::Drawing::Size(74, 13);
			this->textBoxCP->TabIndex = 11;
			// 
			// labelCodePostal
			// 
			this->labelCodePostal->AutoSize = true;
			this->labelCodePostal->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelCodePostal->Location = System::Drawing::Point(483, 87);
			this->labelCodePostal->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelCodePostal->Name = L"labelCodePostal";
			this->labelCodePostal->Size = System::Drawing::Size(21, 13);
			this->labelCodePostal->TabIndex = 10;
			this->labelCodePostal->Text = L"CP";
			// 
			// textBoxRue
			// 
			this->textBoxRue->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxRue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxRue->Location = System::Drawing::Point(467, 115);
			this->textBoxRue->Margin = System::Windows::Forms::Padding(2);
			this->textBoxRue->Name = L"textBoxRue";
			this->textBoxRue->Size = System::Drawing::Size(116, 13);
			this->textBoxRue->TabIndex = 15;
			// 
			// labelRue
			// 
			this->labelRue->AutoSize = true;
			this->labelRue->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelRue->Location = System::Drawing::Point(439, 114);
			this->labelRue->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelRue->Name = L"labelRue";
			this->labelRue->Size = System::Drawing::Size(27, 13);
			this->labelRue->TabIndex = 14;
			this->labelRue->Text = L"Rue";
			// 
			// textBoxNumRue
			// 
			this->textBoxNumRue->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxNumRue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxNumRue->Location = System::Drawing::Point(377, 115);
			this->textBoxNumRue->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNumRue->Name = L"textBoxNumRue";
			this->textBoxNumRue->Size = System::Drawing::Size(34, 13);
			this->textBoxNumRue->TabIndex = 13;
			this->textBoxNumRue->TextChanged += gcnew System::EventHandler(this, &InterfacePersonnel::textBoxNumRue_TextChanged);
			// 
			// labelNumRue
			// 
			this->labelNumRue->AutoSize = true;
			this->labelNumRue->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelNumRue->Location = System::Drawing::Point(335, 114);
			this->labelNumRue->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelNumRue->Name = L"labelNumRue";
			this->labelNumRue->Size = System::Drawing::Size(42, 13);
			this->labelNumRue->TabIndex = 12;
			this->labelNumRue->Text = L"N� Rue";
			// 
			// textBoxResidence
			// 
			this->textBoxResidence->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxResidence->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxResidence->Location = System::Drawing::Point(467, 144);
			this->textBoxResidence->Margin = System::Windows::Forms::Padding(2);
			this->textBoxResidence->Name = L"textBoxResidence";
			this->textBoxResidence->Size = System::Drawing::Size(116, 13);
			this->textBoxResidence->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label3->Location = System::Drawing::Point(412, 142);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Residence";
			// 
			// textBoxEtage
			// 
			this->textBoxEtage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxEtage->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxEtage->Location = System::Drawing::Point(375, 144);
			this->textBoxEtage->Margin = System::Windows::Forms::Padding(2);
			this->textBoxEtage->Name = L"textBoxEtage";
			this->textBoxEtage->Size = System::Drawing::Size(34, 13);
			this->textBoxEtage->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label4->Location = System::Drawing::Point(333, 142);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Etage";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label5->Location = System::Drawing::Point(98, 20);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 20);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Informations G�n�rales";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label6->Location = System::Drawing::Point(386, 21);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 20);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Adresse de R�sidence";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Green;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(364, 229);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 28);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &InterfacePersonnel::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(484, 229);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 28);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Annuler";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &InterfacePersonnel::button2_Click);
			// 
			// textBoxNumTel
			// 
			this->textBoxNumTel->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxNumTel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxNumTel->Location = System::Drawing::Point(91, 167);
			this->textBoxNumTel->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNumTel->Name = L"textBoxNumTel";
			this->textBoxNumTel->Size = System::Drawing::Size(176, 13);
			this->textBoxNumTel->TabIndex = 25;
			// 
			// labelNumTel
			// 
			this->labelNumTel->AutoSize = true;
			this->labelNumTel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelNumTel->Location = System::Drawing::Point(27, 166);
			this->labelNumTel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelNumTel->Name = L"labelNumTel";
			this->labelNumTel->Size = System::Drawing::Size(62, 13);
			this->labelNumTel->TabIndex = 24;
			this->labelNumTel->Text = L"Num�ro Tel";
			// 
			// textBoxadressemail
			// 
			this->textBoxadressemail->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxadressemail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxadressemail->Location = System::Drawing::Point(91, 194);
			this->textBoxadressemail->Margin = System::Windows::Forms::Padding(2);
			this->textBoxadressemail->Name = L"textBoxadressemail";
			this->textBoxadressemail->Size = System::Drawing::Size(176, 13);
			this->textBoxadressemail->TabIndex = 27;
			// 
			// labelAdresseMail
			// 
			this->labelAdresseMail->AutoSize = true;
			this->labelAdresseMail->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelAdresseMail->Location = System::Drawing::Point(20, 194);
			this->labelAdresseMail->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelAdresseMail->Name = L"labelAdresseMail";
			this->labelAdresseMail->Size = System::Drawing::Size(67, 13);
			this->labelAdresseMail->TabIndex = 26;
			this->labelAdresseMail->Text = L"Adresse Mail";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label7->Location = System::Drawing::Point(39, 111);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 13);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Sexe";
			// 
			// comboBoxSexe
			// 
			this->comboBoxSexe->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"Mr;", L"Mme;" });
			this->comboBoxSexe->FormattingEnabled = true;
			this->comboBoxSexe->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Mr", L"Mme" });
			this->comboBoxSexe->Location = System::Drawing::Point(91, 109);
			this->comboBoxSexe->Name = L"comboBoxSexe";
			this->comboBoxSexe->Size = System::Drawing::Size(176, 21);
			this->comboBoxSexe->TabIndex = 29;
			// 
			// comboBoxPays
			// 
			this->comboBoxPays->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"Mr;", L"Mme;" });
			this->comboBoxPays->FormattingEnabled = true;
			this->comboBoxPays->Items->AddRange(gcnew cli::array< System::Object^  >(259) {
				L"Afghanistan", L"Afrique du Sud", L"Akrotiri",
					L"Albanie", L"Alg�rie", L"Allemagne", L"Andorre", L"Angola", L"Anguilla", L"Antarctique", L"Antigua-et-Barbuda", L"Arabie saoudite",
					L"Arctic Ocean", L"Argentine", L"Arm�nie", L"Aruba", L"Ashmore and Cartier Islands", L"Atlantic Ocean", L"Australie", L"Autriche",
					L"Azerba�djan", L"Bahamas", L"Bahre�n", L"Bangladesh", L"Barbade", L"Belau", L"Belgique", L"Belize", L"B�nin", L"Bermudes", L"Bhoutan",
					L"Bi�lorussie", L"Birmanie", L"Bolivie", L"Bosnie-Herz�govine", L"Botswana", L"Br�sil", L"Brunei", L"Bulgarie", L"Burkina Faso",
					L"Burundi", L"Cambodge", L"Cameroun", L"Canada", L"Cap-Vert", L"Chili", L"Chine", L"Chypre", L"Clipperton Island", L"Colombie",
					L"Comores", L"Congo", L"Coral Sea Islands", L"Cor�e du Nord", L"Cor�e du Sud", L"Costa Rica", L"C�te d\'Ivoire", L"Croatie",
					L"Cuba", L"Curacao", L"Danemark", L"Dhekelia", L"Djibouti", L"Dominique", L"�gypte", L"�mirats arabes unis", L"�quateur", L"�rythr�e",
					L"Espagne", L"Estonie", L"�tats-Unis", L"�thiopie", L"ex-R�publique yougoslave de Mac�doine", L"Finlande", L"France", L"Gabon",
					L"Gambie", L"Gaza Strip", L"G�orgie", L"Ghana", L"Gibraltar", L"Gr�ce", L"Grenade", L"Groenland", L"Guam", L"Guatemala", L"Guernsey",
					L"Guin�e", L"Guin�e �quatoriale", L"Guin�e-Bissao", L"Guyana", L"Ha�ti", L"Honduras", L"Hong Kong", L"Hongrie", L"Ile Bouvet",
					L"Ile Christmas", L"Ile Norfolk", L"Iles Cayman", L"Iles Cook", L"Iles des Cocos (Keeling)", L"Iles Falkland", L"Iles F�ro�",
					L"Iles Fidji", L"Iles G�orgie du Sud et Sandwich du Sud", L"Iles Heard et McDonald", L"Iles Marshall", L"Iles Pitcairn", L"Iles Salomon",
					L"Iles Svalbard et Jan Mayen", L"Iles Turks-et-Caicos", L"Iles Vierges am�ricaines", L"Iles Vierges britanniques", L"Inde", L"Indian Ocean",
					L"Indon�sie", L"Iran", L"Iraq", L"Irlande", L"Islande", L"Isra�l", L"Italie", L"Jama�que", L"Jan Mayen", L"Japon", L"Jersey",
					L"Jordanie", L"Kazakhstan", L"Kenya", L"Kirghizistan", L"Kiribati", L"Kosovo", L"Kowe�t", L"Laos", L"Lesotho", L"Lettonie", L"Liban",
					L"Liberia", L"Libye", L"Liechtenstein", L"Lituanie", L"Luxembourg", L"Macao", L"Madagascar", L"Malaisie", L"Malawi", L"Maldives",
					L"Mali", L"Malte", L"Man, Isle of", L"Mariannes du Nord", L"Maroc", L"Maurice", L"Mauritanie", L"Mexique", L"Micron�sie", L"Moldavie",
					L"Monaco", L"Monde", L"Mongolie", L"Mont�n�gro", L"Montserrat", L"Mozambique", L"Namibie", L"Nauru", L"Navassa Island", L"N�pal",
					L"Nicaragua", L"Niger", L"Nigeria", L"Niou�", L"Norv�ge", L"Nouvelle-Cal�donie", L"Nouvelle-Z�lande", L"Oman", L"Ouganda", L"Ouzb�kistan",
					L"Pacific Ocean", L"Pakistan", L"Panama", L"Papouasie-Nouvelle-Guin�e", L"Paracel Islands", L"Paraguay", L"Pays-Bas", L"P�rou",
					L"Philippines", L"Pologne", L"Polyn�sie fran�aise", L"Porto Rico", L"Portugal", L"Qatar", L"R�publique centrafricaine", L"R�publique d�mocratique du Congo",
					L"R�publique dominicaine", L"Roumanie", L"Royaume-Uni", L"Russie", L"Rwanda", L"Sahara occidental", L"Saint-Barth�lemy", L"Saint-Christophe-et-Ni�v�s",
					L"Sainte-H�l�ne", L"Sainte-Lucie", L"Saint-Marin", L"Saint-Martin", L"Saint-Pierre-et-Miquelon", L"Saint-Si�ge", L"Saint-Vincent-et-les-Grenadines",
					L"Salvador", L"Samoa", L"Samoa am�ricaines", L"Sao Tom�-et-Principe", L"S�n�gal", L"Serbie", L"Seychelles", L"Sierra Leone",
					L"Singapour", L"Sint Maarten", L"Slovaquie", L"Slov�nie", L"Somalie", L"Soudan", L"Soudan du Sud", L"Southern Ocean", L"Spratly Islands",
					L"Sri Lanka", L"Su�de", L"Suisse", L"Suriname", L"Swaziland", L"Syrie", L"Tadjikistan", L"Ta�wan", L"Tanzanie", L"Tchad", L"Terres australes fran�aises",
					L"Territoire britannique de l\'Oc�an Indien", L"Tha�lande", L"Timor Oriental", L"Togo", L"Tok�laou", L"Tonga", L"Trinit�-et-Tobago",
					L"Tunisie", L"Turkm�nistan", L"Turquie", L"Tuvalu", L"Ukraine", L"Union europ�enne", L"Uruguay", L"Vanuatu", L"Venezuela", L"Vi�t Nam",
					L"Wake Island", L"Wallis-et-Futuna", L"West Bank", L"Y�men", L"Zambie", L"Zimbabwe"
			});
			this->comboBoxPays->Location = System::Drawing::Point(380, 54);
			this->comboBoxPays->Name = L"comboBoxPays";
			this->comboBoxPays->Size = System::Drawing::Size(202, 21);
			this->comboBoxPays->TabIndex = 30;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label8->Location = System::Drawing::Point(28, 220);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Sup�rieur";
			this->label8->Click += gcnew System::EventHandler(this, &InterfacePersonnel::label8_Click);
			// 
			// comboBoxsuperieur
			// 
			this->comboBoxsuperieur->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"Mr;", L"Mme;" });
			this->comboBoxsuperieur->FormattingEnabled = true;
			this->comboBoxsuperieur->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Mr Hocine", L"Mr Ethvignot" });
			this->comboBoxsuperieur->Location = System::Drawing::Point(91, 217);
			this->comboBoxsuperieur->Name = L"comboBoxsuperieur";
			this->comboBoxsuperieur->Size = System::Drawing::Size(176, 21);
			this->comboBoxsuperieur->TabIndex = 32;
			// 
			// InterfacePersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->ClientSize = System::Drawing::Size(611, 284);
			this->Controls->Add(this->comboBoxsuperieur);
			this->Controls->Add(this->label8);
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
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->labelPrenom);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"InterfacePersonnel";
			this->Text = L"Ins�rer un Personnel";
			this->Load += gcnew System::EventHandler(this, &InterfacePersonnel::InterfacePersonnel_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InterfacePersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxNumRue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxNom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		String^ superieur = comboBoxsuperieur->Text;
		String^ nom = textBoxNom->Text;
		String^ prenom = textBoxPrenom->Text;
		String^ numero_telephone = textBoxNumTel->Text;
		String^ adresse_mail = textBoxadressemail->Text;
		String^ sexe = comboBoxSexe->Text;
		String^ date_embauche = dateTimePicker1->Text;
		String^ pays = comboBoxPays->Text;
		String^ ville = textBoxVille->Text;
		String^ codepostal = textBoxCP->Text;
		String^ n_rue = textBoxNumRue->Text;
		String^ rue = textBoxRue->Text;
		String^ etage = textBoxEtage->Text;
		String^ residence = textBoxResidence->Text;
		con->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("insert into personnel(superieur,nom,prenom,numero_telephone,adresse_mail,sexe,date_embauche,pays,ville,codepostal,n_rue,rue,etage,residence) values('" + superieur + "','" + nom + "','" + prenom + "','" + numero_telephone + "','" + adresse_mail + "','" + sexe + "','" + date_embauche + "','" + pays + "','" + ville + "','" + codepostal + "','" + n_rue + "','" + rue + "','" + etage + "','" + residence + "')", con);
		cmd->ExecuteReader();
		MessageBox::Show("Le Personnel : " + nom + " " + prenom + " a �t� ajout�(e) avec succ�s ! ");
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