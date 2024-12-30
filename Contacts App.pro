TEMPLATE = app

TARGET = "Contacts App"
# We got rid of the .ui files, but this still remains, just-in-case, a new one gets created.
FORMS += $$files("src/libs/*ui", true) \

INCLUDEPATH += .

QT += widgets core gui

HEADERS += $$files("src/libs/*.h", true) \
    src/libs/components/search_box/search_box.h
SOURCES += $$files("src/*.cpp", true) \
    src/libs/components/search_box/search_box.cpp

DEST = src/bin/

MOC_DIR += release/tmp/