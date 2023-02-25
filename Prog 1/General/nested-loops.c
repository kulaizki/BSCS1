#include <stdio.h>

int main()
{
    int i, j, n, ctr = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; ctr < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (ctr <= n)
                printf("%d", ctr++);
        }   

            printf("\n");

    }
}