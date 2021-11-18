#include "acceuil.h"
#include "ui_acceuil.h"
#include"admin.h"
#include"eleve.h"
#include "professeur.h"
Acceuil::Acceuil(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Acceuil)
{
    ui->setupUi(this);

    if(!connOpen())
    {qDebug()<<"ERREUR"; return;}


QString ETUDIANT="CREATE TABLE Etudiant(CNE VARCHAR(30) NOT NULL UNIQUE,NOM_Complet   VARCHAR(60),DateNaissance VARCHAR(30), CLASS VARCHAR(30) ,PRIMARY KEY(CNE))";
QString PROF="CREATE TABLE Professeur(CIN VARCHAR(30) NOT NULL UNIQUE,Nom_Complet VARCHAR(60),Adresse VARCHAR(40),Téléphone NUMERIC UNIQUE,PRIMARY KEY(CIN))";
QString Matiere="CREATE TABLE Matière(ID INTEGER NOT NULL PRIMARY KEY UNIQUE,Libellé VARCHAR(30),ID_filière VARCHAR(30),Enseignant VARCHAR(30))";
QString Evaluation="CREATE TABLE Evaluation(N_Etudiant VARCHAR(30) NOT NULL ,Code_Matiere INTEGER NOT NULL ,Date DATETIME NOT NULL,Note INTEGER NOT NULL ,PRIMARY KEY(Code_Matiere,Date,N_Etudiant))";
QString ABSENCE="CREATE TABLE ABSENCE(RAISON  VARCHAR(30) ,JUSTIFIEE VARCHAR(30) NOT NULL UNIQUE,Date DATETIME ,Matiere INTEGER NVARCHAR(30),Nb_ABS INTEGER,PRIMARY KEY(RAISON))";

QSqlQuery requette;
requette.exec(ETUDIANT);
requette.exec(PROF);
requette.exec(Matiere);
requette.exec(Evaluation);
requette.exec(ABSENCE);
}


Acceuil::~Acceuil()
{
    delete ui;
}


void Acceuil::on_se_connecter_clicked()
{
    int count1=0, count2=0;
            QString password,username,ehtp;
            username=ui->user->text();
            password=ui->mdp->text();
            if(!database.isOpen()) {qDebug()<<"Failed to open the database";
            return;}
          connOpen();
        QSqlQuery qry;
            if (qry.exec("select * from Etudiant where CNE='"+password+"' and NOM_Complet ='"+username+"'"))
           {
                while (qry.next()) count1++;}
            if (qry.exec("select * from Professeur where CIN='"+password+"'and Nom_Complet='"+username+"'"))
            {
                while (qry.next()) count2++;}
            if (((password=="ehtp")and(username=="AFNIDOU")) or ((password=="ehtp")and(username=="HADER")))
            {
            ui->label_resultat->setText("BIENVENUE CHER ADMIN !");
           connClose();//fermer la connection avec la db avant d'ouvrir une nouvelle fenetre
           this->hide();
           //afichage de la fenetre ADMIN:accés illimité
           admin  DOS;
           DOS.setModal(true);
           DOS.exec();
            }
            else if (count1!=0) {ui->label_resultat->setText("BIENVENUE CHER ETUDIANT !");
                this->hide();
                eleve  DOS;
                DOS.setModal(true);
                DOS.exec();
            }
            else if ( count2!=0) {ui->label_resultat->setText("BIENVENUE CHER PROF !");
                this->hide();
                professeur DOS;
                DOS.setModal(true);
                DOS.exec();
            }
            else {ui->label_resultat->setText("mot de passe ou non d'utilisateur est incorrecte");



        }}







