/********************************************************************************
** Form generated from reading UI file 'acceuil.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCEUIL_H
#define UI_ACCEUIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Acceuil
{
public:
    QWidget *centralwidget;
    QListView *listView;
    QPushButton *se_connecter;
    QPushButton *pushButton;
    QLineEdit *user;
    QPushButton *pushButton_2;
    QLineEdit *mdp;
    QLabel *label;
    QLabel *label_resultat;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Acceuil)
    {
        if (Acceuil->objectName().isEmpty())
            Acceuil->setObjectName(QString::fromUtf8("Acceuil"));
        Acceuil->setEnabled(true);
        Acceuil->resize(772, 472);
        centralwidget = new QWidget(Acceuil);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(290, 30, 441, 361));
        se_connecter = new QPushButton(centralwidget);
        se_connecter->setObjectName(QString::fromUtf8("se_connecter"));
        se_connecter->setGeometry(QRect(430, 250, 171, 41));
        QFont font;
        font.setPointSize(12);
        se_connecter->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 130, 141, 41));
        QFont font1;
        font1.setPointSize(10);
        pushButton->setFont(font1);
        user = new QLineEdit(centralwidget);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(470, 130, 201, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 180, 141, 41));
        pushButton_2->setFont(font1);
        mdp = new QLineEdit(centralwidget);
        mdp->setObjectName(QString::fromUtf8("mdp"));
        mdp->setGeometry(QRect(470, 180, 201, 41));
        mdp->setEchoMode(QLineEdit::Password);
        mdp->setDragEnabled(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 381, 301));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/logo.png")));
        label_resultat = new QLabel(centralwidget);
        label_resultat->setObjectName(QString::fromUtf8("label_resultat"));
        label_resultat->setGeometry(QRect(40, 400, 661, 21));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_resultat->setFont(font2);
        Acceuil->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Acceuil);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 772, 26));
        Acceuil->setMenuBar(menubar);
        statusbar = new QStatusBar(Acceuil);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Acceuil->setStatusBar(statusbar);

        retranslateUi(Acceuil);

        QMetaObject::connectSlotsByName(Acceuil);
    } // setupUi

    void retranslateUi(QMainWindow *Acceuil)
    {
        Acceuil->setWindowTitle(QCoreApplication::translate("Acceuil", "Acceuil", nullptr));
        se_connecter->setText(QCoreApplication::translate("Acceuil", "se connecter", nullptr));
        pushButton->setText(QCoreApplication::translate("Acceuil", "Nom d'utilisateur:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Acceuil", "Mot-de-passe:", nullptr));
        label->setText(QString());
        label_resultat->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Acceuil: public Ui_Acceuil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCEUIL_H
