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
    void on_p_1_clicked();

    void on_e_1_clicked();

    void on_p_2_clicked();
    void showStats();
    void showState(int l);
    void on_e_2_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
