#ifndef MATIERE_H
#define MATIERE_H

#include <QDialog>

namespace Ui {
class matiere;
}

class matiere : public QDialog
{
    Q_OBJECT

public:
    explicit matiere(QWidget *parent = nullptr);
    ~matiere();

private slots:
    void on_update_clicked();

    void on_delete_2_clicked();

    void on_add_clicked();

    void on_filtrer_clicked();

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::matiere *ui;
};

#endif // MATIERE_H
