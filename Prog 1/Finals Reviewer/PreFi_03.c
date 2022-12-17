#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char *name, *nPtr;

    printf("Enter string: ");
    fgets(name, 100, stdin);
    printf("%d", strlen(name));
    name[strlen(name) -1] = '\0';

    nPtr = name;

    while (*nPtr) {

        if (*nPtr >= 'A' && *nPtr <= 'Z') {
            printf("%c is uppercase\n", *nPtr++);
        }

        else if (*nPtr >= 'a' && *nPtr <= 'z') {
            printf("%c is lowercase\n", *nPtr++);
        }

        else if (isspace(*nPtr)) {
            printf("%c is space", *nPtr);
        }
        else {
            printf("%c is not a letter\n", *nPtr++);
        }
    }
    
}