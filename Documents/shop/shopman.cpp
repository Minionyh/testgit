#include "shopman.h"
#include "ui_shopman.h"

shopman::shopman(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shopman)
{
    ui->setupUi(this);
}

shopman::~shopman()
{
    delete ui;
}
