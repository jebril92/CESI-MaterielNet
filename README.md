<h1 align="center">Projet CESI - Materiel.Net</h1>

[Télécharger la dernière version](https://github.com/jebril92/CESI-MaterielNet/releases)

## Sommaire

-   [Présentation du projet](#Présentation)
    -   [Description](#Description)
    -   [Contributeurs](#Contributeurs)
    -   [Fonctionnalités](#Fonctionnalités)
    -   [Les langages et outils que nous avons utilisé](#Langages-et-Outils-utilisés)
-   [Guide d'utilisation](#Guide-dutilisation)
    -   [Accueil](#Accueil)
    -   [Affichage](#Affichage)
    -   [Création](#Création)
    -   [Suppression](#Suppression)
    -   [Modifier](#Modifier)
-   [Gestion des statistiques](#Statistiques)

## Présentation

### Description

**MaterielNet** est un logiciel de gestion de base de données pour une  entreprise. Cette dernière nous a contacté afin de concrétiser l'application, pour permettre à leurs employés de manipuler facilement les données de leurs clients, commandes...

Le logiciel a été programmé en **C++** et utilise **MySQL** (pour les requêtes de base de données) hebergé sur Microsoft Azure.

### Contributeurs

Ce projet est mené par:

-   [**Yanis ETHVIGNOT**](https://github.com/yaniswav)
-   [**Jebril Hocine**](https://github.com/jebril92)

### Fonctionnalités

**MaterielNet** permet à l'utilisateur de gérer:

-   **_Clients_**
    -   L'_employé_ pourra visualiser, créer, modifier et supprimer des **clients**
-   **_Personnel_**
    -   Le _manager_ pourra visualiser, créer, modifier et supprimer un membre du **personnel**
    -   Cette base est accessible **seulement** par des supérieurs hiérarchiques (_manager_)
-   **_Commandes_**
    -   L'_employé_ pourra visualiser, créer, modifier et supprimer des **commandes**
-   **_Stock_**
    -   L'_employé_ pourra visualiser, créer, modifier et supprimer des éléments du **stock**
-   **_Statistiques_**
    -   L'_employé_ pourra effectuer des commandes qui interrogeront la base de données
        -   Calculer le panier moyen
        -   Calculer le chiffre d'affaire sur un mois en particulier
        -   Identifier les produits sous le seuil de réapprovisionnement
        -   Calculer le montant total des achats pour un client
        -   Identifier les 10 articles les plus vendus
        -   Identifier les 10 articles les moins vendus
        -   Calculer la valeur commerciale du stock
        -   Calculer la valeur d'achat du stock
        -   Calculer la valeur commerciale du stock (avec variables)

### Langages et Outils utilisés

<a href="https://www.w3schools.com/cpp/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" alt="cplusplus" width="40" height="40"/></a>
<a href="https://www.mysql.com/fr/" target="_blank" rel="noreferrer"> <img src="https://www.svgrepo.com/show/355133/mysql.svg" alt="mssql" width="40" height="40"/></a>
<a href="https://visualstudio.microsoft.com/" target="_blank" rel="noreferrer"> <img src="https://www.svgrepo.com/show/354520/visual-studio.svg" alt="Visual Studio" width="40" height="40"/></a>

<a href=""></a>

## Guide d'utilisation

### Accueil

Pour utiliser cette application il faut tout simplement posséder une connection internet, et lancer le **fichier executable** de l'application qui arrivera sur la page d'accueil :

<p align="center"><img src="https://i.imgur.com/EO7INJu.png"></img></p>

Ensuite, il faudra selectionner une catégorie parmis celles ci-dessous :

<p align="center"><img src="https://i.imgur.com/sbKHMae.png"></img></p>

Ensuite vous pouvez choisir une action parmis les 4 boutons qui seront affichés à l'écran (**Afficher**, **Créer**, **Supprimer**, **Mettre à jour**)

---

### Affichage

Lorsqu'un employé clique sur le bouton **Afficher**, un tableau (_DataGridView_) apparait avec les données demandées.

##### Voici un exemple de page de gestion (les données sont générées aléatoirement) :

<p align="center"><img src="https://i.imgur.com/iu0q4rV.png"></img></p>

---

### Création

Lorsqu'un employé clique sur le bouton **Créer**, une nouvelle fenêtre s'ouvrira avec les entrées relatives à la catégorie sélectionnée.

##### Le formulaire d'insertion de Personnel :

<p align="center"><img src="https://i.imgur.com/hrjdEEU.png"></img></p>

##### Le formulaire d'insertion de Commande :

<p align="center"><img src="https://i.imgur.com/qhGGcZs.png"></img></p>

---

### Suppression

Lorsqu'un employé clique sur le bouton **Supprimer** après avoir sélectionné un ID dans l'affichage, le programme supprimera les données.

---

### Modifier

Lorsqu'un employé clique sur le bouton **Modifier** après avoir sélectionné un ID dans l'affichage, il pourra modifier l'ensemble de cette ligne. 


## Statistiques

Exemple des 10 articles les moins vendus.

<p align="center"><img src="https://i.imgur.com/cqVf6Of.png"></img></p>

Il existe comme ci-dessus plusieurs boutons permettant de visualiser l'ensemble des statistiques de la boutique. 
