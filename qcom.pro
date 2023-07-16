#-------------------------------------------------
#
# Project created by QtCreator 2010-07-14T17:54:25
#
#-------------------------------------------------
#if QT_VERSION >= 0x050000
QT       += core gui widgets
#else
QT       += core gui
#endif

TARGET = qcom
TEMPLATE = app

INCLUDEPATH += \
    include

SOURCES += qextserial/qextserialport.cpp \
    src/aboutdialog.cpp \
    src/main.cpp \
    src/mainwindow.cpp

HEADERS += include/aboutdialog.h \
    include/mainwindow.h \
    include/ui_aboutdialog.h \
    include/ui_mainwindow.h \
    qextserial/qextserialport_global.h \
    qextserial/qextserialport.h

win32 {
     SOURCES += qextserial/qextserialport_win.cpp
}

unix {
     SOURCES += qextserial/qextserialport_unix.cpp
}

FORMS += ui/mainwindow.ui \
    ui/aboutdialog.ui

RESOURCES += \
    resources/images.qrc

RC_FILE += resources/myico.rc

OTHER_FILES += \
    resources/myico.rc
