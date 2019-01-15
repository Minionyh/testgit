#include "manage.h"
#include "ui_manage.h"

manage::manage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manage)
{
    ui->setupUi(this);
}

manage::~manage()
{
    delete ui;
}
