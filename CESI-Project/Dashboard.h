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
			this->panelMenu->Controls->Add(this->button6);
			this->panelMenu->Controls->Add(this->button5);
			this->panelMenu->Controls->Add(this->button4);
			this->panelMenu->Controls->Add(this->button3);
			this->panelMenu->Controls->Add(this->button2);
			this->panelMenu->Controls->Add(this->button1);
			this->panelMenu->Controls->Add(this->panelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Margin = System::Windows::Forms::Padding(2);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(165, 545);
			this->panelMenu->TabIndex = 0;
			// 
			// pnlNav
			// 
			this->pnlNav->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->pnlNav->Location = System::Drawing::Point(0, 157);
			this->pnlNav->Margin = System::Windows::Forms::Padding(2);
			this->pnlNav->Name = L"pnlNav";
			this->pnlNav->Size = System::Drawing::Size(2, 81);
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
			this->button6->Location = System::Drawing::Point(0, 359);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Padding = System::Windows::Forms::Padding(8, 0, 15, 0);
			this->button6->Size = System::Drawing::Size(165, 49);
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
			this->button5->Location = System::Drawing::Point(0, 310);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(8, 0, 15, 0);
			this->button5->Size = System::Drawing::Size(165, 49);
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
			this->button4->Location = System::Drawing::Point(0, 261);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(8, 0, 15, 0);
			this->button4->Size = System::Drawing::Size(165, 49);
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
			this->button3->Location = System::Drawing::Point(0, 212);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(8, 0, 15, 0);
			this->button3->Size = System::Drawing::Size(165, 49);
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
			this->button2->Location = System::Drawing::Point(0, 163);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(8, 0, 15, 0);
			this->button2->Size = System::Drawing::Size(165, 49);
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
			this->button1->Location = System::Drawing::Point(0, 114);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(8, 0, 15, 0);
			this->button1->Size = System::Drawing::Size(165, 49);
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
			this->panelLogo->Margin = System::Windows::Forms::Padding(2);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(165, 114);
			this->panelLogo->TabIndex = 0;
			// 
			// btnHome
			// 
			this->btnHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHome.Image")));
			this->btnHome->Location = System::Drawing::Point(25, 18);
			this->btnHome->Margin = System::Windows::Forms::Padding(2);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(110, 79);
			this->btnHome->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnHome->TabIndex = 0;
			this->btnHome->TabStop = false;
			this->btnHome->Click += gcnew System::EventHandler(this, &Dashboard::btnHome_Click);
			// 
			// panelTitleBar
			// 
			this->panelTitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->panelTitleBar->Location = System::Drawing::Point(165, 0);
			this->panelTitleBar->Margin = System::Windows::Forms::Padding(2);
			this->panelTitleBar->Name = L"panelTitleBar";
			this->panelTitleBar->Size = System::Drawing::Size(721, 63);
			this->panelTitleBar->TabIndex = 1;
			this->panelTitleBar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panelTitleBar_Paint);
			// 
			// panelDashboard
			// 
			this->panelDashboard->Controls->Add(this->labelDashboard);
			this->panelDashboard->ForeColor = System::Drawing::Color::Black;
			this->panelDashboard->Location = System::Drawing::Point(376, 97);
			this->panelDashboard->Name = L"panelDashboard";
			this->panelDashboard->Size = System::Drawing::Size(721, 485);
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
			this->labelDashboard->Location = System::Drawing::Point(10, 12);
			this->labelDashboard->Name = L"labelDashboard";
			this->labelDashboard->Size = System::Drawing::Size(153, 32);
			this->labelDashboard->TabIndex = 0;
			this->labelDashboard->Text = L"Dashboard";
			// 
			// panelProducts
			// 
			this->panelProducts->Controls->Add(this->labelProducts);
			this->panelProducts->Location = System::Drawing::Point(222, 126);
			this->panelProducts->Name = L"panelProducts";
			this->panelProducts->Size = System::Drawing::Size(200, 100);
			this->panelProducts->TabIndex = 4;
			this->panelProducts->Visible = false;
			// 
			// labelProducts
			// 
			this->labelProducts->AutoSize = true;
			this->labelProducts->Location = System::Drawing::Point(16, 12);
			this->labelProducts->Name = L"labelProducts";
			this->labelProducts->Size = System::Drawing::Size(49, 13);
			this->labelProducts->TabIndex = 0;
			this->labelProducts->Text = L"Products";
			// 
			// panelOrders
			// 
			this->panelOrders->Controls->Add(this->labelOrders);
			this->panelOrders->Location = System::Drawing::Point(396, 230);
			this->panelOrders->Name = L"panelOrders";
			this->panelOrders->Size = System::Drawing::Size(200, 100);
			this->panelOrders->TabIndex = 3;
			this->panelOrders->Visible = false;
			// 
			// labelOrders
			// 
			this->labelOrders->AutoSize = true;
			this->labelOrders->Location = System::Drawing::Point(14, 18);
			this->labelOrders->Name = L"labelOrders";
			this->labelOrders->Size = System::Drawing::Size(38, 13);
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
			this->panelPersonnels->Location = System::Drawing::Point(165, 62);
			this->panelPersonnels->Name = L"panelPersonnels";
			this->panelPersonnels->Size = System::Drawing::Size(721, 485);
			this->panelPersonnels->TabIndex = 5;
			this->panelPersonnels->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(146, 74);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(440, 222);
			this->dataGridView1->TabIndex = 19;
			// 
			// btnchargerbdd
			// 
			this->btnchargerbdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnchargerbdd.Image")));
			this->btnchargerbdd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnchargerbdd->Location = System::Drawing::Point(584, 434);
			this->btnchargerbdd->Name = L"btnchargerbdd";
			this->btnchargerbdd->Size = System::Drawing::Size(125, 39);
			this->btnchargerbdd->TabIndex = 18;
			this->btnchargerbdd->Text = L"Charger BDD";
			this->btnchargerbdd->UseVisualStyleBackColor = true;
			this->btnchargerbdd->Click += gcnew System::EventHandler(this, &Dashboard::btnchargerbdd_Click);
			// 
			// btnSupprimer
			// 
			this->btnSupprimer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSupprimer.Image")));
			this->btnSupprimer->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSupprimer->Location = System::Drawing::Point(460, 338);
			this->btnSupprimer->Name = L"btnSupprimer";
			this->btnSupprimer->Size = System::Drawing::Size(126, 39);
			this->btnSupprimer->TabIndex = 13;
			this->btnSupprimer->Text = L"Supprimer";
			this->btnSupprimer->UseVisualStyleBackColor = true;
			this->btnSupprimer->Click += gcnew System::EventHandler(this, &Dashboard::button7_Click);
			// 
			// btnNouveau
			// 
			this->btnNouveau->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNouveau.Image")));
			this->btnNouveau->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNouveau->Location = System::Drawing::Point(156, 338);
			this->btnNouveau->Name = L"btnNouveau";
			this->btnNouveau->Size = System::Drawing::Size(127, 39);
			this->btnNouveau->TabIndex = 11;
			this->btnNouveau->Text = L"Nouveau";
			this->btnNouveau->UseVisualStyleBackColor = true;
			this->btnNouveau->Click += gcnew System::EventHandler(this, &Dashboard::btnNouveau_Click);
			// 
			// btnModifier
			// 
			this->btnModifier->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnModifier.Image")));
			this->btnModifier->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnModifier->Location = System::Drawing::Point(310, 338);
			this->btnModifier->Name = L"btnModifier";
			this->btnModifier->Size = System::Drawing::Size(121, 39);
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
			this->labelPersonnels->Location = System::Drawing::Point(10, 12);
			this->labelPersonnels->Name = L"labelPersonnels";
			this->labelPersonnels->Size = System::Drawing::Size(157, 32);
			this->labelPersonnels->TabIndex = 0;
			this->labelPersonnels->Text = L"Personnels";
			// 
			// panelMarketing
			// 
			this->panelMarketing->Controls->Add(this->labelMarketing);
			this->panelMarketing->Location = System::Drawing::Point(237, 394);
			this->panelMarketing->Name = L"panelMarketing";
			this->panelMarketing->Size = System::Drawing::Size(200, 100);
			this->panelMarketing->TabIndex = 6;
			this->panelMarketing->Visible = false;
			// 
			// labelMarketing
			// 
			this->labelMarketing->AutoSize = true;
			this->labelMarketing->Location = System::Drawing::Point(21, 14);
			this->labelMarketing->Name = L"labelMarketing";
			this->labelMarketing->Size = System::Drawing::Size(54, 13);
			this->labelMarketing->TabIndex = 0;
			this->labelMarketing->Text = L"Marketing";
			// 
			// panelSettings
			// 
			this->panelSettings->Controls->Add(this->labelSettings);
			this->panelSettings->Location = System::Drawing::Point(170, 230);
			this->panelSettings->Name = L"panelSettings";
			this->panelSettings->Size = System::Drawing::Size(200, 100);
			this->panelSettings->TabIndex = 7;
			this->panelSettings->Visible = false;
			// 
			// labelSettings
			// 
			this->labelSettings->AutoSize = true;
			this->labelSettings->Location = System::Drawing::Point(19, 15);
			this->labelSettings->Name = L"labelSettings";
			this->labelSettings->Size = System::Drawing::Size(45, 13);
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
			this->labelBienvenue->Location = System::Drawing::Point(703, 18);
			this->labelBienvenue->Name = L"labelBienvenue";
			this->labelBienvenue->Size = System::Drawing::Size(74, 17);
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
			this->labelAdmin->Location = System::Drawing::Point(778, 18);
			this->labelAdmin->Name = L"labelAdmin";
			this->labelAdmin->Size = System::Drawing::Size(46, 17);
			this->labelAdmin->TabIndex = 9;
			this->labelAdmin->Text = L"Admin";
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(886, 545);
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
			this->MaximumSize = System::Drawing::Size(902, 584);
			this->MinimumSize = System::Drawing::Size(902, 584);
			this->Name = L"Dashboard";
			this->Text = L"Mat�riel.Net - Accueil";
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
		button6->BackColor = Color::FromArgb(31, 30, 68);
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
			panelPersonnels->Visible = false;
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
			panelPersonnels->Visible = false;
			panelMarketing->Visible = false;
			panelSettings->Visible = false;
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
			panelPersonnels->Visible = false;
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
			panelPersonnels->Visible = false;
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
	}
};
}
