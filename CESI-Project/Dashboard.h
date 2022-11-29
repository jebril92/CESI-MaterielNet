#pragma once

namespace CESIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
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
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}

			Application::Exit();
			//Environment::Exit(0);

		}
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::FlowLayoutPanel^ panelTitleBar;
	private: System::Windows::Forms::Panel^ pnlNav;
	private: System::Windows::Forms::Panel^ panelDashboard;
	private: System::Windows::Forms::Label^ labelDashboard;
	private: System::Windows::Forms::Panel^ panelOrders;
	private: System::Windows::Forms::Label^ labelOrders;
	private: System::Windows::Forms::Panel^ panelProducts;
	private: System::Windows::Forms::Label^ labelProducts;
	private: System::Windows::Forms::Panel^ panelCustomers;
	private: System::Windows::Forms::Label^ labelCustomers;
	private: System::Windows::Forms::Panel^ panelMarketing;

	private: System::Windows::Forms::Label^ labelMarketing;
	private: System::Windows::Forms::Panel^ panelSettings;
	private: System::Windows::Forms::Label^ labelSettings;
	private: System::Windows::Forms::Panel^ panelLogo;
	private: System::Windows::Forms::PictureBox^ btnHome;
	private: System::Windows::Forms::Label^ labelBienvenue;
	private: System::Windows::Forms::Label^ labelAdmin;
	private: System::Windows::Forms::Button^ btnSupprimer;

	private: System::Windows::Forms::Button^ btnModifier;
	private: System::Windows::Forms::Button^ btnNouveau;
	private: System::Windows::Forms::Button^ btnEnregistrer;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ labeladressemail;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ labelnumero;
	private: System::Windows::Forms::TextBox^ prenomtextbox;
	private: System::Windows::Forms::Label^ labelprenom;
	private: System::Windows::Forms::TextBox^ nomtextbox;
	private: System::Windows::Forms::Label^ labelnom;
	private: System::Windows::Forms::Button^ btnchargerbdd;
	private: System::Windows::Forms::TextBox^ personneltextbox;
	private: System::Windows::Forms::Label^ labelpersonnel;
	private: System::Windows::Forms::TextBox^ etudianttextbox;
	private: System::Windows::Forms::Label^ labelidetudiant;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	protected:
			
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->pnlNav = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->btnHome = (gcnew System::Windows::Forms::PictureBox());
			this->panelTitleBar = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panelDashboard = (gcnew System::Windows::Forms::Panel());
			this->labelDashboard = (gcnew System::Windows::Forms::Label());
			this->panelProducts = (gcnew System::Windows::Forms::Panel());
			this->labelProducts = (gcnew System::Windows::Forms::Label());
			this->panelOrders = (gcnew System::Windows::Forms::Panel());
			this->labelOrders = (gcnew System::Windows::Forms::Label());
			this->panelCustomers = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnchargerbdd = (gcnew System::Windows::Forms::Button());
			this->personneltextbox = (gcnew System::Windows::Forms::TextBox());
			this->labelpersonnel = (gcnew System::Windows::Forms::Label());
			this->etudianttextbox = (gcnew System::Windows::Forms::TextBox());
			this->labelidetudiant = (gcnew System::Windows::Forms::Label());
			this->btnSupprimer = (gcnew System::Windows::Forms::Button());
			this->btnModifier = (gcnew System::Windows::Forms::Button());
			this->btnNouveau = (gcnew System::Windows::Forms::Button());
			this->btnEnregistrer = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->labeladressemail = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->labelnumero = (gcnew System::Windows::Forms::Label());
			this->prenomtextbox = (gcnew System::Windows::Forms::TextBox());
			this->labelprenom = (gcnew System::Windows::Forms::Label());
			this->nomtextbox = (gcnew System::Windows::Forms::TextBox());
			this->labelnom = (gcnew System::Windows::Forms::Label());
			this->labelCustomers = (gcnew System::Windows::Forms::Label());
			this->panelMarketing = (gcnew System::Windows::Forms::Panel());
			this->labelMarketing = (gcnew System::Windows::Forms::Label());
			this->panelSettings = (gcnew System::Windows::Forms::Panel());
			this->labelSettings = (gcnew System::Windows::Forms::Label());
			this->labelBienvenue = (gcnew System::Windows::Forms::Label());
			this->labelAdmin = (gcnew System::Windows::Forms::Label());
			this->panelMenu->SuspendLayout();
			this->panelLogo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHome))->BeginInit();
			this->panelDashboard->SuspendLayout();
			this->panelProducts->SuspendLayout();
			this->panelOrders->SuspendLayout();
			this->panelCustomers->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panelMarketing->SuspendLayout();
			this->panelSettings->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->panelMenu->Controls->Add(this->pnlNav);
			this->panelMenu->Controls->Add(this->button6);
			this->panelMenu->Controls->Add(this->button5);
			this->panelMenu->Controls->Add(this->button4);
			this->panelMenu->Controls->Add(this->button3);
			this->panelMenu->Controls->Add(this->button2);
			this->panelMenu->Controls->Add(this->button1);
			this->panelMenu->Controls->Add(this->panelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(220, 663);
			this->panelMenu->TabIndex = 0;
			// 
			// pnlNav
			// 
			this->pnlNav->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->pnlNav->Location = System::Drawing::Point(0, 193);
			this->pnlNav->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlNav->Name = L"pnlNav";
			this->pnlNav->Size = System::Drawing::Size(3, 100);
			this->pnlNav->TabIndex = 2;
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Top;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(0, 440);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Padding = System::Windows::Forms::Padding(11, 0, 20, 0);
			this->button6->Size = System::Drawing::Size(220, 60);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Settings";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Dashboard::button6_Click);
			this->button6->Leave += gcnew System::EventHandler(this, &Dashboard::button6_Leave);
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(0, 380);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(11, 0, 20, 0);
			this->button5->Size = System::Drawing::Size(220, 60);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Marketing";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Dashboard::button5_Click);
			this->button5->Leave += gcnew System::EventHandler(this, &Dashboard::button5_Leave);
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(0, 320);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(11, 0, 20, 0);
			this->button4->Size = System::Drawing::Size(220, 60);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Customers";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Dashboard::button4_Click);
			this->button4->Leave += gcnew System::EventHandler(this, &Dashboard::button4_Leave);
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(0, 260);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(11, 0, 20, 0);
			this->button3->Size = System::Drawing::Size(220, 60);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Products";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Dashboard::button3_Click);
			this->button3->Leave += gcnew System::EventHandler(this, &Dashboard::button3_Leave);
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(0, 200);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(11, 0, 20, 0);
			this->button2->Size = System::Drawing::Size(220, 60);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Orders";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Dashboard::button2_Click);
			this->button2->Leave += gcnew System::EventHandler(this, &Dashboard::button2_Leave);
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 140);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(11, 0, 20, 0);
			this->button1->Size = System::Drawing::Size(220, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Dashboard";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
			this->button1->Leave += gcnew System::EventHandler(this, &Dashboard::button1_Leave);
			// 
			// panelLogo
			// 
			this->panelLogo->Controls->Add(this->btnHome);
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(220, 140);
			this->panelLogo->TabIndex = 0;
			// 
			// btnHome
			// 
			this->btnHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHome.Image")));
			this->btnHome->Location = System::Drawing::Point(33, 22);
			this->btnHome->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(147, 97);
			this->btnHome->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnHome->TabIndex = 0;
			this->btnHome->TabStop = false;
			this->btnHome->Click += gcnew System::EventHandler(this, &Dashboard::btnHome_Click);
			// 
			// panelTitleBar
			// 
			this->panelTitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->panelTitleBar->Location = System::Drawing::Point(220, 0);
			this->panelTitleBar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panelTitleBar->Name = L"panelTitleBar";
			this->panelTitleBar->Size = System::Drawing::Size(961, 78);
			this->panelTitleBar->TabIndex = 1;
			this->panelTitleBar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panelTitleBar_Paint);
			// 
			// panelDashboard
			// 
			this->panelDashboard->Controls->Add(this->labelDashboard);
			this->panelDashboard->ForeColor = System::Drawing::Color::Black;
			this->panelDashboard->Location = System::Drawing::Point(501, 119);
			this->panelDashboard->Margin = System::Windows::Forms::Padding(4);
			this->panelDashboard->Name = L"panelDashboard";
			this->panelDashboard->Size = System::Drawing::Size(961, 597);
			this->panelDashboard->TabIndex = 2;
			this->panelDashboard->Visible = false;
			// 
			// labelDashboard
			// 
			this->labelDashboard->AutoSize = true;
			this->labelDashboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDashboard->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->labelDashboard->Location = System::Drawing::Point(13, 15);
			this->labelDashboard->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDashboard->Name = L"labelDashboard";
			this->labelDashboard->Size = System::Drawing::Size(186, 39);
			this->labelDashboard->TabIndex = 0;
			this->labelDashboard->Text = L"Dashboard";
			// 
			// panelProducts
			// 
			this->panelProducts->Controls->Add(this->labelProducts);
			this->panelProducts->Location = System::Drawing::Point(296, 155);
			this->panelProducts->Margin = System::Windows::Forms::Padding(4);
			this->panelProducts->Name = L"panelProducts";
			this->panelProducts->Size = System::Drawing::Size(267, 123);
			this->panelProducts->TabIndex = 4;
			this->panelProducts->Visible = false;
			// 
			// labelProducts
			// 
			this->labelProducts->AutoSize = true;
			this->labelProducts->Location = System::Drawing::Point(21, 15);
			this->labelProducts->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelProducts->Name = L"labelProducts";
			this->labelProducts->Size = System::Drawing::Size(60, 16);
			this->labelProducts->TabIndex = 0;
			this->labelProducts->Text = L"Products";
			// 
			// panelOrders
			// 
			this->panelOrders->Controls->Add(this->labelOrders);
			this->panelOrders->Location = System::Drawing::Point(528, 283);
			this->panelOrders->Margin = System::Windows::Forms::Padding(4);
			this->panelOrders->Name = L"panelOrders";
			this->panelOrders->Size = System::Drawing::Size(267, 123);
			this->panelOrders->TabIndex = 3;
			this->panelOrders->Visible = false;
			// 
			// labelOrders
			// 
			this->labelOrders->AutoSize = true;
			this->labelOrders->Location = System::Drawing::Point(19, 22);
			this->labelOrders->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelOrders->Name = L"labelOrders";
			this->labelOrders->Size = System::Drawing::Size(48, 16);
			this->labelOrders->TabIndex = 0;
			this->labelOrders->Text = L"Orders";
			// 
			// panelCustomers
			// 
			this->panelCustomers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panelCustomers->Controls->Add(this->dataGridView1);
			this->panelCustomers->Controls->Add(this->btnchargerbdd);
			this->panelCustomers->Controls->Add(this->personneltextbox);
			this->panelCustomers->Controls->Add(this->labelpersonnel);
			this->panelCustomers->Controls->Add(this->etudianttextbox);
			this->panelCustomers->Controls->Add(this->labelidetudiant);
			this->panelCustomers->Controls->Add(this->btnSupprimer);
			this->panelCustomers->Controls->Add(this->btnModifier);
			this->panelCustomers->Controls->Add(this->btnNouveau);
			this->panelCustomers->Controls->Add(this->btnEnregistrer);
			this->panelCustomers->Controls->Add(this->textBox1);
			this->panelCustomers->Controls->Add(this->labeladressemail);
			this->panelCustomers->Controls->Add(this->textBox2);
			this->panelCustomers->Controls->Add(this->labelnumero);
			this->panelCustomers->Controls->Add(this->prenomtextbox);
			this->panelCustomers->Controls->Add(this->labelprenom);
			this->panelCustomers->Controls->Add(this->nomtextbox);
			this->panelCustomers->Controls->Add(this->labelnom);
			this->panelCustomers->Controls->Add(this->labelCustomers);
			this->panelCustomers->Location = System::Drawing::Point(220, 76);
			this->panelCustomers->Margin = System::Windows::Forms::Padding(4);
			this->panelCustomers->Name = L"panelCustomers";
			this->panelCustomers->Size = System::Drawing::Size(961, 597);
			this->panelCustomers->TabIndex = 5;
			this->panelCustomers->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(365, 79);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(526, 251);
			this->dataGridView1->TabIndex = 19;
			// 
			// btnchargerbdd
			// 
			this->btnchargerbdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnchargerbdd.Image")));
			this->btnchargerbdd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnchargerbdd->Location = System::Drawing::Point(779, 534);
			this->btnchargerbdd->Margin = System::Windows::Forms::Padding(4);
			this->btnchargerbdd->Name = L"btnchargerbdd";
			this->btnchargerbdd->Size = System::Drawing::Size(167, 48);
			this->btnchargerbdd->TabIndex = 18;
			this->btnchargerbdd->Text = L"Charger BDD";
			this->btnchargerbdd->UseVisualStyleBackColor = true;
			// 
			// personneltextbox
			// 
			this->personneltextbox->Location = System::Drawing::Point(197, 190);
			this->personneltextbox->Margin = System::Windows::Forms::Padding(4);
			this->personneltextbox->Name = L"personneltextbox";
			this->personneltextbox->Size = System::Drawing::Size(132, 22);
			this->personneltextbox->TabIndex = 17;
			// 
			// labelpersonnel
			// 
			this->labelpersonnel->AutoSize = true;
			this->labelpersonnel->ForeColor = System::Drawing::Color::White;
			this->labelpersonnel->Location = System::Drawing::Point(193, 169);
			this->labelpersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelpersonnel->Name = L"labelpersonnel";
			this->labelpersonnel->Size = System::Drawing::Size(84, 16);
			this->labelpersonnel->TabIndex = 16;
			this->labelpersonnel->Text = L"ID Personnel";
			// 
			// etudianttextbox
			// 
			this->etudianttextbox->Location = System::Drawing::Point(195, 129);
			this->etudianttextbox->Margin = System::Windows::Forms::Padding(4);
			this->etudianttextbox->Name = L"etudianttextbox";
			this->etudianttextbox->Size = System::Drawing::Size(132, 22);
			this->etudianttextbox->TabIndex = 15;
			// 
			// labelidetudiant
			// 
			this->labelidetudiant->AutoSize = true;
			this->labelidetudiant->ForeColor = System::Drawing::Color::White;
			this->labelidetudiant->Location = System::Drawing::Point(191, 108);
			this->labelidetudiant->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelidetudiant->Name = L"labelidetudiant";
			this->labelidetudiant->Size = System::Drawing::Size(71, 16);
			this->labelidetudiant->TabIndex = 14;
			this->labelidetudiant->Text = L"ID Etudiant";
			// 
			// btnSupprimer
			// 
			this->btnSupprimer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSupprimer.Image")));
			this->btnSupprimer->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSupprimer->Location = System::Drawing::Point(779, 366);
			this->btnSupprimer->Margin = System::Windows::Forms::Padding(4);
			this->btnSupprimer->Name = L"btnSupprimer";
			this->btnSupprimer->Size = System::Drawing::Size(135, 36);
			this->btnSupprimer->TabIndex = 13;
			this->btnSupprimer->Text = L"Supprimer";
			this->btnSupprimer->UseVisualStyleBackColor = true;
			this->btnSupprimer->Click += gcnew System::EventHandler(this, &Dashboard::button7_Click);
			// 
			// btnModifier
			// 
			this->btnModifier->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnModifier.Image")));
			this->btnModifier->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnModifier->Location = System::Drawing::Point(493, 366);
			this->btnModifier->Margin = System::Windows::Forms::Padding(4);
			this->btnModifier->Name = L"btnModifier";
			this->btnModifier->Size = System::Drawing::Size(135, 36);
			this->btnModifier->TabIndex = 12;
			this->btnModifier->Text = L"Modifier";
			this->btnModifier->UseVisualStyleBackColor = true;
			// 
			// btnNouveau
			// 
			this->btnNouveau->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNouveau.Image")));
			this->btnNouveau->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNouveau->Location = System::Drawing::Point(351, 366);
			this->btnNouveau->Margin = System::Windows::Forms::Padding(4);
			this->btnNouveau->Name = L"btnNouveau";
			this->btnNouveau->Size = System::Drawing::Size(135, 36);
			this->btnNouveau->TabIndex = 11;
			this->btnNouveau->Text = L"Nouveau";
			this->btnNouveau->UseVisualStyleBackColor = true;
			// 
			// btnEnregistrer
			// 
			this->btnEnregistrer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEnregistrer.Image")));
			this->btnEnregistrer->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnEnregistrer->Location = System::Drawing::Point(636, 366);
			this->btnEnregistrer->Margin = System::Windows::Forms::Padding(4);
			this->btnEnregistrer->Name = L"btnEnregistrer";
			this->btnEnregistrer->Size = System::Drawing::Size(135, 36);
			this->btnEnregistrer->TabIndex = 10;
			this->btnEnregistrer->Text = L"   Enregistrer";
			this->btnEnregistrer->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(36, 305);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 8;
			// 
			// labeladressemail
			// 
			this->labeladressemail->AutoSize = true;
			this->labeladressemail->ForeColor = System::Drawing::Color::White;
			this->labeladressemail->Location = System::Drawing::Point(32, 284);
			this->labeladressemail->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labeladressemail->Name = L"labeladressemail";
			this->labeladressemail->Size = System::Drawing::Size(86, 16);
			this->labeladressemail->TabIndex = 7;
			this->labeladressemail->Text = L"Adresse mail";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(36, 246);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 22);
			this->textBox2->TabIndex = 6;
			// 
			// labelnumero
			// 
			this->labelnumero->AutoSize = true;
			this->labelnumero->ForeColor = System::Drawing::Color::White;
			this->labelnumero->Location = System::Drawing::Point(32, 225);
			this->labelnumero->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelnumero->Name = L"labelnumero";
			this->labelnumero->Size = System::Drawing::Size(137, 16);
			this->labelnumero->TabIndex = 5;
			this->labelnumero->Text = L"Num�ro de t�l�phone";
			// 
			// prenomtextbox
			// 
			this->prenomtextbox->Location = System::Drawing::Point(36, 190);
			this->prenomtextbox->Margin = System::Windows::Forms::Padding(4);
			this->prenomtextbox->Name = L"prenomtextbox";
			this->prenomtextbox->Size = System::Drawing::Size(132, 22);
			this->prenomtextbox->TabIndex = 4;
			// 
			// labelprenom
			// 
			this->labelprenom->AutoSize = true;
			this->labelprenom->ForeColor = System::Drawing::Color::White;
			this->labelprenom->Location = System::Drawing::Point(32, 169);
			this->labelprenom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelprenom->Name = L"labelprenom";
			this->labelprenom->Size = System::Drawing::Size(54, 16);
			this->labelprenom->TabIndex = 3;
			this->labelprenom->Text = L"Pr�nom";
			// 
			// nomtextbox
			// 
			this->nomtextbox->Location = System::Drawing::Point(36, 130);
			this->nomtextbox->Margin = System::Windows::Forms::Padding(4);
			this->nomtextbox->Name = L"nomtextbox";
			this->nomtextbox->Size = System::Drawing::Size(132, 22);
			this->nomtextbox->TabIndex = 2;
			// 
			// labelnom
			// 
			this->labelnom->AutoSize = true;
			this->labelnom->ForeColor = System::Drawing::Color::White;
			this->labelnom->Location = System::Drawing::Point(32, 110);
			this->labelnom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelnom->Name = L"labelnom";
			this->labelnom->Size = System::Drawing::Size(36, 16);
			this->labelnom->TabIndex = 1;
			this->labelnom->Text = L"Nom";
			// 
			// labelCustomers
			// 
			this->labelCustomers->AutoSize = true;
			this->labelCustomers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCustomers->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->labelCustomers->Location = System::Drawing::Point(13, 15);
			this->labelCustomers->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCustomers->Name = L"labelCustomers";
			this->labelCustomers->Size = System::Drawing::Size(187, 39);
			this->labelCustomers->TabIndex = 0;
			this->labelCustomers->Text = L"Customers";
			// 
			// panelMarketing
			// 
			this->panelMarketing->Controls->Add(this->labelMarketing);
			this->panelMarketing->Location = System::Drawing::Point(316, 485);
			this->panelMarketing->Margin = System::Windows::Forms::Padding(4);
			this->panelMarketing->Name = L"panelMarketing";
			this->panelMarketing->Size = System::Drawing::Size(267, 123);
			this->panelMarketing->TabIndex = 6;
			this->panelMarketing->Visible = false;
			// 
			// labelMarketing
			// 
			this->labelMarketing->AutoSize = true;
			this->labelMarketing->Location = System::Drawing::Point(28, 17);
			this->labelMarketing->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelMarketing->Name = L"labelMarketing";
			this->labelMarketing->Size = System::Drawing::Size(66, 16);
			this->labelMarketing->TabIndex = 0;
			this->labelMarketing->Text = L"Marketing";
			// 
			// panelSettings
			// 
			this->panelSettings->Controls->Add(this->labelSettings);
			this->panelSettings->Location = System::Drawing::Point(227, 283);
			this->panelSettings->Margin = System::Windows::Forms::Padding(4);
			this->panelSettings->Name = L"panelSettings";
			this->panelSettings->Size = System::Drawing::Size(267, 123);
			this->panelSettings->TabIndex = 7;
			this->panelSettings->Visible = false;
			// 
			// labelSettings
			// 
			this->labelSettings->AutoSize = true;
			this->labelSettings->Location = System::Drawing::Point(25, 18);
			this->labelSettings->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSettings->Name = L"labelSettings";
			this->labelSettings->Size = System::Drawing::Size(55, 16);
			this->labelSettings->TabIndex = 0;
			this->labelSettings->Text = L"Settings";
			// 
			// labelBienvenue
			// 
			this->labelBienvenue->AutoSize = true;
			this->labelBienvenue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->labelBienvenue->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBienvenue->ForeColor = System::Drawing::Color::White;
			this->labelBienvenue->Location = System::Drawing::Point(937, 22);
			this->labelBienvenue->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelBienvenue->Name = L"labelBienvenue";
			this->labelBienvenue->Size = System::Drawing::Size(92, 20);
			this->labelBienvenue->TabIndex = 8;
			this->labelBienvenue->Text = L"Bienvenue:";
			// 
			// labelAdmin
			// 
			this->labelAdmin->AutoSize = true;
			this->labelAdmin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->labelAdmin->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAdmin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->labelAdmin->Location = System::Drawing::Point(1037, 22);
			this->labelAdmin->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelAdmin->Name = L"labelAdmin";
			this->labelAdmin->Size = System::Drawing::Size(55, 20);
			this->labelAdmin->TabIndex = 9;
			this->labelAdmin->Text = L"Admin";
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1179, 663);
			this->Controls->Add(this->panelCustomers);
			this->Controls->Add(this->labelBienvenue);
			this->Controls->Add(this->panelDashboard);
			this->Controls->Add(this->labelAdmin);
			this->Controls->Add(this->panelTitleBar);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->panelProducts);
			this->Controls->Add(this->panelSettings);
			this->Controls->Add(this->panelOrders);
			this->Controls->Add(this->panelMarketing);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1197, 710);
			this->MinimumSize = System::Drawing::Size(1197, 710);
			this->Name = L"Dashboard";
			this->Text = L"Mat�riel.Net - Accueil";
			this->panelMenu->ResumeLayout(false);
			this->panelLogo->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHome))->EndInit();
			this->panelDashboard->ResumeLayout(false);
			this->panelDashboard->PerformLayout();
			this->panelProducts->ResumeLayout(false);
			this->panelProducts->PerformLayout();
			this->panelOrders->ResumeLayout(false);
			this->panelOrders->PerformLayout();
			this->panelCustomers->ResumeLayout(false);
			this->panelCustomers->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panelMarketing->ResumeLayout(false);
			this->panelMarketing->PerformLayout();
			this->panelSettings->ResumeLayout(false);
			this->panelSettings->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnHome_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->BackColor = Color::FromArgb(31, 30, 68);
		button2->BackColor = Color::FromArgb(31, 30, 68);
		button3->BackColor = Color::FromArgb(31, 30, 68);
		button4->BackColor = Color::FromArgb(31, 30, 68);
		button5->BackColor = Color::FromArgb(31, 30, 68);
		button6->BackColor = Color::FromArgb(31, 30, 68);
		panelDashboard->Visible = false;
		panelOrders->Visible = false;
		panelProducts->Visible = false;
		panelCustomers->Visible = false;
		panelMarketing->Visible = false;
		panelSettings->Visible = false;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlNav->Height = button1->Height;
		pnlNav->Top = button1->Top;
		pnlNav->Left = button1->Left;
		button1->BackColor = Color::FromArgb(46, 51, 73);
		if (panelDashboard->Visible == false)
		{
			panelDashboard->Visible = true;
			panelOrders->Visible = false;
			panelProducts->Visible = false;
			panelCustomers->Visible = false;
			panelMarketing->Visible = false;
			panelSettings->Visible = false;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlNav->Height = button2->Height;
		pnlNav->Top = button2->Top;
		pnlNav->Left = button2->Left;
		button2->BackColor = Color::FromArgb(46, 51, 73);
		if (panelOrders->Visible == false)
		{
			panelOrders->Visible = true;
			panelDashboard->Visible = false;
			panelProducts->Visible = false;
			panelCustomers->Visible = false;
			panelMarketing->Visible = false;
			panelSettings->Visible = false;
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlNav->Height = button3->Height;
		pnlNav->Top = button3->Top;
		pnlNav->Left = button3->Left;
		button3->BackColor = Color::FromArgb(46, 51, 73);
		if (panelProducts->Visible == false)
		{
			panelProducts->Visible = true;
			panelOrders->Visible = false;
			panelDashboard->Visible = false;
			panelCustomers->Visible = false;
			panelMarketing->Visible = false;
			panelSettings->Visible = false;
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlNav->Height = button4->Height;
		pnlNav->Top = button4->Top;
		pnlNav->Left = button4->Left;
		button4->BackColor = Color::FromArgb(46, 51, 73);
		if (panelCustomers->Visible == false)
		{
			panelCustomers->Visible = true;
			panelOrders->Visible = false;
			panelDashboard->Visible = false;
			panelProducts->Visible = false;
			panelMarketing->Visible = false;
			panelSettings->Visible = false;
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlNav->Height = button5->Height;
		pnlNav->Top = button5->Top;
		pnlNav->Left = button5->Left;
		button5->BackColor = Color::FromArgb(46, 51, 73);
		if (panelMarketing->Visible == false)
		{
			panelMarketing->Visible = true;
			panelOrders->Visible = false;
			panelDashboard->Visible = false;
			panelProducts->Visible = false;
			panelCustomers->Visible = false;
			panelSettings->Visible = false;
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlNav->Height = button6->Height;
		pnlNav->Top = button6->Top;
		pnlNav->Left = button6->Left;
		button6->BackColor = Color::FromArgb(46, 51, 73);
		if (panelSettings->Visible == false)
		{
			panelSettings->Visible = true;
			panelOrders->Visible = false;
			panelDashboard->Visible = false;
			panelProducts->Visible = false;
			panelCustomers->Visible = false;
			panelMarketing->Visible = false;
		}
	}
	private: System::Void button1_Leave(System::Object^ sender, System::EventArgs^ e) {
		button1->BackColor = Color::FromArgb(31, 30, 68);
	}
	private: System::Void button2_Leave(System::Object^ sender, System::EventArgs^ e) {
		button2->BackColor = Color::FromArgb(31, 30, 68);
	}
	private: System::Void button3_Leave(System::Object^ sender, System::EventArgs^ e) {
		button3->BackColor = Color::FromArgb(31, 30, 68);
	}
	private: System::Void button4_Leave(System::Object^ sender, System::EventArgs^ e) {
		button4->BackColor = Color::FromArgb(31, 30, 68);
	}
	private: System::Void button5_Leave(System::Object^ sender, System::EventArgs^ e) {
		button5->BackColor = Color::FromArgb(31, 30, 68);
	}
	private: System::Void button6_Leave(System::Object^ sender, System::EventArgs^ e) {
		button6->BackColor = Color::FromArgb(31, 30, 68);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panelTitleBar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
};
}