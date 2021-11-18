/********************************************************************************
** Form generated from reading UI file 'eleve.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELEVE_H
#define UI_ELEVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_eleve
{
public:
    QPushButton *PROFIL;
    QPushButton *RAPPORT;
    QPushButton *ABSENCES;
    QPushButton *MOBILITE;

    void setupUi(QDialog *eleve)
    {
        if (eleve->objectName().isEmpty())
            eleve->setObjectName(QString::fromUtf8("eleve"));
        eleve->resize(578, 445);
        PROFIL = new QPushButton(eleve);
        PROFIL->setObjectName(QString::fromUtf8("PROFIL"));
        PROFIL->setGeometry(QRect(150, 80, 251, 61));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        PROFIL->setFont(font);
        RAPPORT = new QPushButton(eleve);
        RAPPORT->setObjectName(QString::fromUtf8("RAPPORT"));
        RAPPORT->setGeometry(QRect(150, 150, 251, 61));
        RAPPORT->setFont(font);
        ABSENCES = new QPushButton(eleve);
        ABSENCES->setObjectName(QString::fromUtf8("ABSENCES"));
        ABSENCES->setGeometry(QRect(150, 220, 251, 61));
        ABSENCES->setFont(font);
        MOBILITE = new QPushButton(eleve);
        MOBILITE->setObjectName(QString::fromUtf8("MOBILITE"));
        MOBILITE->setGeometry(QRect(150, 290, 251, 61));
        MOBILITE->setFont(font);

        retranslateUi(eleve);

        QMetaObject::connectSlotsByName(eleve);
    } // setupUi

    void retranslateUi(QDialog *eleve)
    {
        eleve->setWindowTitle(QCoreApplication::translate("eleve", "Dialog", nullptr));
        PROFIL->setText(QCoreApplication::translate("eleve", "MON PROFIL", nullptr));
        RAPPORT->setText(QCoreApplication::translate("eleve", "RAPPORTS ACADEMIQUES", nullptr));
        ABSENCES->setText(QCoreApplication::translate("eleve", "ABSENCES", nullptr));
        MOBILITE->setText(QCoreApplication::translate("eleve", "MOBILITE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class eleve: public Ui_eleve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELEVE_H
