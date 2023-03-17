#include <stdio.h>

typedef struct {
    char fname[24];
    char MI;
    char lname[16];
} nametype;

typedef struct {
    nametype name;
    char ID;
} studtype;

void inputName(studtype *s) {

    printf("Enter fname: ");
    gets(s->name.fname); fflush(stdin);
    printf("Enter MI: ");
    scanf("%c", &s->name.MI); fflush(stdin);
    printf("Enter lname: ");
    gets(s->name.lname); fflush(stdin);
}

int main() {

    studtype s;
    inputName(&s);
    printf("Your name is: %s %c. %s\n", s.name.fname, s.name.MI, s.name.lname);
}