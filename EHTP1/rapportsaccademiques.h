#ifndef RAPPORTSACCADEMIQUES_H
#define RAPPORTSACCADEMIQUES_H

#include <QDialog>

namespace Ui {
class rapportsAccademiques;
}

class rapportsAccademiques : public QDialog
{
    Q_OBJECT

public:
    explicit rapportsAccademiques(QWidget *parent = nullptr);
    ~rapportsAccademiques();

private slots:
    void on_SEE_clicked();

    void on_rapportsAccademiques_accepted();

    void on_TRAITEMENT_clicked();

    void on_pushButton_clicked();

private:
    Ui::rapportsAccademiques *ui;
};

#endif // RAPPORTSACCADEMIQUES_H
