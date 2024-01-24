#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

const QString USER = "user";
const QString PASSWORD = "password";

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


void MainWindow::on_b_quit_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::question(this,"qiut","Do you have quit", QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes) {
        QAplication::quit();
    }
    else {
        qDebug("User asked No");
    }

}


void MainWindow::on_b_signIn_clicked()
{
    QString username = ui->t_login->text();
    QString password = ui->t_pass->text();
}

