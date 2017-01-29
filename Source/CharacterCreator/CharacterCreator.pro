#-------------------------------------------------
#
# Project created by QtCreator 2017-01-29T13:09:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CharacterCreator
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    debug/moc_mainwindow.cpp \
    xmlio.cpp \
    dep/PugiXML/pugixml.cpp

HEADERS  += mainwindow.h \
    debug/moc_predefs.h \
    dep/RapidXML/rapidxml.hpp \
    dep/RapidXML/rapidxml_iterators.hpp \
    dep/RapidXML/rapidxml_print.hpp \
    dep/RapidXML/rapidxml_utils.hpp \
    ui_mainwindow.h \
    xmlio.h \
    character.h \
    dep/PugiXML/pugiconfig.hpp \
    dep/PugiXML/pugixml.hpp

FORMS    += mainwindow.ui

DISTFILES += \
    dep/RapidXML/manual.html \
    dep/RapidXML/license.txt
