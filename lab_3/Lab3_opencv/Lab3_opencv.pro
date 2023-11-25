QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target



INCLUDEPATH += "/Users/lisavetashymkovich/opencv/build/install/include"
LIBS += -L"/Users/lisavetashymkovich/opencv/build/install/lib" \
        -l"opencv_world"




#INCLUDEPATH += "/Users/lisavetashymkovich/opencv/build/install/include"
#LIBS += -L"/Users/lisavetashymkovich/opencv/build/install/lib" \
#        -l"opencv_world"


#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../../../../../usr/local/Cellar/opencv/4.6.0_1/lib/release/ -lopencv_core.4.6.0
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../../../../../usr/local/Cellar/opencv/4.6.0_1/lib/debug/ -lopencv_core.4.6.0
#else:unix: LIBS += -L$$PWD/../../../../../../../../usr/local/Cellar/opencv/4.6.0_1/lib/ -lopencv_core.4.6.0

#INCLUDEPATH += $$PWD/../../../../../../../../usr/local/lib
#DEPENDPATH += $$PWD/../../../../../../../../usr/local/lib

macx: LIBS += -L$$PWD/../../../../../../opencv/build/install/lib/ -lopencv_world.3.4.3

INCLUDEPATH += $$PWD/../../../../../../opencv/build/install/lib
DEPENDPATH += $$PWD/../../../../../../opencv/build/install/lib
