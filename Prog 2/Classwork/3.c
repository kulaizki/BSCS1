#include <stdio.h>
#include <stdlib.h>

int *inputData();
void displayArray(int arr[], int n);
int findElem(int arr[], int n, int val);
void exchange(int *x, int *y);
void swapFirstToSmallest(int arr[], int n);

int main()
{
    int x, len;
    int *arr;

    printf("Task 1:\n");
    printf("Inputting data\n");
    arr = inputData();
    len = arr[0];
    printf("Current array: "); displayArray(arr, len);

    printf("\nTask 2:\n");
    printf("Find 4 and 7 in the array\n");
    findElem(arr+1, len, 4) ? printf("4 is found\n")
                            : printf("4 is not found\n");
    findElem(arr+1, len, 7) ? printf("7 is found\n")
                            : printf("7 is not found\n");

    printf("\nTask 3:\n");
    printf("Swap first and smallest element\n");
    swapFirstToSmallest(arr, len); 
    printf("Current array: "); displayArray(arr, len);

    free(arr);

    return 0;
}

int *inputData() {
    int n, x;
    
    printf("Enter n: ");
    scanf("%d", &n);

    int *newArr = (int *)malloc(sizeof(int) * n + 1);
    newArr[0] = n;

    printf("Enter elements: ");
    for (x = 1; x <= n; ++x) { scanf("%d", &newArr[x]); }
    
    return newArr;
}

void displayArray(int arr[], int n) {
    int x;
    for (x = 1; x <= n; ++x) { printf("%d ", arr[x]); }
    printf("\n");
}

int findElem(int arr[], int n, int val) {
    int x;
    for (x = 0; x <= n && arr[x] != val; ++x) {}
    return (x < n) ? 1 : 0;
}

void exchange(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swapFirstToSmallest(int arr[], int n) {
    int x, min = INT_MAX, *p;
    
    for (x = 1; x <= n; ++x) {
        if (arr[x] < min) {
            min = arr[x];
            p = &arr[x];
        }
    }

    exchange(&arr[1], p);
}