#ifndef DRIVERDB_H
#define DRIVERDB_H
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>

void createMagazineTable(QSqlDatabase* db);
QSqlDatabase connectionDB();
void addThing2BackPack(QSqlDatabase* db, QString thing);
void createBackPackTable(QSqlDatabase* db);
bool checkThing(QSqlDatabase* db, QString thing);
void delThing(QSqlDatabase* db, QString thing);


#endif
