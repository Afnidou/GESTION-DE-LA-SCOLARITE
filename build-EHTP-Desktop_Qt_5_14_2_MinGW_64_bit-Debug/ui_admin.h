/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QPushButton *Student;
    QPushButton *NOTES;
    QPushButton *FILIERE;
    QPushButton *PROFS;
    QPushButton *MATIERE;
    QLabel *label;
    QLabel *label_2;
    QPushButton *other_cpt;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QString::fromUtf8("admin"));
        admin->resize(615, 435);
        Student = new QPushButton(admin);
        Student->setObjectName(QString::fromUtf8("Student"));
        Student->setGeometry(QRect(300, 110, 281, 51));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        Student->setFont(font);
        NOTES = new QPushButton(admin);
        NOTES->setObjectName(QString::fromUtf8("NOTES"));
        NOTES->setGeometry(QRect(300, 170, 281, 51));
        NOTES->setFont(font);
        FILIERE = new QPushButton(admin);
        FILIERE->setObjectName(QString::fromUtf8("FILIERE"));
        FILIERE->setGeometry(QRect(300, 290, 281, 51));
        FILIERE->setFont(font);
        PROFS = new QPushButton(admin);
        PROFS->setObjectName(QString::fromUtf8("PROFS"));
        PROFS->setGeometry(QRect(300, 50, 281, 51));
        PROFS->setFont(font);
        MATIERE = new QPushButton(admin);
        MATIERE->setObjectName(QString::fromUtf8("MATIERE"));
        MATIERE->setGeometry(QRect(300, 230, 281, 51));
        MATIERE->setFont(font);
        label = new QLabel(admin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 50, 261, 251));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/admin.png")));
        label_2 = new QLabel(admin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 300, 161, 41));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        other_cpt = new QPushButton(admin);
        other_cpt->setObjectName(QString::fromUtf8("other_cpt"));
        other_cpt->setGeometry(QRect(300, 350, 281, 61));
        other_cpt->setFont(font);

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        Student->setText(QCoreApplication::translate("admin", "LISTES DES ETUDIANTS", nullptr));
        NOTES->setText(QCoreApplication::translate("admin", "RAPPORTS ACADEMIQUES", nullptr));
        FILIERE->setText(QCoreApplication::translate("admin", "FILIERES", nullptr));
        PROFS->setText(QCoreApplication::translate("admin", "LISTES DES PROFESSEURS", nullptr));
        MATIERE->setText(QCoreApplication::translate("admin", "MATIERES", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("admin", "ADMIN EHTP", nullptr));
        other_cpt->setText(QCoreApplication::translate("admin", "Se connecter \303\240 un autre compte", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
