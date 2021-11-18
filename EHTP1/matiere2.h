#ifndef MATIERE2_H
#define MATIERE2_H

#include <QDialog>

namespace Ui {
class matiere2;
}

class matiere2 : public QDialog
{
    Q_OBJECT

public:
    explicit matiere2(QWidget *parent = nullptr);
    ~matiere2();

private slots:
    void on_matiere2_accepted();

    void on_LOAD_clicked();

    void on_matiere2_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::matiere2 *ui;
};

#endif // MATIERE2_H
