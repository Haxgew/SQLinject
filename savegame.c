// savegame.c
// Compile using `gcc -fno-stack-protector savegame.c`
// Run using `./a.out`

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Hero {
    unsigned int hp;
    char name[10];
    unsigned int gold;
};

int main(int argc, const char *argv[])
{
    struct Hero h;
    h.hp = 30;
    h.gold = 8;
    
    printf("Name: ");
    scanf("%s", h.name);

    printf("\n");
    printf("----- SAVEGAME DETAILS -----\n");
    printf("Name: %s\n", h.name);
    printf("HP: %d | Gold: %d\n", h.hp, h.gold);
    printf("----------------------------\n");

    return 0;
}
