#ifndef GLOBAL_H
#define GLOBAL_H

#define ROWS 20
#define COLS 20




typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point *body;
    int length;
    int direction; //for ref:  0=up 1=right 2=down 3=left
} Snake;

void move_snake(int **grid, Snake *snake);

void print_grid(int **grid);

int **init(Snake *snake);


#endif