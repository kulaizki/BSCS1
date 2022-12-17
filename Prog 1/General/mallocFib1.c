#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    puts("Fibonnaci Numbers:");

    if (n == 1) { printf("0\n"); exit(EXIT_SUCCESS); }
    if (n == 2) { printf("0 1\n"); exit(EXIT_SUCCESS); }

    int *arr = malloc(sizeof(int) * n);

    arr[0] = 0;
    arr[1] = 1;

    for (i = 2; i < n; i++)
    {   
        if (i == 2) printf("0 1 ");
        arr[i] = arr[i-1] + arr[i-2];
        printf("%d  ", arr[i]);
    }

    printf("\nMiddle number: %d", arr[n / 2])   ;

    free(arr);

    return 0;
}