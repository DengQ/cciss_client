#include "client.h"
#include <QApplication>
#include "handshaketask.h"
#include "tachedureception.h"
#include "igssserver.h"

int main(int argc, char** argv)
{
  QApplication app(argc, argv);

  IgssServer *connectToIgss = new IgssServer();
  connectToIgss->startServer();

  Client client;
  client.start("172.20.35.18", 8888);//127.0.0.1
  //172.20.35.18

  return app.exec();
}
