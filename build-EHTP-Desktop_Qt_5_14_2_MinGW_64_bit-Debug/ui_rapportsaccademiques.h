/********************************************************************************
** Form generated from reading UI file 'rapportsaccademiques.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAPPORTSACCADEMIQUES_H
#define UI_RAPPORTSACCADEMIQUES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_rapportsAccademiques
{
public:
    QPushButton *SEE;
    QPushButton *TRAITEMENT;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *rapportsAccademiques)
    {
        if (rapportsAccademiques->objectName().isEmpty())
            rapportsAccademiques->setObjectName(QString::fromUtf8("rapportsAccademiques"));
        rapportsAccademiques->resize(520, 447);
        SEE = new QPushButton(rapportsAccademiques);
        SEE->setObjectName(QString::fromUtf8("SEE"));
        SEE->setGeometry(QRect(90, 140, 331, 71));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        SEE->setFont(font);
        TRAITEMENT = new QPushButton(rapportsAccademiques);
        TRAITEMENT->setObjectName(QString::fromUtf8("TRAITEMENT"));
        TRAITEMENT->setGeometry(QRect(90, 240, 331, 71));
        TRAITEMENT->setFont(font);
        label = new QLabel(rapportsAccademiques);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 70, 291, 31));
        label->setFont(font);
        pushButton = new QPushButton(rapportsAccademiques);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(380, 370, 121, 51));
        pushButton->setFont(font);

        retranslateUi(rapportsAccademiques);

        QMetaObject::connectSlotsByName(rapportsAccademiques);
    } // setupUi

    void retranslateUi(QDialog *rapportsAccademiques)
    {
        rapportsAccademiques->setWindowTitle(QCoreApplication::translate("rapportsAccademiques", "Dialog", nullptr));
        SEE->setText(QCoreApplication::translate("rapportsAccademiques", "LISTES DES CONTROLES", nullptr));
        TRAITEMENT->setText(QCoreApplication::translate("rapportsAccademiques", "TRAITEMENT", nullptr));
        label->setText(QCoreApplication::translate("rapportsAccademiques", "   RAPPORTS ACADEMIQUES:", nullptr));
        pushButton->setText(QCoreApplication::translate("rapportsAccademiques", ">>Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rapportsAccademiques: public Ui_rapportsAccademiques {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAPPORTSACCADEMIQUES_H
