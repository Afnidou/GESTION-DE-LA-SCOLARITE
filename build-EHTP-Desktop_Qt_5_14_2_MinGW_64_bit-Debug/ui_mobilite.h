/********************************************************************************
** Form generated from reading UI file 'mobilite.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOBILITE_H
#define UI_MOBILITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_mobilite
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *mobilite)
    {
        if (mobilite->objectName().isEmpty())
            mobilite->setObjectName(QString::fromUtf8("mobilite"));
        mobilite->resize(574, 402);
        tableView = new QTableView(mobilite);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 70, 531, 241));
        pushButton = new QPushButton(mobilite);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 20, 231, 41));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        lineEdit = new QLineEdit(mobilite);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(320, 20, 161, 41));
        pushButton_2 = new QPushButton(mobilite);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 330, 151, 41));
        pushButton_3 = new QPushButton(mobilite);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 330, 171, 41));

        retranslateUi(mobilite);

        QMetaObject::connectSlotsByName(mobilite);
    } // setupUi

    void retranslateUi(QDialog *mobilite)
    {
        mobilite->setWindowTitle(QCoreApplication::translate("mobilite", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("mobilite", "Entrez votre filiere:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("mobilite", ">>Retour", nullptr));
        pushButton_3->setText(QCoreApplication::translate("mobilite", "Load", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mobilite: public Ui_mobilite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOBILITE_H
