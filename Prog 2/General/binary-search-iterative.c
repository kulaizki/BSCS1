#include <stdio.h>

void binarySearch(int arr[], int n, int x) {

    int l = 0, h = n - 1;

    while (l <= h) {
        int m = l + (h - l) / 2;

        if (x == arr[m]) {
            printf("%d found at index %d\n", x, m);
            return;
        } 

        if (x > arr[m]) {
            l = m + 1;
        } else {
            h = m - 1;
        }
    }

    printf("%d not found\n", x);
}

int main() {

    int arr[] = {1, 3, 6, 8, 12, 13, 55, 99};
    int n = sizeof(arr) / sizeof(arr[0]);
    binarySearch(arr, n, 55);
}