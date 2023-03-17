#include <stdio.h>

typedef struct {
    char fname[20];
    int ID;
} test;

typedef struct {
    test l[10];
    int ctr;
} list;

int main() {

    list x;
    printf("Enter n: ");
    scanf("%d", &x.ctr);
    fflush(stdin);

    int i;
    for (i = 0; i < x.ctr; ++i) {
        printf("Enter test #%d fname: ", i+1);
        gets(x.l[i].fname);
        printf("Enter test #%d ID: ", i+1);
        scanf(" %d", &x.l[i].ID);
        fflush(stdin);
    }

    if (i) {
        int j;
        for (j = 0; j < x.ctr; ++j) {
            printf("test #%d fname: %s\n", j+1, x.l[j].fname);
            printf("test #%d ID: %d\n", j+1, x.l[j].ID);
        }
    }
}