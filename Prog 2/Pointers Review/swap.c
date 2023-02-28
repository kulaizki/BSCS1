// swap function with pointers
#include <stdio.h>

// function definition
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {

    int x, y;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    printf("X before swap = %d\n", x);
    printf("Y before swap = %d\n", y);

    swap(&x, &y);

    printf("X after swap = %d\n", x);
    printf("Y after swap = %d\n", y);
}