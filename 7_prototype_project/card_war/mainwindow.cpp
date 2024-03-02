#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "leader.h"
#include <QMessageBox>

Leader p1(1);
Leader p2(3);
Leader e1(1);
Leader e2(2);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->b_1->setEnabled(true);
    ui->b_2->setEnabled(false);
    ui->b_3->setEnabled(false);
    ui->b_4->setEnabled(false);
    showStats();




}

void MainWindow::showStats() {
    ui->t_player->setText(QString::number(p1.getArmySize()+p2.getArmySize()));
    ui->t_enemy->setText(QString::number(e1.getArmySize()+e2.getArmySize()));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_b_1_clicked()
{
    ui->b_1->setEnabled(false);
    ui->b_2->setEnabled(true);
    ui->b_3->setEnabled(false);
    ui->b_4->setEnabled(false);
    QMessageBox::information(this,"Inform","Player 1 is attacks");
    showStats();

}


void MainWindow::on_b_2_clicked()
{
    ui->b_1->setEnabled(false);
    ui->b_2->setEnabled(false);
    ui->b_3->setEnabled(true);
    ui->b_4->setEnabled(false);
    QMessageBox::information(this,"Inform","Player 2 is attacks");
    showStats();
}


void MainWindow::on_b_4_clicked()
{
    ui->b_1->setEnabled(true);
    ui->b_2->setEnabled(false);
    ui->b_3->setEnabled(false);
    ui->b_4->setEnabled(false);
    QMessageBox::information(this,"Inform","Player 4 is attacks");
    showStats();
}


void MainWindow::on_b_3_clicked()
{
    ui->b_1->setEnabled(false);
    ui->b_2->setEnabled(false);
    ui->b_3->setEnabled(false);
    ui->b_4->setEnabled(true);
    QMessageBox::information(this,"Inform","Player 3 is attacks");
    showStats();
}

