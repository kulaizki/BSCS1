#include <stdio.h>

void swapNthElement(int arr[], int n) {
    int i, temp;

    for (i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        } else {
            break;
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

int main() {
    int arr[6] = {1, 3, 4, 6, 7, 2};

    display(arr, 6);

    swapNthElement(arr, 6);
    display(arr, 6);

    return 0;
}