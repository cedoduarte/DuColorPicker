#-------------------------------------------------
#
# Project created by QtCreator 2015-06-07T16:28:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DuColorPicker
TEMPLATE = app


SOURCES += main.cpp\
        Widget.cpp \
    DuColorPickerForm.cpp

HEADERS  += Widget.h \
    DuColorPickerForm.h

FORMS    += Widget.ui \
    DuColorPickerForm.ui

QMAKE_CXXFLAGS += -std=gnu++14
