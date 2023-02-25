#include <stdio.h>

int main(void)
{
    int rows, cols, ctr, flag = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Elements:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            ctr = 0;    
            for (int k = 0; k < rows; k++) {
                for (int l = 0; l < cols; l++) {
                    if (arr[i][j] == arr[k][l]) {
                        ctr++;
                    }
                }
            }
            if (ctr == 1)
                flag++;         
        }
    }

    if (flag)
        puts("SPY");
    else
        puts("NONE");
}