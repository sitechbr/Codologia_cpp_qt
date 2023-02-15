#include "mainwindow.h"
#include "./ui_mainwindow.h"
 #include "secondwindow.h"


#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Button_clicked()
{

        if (ui->checkBox->checkState()) {
        QString login = ui->t_Name->text();
        QString password = ui->t_Password->text();
        if (login=="admin" && password=="admin") {
            QMessageBox::information(this,"Ура","Вы успешно авторизовались");
            hide();
            window = new SecondWindow(this);
            window->show();


        }
        else {
            ui->l_message->setText("Неверный логин или пароль");
        }
    }
    else {
        ui->l_message->setText("Нужно согласиться с условиями");
    }

}
