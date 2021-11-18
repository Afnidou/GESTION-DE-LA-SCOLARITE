#include "admin.h"
#include "ui_admin.h"
#include"etudiant1.h"
#include"prof1.h"
#include"matiere1.h"
#include"rapportsaccademiques.h"
#include "acceuil.h"

#include"rapportsaccademiques.h"
admin::admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
}
Acceuil *DOS;
admin::~admin()
{
    delete ui;
}



void admin::on_Student_clicked()
{
    this->hide();
    ETUDIANT1 S;
   S.setModal(true);
  S.exec();
}

void admin::on_NOTES_clicked()
{
    this->hide();
   rapportsAccademiques S;
   S.setModal(true);
  S.exec();
}

void admin::on_PROFS_clicked()
{
    this->hide();
   Prof1 S;
   S.setModal(true);
  S.exec();
}



void admin::on_MATIERE_clicked()
{
    this->hide();
   matiere1  S;
   S.setModal(true);
  S.exec();
}


/*void admin::on_FILIERE_clicked()
{
    this->hide();
    filiere S;
   S.setModal(true);
  S.exec();
}*/

void admin::on_other_cpt_clicked()
{
    DOS = new Acceuil(this);
    DOS->show();
}
