/********************************************************************************
** Form generated from reading UI file 'professeur.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFESSEUR_H
#define UI_PROFESSEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_professeur
{
public:
    QPushButton *PROFILE;
    QPushButton *EVALUATION;
    QPushButton *EMPLOI;
    QPushButton *QUITTER;
    QLabel *label;

    void setupUi(QDialog *professeur)
    {
        if (professeur->objectName().isEmpty())
            professeur->setObjectName(QString::fromUtf8("professeur"));
        professeur->resize(566, 451);
        PROFILE = new QPushButton(professeur);
        PROFILE->setObjectName(QString::fromUtf8("PROFILE"));
        PROFILE->setGeometry(QRect(100, 120, 331, 61));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        PROFILE->setFont(font);
        EVALUATION = new QPushButton(professeur);
        EVALUATION->setObjectName(QString::fromUtf8("EVALUATION"));
        EVALUATION->setGeometry(QRect(100, 180, 331, 61));
        EVALUATION->setFont(font);
        EMPLOI = new QPushButton(professeur);
        EMPLOI->setObjectName(QString::fromUtf8("EMPLOI"));
        EMPLOI->setGeometry(QRect(100, 240, 331, 61));
        EMPLOI->setFont(font);
        QUITTER = new QPushButton(professeur);
        QUITTER->setObjectName(QString::fromUtf8("QUITTER"));
        QUITTER->setGeometry(QRect(100, 300, 331, 61));
        QUITTER->setFont(font);
        label = new QLabel(professeur);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 30, 361, 41));
        label->setFont(font);

        retranslateUi(professeur);

        QMetaObject::connectSlotsByName(professeur);
    } // setupUi

    void retranslateUi(QDialog *professeur)
    {
        professeur->setWindowTitle(QCoreApplication::translate("professeur", "Dialog", nullptr));
        PROFILE->setText(QCoreApplication::translate("professeur", "MON PROFILE", nullptr));
        EVALUATION->setText(QCoreApplication::translate("professeur", "EVALUATION", nullptr));
        EMPLOI->setText(QCoreApplication::translate("professeur", "MON EMPLOI", nullptr));
        QUITTER->setText(QCoreApplication::translate("professeur", "QUITTER", nullptr));
        label->setText(QCoreApplication::translate("professeur", "BIENVENUE CHER PROFESSEUR !", nullptr));
    } // retranslateUi

};

namespace Ui {
    class professeur: public Ui_professeur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFESSEUR_H
