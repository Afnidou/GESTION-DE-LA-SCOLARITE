/********************************************************************************
** Form generated from reading UI file 'controle2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLE2_H
#define UI_CONTROLE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_controle2
{
public:
    QTableView *tableView;
    QPushButton *LOAD;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLineEdit *ETUDIANT;
    QLineEdit *MAIERE;
    QLineEdit *NOTE;
    QDateEdit *dateEdit;
    QPushButton *ADD;
    QPushButton *DELETE;
    QPushButton *UPDATE;
    QPushButton *pushButton;

    void setupUi(QDialog *controle2)
    {
        if (controle2->objectName().isEmpty())
            controle2->setObjectName(QString::fromUtf8("controle2"));
        controle2->resize(939, 476);
        tableView = new QTableView(controle2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(350, 20, 551, 361));
        LOAD = new QPushButton(controle2);
        LOAD->setObjectName(QString::fromUtf8("LOAD"));
        LOAD->setGeometry(QRect(170, 330, 121, 51));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        LOAD->setFont(font);
        pushButton_2 = new QPushButton(controle2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 40, 121, 41));
        QFont font1;
        font1.setPointSize(10);
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(controle2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 90, 121, 41));
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(controle2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 140, 121, 41));
        pushButton_4->setFont(font1);
        pushButton_5 = new QPushButton(controle2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 190, 121, 41));
        pushButton_5->setFont(font1);
        ETUDIANT = new QLineEdit(controle2);
        ETUDIANT->setObjectName(QString::fromUtf8("ETUDIANT"));
        ETUDIANT->setGeometry(QRect(140, 40, 181, 41));
        ETUDIANT->setFont(font1);
        MAIERE = new QLineEdit(controle2);
        MAIERE->setObjectName(QString::fromUtf8("MAIERE"));
        MAIERE->setGeometry(QRect(140, 90, 181, 41));
        MAIERE->setFont(font1);
        NOTE = new QLineEdit(controle2);
        NOTE->setObjectName(QString::fromUtf8("NOTE"));
        NOTE->setGeometry(QRect(140, 190, 181, 41));
        NOTE->setFont(font1);
        dateEdit = new QDateEdit(controle2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(140, 140, 181, 41));
        dateEdit->setFont(font1);
        ADD = new QPushButton(controle2);
        ADD->setObjectName(QString::fromUtf8("ADD"));
        ADD->setGeometry(QRect(20, 270, 121, 51));
        ADD->setFont(font1);
        DELETE = new QPushButton(controle2);
        DELETE->setObjectName(QString::fromUtf8("DELETE"));
        DELETE->setGeometry(QRect(170, 270, 121, 51));
        UPDATE = new QPushButton(controle2);
        UPDATE->setObjectName(QString::fromUtf8("UPDATE"));
        UPDATE->setGeometry(QRect(20, 330, 121, 51));
        UPDATE->setFont(font1);
        pushButton = new QPushButton(controle2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(740, 400, 151, 41));

        retranslateUi(controle2);

        QMetaObject::connectSlotsByName(controle2);
    } // setupUi

    void retranslateUi(QDialog *controle2)
    {
        controle2->setWindowTitle(QCoreApplication::translate("controle2", "Dialog", nullptr));
        LOAD->setText(QCoreApplication::translate("controle2", "LOAD TABLE", nullptr));
        pushButton_2->setText(QCoreApplication::translate("controle2", "N\302\260Etudiant ", nullptr));
        pushButton_3->setText(QCoreApplication::translate("controle2", "Code mati\303\250re", nullptr));
        pushButton_4->setText(QCoreApplication::translate("controle2", "Date", nullptr));
        pushButton_5->setText(QCoreApplication::translate("controle2", "Note", nullptr));
        ADD->setText(QCoreApplication::translate("controle2", "AJOUTER", nullptr));
        DELETE->setText(QCoreApplication::translate("controle2", "SUPPRIMER", nullptr));
        UPDATE->setText(QCoreApplication::translate("controle2", "MODIFIER", nullptr));
        pushButton->setText(QCoreApplication::translate("controle2", ">>Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class controle2: public Ui_controle2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLE2_H
