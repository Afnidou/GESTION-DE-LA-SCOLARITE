#include "evaluation_prof.h"
#include "ui_evaluation_prof.h"
#include"acceuil.h"
#include<QMessageBox>
#include<QDebug>
#include<QTableView>
#include "rapportsaccademiques.h"
#include "professeur.h"
evaluation_prof::evaluation_prof(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::evaluation_prof)
{
    ui->setupUi(this);
}

evaluation_prof::~evaluation_prof()
{
    delete ui;
}

void evaluation_prof::on_load_clicked()
{   QString c ;
    Acceuil conn;
       QSqlQueryModel * model=new QSqlQueryModel();
       conn.connOpen();
       QSqlQuery* qry=new QSqlQuery(conn.database);
       qry->prepare("SELECT * FROM Evaluation WHERE Code_Matiere='"+c+"'");
       qry->exec();
       model->setQuery(*qry);
       ui->tableView->setModel(model);
       conn.connClose();
      qDebug()<<(model->rowCount());
}

void evaluation_prof::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();
    QString val2=ui->lineEdit_3->text();
    Acceuil conn;
     conn.connOpen();
   QSqlQuery qry;
   qry.prepare("select * from Evalution where N_Etudiant='"+val+"' or Code_Matiere='"+val+"' or Date='"+val+"' or Note='"+val+"' where Code_Matiere='"+val2+"'");
    if(qry.exec()) {
           while(qry.next())
           {
               ui->ETUDIANT->setText(qry.value(0).toString());
               ui->code->setText(qry.value(1).toString());
               ui->dateEdit->setDate(qry.value(2).toDate());
               ui->note->setText(qry.value(3).toString());
           }
           conn.connClose();}
      else

       QMessageBox::critical(this,tr("error"),qry.lastError().text());

}

void evaluation_prof::on_UPPDATE_clicked()
{
    Acceuil conn;
           QString  etudiant,matiere,date,note;
           etudiant=ui->ETUDIANT->text();
           matiere=ui->code->text();
           date=ui->dateEdit->text();
           note=ui->note->text();

         conn.connOpen();
       QSqlQuery qry;

       qry.prepare("UPDATE Evaluation SET (N_Etudiant='"+etudiant+"',Code_Matiere='"+matiere+"', Date="+date+"'Note='"+note+"') where N_Etudiant='"+etudiant+"'AND Code_Matiere='"+matiere+"'AND Date="+date+"'");
        if(qry.exec()) {
                   QMessageBox::critical(this,tr("EDIT"),tr("Bien modifié"));
               conn.connClose();}
          else

           QMessageBox::critical(this,tr("error"),qry.lastError().text());
}

void evaluation_prof::on_ADD_clicked()
{
    Acceuil conn;
       QString  etudiant,matiere,date,note;
       etudiant=ui->ETUDIANT->text();
       matiere=ui->code->text();
       date=ui->dateEdit->text();
       note=ui->note->text();

     conn.connOpen();
   QSqlQuery qry;
   qry.prepare("INSERT INTO Evaluation (N_Etudiant,Code_Matiere,Date, Note )VALUES('"+etudiant+"','"+ matiere+"','"+date+"','"+note+"'");
    if(qry.exec()) {
               QMessageBox::critical(this,tr("save"),tr("Bien enregistré"));
           conn.connClose();}
      else

       QMessageBox::critical(this,tr("error"),qry.lastError().text());
}

void evaluation_prof::on_pushButton_clicked()
{
    this->hide();
    professeur  DOS;
    DOS.setModal(true);
    DOS.exec();
}
