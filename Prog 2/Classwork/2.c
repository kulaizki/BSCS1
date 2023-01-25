#include <stdio.h>
#include <stdlib.h>

int *createArray() {
    int n, i;
    scanf("%d", &n);

    int *newArr = (int *)malloc(sizeof(int) * n + 1);
    newArr[0] = n;

    for (i = 1; i <= n; ++i) 
    {
        scanf("%d", &newArr[i]);
    }

    return newArr;
}

int main()
{
    int *arr;
    arr = createArray();

    for (int i = 1; i <= arr[0]; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
}