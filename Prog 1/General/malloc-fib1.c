#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    puts("Fibonnaci Numbers:");

    int *arr = malloc(sizeof(int) * n);

    arr[0] = 0;
    arr[1] = 1;

    for (i = 2; i < n; i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    for (i = 0; i < n; i++)
    {
        if (i % 10 == 0 && i)
            printf("\n");
            
        printf("%d\t", arr[i]);
    }

    if (n % 2)
        printf("\nMiddle number: %d", arr[n / 2]);
    else
        printf("\nMiddle numbers: %d %d", arr[n / 2 - 1], arr[n / 2]);

    free(arr);

    return 0;
}