#include <stdio.h>
#include <termios.h>
#include <fcntl.h>
#include "global.h"

void set_terminal(int enable_raw) {
    struct termios t;
    tcgetattr(0, &t);
    if (enable_raw) {
        t.c_lflag &= ~(ICANON | ECHO);
        tcsetattr(0, TCSANOW, &t);
        fcntl(0, F_SETFL, O_NONBLOCK);
    } else {
        t.c_lflag |= (ICANON | ECHO);
        tcsetattr(0, TCSANOW, &t);
        fcntl(0, F_SETFL, 0);
    }
}

int get_input(Snake *snake) {
    int c = getchar();
    switch (c) {
        case 'z': snake->direction = 0; break;
        case 'd': snake->direction = 1; break;
        case 's': snake->direction = 2; break;
        case 'q': snake->direction = 3; break;
    }
}