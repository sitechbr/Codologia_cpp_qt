#include "backpack.h"
#include "ui_backpack.h"
#include "driverdb.h"
#include "magazine.h"

static void createDbAndTable() {
    QSqlDatabase db = connectionDB();
    createMagazineTable(&db);
}

BackPack::BackPack(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BackPack)
{
    ui->setupUi(this);
    update();

}

BackPack::~BackPack()
{
    delete ui;
}


void BackPack::on_pushButton_clicked()
{
    //createDbAndTable();
    hide();
    Magazine *w_magazine = new Magazine();
    w_magazine->show();
}


void BackPack::on_pushButton_2_clicked()
{
    QSqlDatabase db = connectionDB();
    delThing(&db,"bow");
    update();
}


void BackPack::on_pushButton_3_clicked()
{
    QSqlDatabase db = connectionDB();
    delThing(&db,"sword");
    update();
}

void BackPack::update() {
    QSqlDatabase db = connectionDB();
    if (checkThing(&db,"bow")) {
        ui->pushButton_2->setStyleSheet("border-image:url(\":/pow.jpg\")");
        ui->pushButton_2->setDisabled(false);
    } else {
        ui->pushButton_2->setStyleSheet("border-image:url(\"\")");
        ui->pushButton_2->setDisabled(true);
    }
    if (checkThing(&db,"sword")) {
        ui->pushButton_3->setStyleSheet("border-image:url(\":/mech.jpg\")");
        ui->pushButton_3->setDisabled(false);
    } else {
        ui->pushButton_3->setStyleSheet("border-image:url(\"\")");
        ui->pushButton_3->setDisabled(true);
    }
}
