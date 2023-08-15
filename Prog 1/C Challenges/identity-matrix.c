#include <stdio.h>

int main()
{
    int arr[5][5];

    for (int i = 0; i < 5; i++, printf("\n"))
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
                arr[i][j] = 1;
            else
                arr[i][j] = 0;
                
            printf("%d  ", arr[i][j]);
            
        }
    }
}