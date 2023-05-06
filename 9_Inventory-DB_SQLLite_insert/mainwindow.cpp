#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QSqlError"
#include "addedasset.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db= QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/dino/inventory/sqlite.db");

    setWindowTitle("Список оборудования");
    ui->tableWidget->setColumnCount(5);

    QStringList titul;
    titul<<"Name"<<"SerialN"<<"CPU"<<"Memory"<<"HDD";
    ui->tableWidget->setHorizontalHeaderLabels(titul);

}

MainWindow::~MainWindow()
{
    delete ui;
}

class Asset {
public:
    QString name;
    QString serialNumber;
    QString CPU;
    QString memory;
    QString HDD;
};


void MainWindow::on_pushButton_clicked()
{
    ui->tableWidget->setRowCount(0);
    db.open();



    QSqlQuery q;
    q.exec("SELECT * FROM ASSETS;");
    while (q.next()) {
        Asset arm;
        arm.name =q.value(1).toString();
        arm.serialNumber = q.value(2).toString();
        arm.CPU = q.value(3).toString();
        arm.memory=q.value(4).toString();
        arm.HDD = q.value(5).toString();

        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        int rowN = ui->tableWidget->rowCount()-1;
        ui->tableWidget->setItem(rowN,0,new QTableWidgetItem(arm.name));
        ui->tableWidget->setItem(rowN,1,new QTableWidgetItem(arm.serialNumber));
        ui->tableWidget->setItem(rowN,2,new QTableWidgetItem(arm.CPU));
        ui->tableWidget->setItem(rowN,3,new QTableWidgetItem(arm.HDD));
        ui->tableWidget->setItem(rowN,4,new QTableWidgetItem(arm.memory));


    }

    q.clear();
    db.close();
}

void MainWindow::on_pushButton_2_clicked()
{
    int res;
    Asset arm;
    AddedAsset pd(this);
    pd.setWindowTitle("Добавить оборудование");
    res= pd.exec();
    if (res== QDialog::Rejected)
        return;
    arm.name =pd.name();
    arm.serialNumber=pd.serialN();
    arm.CPU = pd.CPU();
    arm.memory = pd.Memory();
    arm.HDD = pd.HDD();
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    int rowN = ui->tableWidget->rowCount()-1;
    ui->tableWidget->setItem(rowN,0,new QTableWidgetItem(arm.name));
    ui->tableWidget->setItem(rowN,1,new QTableWidgetItem(arm.serialNumber));
    ui->tableWidget->setItem(rowN,2,new QTableWidgetItem(arm.CPU));
    ui->tableWidget->setItem(rowN,3,new QTableWidgetItem(arm.memory));
    ui->tableWidget->setItem(rowN,4,new QTableWidgetItem(arm.HDD));


    db.open();
    QSqlQuery q;

    q.prepare("INSERT INTO ASSETS (id,name,serial_number,CPU,memory,HDD) "
                     "VALUES (1,?,?,?,?,?)");
    q.addBindValue(arm.name);
    q.addBindValue(arm.serialNumber);
    q.addBindValue(arm.CPU);
    q.addBindValue(arm.memory);
    q.addBindValue(arm.HDD);
    q.exec();


    q.clear();
    db.close();
}

void MainWindow::on_pushButton_3_clicked()
{
    db.open();
    QSqlQuery q;
    q.exec("insert into ASSETS (id, name , serial_number, CPU ,memory , HDD)"
           "values (1, 'cit-ws0022', '2304040', 4,8000, 256);");
    q.clear();
    db.close();
}

