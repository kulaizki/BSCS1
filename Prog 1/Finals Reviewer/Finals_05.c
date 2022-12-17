#include <stdio.h>
#include <stdlib.h>
#define MAX 100

// complete the function prototypes
void insertSorted(int arr[], int insertedNum, int size);

void main()
{
    int arr[MAX], size, num;

    printf("How many numbers: ");
    scanf("%d", &size);

    printf("Input numbers: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Input numbers to be inserted: ");
    scanf("%d", &num);

    // complete the function call for insertSorted
    insertSorted(arr, num, size);
}

void insertSorted(int arr[], int insertedNum, int size)
{
    int flag = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == insertedNum)
            flag = 2;

        if (arr[i + 1] < arr[i])
            flag = 1;
    }

    if (!flag)
    {
        int placement = 0;
        for (int i = 0; i < size; i++)
        {
            if (insertedNum < arr[i])
                placement = i - 1;
        }

        for (int i = size; i > placement; i--)
            arr[i] = arr[i - 1];


        arr[placement] = insertedNum;

        for (int i = 0; i <= size; i++)
            printf("%d ", arr[i]);
    }

    if (flag == 1)
    {
        printf("Elements are not sorted!\n");
        for (int i = 0; i <= size - 1; i++)
            printf("%d ", arr[i]);
    }

    if (flag == 2)
    {
        printf("Element already exists!\n");
        for (int i = 0; i <= size - 1; i++)
            printf("%d ", arr[i]);
    }
}