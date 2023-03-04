#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QParallelAnimationGroup>
#include <QPropertyAnimation>
#include <QSequentialAnimationGroup>

QString car="null";

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


void animationCarChange(QLabel *obj) {
    QPropertyAnimation *animationSize = new QPropertyAnimation(obj, "size");
    animationSize->setDuration(1000);
    animationSize->setStartValue(QSize(10, 10));

    animationSize->setEndValue(QSize(391, 211));




    QPropertyAnimation *animationIn = new QPropertyAnimation(obj, "pos");
    animationIn->setDuration(1000);
    //animation->setStartValue(QSize(10, 10));
    animationIn->setStartValue(QPoint(800,260));
    //animation->setEndValue(QSize(391, 211));
    animationIn->setEndValue(QPoint(210, 260));


    QParallelAnimationGroup *anim_group = new QParallelAnimationGroup();
    anim_group->addAnimation(animationSize);
    anim_group->addAnimation(animationIn);
    anim_group->start();
}




void MainWindow::on_actionNew_garage_triggered()
{
    ui->statusbar->showMessage("Добавление нового гаража");
    ui->label->setStyleSheet("border-image:url(\":/rec/img/shadow.png\")");
}

void MainWindow::on_actionQuit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionDark_Theme_triggered()
{
    setStyleSheet("background-color:black;color:white;");
    ui->menubar->setStyleSheet("border: 2px solid white;");



}

void MainWindow::on_actionLight_Theme_triggered()
{
    setStyleSheet("");
    ui->menubar->setStyleSheet("");
}

void MainWindow::on_b_mers_clicked()
{
    animationCarChange(ui->label);
    ui->label->setStyleSheet("border-image:url(\":/rec/img/mercedes_car.png\")");
    car = "Mercedes";
}

void MainWindow::on_b_bmw_clicked()
{
    animationCarChange(ui->label);
    ui->label->setStyleSheet("border-image:url(\":/rec/img/bmw_car.png\")");
    car = "BMW";
}

void MainWindow::on_b_audi_clicked()
{
    animationCarChange(ui->label);

    ui->label->setStyleSheet("border-image:url(\":/rec/img/audi_car.png\")");


    car = "Audi";
}

void MainWindow::on_pushButton_clicked()
{
    if (car!="null") {
        ui->statusbar->showMessage(car +" добавлена в гараж");
    }
    else {
        ui->statusbar->showMessage("Надо выбрать автомобиль");
    }

}
