#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./testDB.db");
    if(db.open()) {
        qDebug("open");
    } else {
        qDebug("not open");
    }
    query = new QSqlQuery(db);
    query->exec("CREATE TABLE telephoneBook(Firstname TEXT, Lastname Text, Telephone INT);");
    model = new QSqlTableModel(this,db);
    model->setTable("TelephoneBook");
    model->select();

    ui->tableView->setModel(model);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_b_add_clicked()
{
    model->insertRow(model->rowCount());
    ui->tableView->setModel(model);

}


void MainWindow::on_b_clear_clicked()
{
    model->removeRow(row);
}


void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}

