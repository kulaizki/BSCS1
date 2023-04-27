#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct {
    char ID[10];
    char course[8];
} studrec;

typedef struct {
    studrec elem[MAX];
    int count;
} ArrayList;

ArrayList createList (ArrayList *L, char C[]) {
    ArrayList A;
    int x = 0, y;
    while (x < L->count) {
        if (strcmp(L->elem[x].course, C) == 0) {
            for (y = A.count - 1; y >= 0 && strcmp(A.elem[y].ID, L->elem[x].ID) > 0; --y) {
                A.elem[y+1] = A.elem[y];
            }
            A.elem[y+1] = L->elem[x];
            A.count++;
            for (y = x; y < L->count - 1; ++y) {
                L->elem[y] = L->elem[y+1];
            }
            L->count--;
        } else {
            ++x;
        }
    }
    
    return A;
}

void display(ArrayList L) {
    int x;
    for (x = 0; x < L.count; ++x) {
        printf("ID: %s | Course: %s\n", L.elem[x].ID, L.elem[x].course);
    }
    
    printf("\n");
}

int main() {
    
    ArrayList A = {{{"20101010", "BSCS"}, {"20210202", "BSIT"}, {"20010203", "BSCS"}, {"29101010", "BSCS"}, {"24210202", "BSIT"}, {"23010203", "BSCS"}}, 6};
    printf("Original List:\n");
    display(A);
    
    ArrayList B = createList(&A,"BSCS");
    printf("Modified List:\n");
    display(A);
    
    printf("New List:\n");
    display(B);
}