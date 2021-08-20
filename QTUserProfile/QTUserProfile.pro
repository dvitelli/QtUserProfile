QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accountmainwindow.cpp \
    comboboxlist.cpp \
    filemanagement.cpp \
    loginobject.cpp \
    main.cpp \
    mainwindow.cpp \
    namematrix.cpp \
    stringsplit.cpp \
    usernamecharactercheck.cpp

HEADERS += \
    accountmainwindow.h \
    comboboxlist.h \
    filemanagement.h \
    loginobject.h \
    mainwindow.h \
    namematrix.h \
    stringsplit.h \
    usernamecharactercheck.h

FORMS += \
    accountmainwindow.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
