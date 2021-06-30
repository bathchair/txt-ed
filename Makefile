CC = gcc
ODIR = obj
IDIR = include
SDIR = src
CFLAGS  = -g -Wall -Wextra -pedantic -std=c99 -I$(IDIR)

_OBJ = appendBuffer.o fileio.o init.o input.o output.o rowOperations.o terminal.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

_DEPS = parent.h erow.h editorConfig.h editorKey.h appendBuffer.h fileio.h init.h input.h output.h rowOperations.h terminal.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

all: kilo

kilo: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

clean: 
	$(RM) kilo $(ODIR)/*.o *~