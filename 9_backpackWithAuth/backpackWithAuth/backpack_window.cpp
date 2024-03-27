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

void BackPack_window::on_pushButton_clicked()
{
    QLabel *l1 = new QLabel(this);  // Создаем объект динамической кнопки

    l1->setText("Кнопочка " );


    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(l1);


        //connect(button, SIGNAL(clicked()), this, SLOT(slotGetNumber()));
}

