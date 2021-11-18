/********************************************************************************
** Form generated from reading UI file 'prof3.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROF3_H
#define UI_PROF3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_prof3
{
public:
    QTableView *tableView;
    QPushButton *LOAD;
    QPushButton *BACK;

    void setupUi(QDialog *prof3)
    {
        if (prof3->objectName().isEmpty())
            prof3->setObjectName(QString::fromUtf8("prof3"));
        prof3->resize(740, 436);
        tableView = new QTableView(prof3);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 20, 611, 311));
        LOAD = new QPushButton(prof3);
        LOAD->setObjectName(QString::fromUtf8("LOAD"));
        LOAD->setGeometry(QRect(270, 350, 171, 41));
        QFont font;
        font.setPointSize(12);
        LOAD->setFont(font);
        BACK = new QPushButton(prof3);
        BACK->setObjectName(QString::fromUtf8("BACK"));
        BACK->setGeometry(QRect(560, 380, 131, 41));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        BACK->setFont(font1);

        retranslateUi(prof3);

        QMetaObject::connectSlotsByName(prof3);
    } // setupUi

    void retranslateUi(QDialog *prof3)
    {
        prof3->setWindowTitle(QCoreApplication::translate("prof3", "Dialog", nullptr));
        LOAD->setText(QCoreApplication::translate("prof3", "LOAD TABLE", nullptr));
        BACK->setText(QCoreApplication::translate("prof3", ">>Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class prof3: public Ui_prof3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROF3_H
