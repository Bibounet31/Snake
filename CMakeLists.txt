cmake_minimum_required(VERSION 4.2)
project(Snake)

set(CMAKE_CXX_STANDARD 14)

add_executable(Snake
        LICENSE
        main.c
        README.md
        menu.c
        global.h
        init.c
        display.c
        snake.c)
