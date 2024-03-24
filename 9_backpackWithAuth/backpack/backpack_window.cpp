#include "backpack_window.h"
#include "ui_backpack_window.h"

BackPack_window::BackPack_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BackPack_window)
{
    ui->setupUi(this);
}

BackPack_window::~BackPack_window()
{
    delete ui;
}
