#ifndef CONNECTTOIGSS_H
#define CONNECTTOIGSS_H

#include <QObject>
#include <QtNetwork>
#include <QString>
#include <QTcpSocket>
#include <QDebug>
#include <QThread>
#include <QTcpServer>

class ConnectToIgss : public QThread
{
    Q_OBJECT
public:
    ConnectToIgss();
    void run();
    ~ConnectToIgss();
};

#endif // CONNECTTOIGSS_H
