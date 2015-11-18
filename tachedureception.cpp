#include "tachedureception.h"

TacheDuReception::TacheDuReception(qintptr ID)
{
    this->socketDescriptor = ID;
}

void TacheDuReception::run(){
    while(true){
        qDebug()<<"TacheDuReception Thread Start";
        sleep(1);
    }
}

TacheDuReception::~TacheDuReception()
{

}
