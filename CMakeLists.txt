cmake_minimum_required(VERSION 3.24)
project(game C)

set(CMAKE_C_STANDARD 99)
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(game main.c includes/main.h src/args_check.c includes/args_check.h src/statistic.c includes/statistic.h)
target_link_libraries(game ${CURSES_LIBRARIES})
