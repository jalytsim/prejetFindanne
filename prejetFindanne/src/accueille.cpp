#include "headers/accueille.h"
#include "ui_accueille.h"

//whart et idealy mila ataonareo le sql fa tsy haiko le mlalao anle tablennareo
//efa reo ambany reo le fanaovana azy fa uste le code sql sisa no kitihina

//ayy de tsanta manatsara anle interface fa efa afaka afenina le eo ambony
//le nom anle bouton fotsiny aza ovaina

Accueille::Accueille(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Accueille)
{
    ui->setupUi(this);
    ouverture_data();

     afficheroffreDeFormation();
     afficheroffreDeStage();
     afficheroffreDeEtude();
     afficherEtude();
     afficherStage();
     afficherFormation();

    fermeture_data();
}

Accueille::~Accueille()
{
    delete ui;
}

//---------------OUVERTURE DE LA BASE DE DONNE----------------------------------------------------
//-------------------------------------------------------------------------------------------
//------------------------------------zany ary ny maziii-------------------------------------------------------
//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------


bool Accueille::ouverture_data()
{
    m_data=QSqlDatabase::addDatabase("QSQLITE");
    m_data.setDatabaseName(".projet.db");
    if(m_data.open())
    {
        qDebug()<<"Connection reusie";
        return true;
    }
    else
    {
        qDebug()<<"Connection echoue";
        return false;
    }
}
void Accueille::fermeture_data()
{
    m_data.close();
}

//*****affichage offre******//

//********************************************************************//

//****************************ato no mila an'i idealy na whart***************************************//

void Accueille::afficheroffreDeStage(){

    QSqlQuery a; int ligne(0);

    //ito aloha tsy de hoe kitihina be arakarakle donne aseho io
    a.exec("select count(*) from employee");
    while(a.next()){
        ligne= a.value(0).toInt();
    }
    modele = new QStandardItemModel(ligne,3);
    int row(0);
    //eto no mila amboarina satria le offre de stage mbola tsy vitako
    a.prepare("select stage,duree from stage");
    if(a.exec()){
        qDebug() << "print personn success!!";
    }
    else
    {
            qDebug() << "print personn failed" << a.lastError();

    }
    while(a.next()){
        for(int i=0;i<6;i++) {
            QStandardItem *item= new QStandardItem(a.value(i).toString());
            modele->setItem(row,i,item);
        }
        row++;
    }
    modele->setHeaderData(0,Qt::Horizontal,"Stage");
    modele->setHeaderData(1,Qt::Horizontal,"duree");
    modele->setHeaderData(2,Qt::Horizontal,"diplome requis");

    ui->stageO->setModel(modele);
}

void Accueille::afficheroffreDeFormation(){

    QSqlQuery a; int ligne(0);
    a.exec("select count(*) from employee");
    while(a.next()){
        ligne= a.value(0).toInt();
    }
    modele = new QStandardItemModel(ligne,3);
    int row(0);
    a.prepare("select stage,duree from stage");
    if(a.exec()){
        qDebug() << "print formation success!!";
    }
    else
    {
            qDebug() << "print formation failed" << a.lastError();

    }
    while(a.next()){
        for(int i=0;i<3;i++) {
            QStandardItem *item= new QStandardItem(a.value(i).toString());
            modele->setItem(row,i,item);
        }
        row++;
    }
    modele->setHeaderData(0,Qt::Horizontal,"formation");
    modele->setHeaderData(1,Qt::Horizontal,"duree");
    modele->setHeaderData(2,Qt::Horizontal,"diplome requis");

    ui->formationO->setModel(modele);
}

void Accueille::afficheroffreDeEtude(){

    QSqlQuery a; int ligne(0);
    a.exec("select count(*) from employee");
    while(a.next()){
        ligne= a.value(0).toInt();
    }
    modele = new QStandardItemModel(ligne,3);
    int row(0);
    a.prepare("select stage,duree from stage");
    if(a.exec()){
        qDebug() << "print formation success!!";
    }
    else
    {
            qDebug() << "print formation failed" << a.lastError();

    }
    while(a.next()){
        for(int i=0;i<3;i++) {
            QStandardItem *item= new QStandardItem(a.value(i).toString());
            modele->setItem(row,i,item);
        }
        row++;
    }
    modele->setHeaderData(0,Qt::Horizontal,"Etude");
    modele->setHeaderData(1,Qt::Horizontal,"duree");
    modele->setHeaderData(2,Qt::Horizontal,"diplome requis");

    ui->etude0->setModel(modele);
}

void Accueille::afficherStage(){

    QSqlQuery a; int ligne(0);

    //ito aloha tsy de hoe kitihina be arakarakle donne aseho io
    a.exec("select count(*) from employee");
    while(a.next()){
        ligne= a.value(0).toInt();
    }
    modele = new QStandardItemModel(ligne,3);
    int row(0);
    //eto no mila amboarina satria le offre de stage mbola tsy vitako
    a.prepare("select stage,duree from stage");
    if(a.exec()){
        qDebug() << "print personn success!!";
    }
    else
    {
            qDebug() << "print personn failed" << a.lastError();

    }
    while(a.next()){
        for(int i=0;i<6;i++) {
            QStandardItem *item= new QStandardItem(a.value(i).toString());
            modele->setItem(row,i,item);
        }
        row++;
    }
    modele->setHeaderData(0,Qt::Horizontal,"Stage");
    modele->setHeaderData(1,Qt::Horizontal,"duree");
    modele->setHeaderData(2,Qt::Horizontal,"diplome requis");

    ui->stageE->setModel(modele);
}

