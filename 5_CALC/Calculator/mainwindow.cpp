#include "mainwindow.h"
#include "ui_mainwindow.h"

double num_first;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->b_0,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->b_1,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->b_2,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->b_3,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->b_4,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->b_5,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->b_6,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->b_7,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->b_8,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->b_9,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->b_pm,SIGNAL(clicked()),this,SLOT(operations()));
    connect(ui->b_percent,SIGNAL(clicked()),this,SLOT(operations()));
    connect(ui->b_plus,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->b_min,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->b_pr,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->b_del,SIGNAL(clicked()),this,SLOT(math_operations()));

    ui->b_plus->setCheckable(true);
    ui->b_min->setCheckable(true);
    ui->b_pr->setCheckable(true);
    ui->b_del->setCheckable(true);




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers()
{
    QPushButton *button = (QPushButton *)sender();
    double all_numbers;
    QString result;
    all_numbers = (ui->t_result->text() + button->text()).toDouble();
    result=QString::number(all_numbers,'g',15);

    ui->t_result->setText(result);
}

void MainWindow::on_b_p_clicked()
{
    if(!(ui->t_result->text().contains('.')))    ui->t_result->setText(ui->t_result->text()+'.');

}



void MainWindow::operations()
{
    QPushButton *button = (QPushButton *)sender();
    double all_numbers;
    QString result;

    if(button->text()=="+/-") {
        //qDebug("1");
        all_numbers = (ui->t_result->text()).toDouble();
        ui->statusbar->showMessage(QString::number(all_numbers));
        all_numbers*=-1;
        result=QString::number(all_numbers,'g',15);

        ui->t_result->setText(result);
    }
    else     if(button->text()=="%") {
        //qDebug("1");
        all_numbers = (ui->t_result->text()).toDouble();
        ui->statusbar->showMessage(QString::number(all_numbers));
        all_numbers*=0.01;
        result=QString::number(all_numbers,'g',15);

        ui->t_result->setText(result);
    }

}


void MainWindow::math_operations() {
    QPushButton *button = (QPushButton *)sender();
    num_first = ui->t_result->text().toDouble();
    ui->t_result->setText("");
    button->setCheckable(true);

}

void MainWindow::on_b_eq_clicked()
{
    double labelNumber,num_second;
    QString result;
    num_second = ui->t_result->text().toDouble();
    if(ui->b_plus->isChecked()) {
        labelNumber = num_first+num_second;
        result=QString::number(labelNumber,'g',15);
        ui->t_result->setText(result);
        ui->b_plus->setChecked(false);



    }
    else if(ui->b_min->isChecked()) {
        labelNumber = num_first-num_second;
        result=QString::number(labelNumber,'g',15);
        ui->t_result->setText(result);
        ui->b_plus->setChecked(false);

    }
    else if(ui->b_pr->isChecked()) {
        labelNumber = num_first*num_second;
        result=QString::number(labelNumber,'g',15);
        ui->t_result->setText(result);
        ui->b_plus->setChecked(false);

    }
    else if(ui->b_del->isChecked()) {
        labelNumber = num_first/num_second;
        result=QString::number(labelNumber,'g',15);
        ui->t_result->setText(result);
        ui->b_plus->setChecked(false);

    }
}


void MainWindow::on_b_AC_clicked()
{
    num_first=0;
    ui->t_result->setText("");


}

