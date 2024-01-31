#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>

namespace Ui {
class window;
}

class window : public QDialog
{
    Q_OBJECT

public:
    explicit window(QWidget *parent = nullptr);
    ~window();

private:
    Ui::window *ui;
};

#endif // SECONDWINDOW_H
