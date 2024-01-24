#ifndef SIGN_IN_H
#define SIGN_IN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Sign_in; }
QT_END_NAMESPACE

class Sign_in : public QMainWindow
{
    Q_OBJECT

public:
    Sign_in(QWidget *parent = nullptr);
    ~Sign_in();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Sign_in *ui;
};
#endif // SIGN_IN_H
