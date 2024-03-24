#include "user.h"

User::User()
{

}

QString User::getLogin() {
    return this->login;
}

QString User::getPassword() {
    return this->password;
}
