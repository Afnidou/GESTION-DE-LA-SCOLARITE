#include "prof3.h"
#include "prof1.h"
#include "ui_prof3.h"
#include "acceuil.h"
#include<QMessageBox>
#include<QDebug>
#include<QTableView>

prof3::prof3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::prof3)
{
    ui->setupUi(this);
}

prof3::~prof3()
{
    delete ui;
}

void prof3::on_LOAD_clicked()
{
    Acceuil conn;
       QSqlQueryModel * model=new QSqlQueryModel();
       conn.connOpen();
       QSqlQuery* qry=new QSqlQuery(conn.database);
       qry->prepare("SELECT *FROM Professeur");
       qry->exec();
       model->setQuery(*qry);
       ui->tableView->setModel(model);
       conn.connClose();
      qDebug()<<(model->rowCount());
}

void prof3::on_BACK_clicked()
{
    this->hide();
    Prof1  DOS;
    DOS.setModal(true);
    DOS.exec();
}

