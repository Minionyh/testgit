#ifndef PAY_H
#define PAY_H

#include <QDialog>

namespace Ui {
class pay;
}

class pay : public QDialog
{
    Q_OBJECT

public:
    explicit pay(QWidget *parent = 0);
    ~pay();

private:
    Ui::pay *ui;
};

#endif // PAY_H
