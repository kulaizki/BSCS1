#include <stdio.h>
#include <stdlib.h>

#define swap(x, y) { int tmp = x; x = y; y = tmp; }
#define get(arr, len) { for (int i = 0; i < n; i++ ) scanf("%d", &arr[i]); }
#define display(arr, len) { for (int i = 0; i < n; i++) printf("%d\t", arr[i]); }

int main(void)
{
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    puts("Enter elements:");

    int *arr = malloc(sizeof(int) * n);

    get(arr, n);

    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
    }

    display(arr, n);

    free(arr);

    return 0;
}