#include "headers/accueille.h"
#include <QApplication>
#include <QSplashScreen>

//static const QString path = ".projet.db";

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/resource/resource/bg.png"));
    splash->show();
    Qt::Alignment topRight = Qt::AlignRight | Qt::AlignTop;
    splash->showMessage(QObject::tr("miandry ry adala ah..."),topRight, Qt::white);
    Accueille w;
    splash->showMessage(QObject::tr("mbola miandry ihany ry adala ..."),topRight,Qt::white);
    splash->showMessage(QObject::tr("miandry!!"),topRight,Qt::white);
    w.show();

    splash->finish(&w);
    delete splash;
//    modif_db dao(path);
//        if(dao.isopen())
//        {

//dao.createTable("CREATE TABLE people(id int auto_increment,"
                       // "name varchar(30))");
//        dao.addDB("zaza");
//        dao.addDB("fafa");
//        dao.addDB("toto");
//        dao.DBExist("fafa");
//        dao.printAllDBEmployee();
//        dao.removeDB("zaza");
//        dao.removeDB("zaza");
//        dao.removeDB("zaza");
//        dao.removeDB("zaza");
//        dao.printAllDB();
//        }
    return a.exec();
}
