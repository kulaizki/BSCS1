#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    
    LIST current = *L;
    while (current != NULL && strcmp(current->stud.ID, S.ID) == 1) {
        current = current->link;
    }

    if (current != NULL) {
        LIST temp = current->link;
        current->link = newNode;
        newNode->link = temp;
    }
}

int main() {
    
    LIST head = NULL;
    LIST current = NULL;

    studrec student1 = {"123456789", {"John", "Doe", 'A'}, "BSCS", 2};
    current = (LIST) malloc(sizeof(struct node));
    current->stud = student1;
    current->link = NULL;
    head = current;

    studrec student2 = {"234567890", {"Jane", "Smith", 'B'}, "BSCS", 1};
    current->link = (LIST) malloc(sizeof(struct node));
    current = current->link;
    current->stud = student2;
    current->link = NULL;

    studrec student3 = {"345678901", {"Bob", "Johnson", 'C'}, "BSCS", 3};
    current->link = (LIST) malloc(sizeof(struct node));
    current = current->link;
    current->stud = student3;
    current->link = NULL;

    studrec student4 = {"133333333", {"Insert", "This", 'L'}, "BSCS", 4};
    insertSorted(&head, student4);

    current = head;
    while (current != NULL) {
        printf("Student ID: %s\n", current->stud.ID);
        printf("Name: %s %s %c\n", current->stud.name.FN, current->stud.name.LN, current->stud.name.MI);
        printf("Course: %s\n", current->stud.course);
        printf("Year level: %d\n", current->stud.yearLevel);
        printf("\n");
        current = current->link;
    }

    return 0;
}