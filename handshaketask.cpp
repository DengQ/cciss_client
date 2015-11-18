#include "handshaketask.h"
#include "tachedureception.h"
#include "igssserver.h"

HandShakeTask::HandShakeTask(qintptr ID)
{
    this->socketDescriptor = ID;


}

void HandShakeTask::run(){



    qDebug()<<"HandShakeTask Thread Start! "<<this->socketDescriptor;

    socket = new QTcpSocket();

    if(!socket->setSocketDescriptor(this->socketDescriptor)){
        emit error(socket->error());
        return;
    }


    connect(socket,SIGNAL(readyRead()),this,SLOT(readRead()),Qt::DirectConnection);
    connect(socket,SIGNAL(disconnected()),this,SLOT(disconnected()));

    exec();

}

void HandShakeTask::readRead(){
    qDebug()<<"Start Read! ";
    //get the information
    QByteArray Data = socket->readAll();

    //will write on server side window
    qDebug()<<socketDescriptor<<"Data in: "<<Data;

    QString msg(Data);
    if(msg=="igss"){
        TacheDuReception *client1 = new TacheDuReception(socketDescriptor);

        connect(client1,SIGNAL(finished()),client1,SLOT(deleteLater()));

        client1->start();
    }

    socket->write(Data);
}


void HandShakeTask::disconnected(){
    qDebug()<<socketDescriptor<<"Disconnected";
    socket->deleteLater();
    exit(0);
}

HandShakeTask::~HandShakeTask(){

}
