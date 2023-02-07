#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int x, y, temp;
    for (x = 0; x < n-1; ++x) {
        for (y = 0; y < n-x-1; ++y) {
            if (arr[y] > arr[y+1]) {
                temp = arr[y];
                arr[y] = arr[y+1];
                arr[y+1] = temp;
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
    int arr[] = {4, 9, 2, 1};

    display(arr, 4);
    bubbleSort(arr, 4);
    display(arr, 4);
}