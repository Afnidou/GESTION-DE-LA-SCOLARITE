/********************************************************************************
** Form generated from reading UI file 'controle4.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLE4_H
#define UI_CONTROLE4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_controle4
{
public:
    QTableView *tableView;
    QPushButton *CNE;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *controle4)
    {
        if (controle4->objectName().isEmpty())
            controle4->setObjectName(QString::fromUtf8("controle4"));
        controle4->resize(540, 478);
        tableView = new QTableView(controle4);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 50, 441, 311));
        CNE = new QPushButton(controle4);
        CNE->setObjectName(QString::fromUtf8("CNE"));
        CNE->setGeometry(QRect(100, 380, 191, 41));
        QFont font;
        font.setPointSize(10);
        CNE->setFont(font);
        lineEdit = new QLineEdit(controle4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(290, 380, 131, 41));
        pushButton = new QPushButton(controle4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 430, 111, 31));

        retranslateUi(controle4);

        QMetaObject::connectSlotsByName(controle4);
    } // setupUi

    void retranslateUi(QDialog *controle4)
    {
        controle4->setWindowTitle(QCoreApplication::translate("controle4", "Dialog", nullptr));
        CNE->setText(QCoreApplication::translate("controle4", "CNE DE l'ETUDIANT", nullptr));
        pushButton->setText(QCoreApplication::translate("controle4", ">>Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class controle4: public Ui_controle4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLE4_H
