#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

//using namespace QMessageBox;

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


void MainWindow::on_b_message1_clicked()
{
    QMessageBox::about(this,"Header Windows","Simple text in Box");
}


void MainWindow::on_b_message2_clicked()
{
    QMessageBox::aboutQt(this);
}


void MainWindow::on_b_message3_clicked()
{
    QMessageBox::critical(this,"Header Windows","Simple text in Box");
}


void MainWindow::on_b_message4_clicked()
{
    QMessageBox::information(this,"Header Windows","Simple text in Box");
}


void MainWindow::on_b_message5_clicked()
{
    QMessageBox::warning(this,"Header Windows","Simple text in Box");
}


void MainWindow::on_b_close_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::question(this,"qiut","Do you have quit", QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes) {
        QAplication::quit();
    }
    else {
        qDebug("User asked No");
    }

}

