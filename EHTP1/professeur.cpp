#include "professeur.h"
#include "ui_professeur.h"
#include "evaluation_prof.h"
#include "professeur_profile.h"
professeur::professeur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::professeur)
{
    ui->setupUi(this);
}

professeur::~professeur()
{
    delete ui;
}

void professeur::on_PROFILE_clicked()
{
    this->hide();
    professeur_profile FOR;
   FOR.setModal(true);
  FOR.exec();
}

void professeur::on_EVALUATION_clicked()
{
    this->hide();
    evaluation_prof  DOS;
    DOS.setModal(true);
    DOS.exec();
}

void professeur::on_QUITTER_clicked()
{
    hide();
}
