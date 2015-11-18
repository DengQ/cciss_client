#include "igssserver.h"
#include "handshaketask.h"

IgssServer::IgssServer()
{

}

void IgssServer::startServer(){
    int port=12345;

    if(!this->listen(QHostAddress::Any,port)){
        qDebug()<<"Could not start server";
    }
    else {
        qDebug()<<"Listen to port";
    }
}

void IgssServer::incomingConnection(qintptr socketDescriptor){
    qDebug()<<socketDescriptor<<"Connectting";

    HandShakeTask *thread = new HandShakeTask(socketDescriptor);

    connect(thread,SIGNAL(finished()),thread,SLOT(deleteLater()));

    thread->start();
}

IgssServer::~IgssServer()
{

}
