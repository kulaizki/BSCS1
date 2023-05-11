#include <stdio.h>

#define MAX 3

typedef struct {
    char ID[10];
    char course[8];
} studrec;

typedef struct {
    studrec elem[MAX];
    int count;
} ArrayList;

int main() {

    ArrayList A = {{{"123", "BSCS"}, {"456", "BSIT"}, {"789", "BSCS"}}, 3};

    FILE *fp;
	fp = fopen("./data.txt", "w");

    fwrite(&A, sizeof(A), 1, fp);

    fclose(fp);

    return 0;
}