QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    view.cpp \
    widget.cpp

HEADERS += \
    view.h \
    widget.h

FORMS += \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
include($$(Dental_Scan_3rd_Libs_Path)/PCL_1.12.0_Cuda/PCL1.12.0.pri)
include($$(Dental_Scan_3rd_Libs_Path)/PCL_1.12.0_Cuda/PCL1.12.0_3rdParty.pri)
