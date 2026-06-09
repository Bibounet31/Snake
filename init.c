#include <stdlib.h>
#include <time.h>

#include "global.h"

int **init(Snake *snake) {
    srand(time(NULL));
    //init grid (list of list.. sounds fun)
    int **grid = malloc(ROWS * sizeof(int *));
    for (int i = 0; i < ROWS; i++) {
        grid[i] = calloc(COLS, sizeof(int));
    }

    // default snake's atributes
    snake->length = 1;
    snake->direction = 1;
    snake->body = malloc(snake->length * sizeof(Point));
    snake->body[0].x = ROWS / 2;
    snake->body[0].y = COLS / 2;

    // mark snake's head
    grid[snake->body[0].x][snake->body[0].y] = 1;



    spawn_food(grid);
    return grid;
}



