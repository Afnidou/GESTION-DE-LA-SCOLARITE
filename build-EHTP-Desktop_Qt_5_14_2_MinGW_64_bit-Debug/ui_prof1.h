/********************************************************************************
** Form generated from reading UI file 'prof1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROF1_H
#define UI_PROF1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Prof1
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Prof1)
    {
        if (Prof1->objectName().isEmpty())
            Prof1->setObjectName(QString::fromUtf8("Prof1"));
        Prof1->resize(673, 446);
        pushButton = new QPushButton(Prof1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 170, 211, 51));
        QFont font;
        font.setPointSize(11);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(Prof1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 240, 211, 51));
        pushButton_2->setFont(font);
        label = new QLabel(Prof1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 130, 251, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(Prof1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 100, 321, 231));
        label_2->setFont(font);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/PROF.jpg")));
        pushButton_3 = new QPushButton(Prof1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 390, 131, 41));
        QFont font2;
        font2.setPointSize(12);
        pushButton_3->setFont(font2);

        retranslateUi(Prof1);

        QMetaObject::connectSlotsByName(Prof1);
    } // setupUi

    void retranslateUi(QDialog *Prof1)
    {
        Prof1->setWindowTitle(QCoreApplication::translate("Prof1", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Prof1", "VISUALISATION", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Prof1", "TRAITEMENT ", nullptr));
        label->setText(QCoreApplication::translate("Prof1", "  LISTE DES PROFS :", nullptr));
        label_2->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("Prof1", ">>Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Prof1: public Ui_Prof1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROF1_H
