#include "controle2.h"
#include "controle3.h"
#include "ui_controle2.h"
#include"acceuil.h"
#include<QMessageBox>
#include<QDebug>
#include<QTableView>
#include "rapportsaccademiques.h"

controle2::controle2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::controle2)
{
    ui->setupUi(this);
}

controle2::~controle2()
{
    delete ui;
}

void controle2::on_ADD_clicked()
{
    Acceuil conn;
       QString  etudiant,matiere,date,note;
       etudiant=ui->ETUDIANT->text();
       matiere=ui->MAIERE->text();
       date=ui->dateEdit->text();
       note=ui->NOTE->text();

     conn.connOpen();
   QSqlQuery qry;
   qry.prepare("INSERT INTO Evaluation (N_Etudiant,Code_Matiere,Date, Note )VALUES('"+etudiant+"','"+ matiere+"','"+date+"','"+note+"')");
    if(qry.exec()) {
               QMessageBox::critical(this,tr("save"),tr("Bien enregistré"));
           conn.connClose();}
      else

       QMessageBox::critical(this,tr("error"),qry.lastError().text());
}

void controle2::on_UPDATE_clicked()
{
    Acceuil conn;
           QString  etudiant,matiere,date,note;
           etudiant=ui->ETUDIANT->text();
           matiere=ui->MAIERE->text();
           date=ui->dateEdit->text();
           note=ui->NOTE->text();

         conn.connOpen();
       QSqlQuery qry;

       qry.prepare("UPDATE Evaluation SET Note='"+note+"' WHERE N_Etudiant='"+etudiant+"'");
        if(qry.exec()) {
                   QMessageBox::critical(this,tr("EDIT"),tr("Bien modifié"));
               conn.connClose();}
          else

           QMessageBox::critical(this,tr("error"),qry.lastError().text());

}

void controle2::on_DELETE_clicked()
{
    Acceuil conn;
           QString  etudiant,matiere,date,note;
           etudiant=ui->ETUDIANT->text();
           matiere=ui->MAIERE->text();
           date=ui->dateEdit->text();
           note=ui->NOTE->text();

         conn.connOpen();
       QSqlQuery qry;

       qry.prepare("DELETE FROM Evaluation WHERE  N_Etudiant='"+etudiant+"'AND Code_Matiere='"+matiere+"' ");
        if(qry.exec()) {
                   QMessageBox::critical(this,tr("Delete"),tr("Bien supprimé"));
               conn.connClose();}
          else

           QMessageBox::critical(this,tr("error"),qry.lastError().text());
}


void controle2::on_LOAD_clicked()
{
    Acceuil conn;
       QSqlQueryModel * model=new QSqlQueryModel();
       conn.connOpen();
       QSqlQuery* qry=new QSqlQuery(conn.database);
       qry->prepare("SELECT * FROM Evaluation");
       qry->exec();
       model->setQuery(*qry);
       ui->tableView->setModel(model);
       conn.connClose();
      qDebug()<<(model->rowCount());
}

void controle2::on_pushButton_clicked()
{
    this->hide();
    rapportsAccademiques  DOS;
    DOS.setModal(true);
    DOS.exec();
}
