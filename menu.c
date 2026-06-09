#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "global.h"


void menu() {
    printf("hi! \n");

    int choice = 0;

    printf("choisissez une option : \n");
    printf("1. Start \n");
    printf("2. Exit \n");



    scanf("%d", &choice);

    switch (choice) {
        case 1:
            /// call init game then start game
            printf("starting game....");
            Snake snake;
            int **grid = init(&snake);
            set_terminal(1);

            while (1) {
                get_input(&snake);
                system("clear");
                print_grid(grid);
                move_snake(grid, &snake);
                usleep(200000);
            }

            set_terminal(0);
            break;



        case 2:
            //exit
            printf("are you sure? \n");
            printf("1. yes \n");
            printf("2. no \n");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("bai!");
                    exit(0);

                case 2:
                    menu();
            }
            break;
    }
}
