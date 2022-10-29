//#include "headers/db_manager.h"


//db_manager::db_manager(const QString &path)
//{
//    db = QSqlDatabase::addDatabase("QSQLITE");
//    db.setDatabaseName(path);


//    if(!db.open())
//    {
//        qDebug()<< "Error:not connected" ;
//    }
//    else
//    {
//        qDebug()<< "success: connected" ;
//    }
//}
//db_manager::~db_manager()
//{

//    if(db.open()){
//        db.close();
//    }
//}

//bool db_manager::isopen() const
//{
//    return db.isOpen();
//}

//bool db_manager::createTable(const QString &sql)
//{
//    bool success = false;
//    QSqlQuery qry;
//    qry.prepare(sql);

//    if(!qry.exec())
//    {
//        qDebug()<< "Error:already exist connected" ;
//        success = false;
//    }

//    return success;
//}

