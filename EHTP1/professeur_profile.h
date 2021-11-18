#ifndef PROFESSEUR_PROFILE_H
#define PROFESSEUR_PROFILE_H

#include <QDialog>

namespace Ui {
class professeur_profile;
}

class professeur_profile : public QDialog
{
    Q_OBJECT

public:
    explicit professeur_profile(QWidget *parent = nullptr);
    ~professeur_profile();

private slots:
    void on_LOAD_clicked();

    void on_BACK_clicked();

private:
    Ui::professeur_profile *ui;
};

#endif // PROFESSEUR_PROFILE_H
