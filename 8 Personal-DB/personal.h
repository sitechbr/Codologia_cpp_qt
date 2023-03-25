#ifndef PERSONAL_H
#define PERSONAL_H

#include <QDialog>

namespace Ui {
class Personal;
}

class Personal : public QDialog
{
    Q_OBJECT

public:
    explicit Personal(QWidget *parent = nullptr);
    ~Personal();
    int age() const;
    QString name() const;
    QString position() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::Personal *ui;
};

#endif // PERSONAL_H
