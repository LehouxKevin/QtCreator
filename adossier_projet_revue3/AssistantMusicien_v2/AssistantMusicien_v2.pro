#-------------------------------------------------
#
# Project created by QtCreator 2019-02-26T09:17:05
#
#-------------------------------------------------

QT       += core gui widgets sql multimedia

TARGET = AssistantMusicien_v2
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        assistantmusicien.cpp \
    gestionnairelistes.cpp \
    lecteurpartitions.cpp \
    lecteuraudio.cpp \
    metronome.cpp \
    accesbdd.cpp \
    titre.cpp \
    parametres.cpp \
    interfacemetronome.cpp \
    nbnote.cpp \
    pavenum.cpp \
    signature.cpp \
    structurerythm.cpp \
    audioinfo.cpp \
    Sonometre.cpp

HEADERS += \
        assistantmusicien.h \
    gestionnairelistes.h \
    lecteurpartitions.h \
    lecteuraudio.h \
    metronome.h \
    accesbdd.h \
    titre.h \
    parametres.h \
    interfacemetronome.h \
    nbnote.h \
    pavenum.h \
    signature.h \
    structurerythm.h \
    audioinfo.h \
    Sonometre.h

FORMS += \
        assistantmusicien.ui \
    gestionnairelistes.ui \
    lecteurpartitions.ui \
    lecteuraudio.ui \
    metronome.ui \
    parametres.ui \
    interfacemetronome.ui \
    nbnote.ui \
    pavenum.ui \
    signature.ui \
    structurerythm.ui \
    sonometre.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ressources.qrc

# RC_FILE += icone.rc

INCLUDEPATH += /usr/include/poppler/qt5
LIBS += -L/usr/lib -lpoppler-qt5
