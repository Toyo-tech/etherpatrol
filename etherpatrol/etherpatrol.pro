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
    ICapture.cpp \
    ICaptureFactory.cpp \
    EtherCaptureFactory.cpp \
    TestCaptureFactory.cpp \
    TestCapture.cpp \
    ICheckerFactory.cpp \
    MACCheckerFactory.cpp \
    TestCheckerFactory.cpp \
    TestChecker.cpp

HEADERS += \
    IChecker.h \
    MACChecker.h \
    ICapture.h \
    EtherCapture.h \
    ICaptureFactory.h \
    EtherCaptureFactory.h \
    TestCaptureFactory.h \
    TestCapture.h \
    ICheckerFactory.h \
    MACCheckerFactory.h \
    TestCheckerFactory.h \
    TestChecker.h
