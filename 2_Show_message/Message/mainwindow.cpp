#include "mainwindow.h"
#include "ui_mainwindow.h"
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


void MainWindow::on_b_push_clicked()
{
    QMessageBox::about(this, "Header Windows", "Simple text in Box");
    QMessageBox::aboutQt(this);
    QMessageBox::critical(this, "Critical Windows", "Simple text in Box");
    QMessageBox::information(this, "Information Windows", "Simple text in Box");
    QMessageBox::warning(this, "Warning Windows", "Simple text in Box");

}


void MainWindow::on_b_show_message_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::question(this, "Question","Yes or No?",QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    }
    else {
        qDebug("User asked No");
    }
}

