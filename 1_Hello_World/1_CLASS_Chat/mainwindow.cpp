#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

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


void MainWindow::on_b_button_clicked()
{
    QString message=ui->t_message->text();
    QString chatText=ui->pt_chat->toPlainText();
    ui->pt_chat->document()->setPlainText(chatText + '\r\n'+ message);


}


void MainWindow::on_b_clear_clicked()
{
    ui->pt_chat->clear();
}


void MainWindow::on_b_close_clicked()
{
    this->close();

}

