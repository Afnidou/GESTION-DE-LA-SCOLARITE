/********************************************************************************
** Form generated from reading UI file 'etudiant2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETUDIANT2_H
#define UI_ETUDIANT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_etudiant2
{
public:
    QTableView *tableView;
    QPushButton *see;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_cne;
    QLineEdit *lineEdit_filiere;
    QPushButton *up_date;
    QPushButton *add;
    QPushButton *delete_2;
    QPushButton *pushButton;
    QDateEdit *dateEdit;

    void setupUi(QDialog *etudiant2)
    {
        if (etudiant2->objectName().isEmpty())
            etudiant2->setObjectName(QString::fromUtf8("etudiant2"));
        etudiant2->resize(1034, 445);
        tableView = new QTableView(etudiant2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(480, 30, 511, 321));
        QFont font;
        font.setPointSize(10);
        tableView->setFont(font);
        see = new QPushButton(etudiant2);
        see->setObjectName(QString::fromUtf8("see"));
        see->setGeometry(QRect(250, 320, 161, 41));
        QFont font1;
        font1.setPointSize(11);
        see->setFont(font1);
        pushButton_3 = new QPushButton(etudiant2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 70, 161, 41));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(etudiant2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 110, 161, 41));
        pushButton_4->setFont(font);
        pushButton_5 = new QPushButton(etudiant2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(50, 150, 161, 41));
        pushButton_5->setFont(font);
        pushButton_6 = new QPushButton(etudiant2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(50, 190, 161, 41));
        pushButton_6->setFont(font);
        lineEdit_nom = new QLineEdit(etudiant2);
        lineEdit_nom->setObjectName(QString::fromUtf8("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(210, 70, 221, 41));
        lineEdit_nom->setFont(font);
        lineEdit_cne = new QLineEdit(etudiant2);
        lineEdit_cne->setObjectName(QString::fromUtf8("lineEdit_cne"));
        lineEdit_cne->setGeometry(QRect(210, 110, 221, 41));
        lineEdit_cne->setFont(font);
        lineEdit_filiere = new QLineEdit(etudiant2);
        lineEdit_filiere->setObjectName(QString::fromUtf8("lineEdit_filiere"));
        lineEdit_filiere->setGeometry(QRect(210, 190, 221, 41));
        lineEdit_filiere->setFont(font);
        up_date = new QPushButton(etudiant2);
        up_date->setObjectName(QString::fromUtf8("up_date"));
        up_date->setGeometry(QRect(250, 260, 161, 41));
        up_date->setFont(font);
        add = new QPushButton(etudiant2);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(50, 260, 161, 41));
        add->setFont(font);
        delete_2 = new QPushButton(etudiant2);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setGeometry(QRect(50, 320, 161, 41));
        delete_2->setFont(font);
        pushButton = new QPushButton(etudiant2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(920, 390, 91, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        dateEdit = new QDateEdit(etudiant2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(210, 150, 221, 41));

        retranslateUi(etudiant2);

        QMetaObject::connectSlotsByName(etudiant2);
    } // setupUi

    void retranslateUi(QDialog *etudiant2)
    {
        etudiant2->setWindowTitle(QCoreApplication::translate("etudiant2", "Dialog", nullptr));
        see->setText(QCoreApplication::translate("etudiant2", "Liste des \303\251tudians", nullptr));
        pushButton_3->setText(QCoreApplication::translate("etudiant2", "NOM ET PRENOM :", nullptr));
        pushButton_4->setText(QCoreApplication::translate("etudiant2", "CNE:", nullptr));
        pushButton_5->setText(QCoreApplication::translate("etudiant2", "DATE DE NAISSANCE:", nullptr));
        pushButton_6->setText(QCoreApplication::translate("etudiant2", "FILIERE", nullptr));
        up_date->setText(QCoreApplication::translate("etudiant2", "MODIFIER", nullptr));
        add->setText(QCoreApplication::translate("etudiant2", "AJOUTER", nullptr));
        delete_2->setText(QCoreApplication::translate("etudiant2", "SUPPRIMER", nullptr));
        pushButton->setText(QCoreApplication::translate("etudiant2", ">>Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class etudiant2: public Ui_etudiant2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETUDIANT2_H
