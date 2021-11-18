#include "controle1.h"
#include "ui_controle1.h"
#include"acceuil.h"
#include "rapportsaccademiques.h"
controle1::controle1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::controle1)
{
    ui->setupUi(this);
}

controle1::~controle1()
{
    delete ui;
}

void controle1::on_TABLE_clicked()
{
    Acceuil conn;
    QSqlQueryModel * model=new QSqlQueryModel();
    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.database);
    qry->prepare("SELECT * FROM Evaluation ");
    qry->exec();
    model->setQuery(*qry);
    ui->tableView->setModel(model);
    conn.connClose();
   qDebug()<<(model->rowCount());
}

void controle1::on_pushButton_clicked()
{
    this->hide();
    rapportsAccademiques  DOS;
    DOS.setModal(true);
    DOS.exec();
}
