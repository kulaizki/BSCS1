#include <stdio.h>

void swap(int *x, int *y);

int main() 
{
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("Before swapping\nx = %d\ny = %d\n", x, y);

    swap(&x, &y); // paramters need an address or pointer ( since pointers uses address )

    printf("After swapping\nx = %d\ny = %d", x, y);

}

void swap(int *x, int *y) // paramters need an address or pointer ( since pointers uses address )
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}