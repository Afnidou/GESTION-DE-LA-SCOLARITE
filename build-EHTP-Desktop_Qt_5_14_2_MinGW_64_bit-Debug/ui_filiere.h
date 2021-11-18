/********************************************************************************
** Form generated from reading UI file 'filiere.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILIERE_H
#define UI_FILIERE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FILIERE
{
public:
    QPushButton *SIG;
    QPushButton *GI;
    QPushButton *GC;
    QPushButton *GE;
    QPushButton *IHE;
    QPushButton *IVE;
    QPushButton *METEO;

    void setupUi(QDialog *FILIERE)
    {
        if (FILIERE->objectName().isEmpty())
            FILIERE->setObjectName(QString::fromUtf8("FILIERE"));
        FILIERE->resize(532, 463);
        SIG = new QPushButton(FILIERE);
        SIG->setObjectName(QString::fromUtf8("SIG"));
        SIG->setGeometry(QRect(140, 40, 251, 41));
        GI = new QPushButton(FILIERE);
        GI->setObjectName(QString::fromUtf8("GI"));
        GI->setGeometry(QRect(140, 90, 251, 41));
        GC = new QPushButton(FILIERE);
        GC->setObjectName(QString::fromUtf8("GC"));
        GC->setGeometry(QRect(140, 140, 251, 41));
        GE = new QPushButton(FILIERE);
        GE->setObjectName(QString::fromUtf8("GE"));
        GE->setGeometry(QRect(140, 190, 251, 41));
        IHE = new QPushButton(FILIERE);
        IHE->setObjectName(QString::fromUtf8("IHE"));
        IHE->setGeometry(QRect(140, 240, 251, 41));
        IVE = new QPushButton(FILIERE);
        IVE->setObjectName(QString::fromUtf8("IVE"));
        IVE->setGeometry(QRect(140, 290, 251, 41));
        METEO = new QPushButton(FILIERE);
        METEO->setObjectName(QString::fromUtf8("METEO"));
        METEO->setGeometry(QRect(140, 350, 251, 41));

        retranslateUi(FILIERE);

        QMetaObject::connectSlotsByName(FILIERE);
    } // setupUi

    void retranslateUi(QDialog *FILIERE)
    {
        FILIERE->setWindowTitle(QCoreApplication::translate("FILIERE", "Dialog", nullptr));
        SIG->setText(QCoreApplication::translate("FILIERE", "SIG", nullptr));
        GI->setText(QCoreApplication::translate("FILIERE", "GI", nullptr));
        GC->setText(QCoreApplication::translate("FILIERE", "GC", nullptr));
        GE->setText(QCoreApplication::translate("FILIERE", "GE", nullptr));
        IHE->setText(QCoreApplication::translate("FILIERE", "IHE", nullptr));
        IVE->setText(QCoreApplication::translate("FILIERE", "IVE", nullptr));
        METEO->setText(QCoreApplication::translate("FILIERE", "METEO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FILIERE: public Ui_FILIERE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILIERE_H
