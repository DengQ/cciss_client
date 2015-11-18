#include "connecttoigss.h"
#include "igssserver.h"
#include "handshaketask.h"

ConnectToIgss::ConnectToIgss()
{

}

ConnectToIgss::~ConnectToIgss()
{

}

void ConnectToIgss::run(){

    IgssServer *connectToIgss = new IgssServer();
    connectToIgss->startServer();


//    qDebug()<<"FortuneClient wating for connecting!";

//    HandShakeTask *thread = new HandShakeTask();
//    thread->start();
}
