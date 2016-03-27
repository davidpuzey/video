QT += widgets multimedia
HEADERS =   inc/controldialog.h \
            inc/settingsdialog.h
SOURCES =   src/main.cpp \
            src/controldialog.cpp \
            src/settingsdialog.cpp
DESTDIR = output
OBJECTS_DIR = tmp
MOC_DIR = tmp

TARGET = video
