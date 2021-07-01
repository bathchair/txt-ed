#ifndef FILEIO_H
#define FILEIO_H

#include "parent.h"
#include "rowOperations.h"
#include "terminal.h"
#include "output.h"
#include "input.h"

char *editorRowsToString(int *buflen);

void editorOpen(char *filename);

void editorSave();

#endif
