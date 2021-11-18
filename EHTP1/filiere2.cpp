#include "filiere2.h"
#include "ui_filiere2.h"

filiere2::filiere2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::filiere2)
{
    ui->setupUi(this);
}

filiere2::~filiere2()
{
    delete ui;
}

void filiere2::on_load_table_clicked()
{

}
