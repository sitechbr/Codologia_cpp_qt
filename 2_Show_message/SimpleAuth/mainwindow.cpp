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
        QMessageBox::information(this,"Authorization","Success");
    }
    else if (username!=USER) {
        QMessageBox::warning(this,"Authorization","Bad User");
    }
    else if (username!=PASSWORD) {
        QMessageBox::warning(this,"Authorization","Bad Password");
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::question(this, "Question","Yes or No?",QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    }
    else {
        qDebug("User asked No");
    }
}

