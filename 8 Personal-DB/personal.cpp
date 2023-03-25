#include "personal.h"
#include "ui_personal.h"


Personal::Personal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Personal)
{
    ui->setupUi(this);
}

Personal::~Personal()
{
    delete ui;
}

void Personal::on_buttonBox_accepted()
{
    accept();
}

void Personal::on_buttonBox_rejected()
{
    reject();
}


QString Personal::name() const {
    return ui->NameText->text();
}

int Personal::age() const {
    return ui->AgeSpinBox->value();
}

QString Personal::position() const {
    return ui->PositionText->text();
}
