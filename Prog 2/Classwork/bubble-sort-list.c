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

void bubbleSort(LIST *L) {

    struct Node* ptr1;
    struct Node* ptr2;
    int temp;
    ptr1 = *L;

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

    studrec student4 = {"999999999", {"Nine", "NineNine", 'N'}, "BSCS", 4};
    current->link = (LIST) malloc(sizeof(struct node));
    current = current->link;
    current->stud = student4;
    current->link = NULL;

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