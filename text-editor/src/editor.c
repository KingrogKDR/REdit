#include <stdio.h>
#include <stdlib.h>
#include "editor.h"
#include "input_handler.h"
#include "renderer.h"

void init_editor() {
    printf("Initializing text editor...\n");
}

void run_editor() {
    printf("Editor is running. Press 'q' to exit.\n");
    while (1) {
        char ch = get_input();
        if (ch == 'q') {
            return;
        }
        render_text(ch);
    }
}

void cleanup_editor() {
    printf("Exiting text editor...\n");
}
