#include "shopconnect.h"
#include "ui_shopconnect.h"

shopconnect::shopconnect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shopconnect)
{
    ui->setupUi(this);
}

shopconnect::~shopconnect()
{
    delete ui;
}
