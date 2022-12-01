#pragma once
#include "InterfacePersonnel.h"
#include <string>

namespace CESIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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
	private: System::Windows::Forms::Panel^ panelPersonnels;

	private: System::Windows::Forms::Label^ labelPersonnels;

	private: System::Windows::Forms::Panel^ panelMarketing;

	private: System::Windows::Forms::Label^ labelMarketing;
	private: System::Windows::Forms::Panel^ panelSettings;
	private: System::Windows::Forms::Label^ labelSettings;
	private: System::Windows::Forms::Panel^ panelLogo;
	private: System::Windows::Forms::PictureBox^ btnHome;
	private: System::Windows::Forms::Label^ labelBienvenue;
	private: System::Windows::Forms::Label^ labelAdmin;
	private: System::Windows::Forms::Button^ btnSupprimer;


	private: System::Windows::Forms::Button^ btnNouveau;
	private: System::Windows::Forms::Button^ btnModifier;










	private: System::Windows::Forms::Button^ btnchargerbdd;




	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;

	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->pnlNav = (gcnew System::Windows::Forms::Panel());
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
			this->panelPersonnels = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnchargerbdd = (gcnew System::Windows::Forms::Button());
			this->btnSupprimer = (gcnew System::Windows::Forms::Button());
			this->btnNouveau = (gcnew System::Windows::Forms::Button());
			this->btnModifier = (gcnew System::Windows::Forms::Button());
			this->labelPersonnels = (gcnew System::Windows::Forms::Label());
			this->panelMarketing = (gcnew System::Windows::Forms::Panel());
			this->labelMarketing = (gcnew System::Windows::Forms::Label());
			this->panelSettings = (gcnew System::Windows::Forms::Panel());
			this->labelSettings = (gcnew System::Windows::Forms::Label());
			this->labelBienvenue = (gcnew System::Windows::Forms::Label());
			this->labelAdmin = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->panelMenu->SuspendLayout();
			this->panelLogo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHome))->BeginInit();
			this->panelDashboard->SuspendLayout();
			this->panelProducts->SuspendLayout();
			this->panelOrders->SuspendLayout();
			this->panelPersonnels->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panelMarketing->SuspendLayout();
			this->panelSettings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->panelMenu->Controls->Add(this->pnlNav);
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
			this->panelMenu->Size = System::Drawing::Size(220, 661);
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
			this->button5->Text = L"Statistiques";
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
			this->button4->Text = L"Personnels";
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
			this->button3->Text = L"Produits";
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
			this->panelDashboard->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			this->panelProducts->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			this->panelOrders->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			// panelPersonnels
			// 
			this->panelPersonnels->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panelPersonnels->Controls->Add(this->dataGridView1);
			this->panelPersonnels->Controls->Add(this->btnchargerbdd);
			this->panelPersonnels->Controls->Add(this->btnSupprimer);
			this->panelPersonnels->Controls->Add(this->btnNouveau);
			this->panelPersonnels->Controls->Add(this->btnModifier);
			this->panelPersonnels->Controls->Add(this->labelPersonnels);
			this->panelPersonnels->Location = System::Drawing::Point(220, 76);
			this->panelPersonnels->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelPersonnels->Name = L"panelPersonnels";
			this->panelPersonnels->Size = System::Drawing::Size(961, 597);
			this->panelPersonnels->TabIndex = 5;
			this->panelPersonnels->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(195, 91);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(587, 273);
			this->dataGridView1->TabIndex = 19;
			// 
			// btnchargerbdd
			// 
			this->btnchargerbdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnchargerbdd.Image")));
			this->btnchargerbdd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnchargerbdd->Location = System::Drawing::Point(779, 534);
			this->btnchargerbdd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnchargerbdd->Name = L"btnchargerbdd";
			this->btnchargerbdd->Size = System::Drawing::Size(167, 48);
			this->btnchargerbdd->TabIndex = 18;
			this->btnchargerbdd->Text = L"Charger BDD";
			this->btnchargerbdd->UseVisualStyleBackColor = true;
			this->btnchargerbdd->Click += gcnew System::EventHandler(this, &Dashboard::btnchargerbdd_Click);
			// 
			// btnSupprimer
			// 
			this->btnSupprimer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSupprimer.Image")));
			this->btnSupprimer->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSupprimer->Location = System::Drawing::Point(613, 416);
			this->btnSupprimer->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSupprimer->Name = L"btnSupprimer";
			this->btnSupprimer->Size = System::Drawing::Size(168, 48);
			this->btnSupprimer->TabIndex = 13;
			this->btnSupprimer->Text = L"Supprimer";
			this->btnSupprimer->UseVisualStyleBackColor = true;
			this->btnSupprimer->Click += gcnew System::EventHandler(this, &Dashboard::button7_Click);
			// 
			// btnNouveau
			// 
			this->btnNouveau->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNouveau.Image")));
			this->btnNouveau->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNouveau->Location = System::Drawing::Point(208, 416);
			this->btnNouveau->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnNouveau->Name = L"btnNouveau";
			this->btnNouveau->Size = System::Drawing::Size(169, 48);
			this->btnNouveau->TabIndex = 11;
			this->btnNouveau->Text = L"Nouveau";
			this->btnNouveau->UseVisualStyleBackColor = true;
			this->btnNouveau->Click += gcnew System::EventHandler(this, &Dashboard::btnNouveau_Click);
			// 
			// btnModifier
			// 
			this->btnModifier->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnModifier.Image")));
			this->btnModifier->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnModifier->Location = System::Drawing::Point(413, 416);
			this->btnModifier->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnModifier->Name = L"btnModifier";
			this->btnModifier->Size = System::Drawing::Size(161, 48);
			this->btnModifier->TabIndex = 10;
			this->btnModifier->Text = L"   Modifier";
			this->btnModifier->UseVisualStyleBackColor = true;
			this->btnModifier->Click += gcnew System::EventHandler(this, &Dashboard::btnModifier_Click);
			// 
			// labelPersonnels
			// 
			this->labelPersonnels->AutoSize = true;
			this->labelPersonnels->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPersonnels->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->labelPersonnels->Location = System::Drawing::Point(13, 15);
			this->labelPersonnels->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPersonnels->Name = L"labelPersonnels";
			this->labelPersonnels->Size = System::Drawing::Size(191, 39);
			this->labelPersonnels->TabIndex = 0;
			this->labelPersonnels->Text = L"Personnels";
			// 
			// panelMarketing
			// 
			this->panelMarketing->Controls->Add(this->labelMarketing);
			this->panelMarketing->Location = System::Drawing::Point(316, 485);
			this->panelMarketing->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			this->panelSettings->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			this->ClientSize = System::Drawing::Size(1179, 661);
			this->Controls->Add(this->panelPersonnels);
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
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximumSize = System::Drawing::Size(1197, 708);
			this->MinimumSize = System::Drawing::Size(1197, 708);
			this->Name = L"Dashboard";
			this->Text = L"Matériel.Net - Accueil";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->panelMenu->ResumeLayout(false);
			this->panelLogo->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHome))->EndInit();
			this->panelDashboard->ResumeLayout(false);
			this->panelDashboard->PerformLayout();
			this->panelProducts->ResumeLayout(false);
			this->panelProducts->PerformLayout();
			this->panelOrders->ResumeLayout(false);
			this->panelOrders->PerformLayout();
			this->panelPersonnels->ResumeLayout(false);
			this->panelPersonnels->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panelMarketing->ResumeLayout(false);
			this->panelMarketing->PerformLayout();
			this->panelSettings->ResumeLayout(false);
			this->panelSettings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
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
		panelDashboard->Visible = false;
		panelOrders->Visible = false;
		panelProducts->Visible = false;
		panelPersonnels->Visible = false;
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
			panelPersonnels->Visible = false;
			panelMarketing->Visible = false;

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
			panelPersonnels->Visible = false;
			panelMarketing->Visible = false;

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
			panelPersonnels->Visible = false;
			panelMarketing->Visible = false;

		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlNav->Height = button4->Height;
		pnlNav->Top = button4->Top;
		pnlNav->Left = button4->Left;
		button4->BackColor = Color::FromArgb(46, 51, 73);
		if (panelPersonnels->Visible == false)
		{
			panelPersonnels->Visible = true;
			panelOrders->Visible = false;
			panelDashboard->Visible = false;
			panelProducts->Visible = false;
			panelMarketing->Visible = false;

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
			panelPersonnels->Visible = false;

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
		   // SUPPRIMER PERSONNEL
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		con->Open();
		String^ selected_eid = dataGridView1->CurrentRow->Cells["id_personnel"]->Value->ToString(); // R�cup�re l'Id de la personnes sur la ligne selectionn�e.
		MySqlCommand^ cmd = gcnew MySqlCommand("delete from projet.personnel where id_personnel = '" + selected_eid + "'", con); // Prend l'id correspondant et supprime la ligne selectionn�e.
		cmd->ExecuteReader();
		con->Close();

	}
	private: System::Void panelTitleBar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
		   // CREER UN PERSONNEL
	private: System::Void btnNouveau_Click(System::Object^ sender, System::EventArgs^ e) {
		InterfacePersonnel^ frm3 = gcnew InterfacePersonnel;
		frm3->Show();
	}
	private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   // CHARGER PERSONNEL
	private: System::Void btnchargerbdd_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from personnel", con);
		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);
		bindingSource1->DataSource = dt;
		dataGridView1->DataSource = bindingSource1;
	}
	private: System::Void btnModifier_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		con->Open();

		// Selection de chaque ligne dans la base de données 
		String^ selected_eid = dataGridView1->CurrentRow->Cells["id_personnel"]->Value->ToString();
		String^ superieur = dataGridView1->CurrentRow->Cells["superieur"]->Value->ToString();
		String^ nom = dataGridView1->CurrentRow->Cells["nom"]->Value->ToString();
		String^ prenom = dataGridView1->CurrentRow->Cells["prenom"]->Value->ToString();
		String^ numero_telephone = dataGridView1->CurrentRow->Cells["numero_telephone"]->Value->ToString();
		String^ adresse_mail = dataGridView1->CurrentRow->Cells["adresse_mail"]->Value->ToString();
		String^ sexe = dataGridView1->CurrentRow->Cells["sexe"]->Value->ToString();
		String^ date_embauche = dataGridView1->CurrentRow->Cells["date_embauche"]->Value->ToString();
		String^ pays = dataGridView1->CurrentRow->Cells["pays"]->Value->ToString();
		String^ ville = dataGridView1->CurrentRow->Cells["ville"]->Value->ToString();
		String^ codepostal = dataGridView1->CurrentRow->Cells["codepostal"]->Value->ToString();
		String^ n_rue = dataGridView1->CurrentRow->Cells["n_rue"]->Value->ToString();
		String^ rue = dataGridView1->CurrentRow->Cells["rue"]->Value->ToString();
		String^ etage = dataGridView1->CurrentRow->Cells["etage"]->Value->ToString();
		String^ Residence = dataGridView1->CurrentRow->Cells["Residence"]->Value->ToString();

		//id_personnel = '" + selected_eid + "',
		MySqlCommand^ cmd = gcnew MySqlCommand("update projet.personnel set superieur = '" + superieur + "', nom = '" + nom + "', prenom = '" + prenom + "', numero_telephone = '" + numero_telephone + "', adresse_mail = '" + adresse_mail + "', sexe = '" + sexe + "', date_embauche = '" + date_embauche + "', pays = '" + pays + "', ville = '" + ville + "', codepostal = '" + codepostal + "', n_rue = '" + n_rue + "', rue = '" + rue + "', etage = '" + etage + "', Residence = '" + Residence + "' where id_personnel = '" + selected_eid + "'", con);
		cmd->ExecuteReader();
		con->Close();
	}
	};
}