#ifndef CONTROLE1_H
#define CONTROLE1_H

#include <QDialog>

namespace Ui {
class controle1;
}

class controle1 : public QDialog
{
    Q_OBJECT

public:
    explicit controle1(QWidget *parent = nullptr);
    ~controle1();

private slots:
    void on_TABLE_clicked();

    void on_pushButton_clicked();

private:
    Ui::controle1 *ui;
};

#endif // CONTROLE1_H
