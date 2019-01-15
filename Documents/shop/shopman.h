#ifndef SHOPMAN_H
#define SHOPMAN_H

#include <QDialog>

namespace Ui {
class shopman;
}

class shopman : public QDialog
{
    Q_OBJECT

public:
    explicit shopman(QWidget *parent = 0);
    ~shopman();

private:
    Ui::shopman *ui;
};

#endif // SHOPMAN_H
