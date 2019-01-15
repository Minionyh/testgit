#ifndef SET_SERVER_H
#define SET_SERVER_H
#include <BaseType.h>
#include <QDialog>

namespace Ui {
class set_server;
}

class set_server : public QDialog
{
    Q_OBJECT

public:
    explicit set_server(QWidget *parent = 0);
    ~set_server();
    ServerArgument defultserver;
    ServerArgument *server=&defultserver;
    void getserver_argu(ServerArgument *server);
    void show_defultargu();

private slots:

    void on_pushButton_clicked();

private:
    Ui::set_server *ui;
};

#endif // SET_SERVER_H
