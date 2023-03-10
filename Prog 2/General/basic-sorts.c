#include <stdio.h>

void swap(int *x, int *y);
void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);
void display(int arr[], int n);

int main() {

    int arr1[] = {4, 5, 1, 3, 2, 7};
    int arr2[] = {1, 5, 8, 3, 2, 7};
    int arr3[] = {6, 5, 1, 9, 2, 7};

    int len = sizeof(arr1) / sizeof(arr1[0]);

    puts("Bubble Sort");
    display(arr1, len); 
    bubbleSort(arr1, len);
    display(arr1, len);

    puts("\nSelection Sort");
    display(arr2, len); 
    selectionSort(arr2, len);
    display(arr2, len);

    puts("\nInsertion Sort");
    display(arr3, len);
    insertionSort(arr3, len);
    display(arr3, len);

}

void swap(int *x, int *y) {

    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n) {

    int x, y; n--;
    for (x = 0; x < n; ++x) {
        for (y = 0; y < n-x; ++y) {
            if (arr[y] > arr[y+1]) {
                swap(arr+y, arr+y+1);
            }
        }
    }
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
        swap(arr+x, arr+min_idx);
    }
}

void insertionSort(int arr[], int n) {

    int x, y, key;

    for (x = 1; x < n; ++x) {
        key = arr[x];
        y = x-1;
        while (y >= 0 && arr[y] > key) {
            arr[y+1] = arr[y];
            y--;
        }
        arr[y+1] = key;
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