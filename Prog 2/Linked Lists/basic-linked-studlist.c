#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct {
    char fname[26];
    char MI;
    char lname[16]; 
} NameType;

typedef struct {
    NameType name;
    int ID;
    char course[10];
    char gender;
} StudType;

typedef struct Node {
    StudType stud;
    struct Node *next;
} StudList;

void insertFront(StudList **list);
void deleteFront(StudList **list);
int searchStudent(StudList *list, int ID);
void display(StudList *list);
void freeList(StudList *list);

int main() {

    StudList *list = NULL;
    int selection = 0;

    while (selection != 5) {
        system("cls");
        printf("[1] Insert student\n"
               "[2] Delete student\n"
               "[3] Search student with ID\n"
               "[4] Display all student details\n"
               "[5] Exit\n\n"
               "Enter selection: ");
        scanf("%d", &selection);
        switch(selection) {
            case 1: 
                system("cls");
                insertFront(&list);
                break;
            case 2:
                system("cls");
                deleteFront(&list);
            case 3:
                system("cls");
                int id;
                printf("Enter ID: ");
                scanf("%d", &id);
                if (!searchStudent(list, id)) {
                    printf("Student %d not found\n", id);
                } else {
                    printf("Student %d is in the list\n");
                }
                printf("\nPress any key to proceed...");
                getch();
                break;
            case 4:
                display(list);
                printf("Press any key to proceed...");
                getch();
                break;
            case 5:
                system("cls");
                printf("Exited program");
                break;
            default:
                system("cls");
                printf("Invalid selection\n");
                break;
        }
    }

    freeList(list);
}

void insertFront(StudList **list) {
    system("cls");
    StudList *newStudent = (StudList *)malloc(sizeof(StudList));
    printf("Enter first name: "); fflush(stdin);
    gets(newStudent->stud.name.fname); 
    printf("Enter middle initial: "); 
    scanf("%c", &newStudent->stud.name.MI);
    printf("Enter last name: "); fflush(stdin);
    gets(newStudent->stud.name.lname); 
    printf("Enter ID: ");
    scanf("%d", &newStudent->stud.ID);
    printf("Enter course: "); fflush(stdin);
    gets(newStudent->stud.course);
    printf("Enter gender: ");
    scanf("%c", &newStudent->stud.gender);
    newStudent->next = *list;
    *list = newStudent;
    system("cls");
}

void deleteFront(StudList **list) {
    if (*list == NULL) {
        printf("Cannot delete from empty list\n");
    } else {
        StudList *temp = *list;
        *list = (*list)->next;
        free(temp);
        printf("Successfully Deleted\n");
    }
}

int searchStudent(StudList *list, int ID) {
    while (list != NULL && list->stud.ID != ID) {}
    return (list != NULL) ? 1 : 0;
}

void display(StudList *list) {
    StudList *temp = list;
    while (temp != NULL) {
        printf("Name: %s %c. %s\n", temp->stud.name.fname, temp->stud.name.MI, temp->stud.name.lname);
        printf("ID: %d\n", temp->stud.ID);
        printf("Course: %s\n", temp->stud.course);
        printf("Gender: %c\n\n", temp->stud.gender);
        temp = temp->next;
    }
}

void freeList(StudList *list) {
    while (list != NULL) {
        StudList *temp = list;
        list = list->next;
        free(temp);
    }
}