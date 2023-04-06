#include "../includes/statistic.h"

int statistic(int time, statistic_t *p_stat){
    p_stat->sum_ch = p_stat->correct_ch + p_stat->incorrect_ch;
    p_stat->speed_ch = ((p_stat->sum_ch * 60) / time);
    p_stat->speed_word = ((p_stat->sum_w * 60) / time);
    return 0;
}

void print_stat(statistic_t *p_stat){
    printw("Game over!!!\n");
    printw("Your results:\n");
    printw("Correct characters->%d\n", p_stat->correct_ch);
    printw("Incorrect characters->%d\n", p_stat->incorrect_ch);
    printw("Sum of characters->%d\n", p_stat->sum_ch);
    printw("Sum of word->%d\n", p_stat->sum_w);
    printw("The average speed of character printing in the game->%d\n", p_stat->speed_ch);
    printw("Average word typing speed in the game->%d\n", p_stat->speed_word);
}