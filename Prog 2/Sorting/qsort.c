#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b);
void display(int arr[], int n);

int main() {

    int arr[] = {4, 9, 2, 1, 5};

    display(arr, 5);
    qsort(arr, 5, sizeof(arr[0]), cmpfunc);
    display(arr, 5);

}

int cmpfunc (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

void display(int arr[], int n) {
    int x;
    printf("Current array: ");
    for (x = 0; x < n; ++x) {
        printf("%d ", arr[x]);
    }
    printf("\n");
}