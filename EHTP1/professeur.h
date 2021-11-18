#ifndef PROFESSEUR_H
#define PROFESSEUR_H

#include <QDialog>

namespace Ui {
class professeur;
}

class professeur : public QDialog
{
    Q_OBJECT

public:
    explicit professeur(QWidget *parent = nullptr);
    ~professeur();

private slots:
    void on_PROFILE_clicked();

    void on_EVALUATION_clicked();

    void on_QUITTER_clicked();

private:
    Ui::professeur *ui;
};

#endif // PROFESSEUR_H
