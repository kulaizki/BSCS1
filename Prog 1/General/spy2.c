#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols], indexArray[11] = {0};
    for (int *p = *arr; p < *arr + (rows * cols); p++)
        scanf("%d", p);

    for (int *p = *arr; p < *arr + (rows * cols); p++)
        indexArray[*p]++;

    for (int i = 0; i < 11; i++)
        if (indexArray[i] == 1)
            puts("SPY"), exit(EXIT_SUCCESS);

    puts("NONE");
    
    return 0;
}