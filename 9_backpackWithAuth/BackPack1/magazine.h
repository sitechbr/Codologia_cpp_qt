#ifndef MAGAZINE_H
#define MAGAZINE_H

#include <QDialog>

namespace Ui {
class Magazine;
}

class Magazine : public QDialog
{
    Q_OBJECT

public:
    explicit Magazine(QWidget *parent = nullptr);
    ~Magazine();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_buttonBox_accepted();

private:
    Ui::Magazine *ui;
};

#endif // MAGAZINE_H
