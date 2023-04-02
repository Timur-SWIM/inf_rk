#include "main.h"

int main(int argc, char *argv[]) {
    FILE *input_file;
    input_file = fopen(argv[1], "rt");
    if (input_file == NULL){
        printf("%s File not found", argv[1]);
        exit(EXIT_FAILURE);
    }
    initscr();
    start_color();
    cbreak();
    keypad(stdscr, TRUE);		/* I need that nifty F1 	*/
    noecho();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_BLACK);

    char c, ch;
    printw("Press F1 to exit\n");
    while ((c = fgetc(input_file)) != EOF){
        printw("%c", c);
    }

    fseek(input_file, 0, SEEK_SET);
    move(1, 0);
    int t_c = 0, f_c = 0;

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
    }
    refresh();
    getch();
    endwin();
    fclose(input_file);
    return 0;
}
