#include "global.h"

void move_snake(int **grid, Snake *snake) {
    // remove old tail position
    grid[snake->body[snake->length - 1].x][snake->body[snake->length - 1].y] = 0;

    // move each segment to the one next to it (tail to head)
    for (int i = snake->length - 1; i > 0; i--) {
        snake->body[i] = snake->body[i - 1];
    }

    // move head to the selected dirrection
    switch (snake->direction) {
        case 0: snake->body[0].x--; break; // up
        case 1: snake->body[0].y++; break; // right
        case 2: snake->body[0].x++; break; // down
        case 3: snake->body[0].y--; break; // left
    }

    // set new head pos qwq
    grid[snake->body[0].x][snake->body[0].y] = 1;
}