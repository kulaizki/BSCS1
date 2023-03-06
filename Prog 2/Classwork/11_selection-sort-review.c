#include <stdio.h>

void selectionSort(int arr[], int len) {

    int CE, SE, T, temp;

    for (CE = 0; CE < len-1; ++CE) {
        SE = CE;
        for (T = CE+1; T < len; ++T) {
            if (arr[T] < arr[SE]) { 
                SE = T; 
            }
        }

        if (SE != CE) {
            temp = arr[SE];
            arr[SE] = arr[CE];
            arr[CE] = temp;
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

    int arr[] = {5, 4, 3, 2, 1};

    selectionSort(arr, 5);
    display(arr, 5);
}