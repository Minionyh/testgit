#include "bankconnect.h"
#include "ui_bankconnect.h"

bankconnect::bankconnect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bankconnect)
{
    ui->setupUi(this);
}

bankconnect::~bankconnect()
{
    delete ui;
}
