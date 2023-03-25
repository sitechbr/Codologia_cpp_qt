#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "personal.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Список сотрудников");
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setColumnWidth(0,350);
    ui->tableWidget->setColumnWidth(2,350);
    QStringList titul;
    titul<<"Name"<<"Age"<<"Position";
    ui->tableWidget->setHorizontalHeaderLabels(titul);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_pressed()
{
    int res,age;
    QString name, position;

    Personal pd(this);
    pd.setWindowTitle("Добавить сотрудника");
    pd.exec();
    if (res== QDialog::Rejected)
        return;
    name =pd.name();
    age=pd.age();
    position = pd.position();
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    int rowN = ui->tableWidget->rowCount()-1;
    ui->tableWidget->setItem(rowN,0,new QTableWidgetItem(name));
    ui->tableWidget->setItem(rowN,1,new QTableWidgetItem(QString::number(age)));
    ui->tableWidget->setItem(rowN,2,new QTableWidgetItem(position));



}
