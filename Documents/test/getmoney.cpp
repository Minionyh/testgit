#include "getmoney.h"
#include "ui_getmoney.h"

getmoney::getmoney(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::getmoney)
{
    ui->setupUi(this);
}

getmoney::~getmoney()
{
    delete ui;
}
