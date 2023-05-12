#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 3

typedef struct {
    char name[30];
    int hp;
    int dmg;
} hero;

void displayHeroes(hero HL[]);

int main() {

    hero heroList1[MAX] = {{"Invoker", 600, 61}, {"Shadow Fiend", 570, 45}, {"Tinker", 589, 59}},
         heroList2[MAX];

    printf("Displaying heroList1\n");
    displayHeroes(heroList1);
    
    memcpy(heroList2, heroList1, sizeof(heroList1));

    printf("Displaying heroList2\n");
    displayHeroes(heroList2);
}

void displayHeroes(hero HL[]) {
    int x;
    for (x = 0; x < MAX; ++x) {
        printf("Hero name: %s\n", HL[x].name);
        printf("Hero health: %d\n", HL[x].hp);
        printf("Hero damage: %d\n\n", HL[x].dmg);
    }
}