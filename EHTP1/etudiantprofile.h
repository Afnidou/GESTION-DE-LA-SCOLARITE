#ifndef ETUDIANTPROFILE_H
#define ETUDIANTPROFILE_H

#include <QDialog>

namespace Ui {
class etudiantprofile;
}

class etudiantprofile : public QDialog
{
    Q_OBJECT

public:
    explicit etudiantprofile(QWidget *parent = nullptr);
    ~etudiantprofile();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::etudiantprofile *ui;
};

#endif // ETUDIANTPROFILE_H
