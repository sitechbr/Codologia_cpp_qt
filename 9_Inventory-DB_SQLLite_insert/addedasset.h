#ifndef ADDEDASSET_H
#define ADDEDASSET_H


#include <QDialog>

namespace Ui {
class AddedAsset;
}

class AddedAsset : public QDialog
{
    Q_OBJECT

public:
    explicit AddedAsset(QWidget *parent = nullptr);
    ~AddedAsset();
    QString name() const;
    QString serialN() const;
    QString Memory() const;
    QString HDD() const;
    QString CPU() const;

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::AddedAsset *ui;
};

#endif // ADDEDASSET_H
