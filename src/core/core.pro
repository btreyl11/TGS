TGDIR = ../../
TEMPLATE = app
DESTDIR = $$TGDIR/bin
TARGET = tg
include($$TGDIR/global.pri)

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    charactersheet.cpp \
#    charactersheetmodel.cpp \
    main.cpp \
    basewindow.cpp \
    pausemenu.cpp

HEADERS += \
    basewindow.h \
    charactersheet.h \
#    charactersheetmodel.h \
    pausemenu.h


FORMS += \
    basewindow.ui \
    charactersheet.ui


LIBS += -L$$TGDIR/lib -lentitiesLib

INCLUDEPATH += $$PWD/../entities
DEPENDPATH += $$PWD/../entities
