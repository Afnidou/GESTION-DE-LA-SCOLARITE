#include "acceuil.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug()<<"start";
    qDebug()<<"finish";
    Acceuil w;
    w.show();
    return a.exec();
}
