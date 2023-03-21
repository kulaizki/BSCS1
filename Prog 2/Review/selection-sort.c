#include <stdio.h>

void display(int arr[], int n) {
    int x;
    printf("Current array: ");
    for (x = 0; x < n; ++x) {
        printf("%d ", arr[x]);
    }
    printf("\n");
}

void selectionSort(int arr[], int n) {

    int x, y, min_idx;
    for (x = 0; x < n-1; ++x) {
        min_idx = x;
        for (y = x+1; y < n; ++y) {
            if (arr[y] < arr[min_idx]) {
                min_idx = y;
            }
        }

        if (min_idx != 0) {
            int temp = arr[x];
            arr[x] = arr[min_idx];
            arr[min_idx] = temp;
        }
        display(arr, n);
    }
}

int main() {

    int arr[] = {7, 3, 2, 5, 8, 1, 4, 0, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
}