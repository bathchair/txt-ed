#ifndef OUTPUT_H
#define OUTPUT_H

#include "parent.h"
#include "appendBuffer.h"
#include "rowOperations.h"

void editorScroll();

void editorDrawRows(struct abuf *ab);

void editorDrawStatusBar(struct abuf *ab);

void editorDrawMessageBar(struct abuf *ab);

void editorRefreshScreen();

void editorSetStatusMessage(const char *fmt, ...);

#endif
