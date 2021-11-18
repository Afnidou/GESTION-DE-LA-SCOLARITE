#include "rapportsaccademiques.h"
#include "ui_rapportsaccademiques.h"
#include"acceuil.h"
#include"controle1.h"
#include"controle2.h"
#include"admin.h"
rapportsAccademiques::rapportsAccademiques(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rapportsAccademiques)
{
    ui->setupUi(this);
}

rapportsAccademiques::~rapportsAccademiques()
{
    delete ui;
}

void rapportsAccademiques::on_SEE_clicked()
{
    //VISUALISATION

        this->hide();
        controle1 FOR;
       FOR.setModal(true);
      FOR.exec();
}


void rapportsAccademiques::on_TRAITEMENT_clicked()
{

//TRAITEMENT


   this->hide();
   controle2 FOR;
  FOR.setModal(true);
 FOR.exec();
}



void rapportsAccademiques::on_pushButton_clicked()
{
    this->hide();
    admin  DOS;
    DOS.setModal(true);
    DOS.exec();
}
