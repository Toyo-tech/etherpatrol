#-------------------------------------------------
#
# Project created by QtCreator 2015-06-30T11:08:27
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = etherpatrol
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    IChecker.cpp \
    MACChecker.cpp \
    EtherCapture.cpp \
    ICapture.cpp

HEADERS += \
    IChecker.h \
    MACChecker.h \
    ICapture.h \
    EtherCapture.h
