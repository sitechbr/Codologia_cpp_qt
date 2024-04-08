QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    backpack.cpp \
    backpackdb.cpp \
    driverdb.cpp \
    magazine.cpp \
    main.cpp \
    mainwindow.cpp \
    registrationw.cpp

HEADERS += \
    backpack.h \
    backpackdb.h \
    driverdb.h \
    magazine.h \
    mainwindow.h \
    registrationw.h

FORMS += \
    backpack.ui \
    magazine.ui \
    mainwindow.ui \
    registrationw.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc
