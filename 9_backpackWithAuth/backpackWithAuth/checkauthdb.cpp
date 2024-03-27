#include "checkauthdb.h"



CheckAuthDB::CheckAuthDB()
{
    QString m_connectionName = "db_resources";


    if( QSqlDatabase::contains( m_connectionName) )
    {
        db = QSqlDatabase::database(m_connectionName );
        //Do stuff...
    }
    else
    {
        db = QSqlDatabase::addDatabase(QStringLiteral("QSQLITE"), m_connectionName);
    }
    db.setDatabaseName("./backpackDB.db");
    if(db.open()) {
            qDebug("open");
        } else {
            qDebug("not open");
        }
        query = new QSqlQuery(db);
        //query->exec("drop table Users;");
        //Squery->exec("CREATE TABLE Users(Id int, Login Text, Password Text);");
        //query->exec("INSERT INTO Users VALUES(1,'user','password');");


}

CheckAuthDB::~CheckAuthDB() {
    db.close();

}
void CheckAuthDB::dbClose() {
    db.close();
    QSqlDatabase::removeDatabase("QSQLITE");
}

bool CheckAuthDB::checkAuth(QString user, QString password) {
    query->prepare("SELECT Login, Password FROM Users  where Login=? and password=?;");
    query->addBindValue(user);
    query->addBindValue(password);
    query->exec();
    //qDebug () << query->first();
    if (query->first())
        return true;
    else
        return false;
    /*
    while (query->next()) {
        qDebug("start_test");
        qDebug(query->value(0).toString().toLatin1());
        qDebug(query->value(1).toString().toLatin1());
        qDebug("end_test");
    }

    if (user=="user" and password == "password")
        return true;
    else
        return false;
        */
}

void CheckAuthDB::createDefaultUser() {
    query->exec("INSERT INTO Users VALUES(1,'user','password');");
}

void CheckAuthDB::addUser(QString user, QString password) {
    query->prepare("INSERT INTO Users VALUES (1,?,?);");
    query->addBindValue(user);
    query->addBindValue(password);
    query->exec();

}
