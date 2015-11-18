#ifndef HANDSHAKETASK_H
#define HANDSHAKETASK_H

#include <QtNetwork>
#include <QObject>
#include <QString>
#include <QTcpSocket>
#include <QDebug>
#include <QThread>
#include <QTcpServer>

class HandShakeTask : public QThread
{
    Q_OBJECT
public:
    explicit HandShakeTask(qintptr ID);

    void run();
    ~HandShakeTask();

signals:
    void error(QTcpSocket::SocketError socketerror);

public slots:
    void readRead();
    void disconnected();

private:
    QTcpSocket *socket;
    qintptr socketDescriptor;
};

#endif // HANDSHAKETASK_H
