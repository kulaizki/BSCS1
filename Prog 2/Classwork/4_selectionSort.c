#include <stdio.h>

void exchange(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int size) {
    int x, y, index;
    for (x = 0; x < size-1; ++x) {
        index = x;
        for (y = x+1; y < size; ++y) {
            if (arr[y] < arr[index]) { index = y; }
        }
        if (index != x) {
            exchange(arr+index, arr+x);
        }
    }
}

void display(int arr[], int size) {
    int x;
    for (x = 0; x < size; ++x) {
        printf("%d ", arr[x]);
    }
    printf("\n");
}

int main()
{
    int arr[5] = {98, 45, 4, 20, 76};
    int size = 5;

    selectionSort(arr, size);
    display(arr, size);
}