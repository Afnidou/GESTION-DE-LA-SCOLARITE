#include "etudiantprofile.h"
#include "ui_etudiantprofile.h"
#include"acceuil.h"
#include<QMessageBox>
#include<QDebug>
#include<QTableView>
#include "eleve.h"
etudiantprofile::etudiantprofile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::etudiantprofile)
{
    ui->setupUi(this);
}

etudiantprofile::~etudiantprofile()
{
    delete ui;
}

void etudiantprofile::on_pushButton_clicked()
{
    QString c ;
   Acceuil   conn;
   c=ui->lineEdit->text();
    QSqlQueryModel * model=new QSqlQueryModel();
    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.database);
    qry->prepare("SELECT * FROM Etudiant WHERE CNE='"+c+"'");
    qry->exec();
    model->setQuery(*qry);
    ui->tableView->setModel(model);
       conn.connClose();
   qDebug()<<(model->rowCount());
}

void etudiantprofile::on_pushButton_2_clicked()
{
    this->hide();
    eleve  DOS;
    DOS.setModal(true);
    DOS.exec();
}

