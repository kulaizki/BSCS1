#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, y, ctr = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(sizeof(int) * n);

    puts("Enter elements:");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter y: ");
    scanf("%d", &y);

    for (int i = 0; i < n; i++)
            if (arr[i] == y)
                ctr++;

    free(arr);
    printf("Frequency: %d", ctr);

    return 0;
}