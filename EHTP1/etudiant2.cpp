#include "etudiant2.h"
#include "ui_etudiant2.h"
#include"acceuil.h"
#include<QMessageBox>
#include<QDebug>
#include<QTableView>
#include "etudiant1.h"





etudiant2::etudiant2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::etudiant2)
{
    ui->setupUi(this);
}

etudiant2::~etudiant2()
{
    delete ui;
}

void etudiant2::on_add_clicked()
{
    Acceuil conn;
       QString name,cne,birthday,classe,utilisateur;
       name=ui->lineEdit_nom->text();
       cne=ui->lineEdit_cne->text();
       birthday=ui->dateEdit->text();
       classe=ui->lineEdit_filiere->text();
     conn.connOpen();
   QSqlQuery qry;
   qry.prepare("INSERT INTO Etudiant (CNE,NOM_Complet,DateNaissance,CLASS)VALUES('"+cne+"','"+name+"','"+birthday+"','"+classe+"')");
    if(qry.exec()) {
               QMessageBox::critical(this,tr("save"),tr("Bien enregistré"));
           conn.connClose();}
      else

       QMessageBox::critical(this,tr("error"),qry.lastError().text());
}


void etudiant2::on_up_date_clicked()
{ Acceuil conn;
    QString name,cne,birthday,classe,utilisateur;
    name=ui->lineEdit_nom->text();

    cne=ui->lineEdit_cne->text();
    birthday=ui->dateEdit->text();
    classe=ui->lineEdit_filiere->text();

  conn.connOpen();
QSqlQuery qry;
qry.prepare("UPDATE Etudiant SET CNE='"+cne+"',NOM_Complet='"+name+"',DateNaissance='"+birthday+"',CLASS='"+classe+"'where CNE='"+cne+"'");
 if(qry.exec()) {
            QMessageBox::critical(this,tr("EDIT"),tr("Bien modifié"));
        conn.connClose();}
   else

    QMessageBox::critical(this,tr("error"),qry.lastError().text());

}

void etudiant2::on_delete_2_clicked()
{
   Acceuil conn;
       QString name,prenam,cne,birthday,classe,utilisateur;
       name=ui->lineEdit_nom->text();
       cne=ui->lineEdit_cne->text();
       birthday=ui->dateEdit->text();
       classe=ui->lineEdit_filiere->text();

     conn.connOpen();
   QSqlQuery qry;
   qry.prepare("DELETE FROM Etudiant WHERE CNE='"+cne+"'");
    if(qry.exec()) {
               QMessageBox::critical(this,tr("Delete"),tr("Bien supprimé"));
           conn.connClose();}
      else

       QMessageBox::critical(this,tr("error"),qry.lastError().text());
}

void etudiant2::on_see_clicked()
{
    Acceuil conn;
       QSqlQueryModel * model=new QSqlQueryModel();
       conn.connOpen();
       QSqlQuery* qry=new QSqlQuery(conn.database);
       qry->prepare("SELECT * FROM Etudiant");
       qry->exec();
       model->setQuery(*qry);
       ui->tableView->setModel(model);
       conn.connClose();
      qDebug()<<(model->rowCount());
}

void etudiant2::on_pushButton_clicked()
{
    this->hide();
     ETUDIANT1 DOS;
    DOS.setModal(true);
    DOS.exec();
}

void etudiant2::on_tableView_activated(const QModelIndex &index)
{  QString val=ui->tableView->model()->data(index).toString();
    Acceuil conn;
     conn.connOpen();
   QSqlQuery qry;
   qry.prepare("select * from Etudiant where CNE='"+val+"' or NOM_complet='"+val+"' or DateNaissance='"+val+"' or CLASS='"+val+"'");
    if(qry.exec()) {
           while(qry.next())
           {
               ui->lineEdit_cne->setText(qry.value(0).toString());
               ui->lineEdit_nom->setText(qry.value(1).toString());
               ui->dateEdit->setDate(qry.value(2).toDate());
               ui->lineEdit_filiere->setText(qry.value(3).toString());
           }
           conn.connClose();}
      else

       QMessageBox::critical(this,tr("error"),qry.lastError().text());
}
