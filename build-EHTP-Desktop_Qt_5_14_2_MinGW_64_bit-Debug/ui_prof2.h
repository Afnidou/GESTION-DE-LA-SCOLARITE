/********************************************************************************
** Form generated from reading UI file 'prof2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROF2_H
#define UI_PROF2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Prof2
{
public:
    QTableView *tableView;
    QListView *listView;
    QPushButton *nom;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QLineEdit *cin;
    QLineEdit *adresse;
    QLineEdit *telephone;
    QPushButton *table_prof;
    QPushButton *add;
    QPushButton *update;
    QPushButton *delete_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Prof2)
    {
        if (Prof2->objectName().isEmpty())
            Prof2->setObjectName(QString::fromUtf8("Prof2"));
        Prof2->resize(740, 459);
        tableView = new QTableView(Prof2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(440, 30, 271, 311));
        listView = new QListView(Prof2);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 30, 401, 361));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        listView->setFont(font);
        nom = new QPushButton(Prof2);
        nom->setObjectName(QString::fromUtf8("nom"));
        nom->setGeometry(QRect(30, 50, 121, 41));
        nom->setFont(font);
        pushButton_2 = new QPushButton(Prof2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 110, 121, 41));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(Prof2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 170, 121, 41));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(Prof2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 230, 121, 41));
        pushButton_4->setFont(font);
        lineEdit = new QLineEdit(Prof2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 50, 201, 41));
        lineEdit->setFont(font);
        cin = new QLineEdit(Prof2);
        cin->setObjectName(QString::fromUtf8("cin"));
        cin->setGeometry(QRect(150, 110, 201, 41));
        cin->setFont(font);
        adresse = new QLineEdit(Prof2);
        adresse->setObjectName(QString::fromUtf8("adresse"));
        adresse->setGeometry(QRect(150, 170, 201, 41));
        adresse->setFont(font);
        telephone = new QLineEdit(Prof2);
        telephone->setObjectName(QString::fromUtf8("telephone"));
        telephone->setGeometry(QRect(150, 230, 201, 41));
        telephone->setFont(font);
        table_prof = new QPushButton(Prof2);
        table_prof->setObjectName(QString::fromUtf8("table_prof"));
        table_prof->setGeometry(QRect(480, 350, 191, 51));
        QFont font1;
        font1.setPointSize(11);
        table_prof->setFont(font1);
        add = new QPushButton(Prof2);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(20, 320, 101, 41));
        add->setFont(font);
        update = new QPushButton(Prof2);
        update->setObjectName(QString::fromUtf8("update"));
        update->setGeometry(QRect(140, 320, 101, 41));
        update->setFont(font);
        delete_2 = new QPushButton(Prof2);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setGeometry(QRect(280, 320, 101, 41));
        delete_2->setFont(font);
        pushButton = new QPushButton(Prof2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(614, 410, 91, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);

        retranslateUi(Prof2);

        QMetaObject::connectSlotsByName(Prof2);
    } // setupUi

    void retranslateUi(QDialog *Prof2)
    {
        Prof2->setWindowTitle(QCoreApplication::translate("Prof2", "Dialog", nullptr));
        nom->setText(QCoreApplication::translate("Prof2", "Nom et Prenom", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Prof2", "CIN", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Prof2", "Adresse", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Prof2", "T\303\251l\303\251phone", nullptr));
        table_prof->setText(QCoreApplication::translate("Prof2", "LISTE DES PROFESSEURS", nullptr));
        add->setText(QCoreApplication::translate("Prof2", "AJOUTER", nullptr));
        update->setText(QCoreApplication::translate("Prof2", "MODIFIER", nullptr));
        delete_2->setText(QCoreApplication::translate("Prof2", "SUPPRIMER", nullptr));
        pushButton->setText(QCoreApplication::translate("Prof2", ">>Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Prof2: public Ui_Prof2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROF2_H
