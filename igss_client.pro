#-------------------------------------------------
#
# Project created by QtCreator 2015-11-17T13:59:43
#
#-------------------------------------------------

QT       += core gui
QT       += network widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = igss_client
TEMPLATE = app


SOURCES += main.cpp\
        client.cpp \
    handshaketask.cpp \
    tachedureception.cpp \
    igssserver.cpp \
    connecttoigss.cpp

HEADERS  += client.h \
    handshaketask.h \
    tachedureception.h \
    igssserver.h \
    connecttoigss.h
