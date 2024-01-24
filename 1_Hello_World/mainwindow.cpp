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


void MainWindow::on_b_send_pressed()
{
    if (ui->text_chat->toPlainText().isEmpty()) {
        ui->text_chat->setText(ui->text_message->text());
    }
    else {
        ui->text_chat->setText(ui->text_chat->toPlainText()+'\r\n' + ui->text_message->text());
    }

}


void MainWindow::on_b_clear_pressed()
{
    ui->text_chat->clear();
}


void MainWindow::on_b_close_clicked()
{
    this->close();
}

