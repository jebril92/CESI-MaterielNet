/*------------------------------------------------------------
*        Script SQLSERVER 
------------------------------------------------------------*/


/*------------------------------------------------------------
-- Table: Commande
------------------------------------------------------------*/
CREATE TABLE Commande(
	id_commande      INT IDENTITY (1,1) NOT NULL ,
	montant_ht       FLOAT  NOT NULL ,
	montant_tva      INT  NOT NULL ,
	montant_ttc      FLOAT  NOT NULL ,
	remise           FLOAT  NOT NULL ,
	total_articles   INT  NOT NULL  ,
	CONSTRAINT Commande_PK PRIMARY KEY (id_commande)
);


/*------------------------------------------------------------
-- Table: Adresse
------------------------------------------------------------*/
CREATE TABLE Adresse(
	id_adresse      INT IDENTITY (1,1) NOT NULL ,
	ville           VARCHAR (30) NOT NULL ,
	numero_voie     INT  NOT NULL ,
	nom_rue         VARCHAR (30) NOT NULL ,
	nom_residence   VARCHAR (30) NOT NULL ,
	nom_batiment    VARCHAR (30) NOT NULL ,
	etage           INT  NOT NULL ,
	code_postal     INT  NOT NULL ,
	id_personne     INT  NOT NULL  ,
	CONSTRAINT Adresse_PK PRIMARY KEY (id_adresse)

	,CONSTRAINT Adresse_Personne_FK FOREIGN KEY (id_personne) REFERENCES Personne(id_personne)
);


/*------------------------------------------------------------
-- Table: Personne
------------------------------------------------------------*/
CREATE TABLE Personne(
	id_personne        INT IDENTITY (1,1) NOT NULL ,
	nom                VARCHAR (50) NOT NULL ,
	prenom             VARCHAR (50) NOT NULL ,
	numero_telephone   INT  NOT NULL ,
	adresse_mail       VARCHAR (50) NOT NULL ,
	Sexe               INT  NOT NULL ,
	id_date            INT  NOT NULL  ,
	CONSTRAINT Personne_PK PRIMARY KEY (id_personne)

	,CONSTRAINT Personne_Date_FK FOREIGN KEY (id_date) REFERENCES Date(id_date)
);


/*------------------------------------------------------------
-- Table: Personnel
------------------------------------------------------------*/
CREATE TABLE Personnel(
	id_personne        INT  NOT NULL ,
	id_personnel       INT  NOT NULL ,
	superieur          bit  NOT NULL ,
	nom                VARCHAR (50) NOT NULL ,
	prenom             VARCHAR (50) NOT NULL ,
	numero_telephone   INT  NOT NULL ,
	adresse_mail       VARCHAR (50) NOT NULL ,
	Sexe               INT  NOT NULL ,
	id_date            INT   ,
	id_date_Personne   INT  NOT NULL  ,
	CONSTRAINT Personnel_PK PRIMARY KEY (id_personne,id_personnel)

	,CONSTRAINT Personnel_Personne_FK FOREIGN KEY (id_personne) REFERENCES Personne(id_personne)
	,CONSTRAINT Personnel_Date0_FK FOREIGN KEY (id_date) REFERENCES Date(id_date)
	,CONSTRAINT Personnel_Date1_FK FOREIGN KEY (id_date_Personne) REFERENCES Date(id_date)
);


/*------------------------------------------------------------
-- Table: Client
------------------------------------------------------------*/
CREATE TABLE Client(
	id_personne        INT  NOT NULL ,
	id_client          INT  NOT NULL ,
	nom                VARCHAR (50) NOT NULL ,
	prenom             VARCHAR (50) NOT NULL ,
	numero_telephone   INT  NOT NULL ,
	adresse_mail       VARCHAR (50) NOT NULL ,
	Sexe               INT  NOT NULL ,
	id_date            INT  NOT NULL  ,
	CONSTRAINT Client_PK PRIMARY KEY (id_personne,id_client)

	,CONSTRAINT Client_Personne_FK FOREIGN KEY (id_personne) REFERENCES Personne(id_personne)
	,CONSTRAINT Client_Date0_FK FOREIGN KEY (id_date) REFERENCES Date(id_date)
);


