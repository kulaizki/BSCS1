#include <stdio.h>

typedef struct student
{
    char fname[24];
    char MI;
    char lname[16];
    int age;
    char gender;
} Student;

void input(Student *name);
void display(Student *name);

int main()
{
    Student Fitz;
    input(&Fitz);
    display(&Fitz);
}

void input(Student *name)
{
    printf("enter fname: ");
    gets(name->fname);
    printf("enter MI:");
    name->MI = getchar();
    printf("enter lname: ");
    fflush(stdin);
    gets(name->lname);
    printf("enter age: ");
    scanf("%d", &name->age);
    fflush(stdin);
    printf("enter gender: ");
    name->gender = getchar();
}

void display(Student *name)
{
    printf("full name: %s %c. %s", name->fname, name->MI, name->lname);
    printf("\nage: %d", name->age);
    printf("\ngender: %c", name->gender);
}
