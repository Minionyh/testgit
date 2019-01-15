#include "bankreg.h"
#include "ui_bankreg.h"

bankreg::bankreg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bankreg)
{
    ui->setupUi(this);
}

bankreg::~bankreg()
{
    delete ui;
}
