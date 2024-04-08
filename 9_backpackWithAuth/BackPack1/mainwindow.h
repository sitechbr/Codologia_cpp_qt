#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "backpack.h"
#include "backpackdb.h"
#include "registrationw.h"


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
    void on_b_ok_clicked();

    void on_b_registration_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
