#ifndef BANKCONNECT_H
#define BANKCONNECT_H

#include <QDialog>

namespace Ui {
class bankconnect;
}

class bankconnect : public QDialog
{
    Q_OBJECT

public:
    explicit bankconnect(QWidget *parent = 0);
    ~bankconnect();

private:
    Ui::bankconnect *ui;
};

#endif // BANKCONNECT_H
