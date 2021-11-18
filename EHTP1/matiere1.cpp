#include "matiere1.h"
#include "ui_matiere1.h"
#include "matiere2.h"
#include "matiere.h"
#include "admin.h"
matiere1::matiere1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::matiere1)
{
    ui->setupUi(this);
}

matiere1::~matiere1()
{
    delete ui;
}


void matiere1::on_visualisation_clicked()
{
    //VISUALISATION

        this->hide();
       matiere2 FOR;
       FOR.setModal(true);
      FOR.exec();
}


void matiere1::on_pushButton_clicked()
{
    this->hide();
    admin  DOS;
    DOS.setModal(true);
    DOS.exec();
}



//void matiere1::on_pushButton_2_clicked()
//{
//    //TRAITEMENT
//       this->hide();
//       matiere FOR;
//      FOR.setModal(true);
//     FOR.exec();
//}




void matiere1::on_TRAIEMENT_clicked()
{
           this->hide();
           matiere FOR;
          FOR.setModal(true);
         FOR.exec();
}
