#ifndef FILIERE_H
#define FILIERE_H

#include <QDialog>

namespace Ui {
class filiere;
}

class filiere : public QDialog
{
    Q_OBJECT

public:
    explicit filiere(QWidget *parent = nullptr);
    ~filiere();

private:
    Ui::filiere *ui;
};

#endif // FILIERE_H
