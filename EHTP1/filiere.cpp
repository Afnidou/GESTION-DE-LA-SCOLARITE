#include "filiere.h"
#include "ui_filiere.h"

filiere::filiere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::filiere)
{
    ui->setupUi(this);
}

filiere::~filiere()
{
    delete ui;
}
