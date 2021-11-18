#ifndef MATIERE1_H
#define MATIERE1_H

#include <QDialog>

namespace Ui {
class matiere1;
}

class matiere1 : public QDialog
{
    Q_OBJECT

public:
    explicit matiere1(QWidget *parent = nullptr);
    ~matiere1();

private slots:
    void on_matiere1_accepted();

    void on_visualisation_clicked();

    void on_traitement_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_TRAIEMENT_clicked();

private:
    Ui::matiere1 *ui;
};

#endif // MATIERE1_H
