#ifndef ROWOPERATIONS_H
#define ROWOPERATIONS_H

#include "parent.h"

int editorRowCxToRx(erow *row, int cx);

void editorUpdateRow(erow *row);

void editorInsertRow(int at, char *s, size_t len);

void editorFreeRow(erow *row);

void editorDelRow(int at);

void editorRowInsertChar(erow *row, int at, int c);

void editorRowAppendString(erow *row, char *s, size_t len);

void editorRowDelChar(erow *row, int at);

#endif
