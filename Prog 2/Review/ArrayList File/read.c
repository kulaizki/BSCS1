#include <stdio.h>

#define MAX 10

typedef struct {
    char ID[10];
    char course[8];
} studrec;

typedef struct {
    studrec elem[MAX];
    int count;
} ArrayList;

int main() {

    ArrayList B = {.count = 0};
    studrec temp;

    FILE *fp;
	fp = fopen("./data.txt", "r");

    while(fread(&temp, sizeof(studrec), 1, fp) != 0) {
        B.elem[B.count++] = temp;
    }

    int x;
    for (x = 0; x < B.count; ++x) {
        printf("Student %d\n", x + 1);
        printf("ID: %s\n", B.elem[x].ID);
        printf("Course: %s\n\n", B.elem[x].course);
    }
}