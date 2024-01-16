#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

const QString USER = "user";
const QString PASSWORD = "supersecretpassword";

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


void MainWindow::on_pushButton_clicked()
{
    QString username = ui->t_username->text();
    QString password = ui->t_password->text();

    if ((username == USER) && (password==PASSWORD)) {
        QMessageBox::Information(this,"Authorization","Success");
    }
    else if (username!=USER) {
        QMessageBox::Warning(this,"Authorization","Bad User");
    }
    else if (username!=PASSWORD) {
        QMessageBox::Warning(this,"Authorization","Bad Password");
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QApplication::quit();
}

