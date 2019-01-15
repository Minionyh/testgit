#ifndef SHOPCONNECT_H
#define SHOPCONNECT_H

#include <QDialog>

namespace Ui {
class shopconnect;
}

class shopconnect : public QDialog
{
    Q_OBJECT

public:
    explicit shopconnect(QWidget *parent = 0);
    ~shopconnect();

private:
    Ui::shopconnect *ui;
};

#endif // SHOPCONNECT_H
