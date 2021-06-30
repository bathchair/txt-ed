#ifndef ROWOPERATIONS_H
#define ROWOPERATIONS_H

#include "parent.h"

int editorRowCxToRx(erow *row, int cx);

void editorUpdateRow(erow *row);

void editorAppendRow(char *s, size_t len);

void editorRowInsertChar(erow *row, int at, int c);

#endif
