#include "modify.h"
#include "ui_modify.h"

modify::modify(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modify)
{
    ui->setupUi(this);
}

modify::~modify()
{
    delete ui;
}
