#ifndef BANKREG_H
#define BANKREG_H

#include <QDialog>

namespace Ui {
class bankreg;
}

class bankreg : public QDialog
{
    Q_OBJECT

public:
    explicit bankreg(QWidget *parent = 0);
    ~bankreg();

private:
    Ui::bankreg *ui;
};

#endif // BANKREG_H
