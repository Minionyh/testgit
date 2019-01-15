#ifndef BASEPRODUCT_H
#define BASEPRODUCT_H

#include <QDialog>

namespace Ui {
class baseproduct;
}

class baseproduct : public QDialog
{
    Q_OBJECT

public:
    explicit baseproduct(QWidget *parent = 0);
    ~baseproduct();

private:
    Ui::baseproduct *ui;
};

#endif // BASEPRODUCT_H
