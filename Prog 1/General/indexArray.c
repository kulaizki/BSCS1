#include <stdio.h>
#define MAX 100

int main(void)
{
    int n = 0;
    int arr[MAX];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("The array given is: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);


    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }

        if (i % 2 && arr[i] < arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    printf("The new array after rearranging: ");
    
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}