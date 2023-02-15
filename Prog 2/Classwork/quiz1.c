#include <stdio.h>

int isSorted(int A[], int count) {
    int x;
    for (x = 1; x < count && A[x] > A[x-1]; x++) {}
    return (x == count) ? -1 : x;
}

int main()
{
    int arr[] = {1, 4, 3 ,5};
    printf("%d", isSorted(arr, 4));
}