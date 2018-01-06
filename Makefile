#############################################################################
# Makefile for building: Editor
# Generated by qmake (2.01a) (Qt 4.8.7) on: Sat Jan 6 13:02:01 2018
# Project:  Editor.pro
# Template: app
# Command: /usr/local/qt4/bin/qmake -o Makefile Editor.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/local/qt4/mkspecs/linux-g++ -I. -I/usr/local/qt4/include/QtCore -I/usr/local/qt4/include/QtGui -I/usr/local/qt4/include -I. -ILibrary -I.
LINK          = g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/usr/local/qt4/lib
LIBS          = $(SUBLIBS)  -L/usr/local/qt4/lib -lQtGui -L/usr/local/qt4/lib -L/usr/X11R6/lib -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/local/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp moc_editor.cpp
OBJECTS       = main.o \
		moc_editor.o
DIST          = /usr/local/qt4/mkspecs/common/unix.conf \
		/usr/local/qt4/mkspecs/common/linux.conf \
		/usr/local/qt4/mkspecs/common/gcc-base.conf \
		/usr/local/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/local/qt4/mkspecs/common/g++-base.conf \
		/usr/local/qt4/mkspecs/common/g++-unix.conf \
		/usr/local/qt4/mkspecs/qconfig.pri \
		/usr/local/qt4/mkspecs/features/qt_functions.prf \
		/usr/local/qt4/mkspecs/features/qt_config.prf \
		/usr/local/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/local/qt4/mkspecs/features/default_pre.prf \
		/usr/local/qt4/mkspecs/features/release.prf \
		/usr/local/qt4/mkspecs/features/default_post.prf \
		/usr/local/qt4/mkspecs/features/shared.prf \
		/usr/local/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/local/qt4/mkspecs/features/warn_on.prf \
		/usr/local/qt4/mkspecs/features/qt.prf \
		/usr/local/qt4/mkspecs/features/unix/thread.prf \
		/usr/local/qt4/mkspecs/features/moc.prf \
		/usr/local/qt4/mkspecs/features/resources.prf \
		/usr/local/qt4/mkspecs/features/uic.prf \
		/usr/local/qt4/mkspecs/features/yacc.prf \
		/usr/local/qt4/mkspecs/features/lex.prf \
		/usr/local/qt4/mkspecs/features/include_source_dir.prf \
		Editor.pro
QMAKE_TARGET  = Editor
DESTDIR       = 
TARGET        = Editor

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: Editor.pro  /usr/local/qt4/mkspecs/linux-g++/qmake.conf /usr/local/qt4/mkspecs/common/unix.conf \
		/usr/local/qt4/mkspecs/common/linux.conf \
		/usr/local/qt4/mkspecs/common/gcc-base.conf \
		/usr/local/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/local/qt4/mkspecs/common/g++-base.conf \
		/usr/local/qt4/mkspecs/common/g++-unix.conf \
		/usr/local/qt4/mkspecs/qconfig.pri \
		/usr/local/qt4/mkspecs/features/qt_functions.prf \
		/usr/local/qt4/mkspecs/features/qt_config.prf \
		/usr/local/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/local/qt4/mkspecs/features/default_pre.prf \
		/usr/local/qt4/mkspecs/features/release.prf \
		/usr/local/qt4/mkspecs/features/default_post.prf \
		/usr/local/qt4/mkspecs/features/shared.prf \
		/usr/local/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/local/qt4/mkspecs/features/warn_on.prf \
		/usr/local/qt4/mkspecs/features/qt.prf \
		/usr/local/qt4/mkspecs/features/unix/thread.prf \
		/usr/local/qt4/mkspecs/features/moc.prf \
		/usr/local/qt4/mkspecs/features/resources.prf \
		/usr/local/qt4/mkspecs/features/uic.prf \
		/usr/local/qt4/mkspecs/features/yacc.prf \
		/usr/local/qt4/mkspecs/features/lex.prf \
		/usr/local/qt4/mkspecs/features/include_source_dir.prf \
		/usr/local/qt4/lib/libQtGui.prl \
		/usr/local/qt4/lib/libQtCore.prl
	$(QMAKE) -o Makefile Editor.pro
/usr/local/qt4/mkspecs/common/unix.conf:
/usr/local/qt4/mkspecs/common/linux.conf:
/usr/local/qt4/mkspecs/common/gcc-base.conf:
/usr/local/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/local/qt4/mkspecs/common/g++-base.conf:
/usr/local/qt4/mkspecs/common/g++-unix.conf:
/usr/local/qt4/mkspecs/qconfig.pri:
/usr/local/qt4/mkspecs/features/qt_functions.prf:
/usr/local/qt4/mkspecs/features/qt_config.prf:
/usr/local/qt4/mkspecs/features/exclusive_builds.prf:
/usr/local/qt4/mkspecs/features/default_pre.prf:
/usr/local/qt4/mkspecs/features/release.prf:
/usr/local/qt4/mkspecs/features/default_post.prf:
/usr/local/qt4/mkspecs/features/shared.prf:
/usr/local/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/local/qt4/mkspecs/features/warn_on.prf:
/usr/local/qt4/mkspecs/features/qt.prf:
/usr/local/qt4/mkspecs/features/unix/thread.prf:
/usr/local/qt4/mkspecs/features/moc.prf:
/usr/local/qt4/mkspecs/features/resources.prf:
/usr/local/qt4/mkspecs/features/uic.prf:
/usr/local/qt4/mkspecs/features/yacc.prf:
/usr/local/qt4/mkspecs/features/lex.prf:
/usr/local/qt4/mkspecs/features/include_source_dir.prf:
/usr/local/qt4/lib/libQtGui.prl:
/usr/local/qt4/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile Editor.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/Editor1.0.0 || $(MKDIR) .tmp/Editor1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/Editor1.0.0/ && $(COPY_FILE) --parents editor.h Library/library.cpp editor.cpp .tmp/Editor1.0.0/ && $(COPY_FILE) --parents main.cpp .tmp/Editor1.0.0/ && (cd `dirname .tmp/Editor1.0.0` && $(TAR) Editor1.0.0.tar Editor1.0.0 && $(COMPRESS) Editor1.0.0.tar) && $(MOVE) `dirname .tmp/Editor1.0.0`/Editor1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/Editor1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_editor.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_editor.cpp
moc_editor.cpp: editor.h
	/usr/local/qt4/bin/moc $(DEFINES) $(INCPATH) editor.h -o moc_editor.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

main.o: main.cpp editor.cpp \
		Library/library.cpp \
		editor.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

moc_editor.o: moc_editor.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_editor.o moc_editor.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

