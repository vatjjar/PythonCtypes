# This is a very dumbass Makefile, but it suits the needs

DEBUGFLAGS=-g
INCDIRS=
LIBDIRS=
CFLAGS=${DEBUGFLAGS} -Wall -fPIC
LIBS=
OUTPUT=libtestlib.so

MKDIR=mkdir
CPP=g++
RM=rm

_OBJS=                            \
    testlib_core.o                \
    testclass.o

ODIR=objs
OBJS=$(patsubst %,$(ODIR)/%,$(_OBJS))

HEADERS=                          \
    testlib_core.h                \
    testclass.h

default: ${ODIR} all

${ODIR}:
	${MKDIR} -p ${ODIR}

${ODIR}/%.o: %.cpp ${HEADERS}
	${CPP} -c -o $@ $< $(CFLAGS) ${INCDIRS}

all: ${OBJS}
	${CPP} -shared -o ${OUTPUT} ${OBJS} ${LIBDIRS} ${LIBS}
	make -f Makefile.unittest
	h2xml testlib_core.h -o testlib_core.xml -I ./
	LD_LIBRARY_PATH=./ xml2py testlib_core.xml -o testlib_core.py -l ${OUTPUT}

clean:
	rm -rf ${OBJS} ${OUTPUT}
	make -f Makefile.unittest clean

