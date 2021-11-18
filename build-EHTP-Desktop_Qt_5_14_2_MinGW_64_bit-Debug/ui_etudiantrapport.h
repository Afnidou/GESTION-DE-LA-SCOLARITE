/********************************************************************************
** Form generated from reading UI file 'etudiantrapport.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETUDIANTRAPPORT_H
#define UI_ETUDIANTRAPPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_etudiantrapport
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *etudiantrapport)
    {
        if (etudiantrapport->objectName().isEmpty())
            etudiantrapport->setObjectName(QString::fromUtf8("etudiantrapport"));
        etudiantrapport->resize(556, 418);
        label = new QLabel(etudiantrapport);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 341, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        lineEdit = new QLineEdit(etudiantrapport);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 80, 231, 31));
        tableView = new QTableView(etudiantrapport);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(45, 120, 431, 192));
        pushButton = new QPushButton(etudiantrapport);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 332, 211, 41));
        QFont font1;
        font1.setPointSize(11);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(etudiantrapport);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(424, 362, 101, 41));
        pushButton_2->setFont(font);

        retranslateUi(etudiantrapport);

        QMetaObject::connectSlotsByName(etudiantrapport);
    } // setupUi

    void retranslateUi(QDialog *etudiantrapport)
    {
        etudiantrapport->setWindowTitle(QCoreApplication::translate("etudiantrapport", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("etudiantrapport", "MERCI DE RECRIR VOTRE CNE:", nullptr));
        pushButton->setText(QCoreApplication::translate("etudiantrapport", "LOAD TABLE", nullptr));
        pushButton_2->setText(QCoreApplication::translate("etudiantrapport", ">>Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class etudiantrapport: public Ui_etudiantrapport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETUDIANTRAPPORT_H
