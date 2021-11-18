#include "absence.h"
#include "ui_absence.h"
#include"acceuil.h"
#include"eleve.h"
absence::absence(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::absence)
{
    ui->setupUi(this);
}

absence::~absence()
{
    delete ui;
}

void absence::on_pushButton_clicked()
{
   Acceuil   conn;
    QSqlQueryModel * model=new QSqlQueryModel();
    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.database);
    qry->prepare("SELECT* FROM ABSENCE");
    qry->exec();
    model->setQuery(*qry);
    ui->tableView->setModel(model);
    ui->label->setText("VOUS AVEZ PAS D'ABSENCE POUR CE MOIS");
    conn.connClose();
   qDebug()<<(model->rowCount());
}


void absence::on_pushButton_2_clicked()
{
    this->hide();
    eleve  DOS;
    DOS.setModal(true);
    DOS.exec();
}
