#ifndef PROF3_H
#define PROF3_H

#include <QDialog>

namespace Ui {
class prof3;
}

class prof3 : public QDialog
{
    Q_OBJECT

public:
    explicit prof3(QWidget *parent = nullptr);
    ~prof3();

private slots:
    void on_LOAD_clicked();

    void on_BACK_clicked();

private:
    Ui::prof3 *ui;
};

#endif // PROF3_H
