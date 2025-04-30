// #include "buffer.h"
#include <ncurses.h>
#include <stdlib.h>

void init_colors() {
  start_color();

  // Check if terminal supports colors
  if (!has_colors() || !can_change_color()) {
    endwin();
    fprintf(stderr, "Your terminal does not support color changes.\n");
    exit(1);
  }

  // Some custom Catppuccin Mocha colors (RGB values 0-1000)
  init_color(COLOR_BLACK, 118, 118, 180); // base
  init_color(COLOR_WHITE, 804, 839, 956); // text
  init_color(COLOR_RED, 953, 545, 659);   // red
  init_color(COLOR_GREEN, 651, 890, 631); // green
  init_color(COLOR_BLUE, 490, 709, 964);  // blue (for functions maybe)

  init_pair(1, COLOR_WHITE, COLOR_BLACK); // default
  init_pair(2, COLOR_GREEN, COLOR_BLACK); // strings
  init_pair(3, COLOR_RED, COLOR_BLACK);   // errors
  init_pair(4, COLOR_BLUE, COLOR_BLACK);  // keywords
}

void curses_init() {
  initscr();
  noecho();
  printw("Hello World");

  init_colors();

  // refresh(); /* Print it on to the real screen */
  // getch();   /* Wait for user input */

  // endwin();  /* End curses mode */
}

void loadwin() {
  clear();
  attron(COLOR_PAIR(1)); // set default
  printw("Hello Editor");
  refresh();
  attroff(COLOR_PAIR(1));
}