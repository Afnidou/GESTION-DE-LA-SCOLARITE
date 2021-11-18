#include "matiere2.h"
#include "matiere1.h"
#include "ui_matiere2.h"
#include"acceuil.h"
matiere2::matiere2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::matiere2)
{
    ui->setupUi(this);
}

matiere2::~matiere2()
{
    delete ui;
}


void matiere2::on_pushButton_clicked()
{
    this->hide();
    matiere1  DOS;
    DOS.setModal(true);
    DOS.exec();
}

void matiere2::on_matiere2_2_clicked()
{
    Acceuil conn;
    QSqlQueryModel * model=new QSqlQueryModel();
    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.database);
    qry->prepare("SELECT * FROM Matière ");
    qry->exec();
    model->setQuery(*qry);
    ui->tableView->setModel(model);
    conn.connClose();
   qDebug()<<(model->rowCount());
}
