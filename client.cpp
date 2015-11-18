#include "client.h"
#include <QHostAddress>
#include "handshaketask.h"
#include "tachedureception.h"
#include "igssserver.h"
#include "connecttoigss.h"

Client::Client(QObject* parent): QObject(parent)
{
  connect(&client, SIGNAL(connected()),this, SLOT(startTransfer()));
}

Client::~Client()
{
}

void Client::start(QString address, quint16 port)
{
  QHostAddress addr(address);
  client.connectToHost(addr, port);

}

void Client::startTransfer()
{
    client.write("igss_server 172.20.35.119 9999");

    qDebug()<<"Client to Igss ready!";

//    ConnectToIgss *connecttoigss = new ConnectToIgss();
//    connecttoigss->start();

//    IgssServer *connectToIgss = new IgssServer();
//    connectToIgss->startServer();

//    qDebug()<<"FortuneClient wating for connecting!";


}
