#include <stdio.h>

int main()
{
    int size, i;

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &size);

    int arr[size];

    puts("Input 5 numbers of elements in the array :");
    for (i = 0; i < size; i ++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    puts("\nThe elements you entered are :");
    for (i = 0; i < size; i++)
    {
        printf("element - %d : %d\n", i, *(arr+i));
    }

    return 0;
}