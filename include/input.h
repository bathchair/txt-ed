#ifndef INPUT_H
#define INPUT_H

#include "parent.h"
#include "terminal.h"
#include "editorOperations.h"
#include "fileio.h"

char *editorPrompt(char *prompt);

void editorMoveCursor(int key);

void editorProcessKeypress();

#endif
