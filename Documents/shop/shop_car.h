#ifndef SHOP_CAR_H
#define SHOP_CAR_H

#include <QDialog>

namespace Ui {
class shop_car;
}

class shop_car : public QDialog
{
    Q_OBJECT

public:
    explicit shop_car(QWidget *parent = 0);
    ~shop_car();

private:
    Ui::shop_car *ui;
};

#endif // SHOP_CAR_H
