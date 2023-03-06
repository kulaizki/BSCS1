#include <stdio.h>

void findSmallest(int arr[], int count) {
    
    int x, min_elem = 0, temp;

    for (x = 1; x < count; ++x) {
        if (arr[x] < arr[min_elem]) {
            min_elem = x;
        }
    }

    if (min_elem != 0) {
        int temp = arr[0];
        arr[0] = arr[min_elem];
        arr[min_elem] = temp;
    }
}

void sort(int arr[], int count) {

    int x;
    for (x = 0; x < count; ++x) {
        findSmallest(arr+x, count-x);
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
    int arr[5] = {5, 4, 3, 2, 1};
    sort(arr, 5);
    display(arr, 5);
}