/*------------------------------------------------------------
-- Table: Facture
------------------------------------------------------------*/
CREATE TABLE Facture(
	id_facture    INT IDENTITY (1,1) NOT NULL ,
	nom_societe   VARCHAR (20) NOT NULL ,
	num_sav       INT  NOT NULL ,
	logo          VARCHAR (40) NOT NULL ,
	id_personne   INT  NOT NULL ,
	id_client     INT  NOT NULL  ,
	CONSTRAINT Facture_PK PRIMARY KEY (id_facture)

	,CONSTRAINT Facture_Client_FK FOREIGN KEY (id_personne,id_client) REFERENCES Client(id_personne,id_client)
);


/*------------------------------------------------------------
-- Table: Date
------------------------------------------------------------*/
CREATE TABLE Date(
	id_date    INT IDENTITY (1,1) NOT NULL ,
	nom_date   DATETIME  NOT NULL ,
	id_type    INT    ,
	CONSTRAINT Date_PK PRIMARY KEY (id_date)

	,CONSTRAINT Date_Type_FK FOREIGN KEY (id_type) REFERENCES Type(id_type)
);


/*------------------------------------------------------------
-- Table: Paiement
------------------------------------------------------------*/
CREATE TABLE Paiement(
	id_paiement      INT IDENTITY (1,1) NOT NULL ,
	moyen_paiement   VARCHAR (10) NOT NULL ,
	id_personne      INT  NOT NULL ,
	id_client        INT  NOT NULL ,
	id_date          INT  NOT NULL ,
	id_commande      INT  NOT NULL  ,
	CONSTRAINT Paiement_PK PRIMARY KEY (id_paiement)

	,CONSTRAINT Paiement_Client_FK FOREIGN KEY (id_personne,id_client) REFERENCES Client(id_personne,id_client)
	,CONSTRAINT Paiement_Date0_FK FOREIGN KEY (id_date) REFERENCES Date(id_date)
	,CONSTRAINT Paiement_Commande1_FK FOREIGN KEY (id_commande) REFERENCES Commande(id_commande)
);


/*------------------------------------------------------------
-- Table: Catalogue
------------------------------------------------------------*/
CREATE TABLE Catalogue(
	id_catalogue   INT IDENTITY (1,1) NOT NULL ,
	prix_ttc       FLOAT  NOT NULL ,
	id_personne    INT  NOT NULL  ,
	CONSTRAINT Catalogue_PK PRIMARY KEY (id_catalogue)

	,CONSTRAINT Catalogue_Personne_FK FOREIGN KEY (id_personne) REFERENCES Personne(id_personne)
);


/*------------------------------------------------------------
-- Table: Article
------------------------------------------------------------*/
CREATE TABLE Article(
	id_catalogue      INT  NOT NULL ,
	id_article        INT  NOT NULL ,
	nombre_articles   INT  NOT NULL ,
	taux_tva          INT  NOT NULL ,
	prix_ht           FLOAT  NOT NULL ,
	prix_tva          FLOAT  NOT NULL ,
	prix_ttc          FLOAT  NOT NULL ,
	id_personne       INT  NOT NULL  ,
	CONSTRAINT Article_PK PRIMARY KEY (id_catalogue,id_article)

	,CONSTRAINT Article_Catalogue_FK FOREIGN KEY (id_catalogue) REFERENCES Catalogue(id_catalogue)
	,CONSTRAINT Article_Personne0_FK FOREIGN KEY (id_personne) REFERENCES Personne(id_personne)
);


