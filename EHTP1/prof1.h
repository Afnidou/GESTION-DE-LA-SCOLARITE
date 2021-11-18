#ifndef PROF1_H
#define PROF1_H

#include <QDialog>

namespace Ui {
class Prof1;
}

class Prof1 : public QDialog
{
    Q_OBJECT

public:
    explicit Prof1(QWidget *parent = nullptr);
    ~Prof1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Prof1 *ui;
};

#endif // PROF1_H
