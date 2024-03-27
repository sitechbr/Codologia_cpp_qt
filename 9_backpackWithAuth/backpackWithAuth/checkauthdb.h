#ifndef CHECKAUTHDB_H
#define CHECKAUTHDB_H
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>
#include "user.h"

class CheckAuthDB
{
private:
    QSqlDatabase db;
    QSqlQuery *query;
    QSqlTableModel *model;


public:
    CheckAuthDB();
    ~CheckAuthDB();
    bool checkAuth(QString user, QString password);
    void createDefaultUser();
    void addUser(QString user, QString password);
    void dbClose();
};

#endif // CHECKAUTHDB_H
