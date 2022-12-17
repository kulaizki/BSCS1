#include <stdio.h>

int main()
{
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ctr = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i])
            arr[ctr++] = arr[i];
    }

    for (i = ctr; ctr < n; ctr++)
        arr[ctr] = 0;

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

// #include <stddef.h>

// void move_zeros(size_t len, int arr[len])
// {
//   int ctr = 0;
//     for (size_t i = 0; i < len; i++) {
//       if (arr[i]) {
//         arr[ctr++] = arr[i];
//       }
//     }

//   for (size_t i = ctr; ctr < len; ctr++)
//     arr[ctr] = 0;
// }