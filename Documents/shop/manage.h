#ifndef MANAGE_H
#define MANAGE_H

#include <QDialog>

namespace Ui {
class manage;
}

class manage : public QDialog
{
    Q_OBJECT

public:
    explicit manage(QWidget *parent = 0);
    ~manage();

private:
    Ui::manage *ui;
};

#endif // MANAGE_H
