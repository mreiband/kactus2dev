# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Add-in.
# ------------------------------------------------------

TEMPLATE = lib
TARGET = VerilogGeneratorPlugin
DESTDIR = ../../executable/Plugins
QT += core xml widgets gui
CONFIG += release
DEFINES += QT_DLL VERILOGGENERATORPLUGIN_LIB QT_WIDGETS_LIB QT_XML_LIB
INCLUDEPATH += ./GeneratedFiles \
    ./../.. \
    . \
    ./GeneratedFiles/Debug
LIBS += -L"./../../executable" \
    -lIPXACTmodelsd
DEPENDPATH += .
MOC_DIR += ./GeneratedFiles/debug
OBJECTS_DIR += debug
UI_DIR += ./GeneratedFiles
RCC_DIR += ./GeneratedFiles
include(VerilogGeneratorPlugin.pri)

target.path = /usr/share/kactus2/plugins
INSTALLS += target