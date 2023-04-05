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

studrec findStudent(LIST L, char ID[]) {

    studrec S = {"XXXXXX", {"XXX", "XXX", 'X'}, "XXXX", 0};
    LIST C;
    for (C = L; C != NULL && strcmp(C->stud.ID, ID); C = C->link) {}
    return (C != NULL ? C->stud : S);
}

int main() {
    // Create the list
    LIST head = NULL;
    LIST current = NULL;

    // Create the first studrec and add it to the list
    studrec student1 = {"123456789", {"John", "Doe", 'A'}, "BSCS", 2};
    current = (LIST) malloc(sizeof(struct node));
    current->stud = student1;
    current->link = NULL;
    head = current;

    // Create the second studrec and add it to the list
    studrec student2 = {"234567890", {"Jane", "Smith", 'B'}, "BSCS", 1};
    current->link = (LIST) malloc(sizeof(struct node));
    current = current->link;
    current->stud = student2;
    current->link = NULL;

    // Create the third studrec and add it to the list
    studrec student3 = {"345678901", {"Bob", "Johnson", 'C'}, "BSCS", 3};
    current->link = (LIST) malloc(sizeof(struct node));
    current = current->link;
    current->stud = student3;
    current->link = NULL;

    // Print out the list to verify that it was created correctly
    current = head;
    while (current != NULL) {
        printf("Student ID: %s\n", current->stud.ID);
        printf("Name: %s %s %c\n", current->stud.name.FN, current->stud.name.LN, current->stud.name.MI);
        printf("Course: %s\n", current->stud.course);
        printf("Year level: %d\n", current->stud.yearLevel);
        printf("\n");
        current = current->link;
    }

    studrec newstud = findStudent(head, "20103994");
    printf("Student ID: %s\n", newstud.ID);
    printf("Name: %s %s %c\n", newstud.name.FN, newstud.name.LN, newstud.name.MI);
    printf("Course: %s\n", newstud.course);
    printf("Year level: %d\n", newstud.yearLevel);
    printf("\n");

    return 0;
}