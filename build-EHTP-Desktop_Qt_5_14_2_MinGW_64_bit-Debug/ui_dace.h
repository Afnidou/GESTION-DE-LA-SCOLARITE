/********************************************************************************
** Form generated from reading UI file 'dace.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DACE_H
#define UI_DACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_dace
{
public:

    void setupUi(QDialog *dace)
    {
        if (dace->objectName().isEmpty())
            dace->setObjectName(QString::fromUtf8("dace"));
        dace->resize(400, 300);

        retranslateUi(dace);

        QMetaObject::connectSlotsByName(dace);
    } // setupUi

    void retranslateUi(QDialog *dace)
    {
        dace->setWindowTitle(QCoreApplication::translate("dace", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dace: public Ui_dace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DACE_H
