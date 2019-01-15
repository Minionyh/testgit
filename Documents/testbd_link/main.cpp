#include <QCoreApplication>
#include <QSqlDatabase>
#include <QDebug>
#include <QStringList>
#include <QSqlQuery>
#include <mysql.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // 输出可用数据库
    qDebug() << "Available drivers:";
    QStringList drivers = QSqlDatabase::drivers();
    foreach(QString driver, drivers)
        qDebug() << driver;

    // 打开MySQL
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("testdb");
    db.setUserName("root");
    db.setPassword("123456");
     MYSQL mysql, *sock;

    mysql_init(&mysql);
    if (!db.open())
        qDebug() << "Failed to connect to root mysql admin";
    else qDebug() << "open";

    QSqlQuery query(db);

    //注意这里varchar一定要指定长度，不然会出错


    query.exec("select * from student ");

    while(query.next())
    {
        int value0 = query.value(0).toInt();
        QString value1 = query.value(1).toString();
        qDebug() << value0 << value1 ;
    }

    return a.exec();
}
