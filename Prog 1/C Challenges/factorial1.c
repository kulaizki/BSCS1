#include <stdio.h>

int main(void) {

    int array[1000];
    int factorial = 1;
    int i, j, x;

    printf("Enter x: ");
    scanf("%d", &x);

    for (i = 0; i < x; i++) {
        array[i] = i + 1;
    }

    for (j = 0; j < x; j++) {
        factorial *= array[j];
    }

    printf("x! is %d.", factorial);

    return 0;
}
