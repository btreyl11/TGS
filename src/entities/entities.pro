TGDIR = ../../
TEMPLATE = lib
DESTDIR = $$TGDIR/lib
TARGET = entitiesLib
include($$TGDIR/global.pri)

SOURCES += \
    character.cpp \
    player.cpp
HEADERS += \
    character.h \
    player.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
