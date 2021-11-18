
#include "prof2.h"
#include "ui_prof2.h"
#include"acceuil.h"
#include<QMessageBox>
#include<QDebug>
#include<QTableView>
#include "prof1.h"

Prof2::Prof2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Prof2)
{
    ui->setupUi(this);
}

Prof2::~Prof2()
{
    delete ui;
}

void Prof2::on_add_clicked()
{
    Acceuil conn;
        QString cin,nom,adress,telef;
        cin=ui->cin->text();
        nom=ui->lineEdit->text();
        adress=ui->adresse->text();
        telef=ui->telephone->text();
      conn.connOpen();
    QSqlQuery qry;
    qry.prepare("INSERT INTO Professeur (CIN,Nom_Complet,Adresse,Téléphone)VALUES('"+cin+"','"+nom+"','"+adress+"','"+telef+"')");
     if(qry.exec()) {
                QMessageBox::critical(this,tr("save"),tr("Bien enregistré"));
            conn.connClose();}
       else

        QMessageBox::critical(this,tr("error"),qry.lastError().text());
}

void Prof2::on_update_clicked()
{
    Acceuil conn;
        QString cin,nom,adress,telef;
        cin=ui->cin->text();
        nom=ui->lineEdit->text();
        adress=ui->adresse->text();
        telef=ui->telephone->text();
      conn.connOpen();
    QSqlQuery qry;
    qry.prepare("update professeur set CIN='"+cin+"',Nom_complet='"+nom+"',Adresse='"+adress+"',Téléphone='"+telef+"' where CIN='"+cin+"'");
     if(qry.exec()) {
                QMessageBox::critical(this,tr("Edit"),tr("Bien modifié"));
            conn.connClose();}
       else

        QMessageBox::critical(this,tr("error"),qry.lastError().text());

}

void Prof2::on_delete_2_clicked()
{
    Acceuil conn;
        QString cin;
        cin=ui->cin->text();
      conn.connOpen();
    QSqlQuery qry;
    qry.prepare("delete from Professeur where CIN='"+cin+"'");
     if(qry.exec()) {
                QMessageBox::critical(this,tr("delete"),tr("Bien supprimé"));
            conn.connClose();}
       else

        QMessageBox::critical(this,tr("error"),qry.lastError().text());

}

void Prof2::on_table_prof_clicked()
{
    Acceuil conn;
       QSqlQueryModel * model=new QSqlQueryModel();
       conn.connOpen();
       QSqlQuery* qry=new QSqlQuery(conn.database);
       qry->prepare("SELECT CIN,Nom_COmplet,Adresse,Téléphone FROM Professeur");
       qry->exec();
       model->setQuery(*qry);
       ui->tableView->setModel(model);
       conn.connClose();
      qDebug()<<(model->rowCount());
}

void Prof2::on_pushButton_clicked()
{
    this->hide();
    Prof1  DOS;
    DOS.setModal(true);
    DOS.exec();
}


void Prof2::on_tableView_activated(const QModelIndex &index)
{

    QString val=ui->tableView->model()->data(index).toString();
    Acceuil conn;
    conn.connOpen();


     conn.connOpen();
   QSqlQuery qry;
   qry.prepare("select * from professeur where CIN='"+val+"' or Nom_complet='"+val+"' or Adresse='"+val+"' or Téléphone='"+val+"'");
    if(qry.exec()) {
           while(qry.next())
           {
               ui->cin->setText(qry.value(0).toString());
               ui->lineEdit->setText(qry.value(1).toString());
               ui->adresse->setText(qry.value(2).toString());
               ui->telephone->setText(qry.value(3).toString());
           }
           conn.connClose();}
      else

       QMessageBox::critical(this,tr("error"),qry.lastError().text());
}

