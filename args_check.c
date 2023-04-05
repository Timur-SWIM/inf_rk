#include "args_check.h"

int check(int argc, char *argv[], args_t args){
    /** Check number of arguments **/
    if (argc != 4){
        puts("invalid number of arguments");
        //print_help;
        return EXIT_FAILURE;
    }
    /** Check first argument **/
    if (strcmp(argv[1], "easy") == 0){
        args.level = 'e';
    }
    else if (strcmp(argv[1], "medium") == 0){
        args.level = 'm';
    }
    else if (strcmp(argv[1], "hard") == 0){
        args.level = 'h';
    } else{
        puts("invalid level name");
        return EXIT_FAILURE;
    }

    /** Check second argument **/
    if ((atoi(argv[2]) < 0) || (atoi(argv[2]) > 60)){
        puts("invalid time interval");
        puts("Time limiter should be bigger than 0 and less than 60");
        return EXIT_FAILURE;
    } else{
        args.max_time = atoi(argv[2]);
    }

    args.max_mistake = atoi(argv[3]);
    return 0;
}