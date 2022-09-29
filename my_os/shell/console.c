#include <stdio.h>
#include "../include/console.h"

void print_character(char *c) {
    printf("%s",c);
}

void print_string(char *c) {
    printf("%s",c);
}

void print_line(char *c) {
    printf("%s\n",c);
}

enum Color terminal_font_color = GRAY;

void set_terminal_font_color(enum Color) {
    printf('%d',Color)
}

// void print_character_with_color(char, enum Color) {

// }

// void print_string_with_color(char*, enum Color) {

// }

// void print_line_with_color(char*, enum Color) {

// }

// void shift_terminal_up() {

// }