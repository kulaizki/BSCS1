#include <stdio.h>
#include <stdlib.h>

int *getFraction();

int main()
{
    int *x = getFraction();
    int *y = getFraction();

    printf("%d and %d\n", x[0], x[1]);
    printf("%d and %d", y[0], y[1]);

    free(x), free(y);
    
    return 0;
}

int *getFraction()
{
    static int ctr = 1;
    int *fractionArray = (int *)malloc(sizeof(int)*2);

    printf("Enter numerator for Fraction %d: ", ctr);
    scanf("%d", fractionArray);
    printf("Enter denominator for Fraction %d: ", ctr++);
    scanf("%d", fractionArray+1);

    return fractionArray;
}