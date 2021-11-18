#include "etudiantrapport.h"
#include "ui_etudiantrapport.h"
#include"acceuil.h"
#include<QMessageBox>
#include<QDebug>
#include<QTableView>
#include "eleve.h"
etudiantrapport::etudiantrapport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::etudiantrapport)
{
    ui->setupUi(this);
}

etudiantrapport::~etudiantrapport()
{
    delete ui;
}

void etudiantrapport::on_pushButton_clicked()
{
    QString c ;
   Acceuil   conn;
     c=ui->lineEdit ->text();
    QSqlQueryModel * model=new QSqlQueryModel();
    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.database);
    qry->prepare("SELECT* from Evaluation WHERE N_Etudiant ='"+c+"'");
    qry->exec();
    model->setQuery(*qry);
    ui->tableView->setModel(model);
    conn.connClose();
   qDebug()<<(model->rowCount());
}

void etudiantrapport::on_pushButton_2_clicked()
{
    this->hide();
    eleve  DOS;
    DOS.setModal(true);
    DOS.exec();
}
