/********************************************************************************
** Form generated from reading UI file 'controle1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLE1_H
#define UI_CONTROLE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_controle1
{
public:
    QPushButton *TABLE;
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QDialog *controle1)
    {
        if (controle1->objectName().isEmpty())
            controle1->setObjectName(QString::fromUtf8("controle1"));
        controle1->resize(606, 467);
        TABLE = new QPushButton(controle1);
        TABLE->setObjectName(QString::fromUtf8("TABLE"));
        TABLE->setGeometry(QRect(160, 370, 231, 51));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        TABLE->setFont(font);
        tableView = new QTableView(controle1);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 20, 541, 331));
        pushButton = new QPushButton(controle1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(470, 410, 111, 51));
        pushButton->setFont(font);

        retranslateUi(controle1);

        QMetaObject::connectSlotsByName(controle1);
    } // setupUi

    void retranslateUi(QDialog *controle1)
    {
        controle1->setWindowTitle(QCoreApplication::translate("controle1", "Dialog", nullptr));
        TABLE->setText(QCoreApplication::translate("controle1", "LOAD TABLE", nullptr));
        pushButton->setText(QCoreApplication::translate("controle1", ">>Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class controle1: public Ui_controle1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLE1_H
