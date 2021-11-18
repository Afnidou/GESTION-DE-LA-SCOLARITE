#include "etudiant1.h"
#include "ui_etudiant1.h"
#include"etudiant2.h"
#include"etudiant3.h"
#include"admin.h"
ETUDIANT1::ETUDIANT1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ETUDIANT1)
{
    ui->setupUi(this);
}

ETUDIANT1::~ETUDIANT1()
{
    delete ui;
}

void ETUDIANT1::on_traitement_clicked()
{
    //TRAITEMENT


       this->hide();
       etudiant2 FOR;
      FOR.setModal(true);
     FOR.exec();
}

void ETUDIANT1::on_visualisation_clicked()
{
    //VISUALISATION

        this->hide();
        etudiant3 FOR;
       FOR.setModal(true);
      FOR.exec();
}

void ETUDIANT1::on_pushButton_clicked()
{
    this->hide();
    admin  DOS;
    DOS.setModal(true);
    DOS.exec();
}
