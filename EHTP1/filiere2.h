#ifndef FILIERE2_H
#define FILIERE2_H

#include <QDialog>

namespace Ui {
class filiere2;
}

class filiere2 : public QDialog
{
    Q_OBJECT

public:
    explicit filiere2(QWidget *parent = nullptr);
    ~filiere2();

private slots:
    void on_load_table_clicked();

private:
    Ui::filiere2 *ui;
};

#endif // FILIERE2_H
