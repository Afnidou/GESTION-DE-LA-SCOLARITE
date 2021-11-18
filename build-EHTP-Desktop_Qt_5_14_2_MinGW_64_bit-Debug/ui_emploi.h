/********************************************************************************
** Form generated from reading UI file 'emploi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOI_H
#define UI_EMPLOI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_emploi
{
public:

    void setupUi(QDialog *emploi)
    {
        if (emploi->objectName().isEmpty())
            emploi->setObjectName(QString::fromUtf8("emploi"));
        emploi->resize(400, 300);

        retranslateUi(emploi);

        QMetaObject::connectSlotsByName(emploi);
    } // setupUi

    void retranslateUi(QDialog *emploi)
    {
        emploi->setWindowTitle(QCoreApplication::translate("emploi", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class emploi: public Ui_emploi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOI_H
