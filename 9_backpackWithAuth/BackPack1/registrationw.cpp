#include "registrationw.h"
#include "ui_registrationw.h"

RegistrationW::RegistrationW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrationW)
{
    ui->setupUi(this);
    authDb = new BackpackDB();
}

RegistrationW::~RegistrationW()
{
    delete ui;
}

void RegistrationW::on_buttonBox_accepted()
{
    QString myLogin  = ui->lineEdit_login->text();
    QString myPass = ui->LineEdit_pass->text();
    QString myRepeatPass = ui->lineEdit_repeatPass->text();
    if (myPass == myRepeatPass) {
        hide();
        authDb->insertUser(myLogin,myPass);
        MainWindow *mw = new MainWindow();
        mw->show();
    }
}

