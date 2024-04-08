#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_b_ok_clicked()
{
    QString etUser = "user";
    QString etPass = "pass";
    QString myUser = ui->t_login->text();
    QString myPass = ui->t_password->text();
    BackpackDB *backpackDB = new BackpackDB();
    //backpackDB->createDefaultUser();

    if (backpackDB->checkAuth(myUser,myPass)) {
        hide();
        BackPack *w_backpack = new BackPack();
        w_backpack->show();
    }
}


void MainWindow::on_b_registration_clicked()
{
    hide();
    RegistrationW *w_reg = new RegistrationW();
    w_reg->show();


}

