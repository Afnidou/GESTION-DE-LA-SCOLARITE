#ifndef ETUDIANT3_H
#define ETUDIANT3_H

#include <QDialog>

namespace Ui {
class etudiant3;
}

class etudiant3 : public QDialog
{
    Q_OBJECT

public:
    explicit etudiant3(QWidget *parent = nullptr);
    ~etudiant3();

private slots:
    void on_LOAD_table_clicked();

    void on_pushButton_clicked();

private:
    Ui::etudiant3 *ui;
};

#endif // ETUDIANT3_H
