#pragma once
#include "InterfacePersonnel.h"
#include "InterfaceProduit.h"
#include "InterfaceCommande.h"
#include "InterfaceClient.h"

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
	private: System::Windows::Forms::Panel^ panelCommandes;
	private: System::Windows::Forms::Label^ labelCommandes;


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
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::BindingSource^ bindingSource3;

	private: System::Windows::Forms::Button^ buttonValeurAchat;
	private: System::Windows::Forms::Button^ buttonValeurCommerciale;
	private: System::Windows::Forms::Button^ buttonPlusVendus;
	private: System::Windows::Forms::Button^ buttonArticlesMoins;
	private: System::Windows::Forms::Button^ buttonMontantTotal;
	private: System::Windows::Forms::Button^ buttonSousSeuil;
	private: System::Windows::Forms::Button^ buttonChiffreAffaire;
	private: System::Windows::Forms::Button^ buttonPanierMoyen;
private: System::Windows::Forms::DataGridView^ dataGridView5;
private: System::Windows::Forms::BindingSource^ bindingSource4;
private: System::Windows::Forms::DataGridView^ dataGridView6;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::BindingSource^ bindingSource5;


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
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->labelDashboard = (gcnew System::Windows::Forms::Label());
			this->panelProducts = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->labelProducts = (gcnew System::Windows::Forms::Label());
			this->panelOrders = (gcnew System::Windows::Forms::Panel());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->labelOrders = (gcnew System::Windows::Forms::Label());
			this->panelPersonnels = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnchargerbdd = (gcnew System::Windows::Forms::Button());
			this->btnSupprimer = (gcnew System::Windows::Forms::Button());
			this->btnNouveau = (gcnew System::Windows::Forms::Button());
			this->btnModifier = (gcnew System::Windows::Forms::Button());
			this->labelPersonnels = (gcnew System::Windows::Forms::Label());
			this->panelMarketing = (gcnew System::Windows::Forms::Panel());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->buttonValeurAchat = (gcnew System::Windows::Forms::Button());
			this->buttonValeurCommerciale = (gcnew System::Windows::Forms::Button());
			this->buttonPlusVendus = (gcnew System::Windows::Forms::Button());
			this->buttonArticlesMoins = (gcnew System::Windows::Forms::Button());
			this->buttonMontantTotal = (gcnew System::Windows::Forms::Button());
			this->buttonSousSeuil = (gcnew System::Windows::Forms::Button());
			this->buttonChiffreAffaire = (gcnew System::Windows::Forms::Button());
			this->buttonPanierMoyen = (gcnew System::Windows::Forms::Button());
			this->labelMarketing = (gcnew System::Windows::Forms::Label());
			this->panelCommandes = (gcnew System::Windows::Forms::Panel());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->labelCommandes = (gcnew System::Windows::Forms::Label());
			this->labelBienvenue = (gcnew System::Windows::Forms::Label());
			this->labelAdmin = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource3 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource4 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource5 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->panelMenu->SuspendLayout();
			this->panelLogo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHome))->BeginInit();
			this->panelDashboard->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->panelProducts->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panelOrders->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->panelPersonnels->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panelMarketing->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->panelCommandes->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource5))->BeginInit();
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
			this->panelMenu->Margin = System::Windows::Forms::Padding(2);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(165, 543);
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
			this->button2->Location = System::Drawing::Point(0, 163);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(8, 0, 15, 0);
			this->button2->Size = System::Drawing::Size(165, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Commandes";
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
			this->button1->Text = L"Clients";
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
			this->panelDashboard->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panelDashboard->Controls->Add(this->dataGridView6);
			this->panelDashboard->Controls->Add(this->button18);
			this->panelDashboard->Controls->Add(this->button19);
			this->panelDashboard->Controls->Add(this->button20);
			this->panelDashboard->Controls->Add(this->button21);
			this->panelDashboard->Controls->Add(this->labelDashboard);
			this->panelDashboard->ForeColor = System::Drawing::Color::Black;
			this->panelDashboard->Location = System::Drawing::Point(165, 62);
			this->panelDashboard->Name = L"panelDashboard";
			this->panelDashboard->Size = System::Drawing::Size(721, 485);
			this->panelDashboard->TabIndex = 2;
			this->panelDashboard->Visible = false;
			this->panelDashboard->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panelDashboard_Paint);
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(145, 65);
			this->dataGridView6->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersWidth = 51;
			this->dataGridView6->RowTemplate->Height = 24;
			this->dataGridView6->Size = System::Drawing::Size(440, 222);
			this->dataGridView6->TabIndex = 34;
			// 
			// button18
			// 
			this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.Image")));
			this->button18->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button18->Location = System::Drawing::Point(583, 425);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(125, 39);
			this->button18->TabIndex = 33;
			this->button18->Text = L"Charger BDD";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Dashboard::button18_Click);
			// 
			// button19
			// 
			this->button19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.Image")));
			this->button19->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button19->Location = System::Drawing::Point(458, 329);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(126, 39);
			this->button19->TabIndex = 32;
			this->button19->Text = L"Supprimer";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Dashboard::button19_Click);
			// 
			// button20
			// 
			this->button20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.Image")));
			this->button20->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button20->Location = System::Drawing::Point(154, 329);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(127, 39);
			this->button20->TabIndex = 31;
			this->button20->Text = L"Nouveau";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Dashboard::button20_Click);
			// 
			// button21
			// 
			this->button21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.Image")));
			this->button21->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button21->Location = System::Drawing::Point(308, 329);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(121, 39);
			this->button21->TabIndex = 30;
			this->button21->Text = L"   Modifier";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Dashboard::button21_Click);
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
			this->labelDashboard->Size = System::Drawing::Size(102, 32);
			this->labelDashboard->TabIndex = 0;
			this->labelDashboard->Text = L"Clients";
			// 
			// panelProducts
			// 
			this->panelProducts->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panelProducts->Controls->Add(this->dataGridView2);
			this->panelProducts->Controls->Add(this->button6);
			this->panelProducts->Controls->Add(this->button7);
			this->panelProducts->Controls->Add(this->button8);
			this->panelProducts->Controls->Add(this->button9);
			this->panelProducts->Controls->Add(this->labelProducts);
			this->panelProducts->Location = System::Drawing::Point(165, 62);
			this->panelProducts->Name = L"panelProducts";
			this->panelProducts->Size = System::Drawing::Size(721, 485);
			this->panelProducts->TabIndex = 4;
			this->panelProducts->Visible = false;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(146, 65);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(440, 222);
			this->dataGridView2->TabIndex = 24;
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(584, 425);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(125, 39);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Charger BDD";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Dashboard::button6_Click);
			// 
			// button7
			// 
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(460, 329);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(126, 39);
			this->button7->TabIndex = 22;
			this->button7->Text = L"Supprimer";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Dashboard::button7_Click_1);
			// 
			// button8
			// 
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->Location = System::Drawing::Point(156, 329);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(127, 39);
			this->button8->TabIndex = 21;
			this->button8->Text = L"Nouveau";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Dashboard::button8_Click);
			// 
			// button9
			// 
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->Location = System::Drawing::Point(310, 329);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(121, 39);
			this->button9->TabIndex = 20;
			this->button9->Text = L"   Modifier";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Dashboard::button9_Click);
			// 
			// labelProducts
			// 
			this->labelProducts->AutoSize = true;
			this->labelProducts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
			this->labelProducts->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->labelProducts->Location = System::Drawing::Point(16, 12);
			this->labelProducts->Name = L"labelProducts";
			this->labelProducts->Size = System::Drawing::Size(119, 32);
			this->labelProducts->TabIndex = 0;
			this->labelProducts->Text = L"Produits";
			// 
			// panelOrders
			// 
			this->panelOrders->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panelOrders->Controls->Add(this->dataGridView4);
			this->panelOrders->Controls->Add(this->button14);
			this->panelOrders->Controls->Add(this->button15);
			this->panelOrders->Controls->Add(this->button16);
			this->panelOrders->Controls->Add(this->button17);
			this->panelOrders->Controls->Add(this->labelOrders);
			this->panelOrders->ForeColor = System::Drawing::Color::Black;
			this->panelOrders->Location = System::Drawing::Point(165, 62);
			this->panelOrders->Name = L"panelOrders";
			this->panelOrders->Size = System::Drawing::Size(721, 485);
			this->panelOrders->TabIndex = 3;
			this->panelOrders->Visible = false;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(146, 65);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(440, 222);
			this->dataGridView4->TabIndex = 29;
			this->dataGridView4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Dashboard::dataGridView4_CellContentClick);
			// 
			// button14
			// 
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button14->Location = System::Drawing::Point(584, 425);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(125, 39);
			this->button14->TabIndex = 28;
			this->button14->Text = L"Charger BDD";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Dashboard::button14_Click);
			// 
			// button15
			// 
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button15->Location = System::Drawing::Point(459, 329);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(126, 39);
			this->button15->TabIndex = 27;
			this->button15->Text = L"Supprimer";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Dashboard::button15_Click);
			// 
			// button16
			// 
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button16->Location = System::Drawing::Point(155, 329);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(127, 39);
			this->button16->TabIndex = 26;
			this->button16->Text = L"Nouveau";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Dashboard::button16_Click);
			// 
			// button17
			// 
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
			this->button17->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button17->Location = System::Drawing::Point(309, 329);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(121, 39);
			this->button17->TabIndex = 25;
			this->button17->Text = L"   Modifier";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Dashboard::button17_Click);
			// 
			// labelOrders
			// 
			this->labelOrders->AutoSize = true;
			this->labelOrders->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
			this->labelOrders->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->labelOrders->Location = System::Drawing::Point(14, 18);
			this->labelOrders->Name = L"labelOrders";
			this->labelOrders->Size = System::Drawing::Size(174, 32);
			this->labelOrders->TabIndex = 0;
			this->labelOrders->Text = L"Commandes";
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
			this->panelMarketing->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panelMarketing->Controls->Add(this->dataGridView5);
			this->panelMarketing->Controls->Add(this->buttonValeurAchat);
			this->panelMarketing->Controls->Add(this->buttonValeurCommerciale);
			this->panelMarketing->Controls->Add(this->buttonPlusVendus);
			this->panelMarketing->Controls->Add(this->buttonArticlesMoins);
			this->panelMarketing->Controls->Add(this->buttonMontantTotal);
			this->panelMarketing->Controls->Add(this->buttonSousSeuil);
			this->panelMarketing->Controls->Add(this->buttonChiffreAffaire);
			this->panelMarketing->Controls->Add(this->buttonPanierMoyen);
			this->panelMarketing->Controls->Add(this->labelMarketing);
			this->panelMarketing->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panelMarketing->Location = System::Drawing::Point(165, 62);
			this->panelMarketing->Name = L"panelMarketing";
			this->panelMarketing->Size = System::Drawing::Size(721, 485);
			this->panelMarketing->TabIndex = 6;
			this->panelMarketing->Visible = false;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(405, 81);
			this->dataGridView5->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(292, 338);
			this->dataGridView5->TabIndex = 9;
			// 
			// buttonValeurAchat
			// 
			this->buttonValeurAchat->Location = System::Drawing::Point(168, 132);
			this->buttonValeurAchat->Margin = System::Windows::Forms::Padding(2);
			this->buttonValeurAchat->Name = L"buttonValeurAchat";
			this->buttonValeurAchat->Size = System::Drawing::Size(137, 29);
			this->buttonValeurAchat->TabIndex = 8;
			this->buttonValeurAchat->Text = L"Valeur Achat Stock";
			this->buttonValeurAchat->UseVisualStyleBackColor = true;
			this->buttonValeurAchat->Click += gcnew System::EventHandler(this, &Dashboard::buttonValeurAchat_Click);
			// 
			// buttonValeurCommerciale
			// 
			this->buttonValeurCommerciale->Location = System::Drawing::Point(168, 81);
			this->buttonValeurCommerciale->Margin = System::Windows::Forms::Padding(2);
			this->buttonValeurCommerciale->Name = L"buttonValeurCommerciale";
			this->buttonValeurCommerciale->Size = System::Drawing::Size(137, 29);
			this->buttonValeurCommerciale->TabIndex = 7;
			this->buttonValeurCommerciale->Text = L"Valeur Commerciale Stock";
			this->buttonValeurCommerciale->UseVisualStyleBackColor = true;
			this->buttonValeurCommerciale->Click += gcnew System::EventHandler(this, &Dashboard::buttonValeurCommerciale_Click);
			// 
			// buttonPlusVendus
			// 
			this->buttonPlusVendus->Location = System::Drawing::Point(26, 370);
			this->buttonPlusVendus->Margin = System::Windows::Forms::Padding(2);
			this->buttonPlusVendus->Name = L"buttonPlusVendus";
			this->buttonPlusVendus->Size = System::Drawing::Size(115, 29);
			this->buttonPlusVendus->TabIndex = 6;
			this->buttonPlusVendus->Text = L"Les Plus Vendus";
			this->buttonPlusVendus->UseVisualStyleBackColor = true;
			this->buttonPlusVendus->Click += gcnew System::EventHandler(this, &Dashboard::buttonPlusVendus_Click);
			// 
			// buttonArticlesMoins
			// 
			this->buttonArticlesMoins->Location = System::Drawing::Point(26, 310);
			this->buttonArticlesMoins->Margin = System::Windows::Forms::Padding(2);
			this->buttonArticlesMoins->Name = L"buttonArticlesMoins";
			this->buttonArticlesMoins->Size = System::Drawing::Size(115, 29);
			this->buttonArticlesMoins->TabIndex = 5;
			this->buttonArticlesMoins->Text = L"Les Moins Vendus";
			this->buttonArticlesMoins->UseVisualStyleBackColor = true;
			this->buttonArticlesMoins->Click += gcnew System::EventHandler(this, &Dashboard::buttonArticlesMoins_Click);
			// 
			// buttonMontantTotal
			// 
			this->buttonMontantTotal->Location = System::Drawing::Point(26, 247);
			this->buttonMontantTotal->Margin = System::Windows::Forms::Padding(2);
			this->buttonMontantTotal->Name = L"buttonMontantTotal";
			this->buttonMontantTotal->Size = System::Drawing::Size(115, 29);
			this->buttonMontantTotal->TabIndex = 4;
			this->buttonMontantTotal->Text = L"Montant Total (Client)";
			this->buttonMontantTotal->UseVisualStyleBackColor = true;
			this->buttonMontantTotal->Click += gcnew System::EventHandler(this, &Dashboard::buttonMontantTotal_Click);
			// 
			// buttonSousSeuil
			// 
			this->buttonSousSeuil->Location = System::Drawing::Point(26, 188);
			this->buttonSousSeuil->Margin = System::Windows::Forms::Padding(2);
			this->buttonSousSeuil->Name = L"buttonSousSeuil";
			this->buttonSousSeuil->Size = System::Drawing::Size(115, 29);
			this->buttonSousSeuil->TabIndex = 3;
			this->buttonSousSeuil->Text = L"Produit sous Seuil";
			this->buttonSousSeuil->UseVisualStyleBackColor = true;
			this->buttonSousSeuil->Click += gcnew System::EventHandler(this, &Dashboard::buttonSousSeuil_Click);
			// 
			// buttonChiffreAffaire
			// 
			this->buttonChiffreAffaire->Location = System::Drawing::Point(26, 132);
			this->buttonChiffreAffaire->Margin = System::Windows::Forms::Padding(2);
			this->buttonChiffreAffaire->Name = L"buttonChiffreAffaire";
			this->buttonChiffreAffaire->Size = System::Drawing::Size(115, 29);
			this->buttonChiffreAffaire->TabIndex = 2;
			this->buttonChiffreAffaire->Text = L"Chiffre d\'affaire ";
			this->buttonChiffreAffaire->UseVisualStyleBackColor = true;
			this->buttonChiffreAffaire->Click += gcnew System::EventHandler(this, &Dashboard::buttonChiffreAffaire_Click);
			// 
			// buttonPanierMoyen
			// 
			this->buttonPanierMoyen->Location = System::Drawing::Point(26, 81);
			this->buttonPanierMoyen->Margin = System::Windows::Forms::Padding(2);
			this->buttonPanierMoyen->Name = L"buttonPanierMoyen";
			this->buttonPanierMoyen->Size = System::Drawing::Size(115, 29);
			this->buttonPanierMoyen->TabIndex = 1;
			this->buttonPanierMoyen->Text = L"Panier Moyen";
			this->buttonPanierMoyen->UseVisualStyleBackColor = true;
			this->buttonPanierMoyen->Click += gcnew System::EventHandler(this, &Dashboard::buttonPanierMoyen_Click);
			// 
			// labelMarketing
			// 
			this->labelMarketing->AutoSize = true;
			this->labelMarketing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
			this->labelMarketing->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->labelMarketing->Location = System::Drawing::Point(21, 14);
			this->labelMarketing->Name = L"labelMarketing";
			this->labelMarketing->Size = System::Drawing::Size(139, 32);
			this->labelMarketing->TabIndex = 0;
			this->labelMarketing->Text = L"Marketing";
			// 
			// panelCommandes
			// 
			this->panelCommandes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panelCommandes->Controls->Add(this->dataGridView3);
			this->panelCommandes->Controls->Add(this->button10);
			this->panelCommandes->Controls->Add(this->button11);
			this->panelCommandes->Controls->Add(this->button12);
			this->panelCommandes->Controls->Add(this->button13);
			this->panelCommandes->Controls->Add(this->labelCommandes);
			this->panelCommandes->Location = System::Drawing::Point(165, 62);
			this->panelCommandes->Name = L"panelCommandes";
			this->panelCommandes->Size = System::Drawing::Size(721, 485);
			this->panelCommandes->TabIndex = 7;
			this->panelCommandes->Visible = false;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(146, 65);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(440, 222);
			this->dataGridView3->TabIndex = 29;
			// 
			// button10
			// 
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->Location = System::Drawing::Point(584, 425);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(125, 39);
			this->button10->TabIndex = 28;
			this->button10->Text = L"Charger BDD";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button11->Location = System::Drawing::Point(460, 329);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(126, 39);
			this->button11->TabIndex = 27;
			this->button11->Text = L"Supprimer";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button12->Location = System::Drawing::Point(156, 329);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(127, 39);
			this->button12->TabIndex = 26;
			this->button12->Text = L"Nouveau";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button13->Location = System::Drawing::Point(310, 329);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(121, 39);
			this->button13->TabIndex = 25;
			this->button13->Text = L"   Modifier";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// labelCommandes
			// 
			this->labelCommandes->AutoSize = true;
			this->labelCommandes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->labelCommandes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
			this->labelCommandes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->labelCommandes->Location = System::Drawing::Point(10, 12);
			this->labelCommandes->Name = L"labelCommandes";
			this->labelCommandes->Size = System::Drawing::Size(174, 32);
			this->labelCommandes->TabIndex = 0;
			this->labelCommandes->Text = L"Commandes";
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
			this->ClientSize = System::Drawing::Size(886, 543);
			this->Controls->Add(this->labelBienvenue);
			this->Controls->Add(this->labelAdmin);
			this->Controls->Add(this->panelTitleBar);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->panelDashboard);
			this->Controls->Add(this->panelMarketing);
			this->Controls->Add(this->panelOrders);
			this->Controls->Add(this->panelCommandes);
			this->Controls->Add(this->panelPersonnels);
			this->Controls->Add(this->panelProducts);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(902, 582);
			this->MinimumSize = System::Drawing::Size(902, 582);
			this->Name = L"Dashboard";
			this->Text = L"Matériel.Net - Accueil";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->panelMenu->ResumeLayout(false);
			this->panelLogo->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHome))->EndInit();
			this->panelDashboard->ResumeLayout(false);
			this->panelDashboard->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->panelProducts->ResumeLayout(false);
			this->panelProducts->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panelOrders->ResumeLayout(false);
			this->panelOrders->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->panelPersonnels->ResumeLayout(false);
			this->panelPersonnels->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panelMarketing->ResumeLayout(false);
			this->panelMarketing->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->panelCommandes->ResumeLayout(false);
			this->panelCommandes->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource5))->EndInit();
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

		chargerCommandes();

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

		chargerProduit();
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
		chargerPersonnel();

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

		//////////
		//////////// BUTTONS PERSONNEL
		//////////
	}

	private: System::Void chargerPersonnel() {

		String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from personnel", con);
		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);
		bindingSource1->DataSource = dt;
		dataGridView1->DataSource = bindingSource1;

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

		chargerPersonnel();

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
		chargerPersonnel();
	}

		   // MODIFIER PERSONNEL
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

		MySqlCommand^ cmd = gcnew MySqlCommand("update projet.personnel set superieur = '" + superieur + "', nom = '" + nom + "', prenom = '" + prenom + "', numero_telephone = '" + numero_telephone + "', adresse_mail = '" + adresse_mail + "', sexe = '" + sexe + "', date_embauche = '" + date_embauche + "', pays = '" + pays + "', ville = '" + ville + "', codepostal = '" + codepostal + "', n_rue = '" + n_rue + "', rue = '" + rue + "', etage = '" + etage + "', Residence = '" + Residence + "' where id_personnel = '" + selected_eid + "'", con);
		cmd->ExecuteReader();
		con->Close();

		chargerPersonnel();

	}

		   //////////
		   //////////// BUTTONS PRODUITS
		   //////////



	private: System::Void chargerProduit() {

		String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from article", con);
		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);
		bindingSource2->DataSource = dt;
		dataGridView2->DataSource = bindingSource2;
	}

		   // NOUVEAU PRODUIT
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		InterfaceProduit^ frm4 = gcnew InterfaceProduit;
		frm4->Show();
		chargerProduit();
	}

		   // MODIFIER PRODUIT
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		con->Open();

		// Selection de chaque ligne dans la base de données 
		String^ id_article = dataGridView2->CurrentRow->Cells["id_article"]->Value->ToString();
		String^ type_article = dataGridView2->CurrentRow->Cells["type_article"]->Value->ToString();
		String^ nombre_articles = dataGridView2->CurrentRow->Cells["nombre_articles"]->Value->ToString();
		String^ taux_tva = dataGridView2->CurrentRow->Cells["taux_tva"]->Value->ToString();
		String^ prix_ht = dataGridView2->CurrentRow->Cells["prix_ht"]->Value->ToString();
		String^ prix_tva = dataGridView2->CurrentRow->Cells["prix_tva"]->Value->ToString();
		String^ quantite_dispo = dataGridView2->CurrentRow->Cells["quantite_dispo"]->Value->ToString();

		MySqlCommand^ cmd = gcnew MySqlCommand("update projet.article set type_article = '" + type_article + "', nombre_articles = '" + nombre_articles + "', taux_tva = '" + taux_tva + "', prix_ht = '" + prix_ht + "', prix_tva = '" + prix_tva + "', quantite_dispo = '" + quantite_dispo + "' where id_article = '" + id_article + "'", con);
		cmd->ExecuteReader();
		con->Close();

		chargerProduit();

	}


		   // SUPPRIMER PRODUIT
	private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {

		String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		con->Open();
		String^ id_article = dataGridView2->CurrentRow->Cells["id_article"]->Value->ToString(); // R�cup�re l'Id de la personnes sur la ligne selectionn�e.
		MySqlCommand^ cmd = gcnew MySqlCommand("delete from projet.article where id_article = '" + id_article + "'", con); // Prend l'id correspondant et supprime la ligne selectionn�e.
		cmd->ExecuteReader();
		con->Close();

		chargerProduit();
	}

		   // CHARGER PRODUIT
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		chargerProduit();
	}
	private: System::Void panelDashboard_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
		   //COMMANDES


	private: System::Void chargerCommandes() {
		String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select id_commande,nom2,prenom2,Produit,Prix from commande", con);
		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);
		bindingSource3->DataSource = dt;
		dataGridView4->DataSource = bindingSource3;
	}

		   // CHARGER COMMANDES
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		chargerCommandes();
	}

		   // SUPPRIMER UNE COMMANDE
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		con->Open();
		String^ id_commande = dataGridView4->CurrentRow->Cells["id_commande"]->Value->ToString(); // R�cup�re l'Id de la personnes sur la ligne selectionn�e.
		MySqlCommand^ cmd = gcnew MySqlCommand("delete from projet.commande where id_commande = '" + id_commande + "'", con); // Prend l'id correspondant et supprime la ligne selectionn�e.
		cmd->ExecuteReader();
		con->Close();

		chargerCommandes();


	}

		   // MODIFIER UNE COMMANDE
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		con->Open();

		// Selection de chaque ligne dans la base de données 
		String^ id_commande = dataGridView4->CurrentRow->Cells["id_commande"]->Value->ToString();
		String^ nom2 = dataGridView4->CurrentRow->Cells["nom2"]->Value->ToString();
		String^ prenom2 = dataGridView4->CurrentRow->Cells["prenom2"]->Value->ToString();
		String^ Produit = dataGridView4->CurrentRow->Cells["Produit"]->Value->ToString();
		String^ Prix = dataGridView4->CurrentRow->Cells["Prix"]->Value->ToString();

		MySqlCommand^ cmd = gcnew MySqlCommand("update projet.commande set nom2 = '" + nom2 + "', prenom2 = '" + prenom2 + "', Produit = '" + Produit + "', Prix = '" + Prix + "' where id_commande = '" + id_commande + "'", con);
		cmd->ExecuteReader();
		con->Close();

		chargerCommandes();

	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		InterfaceCommande^ form5 = gcnew InterfaceCommande();
		form5->Show();

	}
	private: System::Void dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}


	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	}
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void buttonPanierMoyen_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select AVG(Prix) from commande", con);
		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);
		bindingSource4->DataSource = dt;
		dataGridView5->DataSource = bindingSource4;
	}
