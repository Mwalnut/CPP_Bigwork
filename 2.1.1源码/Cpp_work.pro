QT += core gui
QT += multimedia
Qt += multimediawidgets
CONFIG += resources_big

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Base_Brick.cpp \
    Base_Coin.cpp \
    Base_Pipe.cpp \
    Base_Player.cpp \
    Base_Terminus.cpp \
    Derive_Master.cpp \
    Derive_Mushroom.cpp \
    Derive_Trap.cpp \
    Sys_Button.cpp \
    Sys_GameHelp.cpp \
    Sys_GameSence.cpp \
    Sys_GameWin.cpp \
    Sys_Pause.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Base_Brick.h \
    Base_Coin.h \
    Base_Pipe.h \
    Base_Player.h \
    Base_Terminus.h \
    Derive_Master.h \
    Derive_Mushroom.h \
    Derive_Trap.h \
    Sys_Button.h \
    Sys_GameHelp.h \
    Sys_GameSence.h \
    Sys_GameWin.h \
    Sys_Pause.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    Cpp_work_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    qrc.qrc \
    res.qrc
RC_ICONS = icon.ico
