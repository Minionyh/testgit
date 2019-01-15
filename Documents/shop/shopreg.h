#ifndef SHOPREG_H
#define SHOPREG_H

#include <QDialog>

namespace Ui {
class shopreg;
}

class shopreg : public QDialog
{
    Q_OBJECT

public:
    explicit shopreg(QWidget *parent = 0);
    ~shopreg();

private:
    Ui::shopreg *ui;
};

#endif // SHOPREG_H
