#ifndef CONTROLE2_H
#define CONTROLE2_H

#include <QDialog>

namespace Ui {
class controle2;
}

class controle2 : public QDialog
{
    Q_OBJECT

public:
    explicit controle2(QWidget *parent = nullptr);
    ~controle2();

private slots:
    void on_ADD_clicked();

    void on_UPDATE_clicked();

    void on_DELETE_clicked();

    void on_FILTRER_clicked();

    void on_LOAD_clicked();

    void on_pushButton_clicked();

private:
    Ui::controle2 *ui;
};

#endif // CONTROLE2_H
