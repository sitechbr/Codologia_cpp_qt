#ifndef REGISTRATIONW_H
#define REGISTRATIONW_H

#include <QDialog>
#include "mainwindow.h"
#include "backpackdb.h"

namespace Ui {
class RegistrationW;
}

class RegistrationW : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrationW(QWidget *parent = nullptr);
    ~RegistrationW();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::RegistrationW *ui;
    BackpackDB *authDb;

};

#endif // REGISTRATIONW_H
