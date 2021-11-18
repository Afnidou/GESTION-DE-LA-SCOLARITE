/********************************************************************************
** Form generated from reading UI file 'filieres.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILIERES_H
#define UI_FILIERES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_filieres
{
public:
    QPushButton *SIG;
    QPushButton *IHE;
    QPushButton *IVE;
    QPushButton *GC;
    QPushButton *GI;
    QPushButton *GE;
    QPushButton *Return_button;

    void setupUi(QDialog *filieres)
    {
        if (filieres->objectName().isEmpty())
            filieres->setObjectName(QString::fromUtf8("filieres"));
        filieres->resize(457, 450);
        SIG = new QPushButton(filieres);
        SIG->setObjectName(QString::fromUtf8("SIG"));
        SIG->setGeometry(QRect(120, 40, 201, 51));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        SIG->setFont(font);
        IHE = new QPushButton(filieres);
        IHE->setObjectName(QString::fromUtf8("IHE"));
        IHE->setGeometry(QRect(120, 90, 201, 51));
        IHE->setFont(font);
        IVE = new QPushButton(filieres);
        IVE->setObjectName(QString::fromUtf8("IVE"));
        IVE->setGeometry(QRect(120, 140, 201, 51));
        IVE->setFont(font);
        GC = new QPushButton(filieres);
        GC->setObjectName(QString::fromUtf8("GC"));
        GC->setGeometry(QRect(120, 190, 201, 51));
        GC->setFont(font);
        GI = new QPushButton(filieres);
        GI->setObjectName(QString::fromUtf8("GI"));
        GI->setGeometry(QRect(120, 240, 201, 51));
        GI->setFont(font);
        GE = new QPushButton(filieres);
        GE->setObjectName(QString::fromUtf8("GE"));
        GE->setGeometry(QRect(120, 290, 201, 51));
        GE->setFont(font);
        Return_button = new QPushButton(filieres);
        Return_button->setObjectName(QString::fromUtf8("Return_button"));
        Return_button->setGeometry(QRect(30, 370, 111, 31));

        retranslateUi(filieres);

        QMetaObject::connectSlotsByName(filieres);
    } // setupUi

    void retranslateUi(QDialog *filieres)
    {
        filieres->setWindowTitle(QCoreApplication::translate("filieres", "Dialog", nullptr));
        SIG->setText(QCoreApplication::translate("filieres", "SIG", nullptr));
        IHE->setText(QCoreApplication::translate("filieres", "IHE", nullptr));
        IVE->setText(QCoreApplication::translate("filieres", "IVE", nullptr));
        GC->setText(QCoreApplication::translate("filieres", "GC", nullptr));
        GI->setText(QCoreApplication::translate("filieres", "GI", nullptr));
        GE->setText(QCoreApplication::translate("filieres", "GE", nullptr));
        Return_button->setText(QCoreApplication::translate("filieres", ">>Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class filieres: public Ui_filieres {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILIERES_H
