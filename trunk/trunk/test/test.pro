#-------------------------------------------------
#
# Project created by QtCreator 2010-12-13T15:19:04
#
#-------------------------------------------------

QT       += core gui

TARGET = test
TEMPLATE = app
INCLUDEPATH += ../inc
DEPENDPATH  += ../inc ../src

SOURCES  += main.cpp test_persistence.cpp
SOURCES += persistence.cpp

HEADERS  += test_persistence.h
HEADERS += persistence.h

FORMS    += test_persistence.ui
