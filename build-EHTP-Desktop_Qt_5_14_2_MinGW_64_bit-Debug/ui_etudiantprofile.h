/********************************************************************************
** Form generated from reading UI file 'etudiantprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETUDIANTPROFILE_H
#define UI_ETUDIANTPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_etudiantprofile
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QDialog *etudiantprofile)
    {
        if (etudiantprofile->objectName().isEmpty())
            etudiantprofile->setObjectName(QString::fromUtf8("etudiantprofile"));
        etudiantprofile->resize(564, 399);
        tableView = new QTableView(etudiantprofile);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 110, 461, 192));
        pushButton = new QPushButton(etudiantprofile);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 310, 191, 41));
        QFont font;
        font.setPointSize(11);
        pushButton->setFont(font);
        lineEdit = new QLineEdit(etudiantprofile);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 70, 171, 31));
        label = new QLabel(etudiantprofile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 341, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        pushButton_2 = new QPushButton(etudiantprofile);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(444, 352, 91, 31));
        pushButton_2->setFont(font1);

        retranslateUi(etudiantprofile);

        QMetaObject::connectSlotsByName(etudiantprofile);
    } // setupUi

    void retranslateUi(QDialog *etudiantprofile)
    {
        etudiantprofile->setWindowTitle(QCoreApplication::translate("etudiantprofile", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("etudiantprofile", "LOAD TABLE", nullptr));
        label->setText(QCoreApplication::translate("etudiantprofile", "MERCI DE RECRIR VOTRE CNE:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("etudiantprofile", ">>Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class etudiantprofile: public Ui_etudiantprofile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETUDIANTPROFILE_H
