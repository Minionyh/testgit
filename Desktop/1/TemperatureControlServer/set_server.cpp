#include "set_server.h"
#include "ui_set_server.h"
#include <QMessageBox>
#include <QDebug>
set_server::set_server(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::set_server)
{
    ui->setupUi(this);
    ui->doubleSpinBox->setSingleStep(0.05);
    ui->doubleSpinBox_2->setSingleStep(0.05);
    ui->doubleSpinBox_3->setSingleStep(0.05);
    //ui->doubleSpinBox->set
    //show_defultargu();
}

set_server::~set_server()
{
    delete ui;
}

void set_server::getserver_argu(ServerArgument *server)
{
    this->server=server;
    return;
}

void set_server::show_defultargu()
{
    ui->lineEdit_7->setText(QString::number((int)server->defaultTargetTemp,10));
    ui->lineEdit_8->setText(QString::number((int)server->defaultSpeedMode,10));
    ui->lineEdit_2->setText(QString::number((int)server->lowerTemp,10));
    ui->lineEdit_3->setText(QString::number((int)server->upperTemp,10));
    ui->doubleSpinBox_3->setValue((double)server->highSpeedElec);
    ui->doubleSpinBox_2->setValue((double)server->middleSpeedElec);
    ui->doubleSpinBox->setValue((double)server->lowerSpeedElec);
    ui->lineEdit->setText(QString::number((int)server->maxResource,10));
}

void set_server::on_pushButton_clicked()
{
    //判断输入逻辑，否则回滚
    int flag=1;
    if(ui->doubleSpinBox_2->value()<ui->doubleSpinBox->value()||ui->doubleSpinBox_3->value()<ui->doubleSpinBox_2->value()
            ||ui->doubleSpinBox_3->value()<ui->doubleSpinBox->value()){
        flag=0;
        ui->doubleSpinBox->clear();
        ui->doubleSpinBox_2->clear();;
        ui->doubleSpinBox_3->clear();
        QMessageBox::information(NULL, "Title", "error", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    }
    if(ui->lineEdit_2->text().toInt()<16||ui->lineEdit_2->text().toInt()>20){
        flag=0;
        ui->lineEdit_2->clear();
        QMessageBox::information(NULL, "Title", "error", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    }
    if(ui->lineEdit_3->text().toInt()<26||ui->lineEdit_3->text().toInt()>30){
        flag=0;
        ui->lineEdit_3->clear();
        QMessageBox::information(NULL, "Title", "error", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    }
    if(ui->lineEdit->text().toInt()<0||ui->lineEdit->text().toInt()>8){
        flag=0;
        ui->lineEdit->clear();
        QMessageBox::information(NULL, "Title", "error", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    }
    if(ui->lineEdit_8->text().toInt()<0||ui->lineEdit_8->text().toInt()>3){
        flag=0;
        ui->lineEdit_8->clear();
        QMessageBox::information(NULL, "Title", "error", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    }

    //设置服务器参数
    if(flag==1){
        this->server->tempMode=(qint32)ui->comboBox->currentIndex();//0 制冷 1 制热
        this->server->defaultTargetTemp=(qreal)ui->lineEdit_7->text().toInt();
        this->server->defaultSpeedMode=(qint32)ui->lineEdit_8->text().toInt();
        this->server->highSpeedElec=(qreal)ui->doubleSpinBox_3->value();
        this->server->middleSpeedElec=(qreal)ui->doubleSpinBox_2->value();
        this->server->lowerSpeedElec=(qreal)ui->doubleSpinBox->value();
        this->server->lowerTemp=(qint32)ui->lineEdit_2->text().toInt();
        this->server->upperTemp=(qint32)ui->lineEdit_3->text().toInt();
        this->server->maxResource=(qreal)ui->lineEdit->text().toInt();
    //cout<<this->server;
        this->close();
    }
}
