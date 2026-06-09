#include <stdlib.h>
#include <unistd.h>
#include "global.h"



int main() {

    Snake snake;
    int **grid = init(&snake);

    while (1) {
        system("clear");
        print_grid(grid);
        usleep(300000);  // 200ms
        move_snake(grid, &snake);
    }
    //menu();


    return 0;
}



