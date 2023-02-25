#include <stdio.h>

int main(void)
{
    int rows, columns, evenRow, rowSum = 0;

    printf("Enter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &columns);

    int arr[rows][columns];

    printf("Enter elements:\n");

    for(int i = 0; i < rows; i++)
    {
       for(int j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);
            rowSum += arr[i][j];
        }

        if (rowSum % 2 == 0)
            evenRow = i;
        
        rowSum = 0;
    }

    printf("Even row: %d", evenRow);

    return 0;
}