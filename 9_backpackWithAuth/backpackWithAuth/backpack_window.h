#ifndef BACKPACK_WINDOW_H
#define BACKPACK_WINDOW_H

#include <QDialog>
#include <QHBoxLayout>


namespace Ui {
class BackPack_window;
}

class BackPack_window : public QDialog
{
    Q_OBJECT

public:
    explicit BackPack_window(QWidget *parent = nullptr);
    ~BackPack_window();

private slots:
    void on_pushButton_clicked();

private:
    Ui::BackPack_window *ui;
};

#endif // BACKPACK_WINDOW_H
