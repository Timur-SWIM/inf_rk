
#ifndef RK_MAIN_H
#define RK_MAIN_H

#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include "args_check.h"

typedef struct {
    int correct_ch;
    int incorrect_ch;
    int sum_ch;
    int speed_ch;
    int speed_word;
}statistic_t;

#define EASY_FILE "easy.txt"
#define MEDIUM_FILE "med.txt"
#define HARD_FILE "hard.txt"

#endif //RK_MAIN_H
