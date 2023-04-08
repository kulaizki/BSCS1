#include <stdio.h>
#include <stdlib.h>

typedef struct {
   char FN[24], LN[16], MI;
} Nametype;

typedef struct {
   char ID[10];
   Nametype name;
   char course[8];
   int yearLevel;   
} studrec;

typedef struct node {
    studrec stud;
    struct node *link;
} *LIST;

void insertSorted(LIST *L, studrec S) {

    LIST newNode = (LIST) malloc(sizeof(struct node));
    newNode->stud = S;
    newNode->link = NULL;

    LIST temp = *L;
    LIST prev = NULL;

    while (temp != NULL && atoi(temp->stud.ID) < atoi(S.ID)) {
        prev = temp;
        temp = temp->link;
    }

    if (prev == NULL) {
        newNode->link = *L;
        *L = newNode;
    } else {
        newNode->link = prev->link;
        prev->link = newNode;
    }
}

int main() {
    
    LIST head = NULL;
    LIST temp = NULL;

    studrec student1 = {"1111", {"John", "Doe", 'A'}, "BSCS", 2};
    temp = (LIST) malloc(sizeof(struct node));
    temp->stud = student1;
    temp->link = NULL;
    head = temp;

    studrec student2 = {"2222", {"Jane", "Smith", 'B'}, "BSCS", 1};
    temp->link = (LIST) malloc(sizeof(struct node));
    temp = temp->link;
    temp->stud = student2;
    temp->link = NULL;

    studrec student3 = {"3333", {"Bob", "Johnson", 'C'}, "BSCS", 3};
    temp->link = (LIST) malloc(sizeof(struct node));
    temp = temp->link;
    temp->stud = student3;
    temp->link = NULL;

    studrec student4 = {"1011", {"Insert", "This", 'L'}, "BSCS", 4};
    insertSorted(&head, student4);

    temp = head;
    while (temp != NULL) {
        printf("Student ID: %s\n", temp->stud.ID);
        printf("Name: %s %s %c\n", temp->stud.name.FN, temp->stud.name.LN, temp->stud.name.MI);
        printf("Course: %s\n", temp->stud.course);
        printf("Year level: %d\n", temp->stud.yearLevel);
        printf("\n");
        temp = temp->link;
    }

    return 0;
}