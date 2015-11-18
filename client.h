#ifndef CLIENT_H
#define CLIENT_H

#include <QtNetwork>
#include <QObject>
#include <QString>
#include <QTcpSocket>
#include <QDebug>
#include <QTcpServer>
#include <QSettings>
#include <QThread>

#include <QtCore>
#include <QtNetwork/qnetworkconfiguration.h>
#include <QList>

class Client: public QObject
{
Q_OBJECT
public:
  Client(QObject* parent = 0);
  ~Client();
  void start(QString address, quint16 port);

public slots:
  void startTransfer();

private:
  QTcpSocket client;
  qintptr socketDescriptor;
};

#endif // CLIENT_H
