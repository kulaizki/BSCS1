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

nametype inputName() {

    nametype new;
    printf("Enter fname: ");
    gets(new.fname); fflush(stdin);
    printf("Enter MI: ");
    scanf("%c", &new.MI); fflush(stdin);
    printf("Enter lname: ");
    gets(new.lname); fflush(stdin);
    
    return new;
}

int main() {

    studtype s;
    s.name = inputName();
    printf("Your name is: %s %c. %s\n", s.name.fname, s.name.MI, s.name.lname);
}