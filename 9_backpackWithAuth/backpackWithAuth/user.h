#ifndef USER_H
#define USER_H
#include <QString>


class User
{
private:
    QString login;
    QString password;


public:
    User();
    QString getLogin();
    QString getPassword();
};


#endif // USER_H
