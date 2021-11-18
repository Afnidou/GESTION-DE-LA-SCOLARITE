/********************************************************************************
** Form generated from reading UI file 'matiere1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATIERE1_H
#define UI_MATIERE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_matiere1
{
public:
    QPushButton *visualisation;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *TRAIEMENT;

    void setupUi(QDialog *matiere1)
    {
        if (matiere1->objectName().isEmpty())
            matiere1->setObjectName(QString::fromUtf8("matiere1"));
        matiere1->resize(486, 386);
        visualisation = new QPushButton(matiere1);
        visualisation->setObjectName(QString::fromUtf8("visualisation"));
        visualisation->setGeometry(QRect(90, 190, 261, 61));
        label_2 = new QLabel(matiere1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 40, 171, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        pushButton = new QPushButton(matiere1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 300, 91, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        TRAIEMENT = new QPushButton(matiere1);
        TRAIEMENT->setObjectName(QString::fromUtf8("TRAIEMENT"));
        TRAIEMENT->setGeometry(QRect(90, 120, 261, 61));

        retranslateUi(matiere1);

        QMetaObject::connectSlotsByName(matiere1);
    } // setupUi

    void retranslateUi(QDialog *matiere1)
    {
        matiere1->setWindowTitle(QCoreApplication::translate("matiere1", "Dialog", nullptr));
        visualisation->setText(QCoreApplication::translate("matiere1", "VISUALISATION", nullptr));
        label_2->setText(QCoreApplication::translate("matiere1", "LISTES MATIERES :", nullptr));
        pushButton->setText(QCoreApplication::translate("matiere1", ">>Retour  ", nullptr));
        TRAIEMENT->setText(QCoreApplication::translate("matiere1", "TRAITEMENT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class matiere1: public Ui_matiere1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATIERE1_H
