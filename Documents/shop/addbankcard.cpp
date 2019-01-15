#include "addbankcard.h"
#include "ui_addbankcard.h"

addbankcard::addbankcard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addbankcard)
{
    ui->setupUi(this);
}

addbankcard::~addbankcard()
{
    delete ui;
}
