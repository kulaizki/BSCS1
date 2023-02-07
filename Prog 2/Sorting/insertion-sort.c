#include <stdio.h>

void insertionSort(int arr[], int n) {
    int x, key, y;
    for (x = 1; x < n; x++) {
        key = arr[x];
        y = x - 1;
        while (y >= 0 && arr[y] > key) {
            arr[y + 1] = arr[y];
            y = y - 1;
        }
        arr[y + 1] = key;
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
    insertionSort(arr, 5);
    display(arr, 5);
}