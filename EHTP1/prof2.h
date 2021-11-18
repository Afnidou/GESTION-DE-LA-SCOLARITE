#ifndef PROF2_H
#define PROF2_H

#include <QDialog>

namespace Ui {
class Prof2;
}

class Prof2 : public QDialog
{
    Q_OBJECT

public:
    explicit Prof2(QWidget *parent = nullptr);
    ~Prof2();

private slots:
    void on_add_clicked();

    void on_update_clicked();

    void on_delete_2_clicked();

    void on_table_prof_clicked();

    void on_pushButton_clicked();

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::Prof2 *ui;
};

#endif // PROF2_H
