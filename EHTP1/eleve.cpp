#include "eleve.h"
#include "ui_eleve.h"
#include"etudiantprofile.h"
#include"etudiantrapport.h"
#include"absence.h"

eleve::eleve(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::eleve)
{
    ui->setupUi(this);
}

eleve::~eleve()
{
    delete ui;
}

void eleve::on_PROFIL_clicked()
{
    this->hide();
    etudiantprofile FOR;
   FOR.setModal(true);
  FOR.exec();
}

void eleve::on_RAPPORT_clicked()
{
    this->hide();
    etudiantrapport FOR;
   FOR.setModal(true);
  FOR.exec();
}

void eleve::on_ABSENCES_clicked()
{
    this->hide();
    absence FOR;
   FOR.setModal(true);
  FOR.exec();
}


