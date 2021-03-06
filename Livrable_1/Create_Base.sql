DROP DATABASE IF EXISTS projet ;
CREATE DATABASE projet;

USE projet;

DROP TABLE IF EXISTS Pays ;
CREATE TABLE Pays (
  ID_pays INT AUTO_INCREMENT NOT NULL,
  pays VARCHAR(20) NOT NULL,

  CONSTRAINT Pays_PK PRIMARY KEY (ID_pays)
) ENGINE=InnoDB;


DROP TABLE IF EXISTS Ville ;
CREATE TABLE Ville (
  ID_ville INT AUTO_INCREMENT NOT NULL,
  ville VARCHAR(20) NOT NULL,
  ID_pays INT NOT NULL,

  CONSTRAINT Ville_PK PRIMARY KEY (ID_ville),
  CONSTRAINT FK_ID_pays FOREIGN KEY (ID_pays) REFERENCES Pays (ID_pays)
) ENGINE=InnoDB;


DROP TABLE IF EXISTS Personnel ;
CREATE TABLE Personnel (
  ID_personnel INT AUTO_INCREMENT NOT NULL,
  nom VARCHAR(20) NOT NULL,
  prenom VARCHAR(20) NOT NULL,
  date_embauche DATE NOT NULL,
  ID_superieur INT,

  CONSTRAINT Personnel_PK PRIMARY KEY (ID_personnel),
  CONSTRAINT FK_ID_superieur FOREIGN KEY (ID_superieur) REFERENCES Personnel (ID_personnel)
) ENGINE=InnoDB;


DROP TABLE IF EXISTS Client ;
CREATE TABLE Client (
  ID_client INT AUTO_INCREMENT NOT NULL,
  nom VARCHAR(20) NOT NULL,
  prenom VARCHAR(20) NOT NULL,
  date_naissance DATE,
  date_premier_achat DATE,

  CONSTRAINT Client_PK PRIMARY KEY (ID_client)
) ENGINE=InnoDB;


DROP TABLE IF EXISTS Paiement ;
CREATE TABLE Paiement (
  ID_paiement INT AUTO_INCREMENT NOT NULL,
  moyen_paiement VARCHAR(20),

  CONSTRAINT Paiement_PK PRIMARY KEY (ID_paiement)
) ENGINE=InnoDB;


DROP TABLE IF EXISTS Commande ;
CREATE TABLE Commande (
  ID_commande INT AUTO_INCREMENT NOT NULL,
  reference VARCHAR(20) NOT NULL,
  prix INT NOT NULL,
  date_livraison_prevue DATE,
  date_emission DATE,
  date_paiement DATE,
  date_solde DATE,
  ID_client INT NOT NULL,
  ID_paiement INT NOT NULL,

  CONSTRAINT Commande_PK PRIMARY KEY (ID_commande),
  CONSTRAINT FK_ID_client FOREIGN KEY (ID_client) REFERENCES Client (ID_client),
  CONSTRAINT FK_ID_paiement FOREIGN KEY (ID_paiement) REFERENCES Paiement (ID_paiement)
) ENGINE=InnoDB;


DROP TABLE IF EXISTS Catalogue ;
CREATE TABLE Catalogue (
  ID_article INT AUTO_INCREMENT NOT NULL,
  nom VARCHAR(20) NOT NULL,
  reference VARCHAR(20) NOT NULL,
  prix_ht INT NOT NULL,
  taux_tva INT NOT NULL,
  stock INT NOT NULL,
  seuil_reapprovisionnement INT NOT NULL,
  actif BOOLEAN,

  CONSTRAINT Catalogue_PK PRIMARY KEY (ID_article)
) ENGINE=InnoDB;


DROP TABLE IF EXISTS Type_adresse ;
CREATE TABLE Type_adresse (
  ID_type_adresse INT AUTO_INCREMENT NOT NULL,
  type_adresse VARCHAR(20) NOT NULL,

  CONSTRAINT Type_adresse_PK PRIMARY KEY (ID_type_adresse)
) ENGINE=InnoDB;


DROP TABLE IF EXISTS Fournir ;
CREATE TABLE Fournir (
  quantite INT NOT NULL,
  ID_article INT NOT NULL,
  ID_commande INT NOT NULL,

  CONSTRAINT FK_ID_article FOREIGN KEY (ID_article) REFERENCES Catalogue (ID_article),
  CONSTRAINT FK_ID_commande FOREIGN KEY (ID_commande) REFERENCES Commande (ID_commande)
) ENGINE=InnoDB;


DROP TABLE IF EXISTS Adresse_personnel ;
CREATE TABLE Adresse_personnel (
  adresse_personnel VARCHAR(50),
  ID_personnel INT NOT NULL,
  ID_ville INT NOT NULL,

  CONSTRAINT FK_ID_adresse_personnel FOREIGN KEY (ID_personnel) REFERENCES Personnel (ID_personnel),
  CONSTRAINT FK_ID_ville_personnel FOREIGN KEY (ID_ville) REFERENCES Ville (ID_ville)
) ENGINE=InnoDB;


DROP TABLE IF EXISTS Adresse_client ;
CREATE TABLE Adresse_client (
  adresse_client VARCHAR(50),
  ID_client INT NOT NULL,
  ID_ville INT NOT NULL,
  ID_type_adresse INT NOT NULL,

  CONSTRAINT FK_ID_adresse_client FOREIGN KEY (ID_client) REFERENCES Client (ID_client),
  CONSTRAINT FK_ID_ville_client FOREIGN KEY (ID_ville) REFERENCES Ville (ID_ville),
  CONSTRAINT FK_ID_type_adresse FOREIGN KEY (ID_type_adresse) REFERENCES Type_adresse (ID_type_adresse)
) ENGINE=InnoDB;
