#include <stdio.h>
#include <stdlib.h>

#define swap(x, y) { int temp = x; x = y; y = temp; }
#define getArray(arr, len) { for (int i = 0; i < n; i++) scanf("%d", &arr[i]); }
#define displayArray(arr, len) { for (int i = 0; i < n; i++) printf("%d ", arr[i]); }

int main(void)
{
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = malloc(sizeof(int) * n);

    puts("Enter elements:");
    getArray(arr, n);
    
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
    }
    
    puts("Sorted array:");
    displayArray(arr, n);

    free(arr);

    return 0;
}