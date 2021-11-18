/********************************************************************************
** Form generated from reading UI file 'evaluation_prof.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVALUATION_PROF_H
#define UI_EVALUATION_PROF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_evaluation_prof
{
public:
    QTableView *tableView;
    QPushButton *ETUDIANT;
    QPushButton *code;
    QPushButton *pushButton_3;
    QPushButton *note;
    QLineEdit *lineEdit_ETUDIANT;
    QLineEdit *lineEdit_CODE;
    QLineEdit *lineEdit_NOTE;
    QDateEdit *dateEdit;
    QPushButton *ADD;
    QPushButton *UPPDATE;
    QPushButton *load;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QDialog *evaluation_prof)
    {
        if (evaluation_prof->objectName().isEmpty())
            evaluation_prof->setObjectName(QString::fromUtf8("evaluation_prof"));
        evaluation_prof->resize(809, 458);
        tableView = new QTableView(evaluation_prof);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(370, 40, 411, 261));
        QFont font;
        font.setPointSize(10);
        tableView->setFont(font);
        ETUDIANT = new QPushButton(evaluation_prof);
        ETUDIANT->setObjectName(QString::fromUtf8("ETUDIANT"));
        ETUDIANT->setGeometry(QRect(10, 60, 151, 41));
        ETUDIANT->setFont(font);
        code = new QPushButton(evaluation_prof);
        code->setObjectName(QString::fromUtf8("code"));
        code->setGeometry(QRect(10, 110, 151, 41));
        code->setFont(font);
        pushButton_3 = new QPushButton(evaluation_prof);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 160, 151, 41));
        pushButton_3->setFont(font);
        note = new QPushButton(evaluation_prof);
        note->setObjectName(QString::fromUtf8("note"));
        note->setGeometry(QRect(10, 210, 151, 41));
        note->setFont(font);
        lineEdit_ETUDIANT = new QLineEdit(evaluation_prof);
        lineEdit_ETUDIANT->setObjectName(QString::fromUtf8("lineEdit_ETUDIANT"));
        lineEdit_ETUDIANT->setGeometry(QRect(150, 60, 191, 41));
        lineEdit_ETUDIANT->setFont(font);
        lineEdit_CODE = new QLineEdit(evaluation_prof);
        lineEdit_CODE->setObjectName(QString::fromUtf8("lineEdit_CODE"));
        lineEdit_CODE->setGeometry(QRect(150, 110, 191, 41));
        lineEdit_CODE->setFont(font);
        lineEdit_NOTE = new QLineEdit(evaluation_prof);
        lineEdit_NOTE->setObjectName(QString::fromUtf8("lineEdit_NOTE"));
        lineEdit_NOTE->setGeometry(QRect(150, 210, 191, 41));
        lineEdit_NOTE->setFont(font);
        dateEdit = new QDateEdit(evaluation_prof);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(150, 160, 191, 41));
        dateEdit->setFont(font);
        ADD = new QPushButton(evaluation_prof);
        ADD->setObjectName(QString::fromUtf8("ADD"));
        ADD->setGeometry(QRect(60, 300, 81, 41));
        ADD->setFont(font);
        UPPDATE = new QPushButton(evaluation_prof);
        UPPDATE->setObjectName(QString::fromUtf8("UPPDATE"));
        UPPDATE->setGeometry(QRect(210, 300, 81, 41));
        UPPDATE->setFont(font);
        load = new QPushButton(evaluation_prof);
        load->setObjectName(QString::fromUtf8("load"));
        load->setGeometry(QRect(380, 310, 391, 41));
        load->setFont(font);
        lineEdit_3 = new QLineEdit(evaluation_prof);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(490, 360, 161, 41));
        pushButton = new QPushButton(evaluation_prof);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(680, 417, 101, 31));

        retranslateUi(evaluation_prof);

        QMetaObject::connectSlotsByName(evaluation_prof);
    } // setupUi

    void retranslateUi(QDialog *evaluation_prof)
    {
        evaluation_prof->setWindowTitle(QCoreApplication::translate("evaluation_prof", "Dialog", nullptr));
        ETUDIANT->setText(QCoreApplication::translate("evaluation_prof", "N\302\260ETUDIANT", nullptr));
        code->setText(QCoreApplication::translate("evaluation_prof", "CODE MATIERE", nullptr));
        pushButton_3->setText(QCoreApplication::translate("evaluation_prof", "DATE", nullptr));
        note->setText(QCoreApplication::translate("evaluation_prof", "NOTE", nullptr));
        ADD->setText(QCoreApplication::translate("evaluation_prof", "ajouter", nullptr));
        UPPDATE->setText(QCoreApplication::translate("evaluation_prof", "modifier", nullptr));
        load->setText(QCoreApplication::translate("evaluation_prof", "Entrez le code de la mat\303\250re pour charger", nullptr));
        pushButton->setText(QCoreApplication::translate("evaluation_prof", ">>retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class evaluation_prof: public Ui_evaluation_prof {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVALUATION_PROF_H
