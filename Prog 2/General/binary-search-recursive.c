#include <stdio.h>

int binarySearch(int arr[], int l, int h, int x) {

    if (l > h) {
        return -1; 
    }

    int m = l + (h - l) / 2;

    if (arr[m] == x) {
        return m;
    } else if (x > arr[m]) {
        return binarySearch(arr, m + 1, h, x);
    } else {
        return binarySearch(arr, l, m - 1, x);
    }
}

int main() {

    int arr[] = {1, 3, 6, 8, 12, 13, 55, 99};
    int l = 0, h = sizeof(arr) / sizeof(arr[0]);
    int index = binarySearch(arr, l, h, 55);

    (index == -1) ? printf("Element not found\n")
                  : printf("Element found at index %d", index);
}