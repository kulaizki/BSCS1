#include <stdio.h>

int main()
{
    int n, ctr = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                ctr++;
            }         
        }
        
        if (ctr > 2 || i == 1)
        {
            printf("%d\n", i); 
            ctr = 0;
            continue;
        }
        
        ctr = 0;        
        
    }
}