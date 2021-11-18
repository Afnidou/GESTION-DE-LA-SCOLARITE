#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>

namespace Ui {
class admin;
}

class admin : public QDialog
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private slots:
    void on_la_dace_clicked();

    void on_Student_clicked();

    void on_NOTES_clicked();

    void on_PROFS_clicked();

    void on_FILIERE_clicked();

    void on_MATIERE_clicked();

    void on_other_cpt_clicked();

private:
    Ui::admin *ui;
};

#endif // ADMIN_H
