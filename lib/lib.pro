QT -= gui

TEMPLATE = lib
DEFINES += QTGYO_LIBRARY
TARGET = qtgyo

SOURCES += \
    qtgyo.cpp \
    src/context.cpp

HEADERS += \
    qtgyo.h \
    src/context.h

INCLUDEPATH += \
   src

## Default rules for deployment.
#unix {
#    target.path = /usr/lib
#}
#!isEmpty(target.path): INSTALLS += target
