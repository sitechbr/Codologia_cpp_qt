#ifndef BACKPACKDB_H
#define BACKPACKDB_H
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>



class BackpackDB
{
private:
    QSqlDatabase db;
    QSqlQuery *query;


public:
    bool checkAuth(QString user, QString password);
    void createDefaultUser();
    void insertUser(QString user, QString password);
    BackpackDB();

};

#endif // BACKPACKDB_H
