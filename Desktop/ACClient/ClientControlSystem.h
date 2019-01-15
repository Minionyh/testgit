#ifndef CLIENTCONTROLSYSTEM_H
#define CLIENTCONTROLSYSTEM_H

#include <QObject>
#include <QVector>
#include <BaseType.h>
class ClientACSystem;
class CommunicateClient;
class ClientControlSystem: public QObject
{
    Q_OBJECT
public:
    explicit ClientControlSystem(CommunicateClient * communicateClient,QObject *parent = 0);


    //参数：request:RequestInfo，空调用户请求的信息
    //无返回值，是否成功是由控制系统发送的通信包决定的。
    //功能：发送服务包给服务器
    //请求服务器分配资源，进行空调服务
    //被引用：被clientACSystem的开机请求命令OpenAC调用。
    //引用：调用CommunicateClient的sendto函数
    void OpenAC(RequestInfo request);



    //该槽函数
    //参数：request:RequestInfo，空调用户请求的信息
    //无返回值，
    //功能：发送服务包给服务器,请求关闭空调服务
    //被引用：被clientACSystem的关机请求命令调用。
    //引用：调用CommunicateClient的sendto函数
    void CloseAC(QString ID);



    //该槽函数
    //参数：request:RequestInfo，空调用户请求修改的信息
    //无返回值，是否成功是由控制系统发送的通信包决定的。
    //功能：发送服务包给服务器,
    //请求服务器修改空调服务的参数
    //被引用：被clientACSystem的修改请求命令调用。
    //引用：调用communicateClient的sendto函数
    void ChangeAC(RequestInfo request);


    //参数：clientACSystem:ClientACSystem，空调用户请求修改的信息
    //无返回值，
    //功能：将客户端添加到服务器管理中
    //？？？？是否需要发送通信包，暂定
    //被引用：在主程序中调用，将对应的客户端加入到控制系统代理中
    //引用：调用communicateClient的sendto函数
    void AddClientACSystem(ClientACSystem * clientACSystem);


    void HandleMesg(QString mesg);
public slots:

signals:


private:
    ClientACSystem * clientACSystem;
    CommunicateClient * communicateClient;
};

#endif // CLIENTCONTROLSYSTEM_H
