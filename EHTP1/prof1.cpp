#include "prof1.h"
#include "ui_prof1.h"
#include "prof2.h"
#include "prof3.h"
#include "admin.h"
Prof1::Prof1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Prof1)
{
    ui->setupUi(this);
}

Prof1::~Prof1()
{
    delete ui;
}

void Prof1::on_pushButton_clicked() //VISUALISATION
{


    this->hide();
    prof3 FOR;
   FOR.setModal(true);
  FOR.exec();
}

void Prof1::on_pushButton_2_clicked() //TRAITEMENT
{

     this->hide();
    Prof2 FOR;
   FOR.setModal(true);
  FOR.exec();
}

void Prof1::on_pushButton_3_clicked()
{
    this->hide();
    admin  DOS;
    DOS.setModal(true);
    DOS.exec();
}
