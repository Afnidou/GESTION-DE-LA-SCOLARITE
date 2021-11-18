#include "etudiant3.h"
#include "ui_etudiant3.h"
#include"acceuil.h"
#include"etudiant1.h"
etudiant3::etudiant3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::etudiant3)
{
    ui->setupUi(this);
}

etudiant3::~etudiant3()
{
    delete ui;
}

void etudiant3::on_LOAD_table_clicked()
{
    Acceuil conn;
    QSqlQueryModel * model=new QSqlQueryModel();
    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.database);
    qry->prepare("SELECT * FROM ETUDIANT ");
    qry->exec();
    model->setQuery(*qry);
    ui->tableView->setModel(model);
    conn.connClose();
   qDebug()<<(model->rowCount());
}

void etudiant3::on_pushButton_clicked()
{
    this->hide();
    ETUDIANT1  DOS;
    DOS.setModal(true);
    DOS.exec();
}
