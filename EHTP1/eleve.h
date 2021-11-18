#ifndef ELEVE_H
#define ELEVE_H

#include <QDialog>

namespace Ui {
class eleve;
}

class eleve : public QDialog
{
    Q_OBJECT

public:
    explicit eleve(QWidget *parent = nullptr);
    ~eleve();

private slots:
    void on_PROFIL_clicked();

    void on_RAPPORT_clicked();

    void on_ABSENCES_clicked();

    void on_MOBILITE_clicked();

private:
    Ui::eleve *ui;
};

#endif // ELEVE_H
