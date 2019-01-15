#ifndef GETMONEY_H
#define GETMONEY_H

#include <QDialog>

namespace Ui {
class getmoney;
}

class getmoney : public QDialog
{
    Q_OBJECT

public:
    explicit getmoney(QWidget *parent = 0);
    ~getmoney();

private:
    Ui::getmoney *ui;
};

#endif // GETMONEY_H
