#include <stdio.h>
#include <string.h>

int main() { 

    char a[20] = "This one", b[20] = " That one", *c = a + 5;
    strcat(a, b + 4);

    printf("a: %s\n", a);
    printf("b: %s\n", b);
    printf("c: %s\n", c);

    printf("sizeof(c): %d\n", sizeof(c));
    printf("sizeof(a): %d\n", sizeof(a));
    printf("strlen(c): %d\n", strlen(c));
    printf("strlen(a): %d\n", strlen(a));
}