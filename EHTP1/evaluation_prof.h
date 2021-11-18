#ifndef EVALUATION_PROF_H
#define EVALUATION_PROF_H

#include <QDialog>

namespace Ui {
class evaluation_prof;
}

class evaluation_prof : public QDialog
{
    Q_OBJECT

public:
    explicit evaluation_prof(QWidget *parent = nullptr);
    ~evaluation_prof();

private slots:
    void on_load_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_UPPDATE_clicked();

    void on_ADD_clicked();

    void on_pushButton_clicked();

private:
    Ui::evaluation_prof *ui;
};

#endif // EVALUATION_PROF_H
