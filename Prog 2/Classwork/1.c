#include <stdio.h>

int isFound(int arr[], int count, int x) {
    int i;

    for (i = 0; i < count && arr[i] != x; ++i) {}
    
    return (i < count) ? 1 : 0;
}

int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};

    printf("%d", isFound(arr, 5, 4));
}