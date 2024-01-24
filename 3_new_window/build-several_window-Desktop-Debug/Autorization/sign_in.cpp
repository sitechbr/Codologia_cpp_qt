#include "sign_in.h"
#include "ui_sign_in.h"
#include <QFile>
#include <QTextStream>

Sign_in::Sign_in(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Sign_in)
{
    ui->setupUi(this);
}

Sign_in::~Sign_in()
{
    delete ui;
}


void Sign_in::on_pushButton_clicked()
{
    QString login = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    QFile fileIn("filein.txt");
    QFile fileOut("fileout.txt");
    if(fileIn.open(QIODevice::ReadOnly) && fileOut.open(QIODevice::WriteOnly))
    { //Если первый файл открыт для чтения, а второй для записи успешн
        QByteArray block = fileIn.read(10); // Считываем 10 байт в массив block из filein.txt
        fileOut.write(block); // Записываем 10 байт в файл fileout.txt
        fileIn.close(); // Закрываем filein.txt
        fileOut.close(); // Закрываем fileout.txt
    }



}

