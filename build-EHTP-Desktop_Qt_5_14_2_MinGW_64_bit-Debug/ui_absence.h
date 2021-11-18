/********************************************************************************
** Form generated from reading UI file 'absence.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABSENCE_H
#define UI_ABSENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_absence
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QDialog *absence)
    {
        if (absence->objectName().isEmpty())
            absence->setObjectName(QString::fromUtf8("absence"));
        absence->resize(573, 417);
        tableView = new QTableView(absence);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(60, 30, 431, 281));
        pushButton = new QPushButton(absence);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 320, 191, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        label = new QLabel(absence);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 380, 291, 16));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        pushButton_2 = new QPushButton(absence);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 370, 111, 31));

        retranslateUi(absence);

        QMetaObject::connectSlotsByName(absence);
    } // setupUi

    void retranslateUi(QDialog *absence)
    {
        absence->setWindowTitle(QCoreApplication::translate("absence", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("absence", "LOAD TABLE", nullptr));
        label->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("absence", ">>Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class absence: public Ui_absence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABSENCE_H
