/********************************************************************************
** Form generated from reading UI file 'matiere2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATIERE2_H
#define UI_MATIERE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_matiere2
{
public:
    QTableView *tableView;
    QPushButton *matiere2_2;
    QPushButton *pushButton;

    void setupUi(QDialog *matiere2)
    {
        if (matiere2->objectName().isEmpty())
            matiere2->setObjectName(QString::fromUtf8("matiere2"));
        matiere2->resize(514, 478);
        tableView = new QTableView(matiere2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(45, 40, 401, 321));
        matiere2_2 = new QPushButton(matiere2);
        matiere2_2->setObjectName(QString::fromUtf8("matiere2_2"));
        matiere2_2->setGeometry(QRect(140, 390, 191, 51));
        QFont font;
        font.setPointSize(10);
        matiere2_2->setFont(font);
        pushButton = new QPushButton(matiere2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 422, 101, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);

        retranslateUi(matiere2);

        QMetaObject::connectSlotsByName(matiere2);
    } // setupUi

    void retranslateUi(QDialog *matiere2)
    {
        matiere2->setWindowTitle(QCoreApplication::translate("matiere2", "Dialog", nullptr));
        matiere2_2->setText(QCoreApplication::translate("matiere2", "LOAD TABLE", nullptr));
        pushButton->setText(QCoreApplication::translate("matiere2", ">>Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class matiere2: public Ui_matiere2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATIERE2_H
