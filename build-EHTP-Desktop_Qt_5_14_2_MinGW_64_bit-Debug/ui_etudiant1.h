/********************************************************************************
** Form generated from reading UI file 'etudiant1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETUDIANT1_H
#define UI_ETUDIANT1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ETUDIANT1
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *visualisation;
    QPushButton *traitement;
    QPushButton *pushButton;

    void setupUi(QDialog *ETUDIANT1)
    {
        if (ETUDIANT1->objectName().isEmpty())
            ETUDIANT1->setObjectName(QString::fromUtf8("ETUDIANT1"));
        ETUDIANT1->resize(581, 414);
        label = new QLabel(ETUDIANT1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 30, 311, 321));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/Etudiant.jpg")));
        label_2 = new QLabel(ETUDIANT1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 80, 231, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        visualisation = new QPushButton(ETUDIANT1);
        visualisation->setObjectName(QString::fromUtf8("visualisation"));
        visualisation->setGeometry(QRect(290, 130, 231, 51));
        QFont font1;
        font1.setPointSize(10);
        visualisation->setFont(font1);
        traitement = new QPushButton(ETUDIANT1);
        traitement->setObjectName(QString::fromUtf8("traitement"));
        traitement->setGeometry(QRect(290, 190, 231, 51));
        traitement->setFont(font1);
        pushButton = new QPushButton(ETUDIANT1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(444, 362, 101, 41));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);

        retranslateUi(ETUDIANT1);

        QMetaObject::connectSlotsByName(ETUDIANT1);
    } // setupUi

    void retranslateUi(QDialog *ETUDIANT1)
    {
        ETUDIANT1->setWindowTitle(QCoreApplication::translate("ETUDIANT1", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("ETUDIANT1", "LISTE DES ETUDIANTS :", nullptr));
        visualisation->setText(QCoreApplication::translate("ETUDIANT1", "Visualisation", nullptr));
        traitement->setText(QCoreApplication::translate("ETUDIANT1", "Traitement", nullptr));
        pushButton->setText(QCoreApplication::translate("ETUDIANT1", ">>Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ETUDIANT1: public Ui_ETUDIANT1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETUDIANT1_H
