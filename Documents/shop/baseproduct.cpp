#include "baseproduct.h"
#include "ui_baseproduct.h"

baseproduct::baseproduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::baseproduct)
{
    ui->setupUi(this);
}

baseproduct::~baseproduct()
{
    delete ui;
}
