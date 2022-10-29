CREATE TABLE employee(
    id_employee INTEGER PRIMARY KEY AUTOINCREMENT,
    nom VARCHAR(40) NOT NULL,
    prenom VARCHAR(70) NOT NULL,
    date_naissance DATE NOT NULL,
    sexe VARCHAR(1) NOT NULL,
    fonction VARCHAR(20),
    annee_embauche DATE
);

CREATE TABLE diplome(
    id_diplome INTEGER PRIMARY KEY AUTOINCREMENT,
    niveau VARCHAR(10) NOT NULL
);

CREATE TABLE avoir_dilplome(
    id_employee INT NOT NULL,
    id_diplome INT,
    FOREIGN KEY (id_employee) REFERENCES employee(id_employee),
    FOREIGN KEY (id_diplome) REFERENCES diplome (id_diplome)
);

CREATE TABLE formation_suivi(
    id_employee INT NOT NULL,
    id_formation INT NOT NULL,
    resultats VARCHAR(10),
    FOREIGN KEY (id_employee) REFERENCES employee(id_employee),
    FOREIGN KEY (id_formation) REFERENCES formation(code_formation)
); 

CREATE TABLE etudes(
    id_etudes INTEGER PRIMARY KEY AUTOINCREMENT,
    parcours VARCHAR(60)
);

CREATE TABLE formation(
    code_formation INTEGER PRIMARY KEY AUTOINCREMENT,
    formation VARCHAR(60),
    duree VARCHAR(7)
    
);

CREATE TABLE stage(
    code_stage INTEGER PRIMARY KEY AUTOINCREMENT,
    stage VARCHAR(60),
    duree VARCHAR(5)
);

CREATE TABLE offre_f(
    code_offre INTEGER PRIMARY KEY AUTOINCREMENT,
    id_formation INT NOT NULL,
    date_formation DATE,
    prerequis VARCHAR(20),
    FOREIGN KEY (id_formation) REFERENCES formation(code_formation)
);

CREATE TABLE offre_s(
    code_offre INTEGER PRIMARY KEY AUTOINCREMENT,
    code_stage INT NOT NULL,
    diplome_requis INT,
    FOREIGN KEY (code_stage) REFERENCES stage(code_stage),
    FOREIGN KEY (diplome_requis) REFERENCES diplome(id_diplome)
);




INSERT INTO employee(nom,prenom,date_naissance,sexe,fonction,annee_embauche)
VALUES
('SWIFT','Taylor','1980-05-14','F','secretaire','2004-01-05'),
('LINN','Rosa','1973-07-04','F','bibliothecaire','1995-06-14');

INSERT INTO diplome(niveau)
VALUES
('CEPE'),
('BEPC'),
('BACC'),
('LICENCE'),
('MASTER'),
('DOCTORAT');

INSERT INTO formation(formation,duree)
VALUES
('apprentissage de la langue anglaise','3 mois'),
('conception de base de donnee','5 jours');

INSERT INTO etudes(parcours)
VALUES
('droit'),
('economie'),
('biologie');
