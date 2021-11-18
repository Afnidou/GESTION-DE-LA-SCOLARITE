#ifndef ACCEUIL_H
#define ACCEUIL_H
#include<QDebug>
#include<QtSql>
#include<QFileInfo>
#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class Acceuil; }
QT_END_NAMESPACE

class Acceuil : public QMainWindow
{
    Q_OBJECT
public:
    QSqlDatabase database;
    void connClose()
    {
        database.close();
        database.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen()
    {  database=QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("C:/Users/hp/Downloads/HELLO/HELLO/test.db"); //VOUS DEVREZ CHANGER SE LIEN VERS LE LIEN DE L'EMPLACEMENT de la base de donneé qui se trouve dans le dossier du projet ou vers un lein qlq 
        if(!database.open())
           { qDebug()<<"ERREUR";
            return false ;}
        else {return true;}
    }
public:
    Acceuil(QWidget *parent = nullptr);
    ~Acceuil();

private slots:
    void on_se_connecter_clicked();

private:
    Ui::Acceuil *ui;
};
#endif // ACCEUIL_H
