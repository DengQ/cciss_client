#ifndef TACHEDURECEPTION_H
#define TACHEDURECEPTION_H

#include <QObject>
#include <QtNetwork>
#include <QString>
#include <QTcpSocket>
#include <QDebug>
#include <QThread>
#include <QTcpServer>

class TacheDuReception : public QThread
{
    Q_OBJECT
public:
    explicit TacheDuReception(qintptr ID);
    ~TacheDuReception();

    void run();

private:
    QTcpServer *socket;
    qintptr socketDescriptor;

};

#endif // TACHEDURECEPTION_H
