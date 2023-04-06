#include "../includes/args_check.h"
void help(){
    FILE *help_file;
    char a;
    help_file = fopen("./texts/help.txt", "rt");
    attron(COLOR_PAIR(1));
    printw("Printing speed test game\n");
    attroff(COLOR_PAIR(1));
    while ((a = fgetc(help_file)) != EOF){
        printw("%c", a);
    }
    attron(COLOR_PAIR(3));
    printw("Press F1 to exit\n");
    attroff(COLOR_PAIR(3));
    getch();
    endwin();
    fclose(help_file);
}
int check(int argc, char *argv[], args_t *p_args){
    /** Check number of arguments **/
    if (argc == 2){
        if (strcmp(argv[1], "-help") == 0){
            help();
        } else{
            attron(COLOR_PAIR(2));
            printw("invalid level name\n");
            attroff(COLOR_PAIR(2));
            help();
            return 1;
        }
    }
    if (argc != 4){
        attron(COLOR_PAIR(2));
        printw("invalid number of arguments\n");
        attroff(COLOR_PAIR(2));
        help();
        return 1;
    }
    /** Check first argument **/
    if (strcmp(argv[1], "easy") == 0){
        p_args->level = 'e';
    }
    else if (strcmp(argv[1], "medium") == 0){
        p_args->level = 'm';
    }
    else if (strcmp(argv[1], "hard") == 0){
        p_args->level = 'h';
    }
    else{
        attron(COLOR_PAIR(2));
        printw("invalid level name\n");
        attroff(COLOR_PAIR(2));
        help();
        return 1;
    }


    /** Check second argument **/
    if ((atoi(argv[2]) < 0) || (atoi(argv[2]) > 60)){
        attron(COLOR_PAIR(2));
        printw("invalid time interval\n");
        attroff(COLOR_PAIR(2));
        printw("Time limiter should be bigger than 0 and less than 60\n");
        help();
        return 1;
    } else{
        p_args->max_time = atoi(argv[2]);
    }

    p_args->max_mistake = atoi(argv[3]);
    return 0;
}
