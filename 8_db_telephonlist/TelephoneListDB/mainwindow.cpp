#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./testDB.db");
    if (db.open()) {
        qDebug("open");
    } else {
        qDebug("error");
    }
    query = new QSqlQuery(db);
    query->exec("CREATE TABLE telephoneBook(Firstname Text,Lastname Text, Telephone Int);");
    model = new QSqlTableModel(this,db);
    model->setTable("telephoneBook");
    model->select();
    ui->tableView->setModel(model);

}

MainWindow::~MainWindow()
{
    delete ui;
    }


void MainWindow::on_b_add_clicked()
{
    //query->exec("INSERT INTO telephoneBook (Firstname, Lastname, Telephone) VALUES ('Nest', 'Bris', 123);");
    //model->setTable("telephoneBook");
    //model->select();
    model->insertRow(model->rowCount());
    ui->tableView->setModel(model);

}


void MainWindow::on_b_del_clicked()
{
    model->removeRow(row);
}


void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}

