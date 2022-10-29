//#include "headers/modif_db.h"
//#include <QSqlError>
//#include <QSqlQuery>
//#include <QSqlRecord>
//#include <QDebug>

//modif_db::modif_db(const QString& path):
//    db_manager(path){

//}
//bool modif_db::addDbEmployee(const QString& name)
//{
//    bool success = false;
//    if(!name.isEmpty())
//    {
//        QSqlQuery qryAdd;
//        qryAdd.prepare("INSERT INTO `Employee`(name) VALUES(:name)");
//        qryAdd.bindValue(":name", name);
//        if(qryAdd.exec())
//        {
//                success = true;

//        }
//        else
//        {
//                qDebug() << "add personn failed" << qryAdd.lastError();

//        }
//    }
//    else{
//          qDebug() << "add personn failed: name cannot be Empty";
//        }

//    return success;
//}
//bool modif_db::removeDbEmployee(const QString &name)
//        {
//                bool success = false;
//                if(DBExistEmployee(name))
//                {
//                QSqlQuery qrydlt;
//                qrydlt.prepare("DELETE FROM `people` WHERE name = (:name)");
//                qrydlt.bindValue(":name", name);
//                success = qrydlt.exec();

//                    if(!success)
//                {
//                 qDebug() << "remove personn failed" << qrydlt.lastError();
//                 }


//                }
//                else{
//                qDebug() << "remove personn failed: personne doesnt exist";
//                }
//                return success;
//        }
//void modif_db::printAllDBEmployee() const
//{
//     qDebug() << "Employee in db : ";
//     QSqlQuery qry;
//     qry.exec("SELECT * FROM `Employee`");
//     int idName = qry.record().indexOf("nom, prenom");
//     while(qry.next())
//     {
//         QString name = qry.value(idName).toString();
//          qDebug() << "===" << name;
//     }
//}
//bool modif_db::DBExistEmployee(const QString &name)
//{
//    bool exist = false;

//    QSqlQuery check;
//    check.prepare("SELECT matricule FROM `people` WHERE name = (:name)");
//    check.bindValue(":name", name);

//    if(check.exec())
//    {
//        if(check.next())
//        {
//            exist = true;
//        }
//    }
//    else
//    {
//         qDebug() << " personn exists failed" << check.lastError();
//    }
//    return exist;
//}
