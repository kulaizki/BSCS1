#include <stdio.h>
int main()
{
    int num, i, j;
    printf("Enter your number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j < num; j++)
            printf("%d ", i);

        if (j == num)
            printf("%d", i + 1);

        printf("\n");
    }

    return 0;
}