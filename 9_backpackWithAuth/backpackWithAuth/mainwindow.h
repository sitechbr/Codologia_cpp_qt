#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "backpack_window.h"
#include <QDebug>
#include "checkauthdb.h"
#include "registration_window.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushSignIn_clicked();

    void on_pushRegistartion_clicked();

private:
    Ui::MainWindow *ui;
    CheckAuthDB *authDB;
};
#endif // MAINWINDOW_H
