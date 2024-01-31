#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_b_showimg_clicked()
{
    ui->statusbar->showMessage("My garazh");
    ui->label->setStyleSheet("border-image:url(\":/img/img/bmw.png\")");
}

