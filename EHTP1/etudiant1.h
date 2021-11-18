#ifndef ETUDIANT1_H
#define ETUDIANT1_H

#include <QDialog>

namespace Ui {
class ETUDIANT1;
}

class ETUDIANT1 : public QDialog
{
    Q_OBJECT

public:
    explicit ETUDIANT1(QWidget *parent = nullptr);
    ~ETUDIANT1();

private slots:
    void on_traitement_clicked();

    void on_visualisation_clicked();

    void on_pushButton_clicked();

private:
    Ui::ETUDIANT1 *ui;
};

#endif // ETUDIANT1_H
