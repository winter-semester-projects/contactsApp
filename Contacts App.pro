TEMPLATE = app
TARGET = "Contacts App"
FORMS += src/mainwindow.ui
INCLUDEPATH += .

QT += widgets core gui

HEADERS += src/libs/prompt.h \
           src/libs/user.h
SOURCES += src/main.cpp \
           src/mainwindow.cpp \
           src/mainwindow.ui
