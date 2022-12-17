#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int *createCountArray(int arr[], int size);

void main()
{
    int arr[MAX], size;
    int *answer;

    printf("How many numbers? ");
    scanf("%d", &size);

    printf("Input numbers: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    // complete the function call
    answer = createCountArray(arr, size);
    // compolete the code below to display the result as indicated
    printf("\n");
    for (int i = 0; i < 10; i++)
        printf("Count of %d: %d\n", i, answer[i]);
}

int *createCountArray(int arr[], int size)
{
    int *countArray = malloc(sizeof(int) * 10);
    int ctr = 0;

    for (int i = 0; i < 10; i++)
    {
        ctr = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == i)
                ctr++;
        }
        countArray[i] = ctr;
    }

    return countArray;
}