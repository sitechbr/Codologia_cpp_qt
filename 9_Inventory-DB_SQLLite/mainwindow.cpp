#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QSqlError"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db= QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/dino/inventory/sqlite.db");


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //db = QSqlDatabase::addDatabase("QSQLITE");
    //db.setDatabaseName("/home/dino/inventory/sqlite.db");

//    if (!db.open())
//    {
//        qDebug() << db.lastError().text();

//    }

    db.open();



    QSqlQuery q;
    QString data ="";
    q.exec("SELECT * FROM ASSETS;");
    while (q.next()) {
        data+=q.value(0).toString() + "=:=";
        data+=q.value(1).toString() + "\n";
    }
    ui->textEdit->setText(data);
    q.clear();
    db.close();
}
