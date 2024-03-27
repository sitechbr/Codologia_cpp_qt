#include "registration_window.h"
#include "ui_registration_window.h"

Registration_window::Registration_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registration_window)
{
    ui->setupUi(this);
    authDB = new CheckAuthDB();
}

Registration_window::~Registration_window()
{
    delete ui;
    authDB->dbClose();

}

void Registration_window::on_buttonBox_accepted()
{
    QString newLogin = ui->lineLogin->text();
    QString newPass1 = ui->linePassword->text();
    QString newPass2 = ui->linePassword2->text();

    if (newPass1 == newPass2) {
        hide();
        MainWindow *w_auth =new MainWindow(this);
        authDB->addUser(newLogin,newPass1);
        w_auth->show();
    }

}


void Registration_window::on_buttonBox_rejected()
{
    hide();
    MainWindow *w_auth =new MainWindow(this);
    w_auth->show();
}

