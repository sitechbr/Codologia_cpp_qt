#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_push_clicked()
{
    int firstNumber = ui->t_firstN->toPlainText().toInt();
    int secondNumber = ui->t_secondN->toPlainText().toInt();
    int result = firstNumber+secondNumber;

    ui->label->setText(QString::number(result));
}
