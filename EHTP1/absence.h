#ifndef ABSENCE_H
#define ABSENCE_H

#include <QDialog>

namespace Ui {
class absence;
}

class absence : public QDialog
{
    Q_OBJECT

public:
    explicit absence(QWidget *parent = nullptr);
    ~absence();

private slots:
    void on_pushButton_clicked();

    void on_absence_accepted();

    void on_pushButton_2_clicked();

private:
    Ui::absence *ui;
};

#endif // ABSENCE_H
