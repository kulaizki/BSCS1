#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n) {
    int x, y, temp; n--;
    for (x = 0; x < n; ++x) {
        for (y = 0; y < n-x-1; ++y) {
            if (arr[y] > arr[y+1]) {
                swap(arr+y, arr+y+1);
            }
        }
    }
}

void display(int arr[], int n) {
    int x;
    printf("Current array: ");
    for (x = 0; x < n; ++x) {
        printf("%d ", arr[x]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {4, 9, 2, 1, 5};

    display(arr, 5);
    bubbleSort(arr, 5);
    display(arr, 5);
}