#ifndef RK_STATISTIC_H
#define RK_STATISTIC_H
#include <ncurses.h>
typedef struct {
    long correct_ch;
    long incorrect_ch;
    long sum_ch;
    long sum_w;
    int speed_ch;
    int speed_word;
}statistic_t;

int statistic(int time, statistic_t *p_stat);
void print_stat(statistic_t *p_stat);
#endif //RK_STATISTIC_H
