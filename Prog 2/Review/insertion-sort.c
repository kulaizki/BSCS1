#include <stdio.h>

void display(int arr[], int n) {
    int x;
    printf("Current array: ");
    for (x = 0; x < n; ++x) {
        printf("%d ", arr[x]);
    }
    printf("\n");
}

void insertionSort(int arr[], int n) {

    int x, y, key;
    for (x = 1; x < n; ++x) {
        key = arr[x];
        y = x - 1;
        while (y >= 0 && arr[y] > key) {
            arr[y+1] = arr[y];
            y--;
        }
        arr[y+1] = key;
        display(arr, n);
    }
}

int main() {

    int arr[] = {7, 3, 2, 5, 8, 1, 4, 0, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
}