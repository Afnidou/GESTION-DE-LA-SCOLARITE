#include "professeur_profile.h"
#include "ui_professeur_profile.h"
#include "professeur.h"
#include "acceuil.h"

professeur_profile::professeur_profile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::professeur_profile)
{
    ui->setupUi(this);
}

professeur_profile::~professeur_profile()
{
    delete ui;
}

void professeur_profile::on_LOAD_clicked()
{

    QString c ;
   Acceuil   conn;
   c=ui->lineEdit->text();
    QSqlQueryModel * model=new QSqlQueryModel();
    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.database);
    qry->prepare("SELECT * FROM Professeur WHERE CIN='"+c+"'");
    qry->exec();
    model->setQuery(*qry);
    ui->tableView->setModel(model);
    conn.connClose();
   qDebug()<<(model->rowCount());
}

void professeur_profile::on_BACK_clicked()
{
    this->hide();
    professeur  DOS;
    DOS.setModal(true);
    DOS.exec();
}


