/********************************************************************************
** Form generated from reading UI file 'etudiant3.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETUDIANT3_H
#define UI_ETUDIANT3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_etudiant3
{
public:
    QPushButton *LOAD_table;
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QDialog *etudiant3)
    {
        if (etudiant3->objectName().isEmpty())
            etudiant3->setObjectName(QString::fromUtf8("etudiant3"));
        etudiant3->resize(578, 493);
        LOAD_table = new QPushButton(etudiant3);
        LOAD_table->setObjectName(QString::fromUtf8("LOAD_table"));
        LOAD_table->setGeometry(QRect(80, 360, 151, 41));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        LOAD_table->setFont(font);
        tableView = new QTableView(etudiant3);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 90, 541, 241));
        pushButton = new QPushButton(etudiant3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 360, 141, 41));
        pushButton->setFont(font);

        retranslateUi(etudiant3);

        QMetaObject::connectSlotsByName(etudiant3);
    } // setupUi

    void retranslateUi(QDialog *etudiant3)
    {
        etudiant3->setWindowTitle(QCoreApplication::translate("etudiant3", "Dialog", nullptr));
        LOAD_table->setText(QCoreApplication::translate("etudiant3", "LOAD TABLE", nullptr));
        pushButton->setText(QCoreApplication::translate("etudiant3", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class etudiant3: public Ui_etudiant3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETUDIANT3_H
