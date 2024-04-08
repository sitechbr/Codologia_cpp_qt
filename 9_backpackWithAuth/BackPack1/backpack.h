#ifndef BACKPACK_H
#define BACKPACK_H
#include "driverdb.h"

#include <QDialog>

namespace Ui {
class BackPack;
}

class BackPack : public QDialog
{
    Q_OBJECT

public:
    explicit BackPack(QWidget *parent = nullptr);
    ~BackPack();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    void update();
    Ui::BackPack *ui;
};

#endif // BACKPACK_H
