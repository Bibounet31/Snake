#include <conio.h>
#include "global.h"

void set_terminal(int enable_raw) {
    // pas besoin sur Windows, conio gère ça
}

int get_input(Snake *snake) {
    if (_kbhit()) {  // vérifie si une touche est pressée
        int c = _getch();
        switch (c) {
            case 'z': snake->direction = 0; break;
            case 'd': snake->direction = 1; break;
            case 's': snake->direction = 2; break;
            case 'q': snake->direction = 3; break;
        }
    }
    return 0;
}