#include <stdio.h>

typedef struct {
    char name[10];
    char couleur[10];
    int taille;
}Snake;

void afficherSnake(Snake snake) {
    printf("Name: %s\n", snake.name);
    printf("Couleur: %s\n", snake.couleur);
    printf("Taille: %d\n", snake.taille);
}

int main() {
    Snake snake;

    printf("name : \n");
    scanf("%s", snake.name);
    printf("couleur : \n");
    scanf("%s", snake.couleur);
    printf("taille : \n");
    scanf("%d", &snake.taille);

    afficherSnake(snake);
    return 0;
}