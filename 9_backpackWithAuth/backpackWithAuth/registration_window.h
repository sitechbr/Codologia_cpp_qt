#ifndef REGISTRATION_WINDOW_H
#define REGISTRATION_WINDOW_H

#include <QDialog>
#include <mainwindow.h>

namespace Ui {
class Registration_window;
}

class Registration_window : public QDialog
{
    Q_OBJECT

public:
    explicit Registration_window(QWidget *parent = nullptr);
    ~Registration_window();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::Registration_window *ui;
    CheckAuthDB *authDB;
};

#endif // REGISTRATION_WINDOW_H
