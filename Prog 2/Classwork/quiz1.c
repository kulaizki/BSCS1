#include <stdio.h>

int isSorted(int A[], int count) {
    int x, size = count-1;
    if (count == 0) { size = 0; }
    for (x = 0; x < size && A[x] < A[x+1]; ++x) {}
    return (x == size) ? -1 : x;
}

int main()
{
    int arr[] = {1, 2, 3 ,4};
    printf("%d", isSorted(arr, 4));
}