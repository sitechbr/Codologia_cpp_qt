#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_b_message1_clicked();

    void on_b_message2_clicked();

    void on_b_message3_clicked();

    void on_b_message4_clicked();

    void on_b_message5_clicked();

    void on_b_close_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
