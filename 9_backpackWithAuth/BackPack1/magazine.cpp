#include "magazine.h"
#include "ui_magazine.h"
#include "driverdb.h"
#include "backpack.h"

Magazine::Magazine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Magazine)
{
    ui->setupUi(this);
}

Magazine::~Magazine()
{
    delete ui;
}

void Magazine::on_pushButton_clicked()
{
    QSqlDatabase db = connectionDB();
    addThing2BackPack(&db,"bow");
}


void Magazine::on_pushButton_2_clicked()
{
    QSqlDatabase db = connectionDB();
    //createBackPackTable(&db);
    addThing2BackPack(&db,"sword");
}


void Magazine::on_buttonBox_accepted()
{
    hide();
    BackPack *w_backpack = new BackPack();
    w_backpack->show();
}

