#include <stdio.h>
#include <stdlib.h>


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