private: System::Void buttonChiffreAffaire_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonSousSeuil_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT id_article, quantite_dispo, type_article, seuil FROM article WHERE quantite_dispo < seuil;", con);
	DataTable^ dt = gcnew DataTable();
	sda->Fill(dt);
	bindingSource4->DataSource = dt;
	dataGridView5->DataSource = bindingSource4;
}
private: System::Void buttonMontantTotal_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT id_client, nom, prenom, sum(Prix) as montant_total FROM clients,commande where clients.id_client = commande.id_commande GROUP BY id_client;", con);
	DataTable^ dt = gcnew DataTable();
	sda->Fill(dt);
	bindingSource4->DataSource = dt;
	dataGridView5->DataSource = bindingSource4;
	
}
private: System::Void buttonArticlesMoins_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select article.type_article, count(article.type_article) AS nombre_commande from facture INNER JOIN article ON facture.id_article = article.id_article GROUP BY article.id_article ORDER BY count(*) ASC LIMIT 10 ;", con);
	DataTable^ dt = gcnew DataTable();
	sda->Fill(dt);
	bindingSource4->DataSource = dt;
	dataGridView5->DataSource = bindingSource4;

}
private: System::Void buttonPlusVendus_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("	select article.type_article, count(article.type_article) AS nombre_commande from facture INNER JOIN article ON facture.id_article = article.id_article GROUP BY article.id_article ORDER BY count(*) DESC LIMIT 10;", con);
	DataTable^ dt = gcnew DataTable();
	sda->Fill(dt);
	bindingSource4->DataSource = dt;
	dataGridView5->DataSource = bindingSource4;
}
private: System::Void buttonValeurCommerciale_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT SUM(prix_ht + prix_tva) AS Valeur_Commerciale_Stock FROM article;", con);
	DataTable^ dt = gcnew DataTable();
	sda->Fill(dt);
	bindingSource4->DataSource = dt;
	dataGridView5->DataSource = bindingSource4;
}
private: System::Void buttonValeurAchat_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT SUM(val_achat) FROM article", con);
	DataTable^ dt = gcnew DataTable();
	sda->Fill(dt);
	bindingSource4->DataSource = dt;
	dataGridView5->DataSource = bindingSource4;
}
	
