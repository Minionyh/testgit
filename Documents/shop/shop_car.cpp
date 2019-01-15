#include "shop_car.h"
#include "ui_shop_car.h"

shop_car::shop_car(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shop_car)
{
    ui->setupUi(this);
}

shop_car::~shop_car()
{
    delete ui;
}
