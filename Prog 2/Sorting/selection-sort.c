#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int n) {
    int x, y, min_index;
    for (x = 0; x < n-1; ++x) {
        min_index = x;
        for (y = x+1; y < n; ++y) {
            if (arr[y] < arr[min_index])
                min_index = y;
        }
        swap(arr+x, arr+min_index);
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
    selectionSort(arr, 4);
    display(arr, 4);
}
