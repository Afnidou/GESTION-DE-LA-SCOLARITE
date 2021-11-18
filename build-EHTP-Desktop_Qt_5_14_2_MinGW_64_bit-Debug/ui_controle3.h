/********************************************************************************
** Form generated from reading UI file 'controle3.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLE3_H
#define UI_CONTROLE3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_controle3
{
public:
    QPushButton *student;
    QPushButton *matiere;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *controle3)
    {
        if (controle3->objectName().isEmpty())
            controle3->setObjectName(QString::fromUtf8("controle3"));
        controle3->resize(400, 379);
        student = new QPushButton(controle3);
        student->setObjectName(QString::fromUtf8("student"));
        student->setGeometry(QRect(90, 120, 191, 51));
        QFont font;
        font.setPointSize(10);
        student->setFont(font);
        matiere = new QPushButton(controle3);
        matiere->setObjectName(QString::fromUtf8("matiere"));
        matiere->setGeometry(QRect(90, 190, 191, 51));
        matiere->setFont(font);
        label = new QLabel(controle3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 70, 281, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        pushButton = new QPushButton(controle3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 320, 121, 31));

        retranslateUi(controle3);

        QMetaObject::connectSlotsByName(controle3);
    } // setupUi

    void retranslateUi(QDialog *controle3)
    {
        controle3->setWindowTitle(QCoreApplication::translate("controle3", "Dialog", nullptr));
        student->setText(QCoreApplication::translate("controle3", "L'ETUDIANT", nullptr));
        matiere->setText(QCoreApplication::translate("controle3", "LA MATIERE", nullptr));
        label->setText(QCoreApplication::translate("controle3", "        FILTRAGE SELON :", nullptr));
        pushButton->setText(QCoreApplication::translate("controle3", ">>Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class controle3: public Ui_controle3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLE3_H
