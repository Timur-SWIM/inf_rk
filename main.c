#include "includes/main.h"

int main(int argc, char *argv[]) {
    FILE *input_file;

    args_t args;     //init arguments structure
    args_t *p_args;
    p_args = &args;

    statistic_t stat;   // init statistic structure
    statistic_t *p_stat;
    p_stat = &stat;

    initscr();         /* Start curses mode */
    start_color();     /* Init color */
    cbreak();          /* Line buffering disabled */
    keypad(stdscr, TRUE); /* I need that nifty F1 	*/
    noecho();

    init_pair(1, COLOR_GREEN, COLOR_BLACK);     // cor char
    init_pair(2, COLOR_RED, COLOR_BLACK);       // incor char
    init_pair(3, COLOR_CYAN, COLOR_BLACK);      // for text

    int c, ch;
    int y, x;

    /** Checking arguments **/
    check(argc, argv, p_args);

    /** Selecting the text to be read by level **/
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
    if (input_file == NULL){
        printf("File not found");
        exit(EXIT_FAILURE);
    }

    attron(COLOR_PAIR(3));
    printw("Press F1 to exit\n");
    attroff(COLOR_PAIR(3));

    /** Text output to the screen **/
    while ((c = fgetc(input_file)) != EOF){
        printw("%c", c);
    }

    getyx(stdscr, y, x);
    fseek(input_file, 0, SEEK_SET);
    move(1, 0);

    stat.correct_ch = 0;
    stat.incorrect_ch = 0;
    stat.sum_w = 0;

    /** Starting the game **/
    time_t end_time = time(NULL) + args.max_time;
    while ((ch = getch()) != KEY_F(1)){
        c = fgetc(input_file);
        if (ch == c){
            attron(COLOR_PAIR(1));
            printw("%c", c);
            attroff(COLOR_PAIR(1));
            stat.correct_ch++;

        }
        if (ch != c){
            attron(COLOR_PAIR(2));
            printw("%c", ch);
            attroff(COLOR_PAIR(2));
            stat.incorrect_ch++;
        }
        if (ch == ' ')
            stat.sum_w++;

        if (stat.incorrect_ch > args.max_mistake){
            move(y, 0);
            attron(COLOR_PAIR(2));
            printw("Exceeded the number of mistake\n");
            attroff(COLOR_PAIR(2));
            break;
        }
        if (c == EOF)
            break;
        if (time(NULL) >= end_time) {
            break;
        }
    }
    move(y + 1, 0);

    int time = args.max_time;
    /** Compilation of statistics **/
    statistic(time, p_stat);
    print_stat(p_stat);

    refresh();
    getch();
    endwin();
    fclose(input_file);

    return 0;
}
