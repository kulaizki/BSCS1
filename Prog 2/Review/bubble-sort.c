#include <stdio.h>

void display(int arr[], int n) {
    int x;
    printf("Current array: ");
    for (x = 0; x < n; ++x) {
        printf("%d ", arr[x]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n) {

    int x, y; n--;
    for (x = 0; x < n; ++x) {
        for (y = 0; y < n - x; ++y) {
            if (arr[y] > arr[y+1]) {
                int temp = arr[y];
                arr[y] = arr[y+1];
                arr[y+1] = temp;
            }
        }
        display(arr, n+1);
    }
}

int main () {

    int arr[] = {7, 3, 2, 5, 8, 1, 4, 0, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
}