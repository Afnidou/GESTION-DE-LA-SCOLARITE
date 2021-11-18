/********************************************************************************
** Form generated from reading UI file 'filiere2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILIERE2_H
#define UI_FILIERE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_filiere2
{
public:
    QTableView *tableView;
    QPushButton *load_table;

    void setupUi(QDialog *filiere2)
    {
        if (filiere2->objectName().isEmpty())
            filiere2->setObjectName(QString::fromUtf8("filiere2"));
        filiere2->resize(590, 416);
        tableView = new QTableView(filiere2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(70, 30, 431, 301));
        load_table = new QPushButton(filiere2);
        load_table->setObjectName(QString::fromUtf8("load_table"));
        load_table->setGeometry(QRect(210, 350, 151, 41));

        retranslateUi(filiere2);

        QMetaObject::connectSlotsByName(filiere2);
    } // setupUi

    void retranslateUi(QDialog *filiere2)
    {
        filiere2->setWindowTitle(QCoreApplication::translate("filiere2", "Dialog", nullptr));
        load_table->setText(QCoreApplication::translate("filiere2", "load table ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class filiere2: public Ui_filiere2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILIERE2_H
