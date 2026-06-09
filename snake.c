#include <stdlib.h>

#include "global.h"

void spawn_food(int **grid) {
    int x, y;
    do {
        x = rand() % ROWS;
        y = rand() % COLS;
    //search for an enmpty case
    } while (grid[x][y] != 0);
    grid[x][y] = 2;
}



void move_snake(int **grid, Snake *snake) {
    //check new head pos before moving
    Point new_head = snake->body[0];
    switch (snake->direction) {
        case 0: new_head.x--; break; // up
        case 1: new_head.y++; break; // right
        case 2: new_head.x++; break; // down
        case 3: new_head.y--; break; // left
    }


    // if food > grow
    if (grid[new_head.x][new_head.y] == 2) {
        snake->length++;
        snake->body = realloc(snake->body, snake->length * sizeof(Point));
        spawn_food(grid);
    } else {
        // remove old tail position
        grid[snake->body[snake->length - 1].x][snake->body[snake->length - 1].y] = 0;
    }

    // move each segment to the one next to it (tail to head)
    for (int i = snake->length - 1; i > 0; i--) {
        snake->body[i] = snake->body[i - 1];
    }

    // set new head pos qwq
    snake->body[0] = new_head;
    grid[new_head.x][new_head.y] = 1;
}