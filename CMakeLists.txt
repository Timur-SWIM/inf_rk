cmake_minimum_required(VERSION 3.24)
project(rk C)

set(CMAKE_C_STANDARD 99)
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(rk main.c main.h args_check.c args_check.h)
target_link_libraries(rk ${CURSES_LIBRARIES})