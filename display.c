#include <stdio.h>
#include "global.h"

void print_grid(int **grid) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (grid[i][j] == 0)
                printf(". ");
            else
                printf("O ");
        }
        printf("\n");
    }
}