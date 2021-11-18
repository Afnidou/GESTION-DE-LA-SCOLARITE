/********************************************************************************
** Form generated from reading UI file 'controle5.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLE5_H
#define UI_CONTROLE5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_controle5
{
public:
    QTableView *tableView;
    QPushButton *code;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *controle5)
    {
        if (controle5->objectName().isEmpty())
            controle5->setObjectName(QString::fromUtf8("controle5"));
        controle5->resize(534, 429);
        QFont font;
        font.setPointSize(10);
        controle5->setFont(font);
        tableView = new QTableView(controle5);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 40, 421, 291));
        code = new QPushButton(controle5);
        code->setObjectName(QString::fromUtf8("code"));
        code->setGeometry(QRect(60, 340, 181, 41));
        lineEdit = new QLineEdit(controle5);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(240, 340, 211, 41));
        pushButton = new QPushButton(controle5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(420, 390, 93, 28));

        retranslateUi(controle5);

        QMetaObject::connectSlotsByName(controle5);
    } // setupUi

    void retranslateUi(QDialog *controle5)
    {
        controle5->setWindowTitle(QCoreApplication::translate("controle5", "Dialog", nullptr));
        code->setText(QCoreApplication::translate("controle5", "CODE DE LA MTIERE:", nullptr));
        pushButton->setText(QCoreApplication::translate("controle5", ">>Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class controle5: public Ui_controle5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLE5_H
