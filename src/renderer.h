#ifndef RENDERER_H
#define RENDERER_H
#include "buffer.h"
#include <ncurses.h>

void curses_init();
void loadwin();
// void loadwin(buffer *bf, int y);
// void tildeall();
#endif