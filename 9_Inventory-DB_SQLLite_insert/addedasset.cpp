#include "addedasset.h"
#include "ui_addedasset.h"
#include <QWidget>

 AddedAsset::AddedAsset(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddedAsset)
{
    ui->setupUi(this);
}

AddedAsset::~AddedAsset()
{
    delete ui;
}

void AddedAsset::on_buttonBox_accepted()
{
    accept();
}

void AddedAsset::on_buttonBox_rejected()
{
    reject();
}


QString AddedAsset::name() const {
    return ui->tName->text();
}

QString AddedAsset::Memory() const {
    return ui->tMemory->text();
}

QString AddedAsset::CPU() const {
    return ui->tCPU->text();
}

QString AddedAsset::HDD() const {
    return ui->tHDD->text();
}

QString AddedAsset::serialN() const {
    return ui->tSN->text();
}
