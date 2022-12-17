#include <stdio.h>

int isSet(int A[], int size);

int main(void)
{
    int arr[4] = {1, 2, 3, 4};

    printf("%d", isSet(arr, 4));
}

int isSet(int A[], int size)
{
    int x, y;
    int isUnique = 1;

    for (x = 0; x < size && isUnique == 1; x++)
    {
        for (y = x+1; y < size && isUnique == 1; y++)
        {
            if (A[x] == A[y])
            {
                isUnique = 0;
            }
        }
    }
    return isUnique;
}