void Accueille::afficherFormation(){

    QSqlQuery a; int ligne(0);
    a.exec("select count(*) from employee");
    while(a.next()){
        ligne= a.value(0).toInt();
    }
    modele = new QStandardItemModel(ligne,3);
    int row(0);
    a.prepare("select stage,duree from stage");
    if(a.exec()){
        qDebug() << "print formation success!!";
    }
    else
    {
            qDebug() << "print formation failed" << a.lastError();

    }
    while(a.next()){
        for(int i=0;i<3;i++) {
            QStandardItem *item= new QStandardItem(a.value(i).toString());
            modele->setItem(row,i,item);
        }
        row++;
    }
    modele->setHeaderData(0,Qt::Horizontal,"formation");
    modele->setHeaderData(1,Qt::Horizontal,"duree");
    modele->setHeaderData(2,Qt::Horizontal,"diplome requis");

    ui->formationE->setModel(modele);
}

void Accueille::afficherEtude(){

    QSqlQuery a; int ligne(0);
    a.exec("select count(*) from employee");
    while(a.next()){
        ligne= a.value(0).toInt();
    }
    modele = new QStandardItemModel(ligne,3);
    int row(0);
    a.prepare("select stage,duree from stage");
    if(a.exec()){
        qDebug() << "print formation success!!";
    }
    else
    {
            qDebug() << "print formation failed" << a.lastError();

    }
    while(a.next()){
        for(int i=0;i<3;i++) {
            QStandardItem *item= new QStandardItem(a.value(i).toString());
            modele->setItem(row,i,item);
        }
        row++;
    }
    modele->setHeaderData(0,Qt::Horizontal,"Etude");
    modele->setHeaderData(1,Qt::Horizontal,"duree");
    modele->setHeaderData(2,Qt::Horizontal,"diplome requis");

    ui->etudeE->setModel(modele);
}

void Accueille::afficherTableE(){


    QSqlQuery a; int ligne(0);
    a.exec("select count(*) from employee");
    while(a.next()){
        ligne= a.value(0).toInt();
    }
    modele = new QStandardItemModel(ligne,6);
    int row(0);
    //mba asion anle code SQl maka donner any amn le employee ato @idealy et Wharton
    a.prepare("select nom,prenom,date_naissance,sexe,fonction,annee_embauche from employee");
    if(a.exec())
    {
            qDebug() << "print personn success!!";

    }
    else
    {
            qDebug() << "print personn failed" << a.lastError();

    }


    while(a.next()){
        for(int i=0;i<6;i++) {
            QStandardItem *item= new QStandardItem(a.value(i).toString());
            modele->setItem(row,i,item);
        }
        row++;
    }
    modele->setHeaderData(0,Qt::Horizontal,"nom");
    modele->setHeaderData(1,Qt::Horizontal,"prenom");
    modele->setHeaderData(2,Qt::Horizontal,"dateN");
    modele->setHeaderData(3,Qt::Horizontal,"sexe");
    modele->setHeaderData(4,Qt::Horizontal,"fonction");
    modele->setHeaderData(5,Qt::Horizontal,"dateE");

    ui->formationO->setModel(modele);


}

//action click click
void Accueille::on_offre_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}

void Accueille::on_employee_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}

void Accueille::on_apropos_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
}

void Accueille::on_acceuilOffre_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
}

void Accueille::on_acceuilEmployee_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
}

void Accueille::on_acceuilOffre_2_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
}

void Accueille::on_valider_clicked()
{
    QSqlQuery a;

    QString nom = ui->nom->text();
    QString prenom = ui->prenom->text();
    QDate dateN = ui->dateDeNaissance->date();
    QDate dateE = ui->anneeDembauche->date();
    QString fonction = ui->fonction->currentText();
    QString sexe;
    if(ui->femme->isChecked()){
        sexe = "F";
        ui->femme->toggle();
    }else{
        sexe = "H";
       // ui->femme->setChecked();
    }
//ito tsy insert fa hoe tadiavina ao amn le db ny info napidirina
    a.prepare("INSERT INTO employee(nom,prenom,date_naissance,sexe,fonction,annee_embauche)"
              " VALUES(:nom, :prenom, :dateN, :sexe, :fonction, :dateE)");
    a.bindValue(":nom", nom);
    a.bindValue(":prenom", prenom);
    a.bindValue(":dateN", dateN);
    a.bindValue(":dateE", dateE);
    a.bindValue(":fonction", fonction);
    a.bindValue(":sexe",sexe);
    QMessageBox::information(this, "envoie", "requete");
    if(a.exec())
    {
            qDebug() << "add personn success!!";

    }
    else
    {
            qDebug() << "add personn failed" << a.lastError();
            QMessageBox::warning(this, "envoie", "erreur!!");

    }
    //*************************************************
    //**************reinitialisation*******************
    //*************************************************
ui->nom->clear();
ui->prenom->clear();
ui->dateDeNaissance->clear();
ui->anneeDembauche->clear();
ui->fonction->clear();
ui->fonction->setCurrentText(0);

}

void Accueille::on_actionquiter_triggered()
{
     QApplication::quit();
}

