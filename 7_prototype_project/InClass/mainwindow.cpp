#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "leader.h"
#include <iostream>

Leader p1(1);
Leader p2(3);
Leader e1(2);
Leader e2(4);




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->p_1->setEnabled(true);
    ui->p_2->setEnabled(false);
    ui->e_1->setEnabled(false);
    ui->e_2->setEnabled(false);

}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_p_1_clicked()
{
    showState(2);

    e1.a1.setQuantity(e1.a1.getQuantity()-p1.a1.attack());
    std::cout << "Archer in e1 arrmy: " <<  e1.a1.getQuantity() << std::endl;
    showStats();
}

void MainWindow::showStats() {
    int pScore = p1.getArmySize() + p2.getArmySize();
    int eScore = e1.getArmySize()+e2.getArmySize();
    ui->playerScore->setText(QString::number(pScore));
    ui->enemyScore->setText(QString::number(eScore));

}

void MainWindow::on_e_1_clicked()
{
   showState(3);
}


void MainWindow::on_p_2_clicked()
{
    showState(4);
}


void MainWindow::on_e_2_clicked()
{
    showState(1);
}

void MainWindow::showState(int l) {
    if (l==1) {
        ui->p_1->setEnabled(true);
        ui->p_2->setEnabled(false);
        ui->e_1->setEnabled(false);
        ui->e_2->setEnabled(false);
        ui->p_1_fon->setStyleSheet("background: red;");
        ui->p_2_fon->setStyleSheet("background: silver;");
        ui->e_1_fon->setStyleSheet("background: silver;");
        ui->e_2_fon->setStyleSheet("background: silver;");
    }

    if (l==2) {
        ui->p_1->setEnabled(false);
        ui->p_2->setEnabled(false);
        ui->e_1->setEnabled(true);
        ui->e_2->setEnabled(false);
        ui->p_1_fon->setStyleSheet("background: silver;");
        ui->p_2_fon->setStyleSheet("background: silver;");
        ui->e_1_fon->setStyleSheet("background: red;");
        ui->e_2_fon->setStyleSheet("background: silver;");
    }

    if (l==3) {
        ui->p_1->setEnabled(false);
        ui->p_2->setEnabled(true);
        ui->e_1->setEnabled(false);
        ui->e_2->setEnabled(false);
        ui->p_1_fon->setStyleSheet("background: silver;");
        ui->p_2_fon->setStyleSheet("background: red;");
        ui->e_1_fon->setStyleSheet("background: silver;");
        ui->e_2_fon->setStyleSheet("background: silver;");
    }


    if (l==4) {
        ui->p_1->setEnabled(false);
        ui->p_2->setEnabled(false);
        ui->e_1->setEnabled(false);
        ui->e_2->setEnabled(true);
        ui->p_1_fon->setStyleSheet("background: silver;");
        ui->p_2_fon->setStyleSheet("background: silver;");
        ui->e_1_fon->setStyleSheet("background: silver;");
        ui->e_2_fon->setStyleSheet("background: red;");
    }
}

