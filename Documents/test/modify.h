#ifndef MODIFY_H
#define MODIFY_H

#include <QDialog>

namespace Ui {
class modify;
}

class modify : public QDialog
{
    Q_OBJECT

public:
    explicit modify(QWidget *parent = 0);
    ~modify();

private:
    Ui::modify *ui;
};

#endif // MODIFY_H
