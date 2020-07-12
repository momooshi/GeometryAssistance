QT       += core gui

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
LIBS += -L../FigureCreation/release -lFigureCreation
LIBS+= -L../FigureListShow/release -lFigureListShow
LIBS+= -L../FiguresList/release -lFiguresList
SOURCES += \
    figurechoice.cpp \
    figureshow.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    figurechoice.h \
    figureshow.h \
    mainwindow.h

FORMS += \
    figurechoice.ui \
    figureshow.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../Figure/release/ -lFigure
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../Figure/debug/ -lFigure

INCLUDEPATH += $$PWD/../Figure
DEPENDPATH += $$PWD/../Figure

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Figure/release/libFigure.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Figure/debug/libFigure.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Figure/release/Figure.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Figure/debug/Figure.lib
