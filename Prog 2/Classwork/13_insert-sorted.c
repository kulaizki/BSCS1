#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct node {
    char elem[MAX];
    int count;
} *ArrayList;

void insertSorted(ArrayList *L, char c) {
    if ((*L)->count < MAX) {
        int x;
        for (x = (*L)->count - 1; x > 0 && c < (*L)->elem[x]; --x) {
            (*L)->elem[x + 1] = (*L)->elem[x];
        }
        (*L)->elem[x] = c;
    }
}

int main() {

    ArrayList L;

    for (int i = 0; i < 5; ++i) {
        L->elem[i] = i + 97;
    }
    L->count = 5;

    for (int i = 0; i < 6; ++i) {
        printf("%c\n", L->elem[i]);
    }

    insertSorted(&L, 'c');
}