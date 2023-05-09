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

    FILE *fp;
	fp = fopen("./data.txt", "r");
}