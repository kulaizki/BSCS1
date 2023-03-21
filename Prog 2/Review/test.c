#include <stdio.h>

int main() {

    int x;
    while (scanf("%d", &x) && x < 0) {}
    printf("x = %d\n", x);
}