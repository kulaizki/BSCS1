#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void printMyHalves(int *arr, int pos);

void main()
{
    puts("Input 10 numbers");

    int arr[MAX], pos;

    for (int i = 0; i < MAX; i++)
    {
        printf("Position %d. ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of division: ");
    scanf("%d", &pos);

    printMyHalves(arr, pos);
}

void printMyHalves(int *arr, int pos)
{
    int leftSum = 0, rightSum = 0;
    
    for (int i = 0; i < pos-1; i++)
        leftSum += arr[i];

    for (int i = pos; i < MAX; i++)
        rightSum += arr[i];

    printf("Your left has a sum of %d.\n", leftSum);
    printf("Your right has a sum of %d.", rightSum);
}