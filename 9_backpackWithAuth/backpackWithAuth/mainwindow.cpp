#include "mainwindow.h"
#include "ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    authDB = new CheckAuthDB();
    //authDB->createDefaultUser();
}

MainWindow::~MainWindow()
{
    delete ui;
    authDB->dbClose();
}


void MainWindow::on_pushSignIn_clicked()
{
    QString myUser = ui->lineUser->text();
    QString myPassword = ui->linePassword->text();
    if (authDB->checkAuth(myUser,myPassword)) {
        hide();
        authDB->~CheckAuthDB();
        authDB->dbClose();
        BackPack_window *w_backpack =new BackPack_window(this);
        w_backpack->show();

    }

}


void MainWindow::on_pushRegistartion_clicked()
{
    hide();
    authDB->~CheckAuthDB();
    authDB->dbClose();
    Registration_window *w_registration =new Registration_window(this);
    w_registration->show();

}

