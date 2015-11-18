#ifndef IGSSSERVER_H
#define IGSSSERVER_H

#include <QtNetwork>
#include <QObject>
#include <QString>
#include <QTcpSocket>
#include <QDebug>
#include <QTcpServer>
#include <QSettings>

#include <QtCore>
#include <QtNetwork/qnetworkconfiguration.h>
#include <QList>

class IgssServer : public QTcpServer
{
    Q_OBJECT
public:
    IgssServer();
    void startServer();
    ~IgssServer();

private:
    QTcpServer server;
    QTcpSocket *igssserver;

protected:
    void incomingConnection(qintptr socketDescriptor);
};

#endif // IGSSSERVER_H
