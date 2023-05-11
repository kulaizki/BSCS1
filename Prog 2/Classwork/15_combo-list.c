#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

typedef struct {
    char FN[24], MI, LN[16];
} Nametype;

typedef struct {
    char ID[10];
    Nametype name;
    char course[8];
    int yearLevel;
} studrec;

typedef struct {
    studrec Elem[MAX];
    int count;
} ArrayList;

typedef struct node {
    studrec elem;
    struct node *link;
} *LinkList;

typedef struct {
    LinkList BSCS;
    ArrayList *BSIT;
} ComboList;

void initializeList(ComboList *CL);

int main() {

    ComboList CL;

    initializeList(&CL);
    strcpy(CL.BSIT->Elem[0].ID, "1234");
    strcpy(CL.BSIT->Elem[0].name.FN, "Fitzsixto Angelo");
    CL.BSIT->Elem[0].name.MI = 'L';
    strcpy(CL.BSIT->Elem[0].name.LN, "Singh");
    strcpy(CL.BSIT->Elem[0].course, "BSCS");
    CL.BSIT->Elem[0].yearLevel = 1;

    printf("ID: %s\n", CL.BSIT->Elem[0].ID);
    printf("Name: %s %c. %s\n", CL.BSIT->Elem[0].name.FN, CL.BSIT->Elem[0].name.MI, CL.BSIT->Elem[0].name.LN);
    printf("Course: %s\n", CL.BSIT->Elem[0].course);
    printf("Year level: %d\n\n", CL.BSIT->Elem[0].yearLevel);

    free(CL.BSIT);
}

void initializeList(ComboList *CL) {
    CL->BSCS = NULL;
    CL->BSIT = (ArrayList *)malloc(sizeof(ArrayList));
    CL->BSIT->count = 0;
}