#include "driverdb.h"

QSqlDatabase connectionDB() {
    QString connName = "db";
    QSqlDatabase db;

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
    return db;
}

void createMagazineTable(QSqlDatabase* db) {
    QSqlQuery* query = new QSqlQuery(*db);
    query->exec("DROP TABLE Market");
    query->exec("CREATE TABLE Market(Id INTEGER PRIMARY KEY AUTOINCREMENT,thing TEXT,price Int);");
}


void createBackPackTable(QSqlDatabase* db) {
    QSqlQuery* query = new QSqlQuery(*db);
    query->exec("DROP TABLE BackPack");
    query->exec("CREATE TABLE BackPack(Id INTEGER PRIMARY KEY AUTOINCREMENT,thing TEXT,count Int);");
}

void addThing2BackPack(QSqlDatabase* db, QString thing) {
    QSqlQuery* query = new QSqlQuery(*db);
    query->prepare("INSERT INTO BackPack(thing, count) VALUES(?,1);");
    query->addBindValue(thing);
    query->exec();
}

bool checkThing(QSqlDatabase* db, QString thing) {
    QSqlQuery* query = new QSqlQuery(*db);
    query->prepare("SELECT thing FROM BackPack WHERE thing=?;");
    query->addBindValue(thing);
    query->exec();
    if (query->first()) {
        return true;
    } else return false;
}


void delThing(QSqlDatabase* db, QString thing) {
    QSqlQuery* query = new QSqlQuery(*db);
    query->prepare("Delete FROM BackPack WHERE thing=?;");
    query->addBindValue(thing);
    query->exec();

}

