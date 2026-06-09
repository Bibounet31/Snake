#include <stdlib.h>
#include "global.h"

int **init() {
    //init grid (list of list.. sounds fun)
    int **grid = malloc(ROWS * sizeof(int *));
    for (int i = 0; i < ROWS; i++) {
        grid[i] = calloc(COLS, sizeof(int));
    }

    // snake start pos..
    grid[10][10] = 1;

    return grid;
}