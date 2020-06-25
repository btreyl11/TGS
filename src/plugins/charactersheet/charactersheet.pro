TGDIR = ../../..
QT += core gui
TEMPLATE = lib
CONFIG += plugin
include($$TGDIR/global.pri)

TARGET = charactersheetPlugin

DESTDIR = $$TGDIR/plugins

SOURCES = charactersheet.h \
    charactersheetplugin.cpp

HEADERS = charactersheet.h \
    charactersheetplugin.h

FORMS = charactersheet.ui

INCLUDEPATH += $$TGDIR/src/entities/
LIBS += -L$$TGDIR/lib -lentitiesLib
