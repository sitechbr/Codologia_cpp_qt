#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>

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
    //QMessageBox::about(this,"Заголовок","Просто текст внутри");
    //QMessageBox::critical(this,"Заголовок","Просто текст внутри");
    QMessageBox::StandardButton reply =
            QMessageBox::question(this, "Заголовок",
                         "Вы хотите закрыть это окно",
                         QMessageBox::Yes |QMessageBox::No );
    if (reply==QMessageBox::Yes) {
        QApplication::quit();
    } else {
        qDebug() <<"Кнопка нет была нажата";

    }

}