// CHARGER CLIENT
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from clients", con);
	DataTable^ dt = gcnew DataTable();
	sda->Fill(dt);
	bindingSource5->DataSource = dt;
	dataGridView6->DataSource = bindingSource5;
}
	
// SUPPRIMER CLIENT
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	con->Open();
	String^ prenom = dataGridView6->CurrentRow->Cells["prenom"]->Value->ToString(); // R�cup�re l'Id de la personnes sur la ligne selectionn�e.
	MySqlCommand^ cmd = gcnew MySqlCommand("delete  from projet.clients where prenom = '" + prenom + "'", con); // Prend l'id correspondant et supprime la ligne selectionn�e.
	cmd->ExecuteReader();
	con->Close();
	
}

// MODIFIER CLIENT
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=cesi-sql.mysql.database.azure.com;Database=projet;Uid=admin13@cesi-sql;Pwd=test123$;Convert Zero Datetime=True;";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	con->Open();

	// Selection de chaque ligne dans la base de données 
	String^ id_client = dataGridView6->CurrentRow->Cells["id_client"]->Value->ToString();
	String^ nom = dataGridView6->CurrentRow->Cells["nom"]->Value->ToString();
	String^ prenom = dataGridView6->CurrentRow->Cells["prenom"]->Value->ToString();
	String^ numero_telephone = dataGridView6->CurrentRow->Cells["numero_telephone"]->Value->ToString();
	String^ adresse_mail = dataGridView6->CurrentRow->Cells["adresse_mail"]->Value->ToString();
	String^ sexe = dataGridView6->CurrentRow->Cells["sexe"]->Value->ToString();
	String^ pays = dataGridView6->CurrentRow->Cells["pays"]->Value->ToString();
	String^ ville = dataGridView6->CurrentRow->Cells["ville"]->Value->ToString();
	String^ codepostal = dataGridView6->CurrentRow->Cells["codepostal"]->Value->ToString();
	String^ n_rue = dataGridView6->CurrentRow->Cells["n_rue"]->Value->ToString();
	String^ rue = dataGridView6->CurrentRow->Cells["rue"]->Value->ToString();
	String^ etage = dataGridView6->CurrentRow->Cells["etage"]->Value->ToString();
	String^ Residence = dataGridView6->CurrentRow->Cells["Residence"]->Value->ToString();

	MySqlCommand^ cmd = gcnew MySqlCommand("update projet.clients set nom = '" + nom + "', prenom = '" + prenom + "', numero_telephone = '" + numero_telephone + "', adresse_mail = '" + adresse_mail + "', sexe = '" + sexe + "', pays = '" + pays + "',ville = '" + ville + "', codepostal= '" + codepostal + "',n_rue ='" + n_rue + "',rue = '" + rue + "', etage = '" + etage + "', Residence ='" + Residence + " where id_client = '" + id_client + "'", con);
	cmd->ExecuteReader();
	con->Close();
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	InterfaceClient^ form6 = gcnew InterfaceClient();
	form6->Show();
}
};
};
