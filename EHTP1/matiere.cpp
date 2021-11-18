#include "matiere.h"
#include "ui_matiere.h"
#include"acceuil.h"
#include<QMessageBox>
#include<QDebug>
#include<QTableView>
#include"matiere1.h"
matiere::matiere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::matiere)
{
    ui->setupUi(this);
}

matiere::~matiere()
{
    delete ui;
}

void matiere::on_update_clicked()
{
    Acceuil conn;
       QString id,filiere,enseigant,liblle;
       id=ui->lineEdit_ID->text();
       filiere=ui->lineEdit_IDfiliere->text();
       enseigant=ui->lineEdit_ensignant->text();
       liblle=ui->lineEdit_Libele->text();
      conn.connOpen();
    QSqlQuery qry;
    qry.prepare("UPDATE Matière SET ID='"+id+"',ID_filière='"+filiere+"',Enseignant="+enseigant+"',Libellé='"+liblle+"' WHERE ID='"+id+"'");
     if(qry.exec()) {
                QMessageBox::critical(this,tr("EDIT"),tr("Bien modifié"));
            conn.connClose();}
       else

         QMessageBox::critical(this,tr("error"),qry.lastError().text());

}

void matiere::on_delete_2_clicked()
{
    Acceuil conn;
       QString id,filiere,enseigant,liblle;
       id=ui->lineEdit_ID->text();
       filiere=ui->lineEdit_IDfiliere->text();
       enseigant=ui->lineEdit_ensignant->text();
       liblle=ui->lineEdit_Libele->text();
      conn.connOpen();
    QSqlQuery qry;
    qry.prepare("DELETE FROM Matière WHERE ID='"+id+"'");
     if(qry.exec()) {
                QMessageBox::critical(this,tr("Delete"),tr("Bien supprimé"));
            conn.connClose();}
       else   QMessageBox::critical(this,tr("error"),qry.lastError().text());

}

void matiere::on_add_clicked()
{
    Acceuil conn;
       QString id,filiere,enseigant,liblle;
       id=ui->lineEdit_ID->text();
       filiere=ui->lineEdit_IDfiliere->text();
       enseigant=ui->lineEdit_ensignant->text();
       liblle=ui->lineEdit_Libele->text();

     conn.connOpen();
   QSqlQuery qry;
   qry.prepare("INSERT INTO Matière (ID,Libellé,ID_filière,Enseignant)VALUES('"+id+"','"+liblle+"','"+filiere+"','"+enseigant+"')");
    if(qry.exec()) {
               QMessageBox::critical(this,tr("save"),tr("Bien enregistré"));
           conn.connClose();}
      else

       QMessageBox::critical(this,tr("error"),qry.lastError().text());
}


void matiere::on_pushButton_clicked() //LOAD TABLE
{
    Acceuil conn;
       QSqlQueryModel * model=new QSqlQueryModel();
       conn.connOpen();
       QSqlQuery* qry=new QSqlQuery(conn.database);
       qry->prepare("SELECT * FROM matière");
       qry->exec();
       model->setQuery(*qry);
       ui->tableView->setModel(model);
       conn.connClose();
      qDebug()<<(model->rowCount());
}

void matiere::on_pushButton_6_clicked()
{
    this->hide();
    matiere1  DOS;
    DOS.setModal(true);
    DOS.exec();
}
