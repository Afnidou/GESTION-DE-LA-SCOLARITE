/********************************************************************************
** Form generated from reading UI file 'professeur_profile.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFESSEUR_PROFILE_H
#define UI_PROFESSEUR_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_professeur_profile
{
public:
    QTableView *tableView;
    QPushButton *BACK;
    QPushButton *LOAD;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *professeur_profile)
    {
        if (professeur_profile->objectName().isEmpty())
            professeur_profile->setObjectName(QString::fromUtf8("professeur_profile"));
        professeur_profile->resize(591, 475);
        tableView = new QTableView(professeur_profile);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(55, 110, 471, 211));
        BACK = new QPushButton(professeur_profile);
        BACK->setObjectName(QString::fromUtf8("BACK"));
        BACK->setGeometry(QRect(470, 410, 101, 51));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        BACK->setFont(font);
        LOAD = new QPushButton(professeur_profile);
        LOAD->setObjectName(QString::fromUtf8("LOAD"));
        LOAD->setGeometry(QRect(180, 340, 251, 41));
        QFont font1;
        font1.setPointSize(12);
        LOAD->setFont(font1);
        lineEdit = new QLineEdit(professeur_profile);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 60, 141, 41));
        label = new QLabel(professeur_profile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 491, 51));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        label->setFont(font2);

        retranslateUi(professeur_profile);

        QMetaObject::connectSlotsByName(professeur_profile);
    } // setupUi

    void retranslateUi(QDialog *professeur_profile)
    {
        professeur_profile->setWindowTitle(QCoreApplication::translate("professeur_profile", "Dialog", nullptr));
        BACK->setText(QCoreApplication::translate("professeur_profile", ">>>Retour", nullptr));
        LOAD->setText(QCoreApplication::translate("professeur_profile", "LOAD TABLE", nullptr));
        label->setText(QCoreApplication::translate("professeur_profile", "MERCI DE REECRIR VOTRE CIN POUR CHARGER LA TABLE :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class professeur_profile: public Ui_professeur_profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFESSEUR_PROFILE_H
