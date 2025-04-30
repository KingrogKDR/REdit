#include "renderer.h"
#include <ncurses.h>

int main() {

  curses_init();
  loadwin();
  return 0;
}