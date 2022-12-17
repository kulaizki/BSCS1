#include <stdio.h>

int main(void) {

    int x, factorial = 1;

    printf("Enter x: ");
    scanf("%d", &x);

    while (x > 1) {  
        factorial *= x;
        x--;
    }

    printf("x! is %d.\n", factorial);

    return 0;
}