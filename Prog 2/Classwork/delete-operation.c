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

int deleteAll(LIST *L, char course[]) {

    LIST prev = NULL;
    LIST C = *L;
    int deleted = 0;

    while (C != NULL) {
        if (strcmp(C->stud.course, course) == 0) {
            deleted++;
            LIST temp = C;
            if (prev == NULL) {
                *L = C->link;
            } else {
                prev->link = C->link;
            }
            C = C->link;
            free(temp);
        } else {
            prev = C;
            C = C->link;
        }
    }

    return deleted;
}

int main() {
    
    LIST head = NULL;
    LIST temp = NULL;

    studrec student1 = {"1111", {"John", "Doe", 'A'}, "BSIT", 2};
    temp = (LIST) malloc(sizeof(struct node));
    temp->stud = student1;
    temp->link = NULL;
    head = temp;

    studrec student2 = {"2222", {"Jane", "Smith", 'B'}, "BSIT", 1};
    temp->link = (LIST) malloc(sizeof(struct node));
    temp = temp->link;
    temp->stud = student2;
    temp->link = NULL;

    studrec student3 = {"3333", {"Bob", "Johnson", 'C'}, "BSCS", 3};
    temp->link = (LIST) malloc(sizeof(struct node));
    temp = temp->link;
    temp->stud = student3;
    temp->link = NULL;

    printf("%d\n", deleteAll(&head, "BSIT"));

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