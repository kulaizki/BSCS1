#include <stdio.h>

int main() {

    char a, *b = &a, **c = &b;

    scanf("%c", *c);
    printf("%c\n", **c);
    printf("%d\n", sizeof(c) == sizeof(b)); // 1
}