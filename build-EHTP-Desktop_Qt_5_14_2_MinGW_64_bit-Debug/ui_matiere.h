/********************************************************************************
** Form generated from reading UI file 'matiere.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATIERE_H
#define UI_MATIERE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_matiere
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_ID;
    QLineEdit *lineEdit_Libele;
    QLineEdit *lineEdit_IDfiliere;
    QLineEdit *lineEdit_ensignant;
    QPushButton *delete_2;
    QPushButton *add;
    QPushButton *update;
    QPushButton *pushButton_6;

    void setupUi(QDialog *matiere)
    {
        if (matiere->objectName().isEmpty())
            matiere->setObjectName(QString::fromUtf8("matiere"));
        matiere->resize(912, 460);
        tableView = new QTableView(matiere);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(400, 40, 471, 331));
        QFont font;
        font.setPointSize(10);
        tableView->setFont(font);
        pushButton = new QPushButton(matiere);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 350, 141, 41));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(matiere);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 80, 141, 41));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(matiere);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 130, 141, 41));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(matiere);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 180, 141, 41));
        pushButton_4->setFont(font);
        pushButton_5 = new QPushButton(matiere);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 230, 141, 41));
        pushButton_5->setFont(font);
        lineEdit_ID = new QLineEdit(matiere);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(170, 80, 221, 41));
        lineEdit_ID->setFont(font);
        lineEdit_Libele = new QLineEdit(matiere);
        lineEdit_Libele->setObjectName(QString::fromUtf8("lineEdit_Libele"));
        lineEdit_Libele->setGeometry(QRect(170, 130, 221, 41));
        lineEdit_Libele->setFont(font);
        lineEdit_IDfiliere = new QLineEdit(matiere);
        lineEdit_IDfiliere->setObjectName(QString::fromUtf8("lineEdit_IDfiliere"));
        lineEdit_IDfiliere->setGeometry(QRect(170, 180, 221, 41));
        lineEdit_IDfiliere->setFont(font);
        lineEdit_ensignant = new QLineEdit(matiere);
        lineEdit_ensignant->setObjectName(QString::fromUtf8("lineEdit_ensignant"));
        lineEdit_ensignant->setGeometry(QRect(170, 230, 221, 41));
        lineEdit_ensignant->setFont(font);
        delete_2 = new QPushButton(matiere);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setGeometry(QRect(200, 300, 141, 41));
        delete_2->setFont(font);
        add = new QPushButton(matiere);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(40, 300, 141, 41));
        add->setFont(font);
        update = new QPushButton(matiere);
        update->setObjectName(QString::fromUtf8("update"));
        update->setGeometry(QRect(40, 350, 141, 41));
        update->setFont(font);
        pushButton_6 = new QPushButton(matiere);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(770, 400, 111, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_6->setFont(font1);

        retranslateUi(matiere);

        QMetaObject::connectSlotsByName(matiere);
    } // setupUi

    void retranslateUi(QDialog *matiere)
    {
        matiere->setWindowTitle(QCoreApplication::translate("matiere", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("matiere", "LOAD TABLE", nullptr));
        pushButton_2->setText(QCoreApplication::translate("matiere", "ID", nullptr));
        pushButton_3->setText(QCoreApplication::translate("matiere", "Libell\303\251", nullptr));
        pushButton_4->setText(QCoreApplication::translate("matiere", "ID_fili\303\250re", nullptr));
        pushButton_5->setText(QCoreApplication::translate("matiere", "Enseignant", nullptr));
        delete_2->setText(QCoreApplication::translate("matiere", "SUPPRIMER", nullptr));
        add->setText(QCoreApplication::translate("matiere", "AJOUTER", nullptr));
        update->setText(QCoreApplication::translate("matiere", "MODIFIER", nullptr));
        pushButton_6->setText(QCoreApplication::translate("matiere", ">>Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class matiere: public Ui_matiere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATIERE_H
