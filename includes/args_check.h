//
// Created by mac on 05.04.2023.
//

#ifndef RK_ARGS_CHECK_H
#define RK_ARGS_CHECK_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include "main.h"

typedef struct {
    char level;
    int max_time;
    int max_mistake;
}args_t;

void help();
int check(int argc, char *argv[], args_t *p_args);
void read_file(char level, FILE *input_file);

#endif //RK_ARGS_CHECK_H
