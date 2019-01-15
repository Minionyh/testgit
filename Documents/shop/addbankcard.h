#ifndef ADDBANKCARD_H
#define ADDBANKCARD_H

#include <QDialog>

namespace Ui {
class addbankcard;
}

class addbankcard : public QDialog
{
    Q_OBJECT

public:
    explicit addbankcard(QWidget *parent = 0);
    ~addbankcard();

private:
    Ui::addbankcard *ui;
};

#endif // ADDBANKCARD_H
