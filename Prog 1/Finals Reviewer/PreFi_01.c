#include <stdio.h>
#include <stdlib.h>

int *powers(int *arr, int *size);
int isPower(int n);

int main(void)
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int *arr2 = powers(arr, &size);
    
    if (size)
    {
        printf("Powers of 2 = ");
        for (int i = size-1; i >= 0; i--)
            printf("%d ", arr2[i]);
    }
    else
        printf("none");

    free(arr2);
}

int *powers(int *arr, int *size)
{
    int ping = 0;

    for (int i = 0; i < *size; i++)
    {
        if (isPower(arr[i]))
            ping++;
    }

    int *powers = malloc(sizeof(int) * ping);

    for (int i = 0, *p = powers; i < *size; i++)
    {
        if (isPower(arr[i]))
            *p++ = arr[i];     
    }

    *size = ping;
    return powers;
}

int isPower(int n)
{
    int current = 1;

    while (current <= n)
    {
        if (current == n)
            return 1;
        else
            current *= 2;
    }

    return 0;
}