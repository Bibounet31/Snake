#include "global.h"



int main() {

    Snake snake;


    int **grid = init(&snake);

    
    print_grid(grid);
    //menu();

    return 0;
}
