#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int rows, columns, boogeyVal;

    printf("Enter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &columns);

    int arr[rows][columns];

    printf("Elements:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
            scanf("%d", &arr[i][j]);
    }

    printf("Enter the boogeyman's value: ");
    scanf("%d", &boogeyVal);

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(arr[i][j] == boogeyVal)
                printf("BOOGEYMAN LOCATED AT ROW %d, COLUMN %d!", i + 1, j + 1), 
                exit(EXIT_SUCCESS);
        }
    }

    puts("BOO!");

    return 0;
}