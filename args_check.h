//
// Created by mac on 05.04.2023.
//

#ifndef RK_ARGS_CHECK_H
#define RK_ARGS_CHECK_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

typedef struct {
    char level;
    int max_time;
    int max_mistake;
}args_t;

int check(int argc, char *argv[], args_t args);

#endif //RK_ARGS_CHECK_H
