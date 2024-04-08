#include "backpackdb.h"

BackpackDB::BackpackDB()
{
    QString connName = "db";
    if (QSqlDatabase::contains(connName)) {
        db = QSqlDatabase::database(connName);
    } else {
        db = QSqlDatabase::addDatabase("QSQLITE",connName);
    }
    db.setDatabaseName("./backpackDB.db");
    if (db.open()) {
        qDebug("ok");
    }
    else {
        qDebug("false");
    }
    query = new QSqlQuery(db);

    /*db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./backpackDB.db");
    if (db.open()) {
        qDebug("ok");
    }
    else {
        qDebug("false");
    }
    query = new QSqlQuery(db);*/
}

void BackpackDB::createDefaultUser() {
    query->exec("DROP TABLE Users");
    query->exec("CREATE TABLE Users(Id INTEGER PRIMARY KEY AUTOINCREMENT,Login TEXT,Password TEXT);");
    query->exec("INSERT INTO Users VALUES(1,'user','password');");
}

bool BackpackDB::checkAuth(QString user, QString password) {
    query->prepare("SELECT Login, Password FROM Users WHERE Login=? AND Password=?");
    query->addBindValue(user);
    query->addBindValue(password);
    query->exec();
    if (query->first()) {
        return true;
    } else return false;


}


void BackpackDB::insertUser(QString user, QString password) {
    query->prepare("INSERT INTO Users(Login, Password) VALUES(?,?)");
    query->addBindValue(user);
    query->addBindValue(password);
    query->exec();

}
