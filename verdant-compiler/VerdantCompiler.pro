TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cc \
    tokenizer.cc \
    indexbuffer.cc \
    databuffer.cc

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    tokenizer.h \
    tokens.h \
    indexbuffer.h \
    databuffer.h

