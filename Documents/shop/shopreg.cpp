#include "shopreg.h"
#include "ui_shopreg.h"

shopreg::shopreg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shopreg)
{
    ui->setupUi(this);
}

shopreg::~shopreg()
{
    delete ui;
}
