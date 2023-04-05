#include "main.h"

int main(int argc, char *argv[]) {
    FILE *input_file;
    args_t args;
    statistic_t stat;

    check(argc, argv, args);
    switch (args.level) {
        case 'e':
            input_file = fopen(EASY_FILE, "rt");
            break;
        case 'm':
            input_file = fopen(MEDIUM_FILE, "rt");
            break;
        case 'h':
            input_file = fopen(HARD_FILE, "rt");
            break;
    }
    //input_file = fopen(argv[1], "rt");
    if (input_file == NULL){
        printf("%s File not found", argv[1]);
        exit(EXIT_FAILURE);
    }

    initscr();
    start_color();
    cbreak();
    keypad(stdscr, TRUE);
    noecho();

    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_BLACK);
    init_pair(3, COLOR_CYAN, COLOR_BLACK);

    int c, ch;

    attron(COLOR_PAIR(3));
    printw("Press F1 to exit\n");
    attroff(COLOR_PAIR(3));

    while ((c = fgetc(input_file)) != EOF){
        printw("%c", c);
    }

    fseek(input_file, 0, SEEK_SET);
    move(1, 0);
    int t_c = 0, f_c = 0;
    //time_t end_time = time(NULL) + max_time;
    while ((ch = getch()) != KEY_F(1)){
        c = fgetc(input_file);
        if (ch == c){
            attron(COLOR_PAIR(1));
            printw("%c", c);
            t_c++;
            attroff(COLOR_PAIR(1));
        }
        if (ch != c){
            attron(COLOR_PAIR(2));
            printw("%c", ch);
            f_c++;
            attroff(COLOR_PAIR(2));
        }
        if (c == EOF)
            break;
    }
    fclose(input_file);
    refresh();
    //getch();
    endwin();
    return 0;
}
