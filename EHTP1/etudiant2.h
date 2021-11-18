#ifndef ETUDIANT2_H
#define ETUDIANT2_H

#include <QDialog>

namespace Ui {
class etudiant2;
}

class etudiant2 : public QDialog
{
    Q_OBJECT

public:
    explicit etudiant2(QWidget *parent = nullptr);
    ~etudiant2();

private slots:
    void on_add_clicked();

    void on_filitrer_clicked();

    void on_up_date_clicked();

    void on_delete_2_clicked();

    void on_see_clicked();

    void on_pushButton_clicked();

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::etudiant2 *ui;
};

#endif // ETUDIANT2_H