/*------------------------------------------------------------
-- Table: Stock
------------------------------------------------------------*/
CREATE TABLE Stock(
	id_catalogue          INT  NOT NULL ,
	id_article            INT  NOT NULL ,
	id_stock              INT  NOT NULL ,
	nom_produit           VARCHAR (30) NOT NULL ,
	quantite_stock        INT  NOT NULL ,
	seuil_reapprovision   INT  NOT NULL ,
	prix_ttc              FLOAT  NOT NULL ,
	nombre_articles       INT  NOT NULL ,
	taux_tva              INT  NOT NULL ,
	prix_ht               FLOAT  NOT NULL ,
	prix_tva              FLOAT  NOT NULL ,
	id_personne           INT  NOT NULL  ,
	CONSTRAINT Stock_PK PRIMARY KEY (id_catalogue,id_article,id_stock)

	,CONSTRAINT Stock_Article_FK FOREIGN KEY (id_catalogue,id_article) REFERENCES Article(id_catalogue,id_article)
	,CONSTRAINT Stock_Personne0_FK FOREIGN KEY (id_personne) REFERENCES Personne(id_personne)
);


/*------------------------------------------------------------
-- Table: Type
------------------------------------------------------------*/
CREATE TABLE Type(
	id_type        INT IDENTITY (1,1) NOT NULL ,
	id_adresse     INT   ,
	id_catalogue   INT  NOT NULL ,
	id_article     INT  NOT NULL  ,
	CONSTRAINT Type_PK PRIMARY KEY (id_type)

	,CONSTRAINT Type_Adresse_FK FOREIGN KEY (id_adresse) REFERENCES Adresse(id_adresse)
	,CONSTRAINT Type_Article0_FK FOREIGN KEY (id_catalogue,id_article) REFERENCES Article(id_catalogue,id_article)
);


/*------------------------------------------------------------
-- Table: Avoir_type_date
------------------------------------------------------------*/
CREATE TABLE Avoir_type_date(
	id_date       INT  NOT NULL ,
	id_commande   INT  NOT NULL ,
	id_type       INT  NOT NULL  ,
	CONSTRAINT Avoir_type_date_PK PRIMARY KEY (id_date,id_commande,id_type)

	,CONSTRAINT Avoir_type_date_Date_FK FOREIGN KEY (id_date) REFERENCES Date(id_date)
	,CONSTRAINT Avoir_type_date_Commande0_FK FOREIGN KEY (id_commande) REFERENCES Commande(id_commande)
	,CONSTRAINT Avoir_type_date_Type1_FK FOREIGN KEY (id_type) REFERENCES Type(id_type)
);


/*------------------------------------------------------------
-- Table: Avoir_type_adresse
------------------------------------------------------------*/
CREATE TABLE Avoir_type_adresse(
	id_adresse    INT  NOT NULL ,
	id_facture    INT  NOT NULL ,
	id_personne   INT  NOT NULL ,
	id_client     INT  NOT NULL ,
	id_type       INT  NOT NULL  ,
	CONSTRAINT Avoir_type_adresse_PK PRIMARY KEY (id_adresse,id_facture,id_personne,id_client,id_type)

	,CONSTRAINT Avoir_type_adresse_Adresse_FK FOREIGN KEY (id_adresse) REFERENCES Adresse(id_adresse)
	,CONSTRAINT Avoir_type_adresse_Facture0_FK FOREIGN KEY (id_facture) REFERENCES Facture(id_facture)
	,CONSTRAINT Avoir_type_adresse_Client1_FK FOREIGN KEY (id_personne,id_client) REFERENCES Client(id_personne,id_client)
	,CONSTRAINT Avoir_type_adresse_Type2_FK FOREIGN KEY (id_type) REFERENCES Type(id_type)
);


/*------------------------------------------------------------
-- Table: Valider
------------------------------------------------------------*/
CREATE TABLE Valider(
	id_commande   INT  NOT NULL ,
	id_paiement   INT  NOT NULL  ,
	CONSTRAINT Valider_PK PRIMARY KEY (id_commande,id_paiement)

	,CONSTRAINT Valider_Commande_FK FOREIGN KEY (id_commande) REFERENCES Commande(id_commande)
	,CONSTRAINT Valider_Paiement0_FK FOREIGN KEY (id_paiement) REFERENCES Paiement(id_paiement)
);



