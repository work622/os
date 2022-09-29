#define STR_1 HELLO

#define STR_2 WORLD

#define STR_3 TODAY


void print_string(char *str1);

void print_line(char *str2);

void print_string(char *str3);

enum Color {
        BLACK = 0,
        BLUE,
        GREEN,
        CYAN,
        RED,
        PURPLE,
        BROWN,
        GRAY,
        DARK_GRAY,
        LIGHT_BLUE,
        LIGHT_GREEN,
        LIGHT_CYAN,
        LIGHT_RED,
        LIGHT_PURPLE,
        YELLOW,
        WHITE
};

void set_terminal_font_color(enum Color);
// void print_character_with_color(char, enum Color);
// void print_string_with_color(char*, enum Color);
// void print_line_with_color(char*, enum Color);
// void shift_terminal_up();