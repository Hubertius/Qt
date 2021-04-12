QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    View/setuptab.cpp \
    main.cpp \
    View/mainview.cpp \
    startup.cpp \
    utils.cpp

HEADERS += \
    View/mainview.h \
    View/setuptab.h \
    startup.h \
    utils.h

QMAKE_CXXFLAGS = -std=c++11

FORMS += \
    View/mainview.ui \
    View/setuptab.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    VfpResources.qrc
