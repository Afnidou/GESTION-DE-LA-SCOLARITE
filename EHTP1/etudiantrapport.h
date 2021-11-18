#ifndef ETUDIANTRAPPORT_H
#define ETUDIANTRAPPORT_H

#include <QDialog>

namespace Ui {
class etudiantrapport;
}

class etudiantrapport : public QDialog
{
    Q_OBJECT

public:
    explicit etudiantrapport(QWidget *parent = nullptr);
    ~etudiantrapport();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::etudiantrapport *ui;
};

#endif // ETUDIANTRAPPORT_H
