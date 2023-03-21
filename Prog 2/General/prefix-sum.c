#include <stdio.h>
#include <stdlib.h>

int *generatePrefixSumArray(int arr[], int n);
void displayArray(int arr[], int n);

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *pfix = generatePrefixSumArray(arr, n);

    printf("Original array: ");
    displayArray(arr, n);

    printf("Prefix sum array: ");
    displayArray(pfix, n);

    free(pfix);
}

int *generatePrefixSumArray(int arr[], int n) {

    if (n == 0) {
        printf("List is empty\n");
        return NULL;
    }

    int *p = (int *)malloc(sizeof(arr[0]) * n);
    p[0] = arr[0];

    for (int i = 1; i < n; ++i) {
        p[i] = arr[i] + p[i - 1];
    }

    return p;
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}