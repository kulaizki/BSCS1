#include <stdio.h>

int main()
{

    int num = 153;
    int numCopy = num, numCopy1 = num, digit, sum = 0, ctr = 0, power;

    while (num)
    {
        num /= 10;
        ctr++;
    }
    printf("ctr = %d\n", ctr);

    while (numCopy)
    {
        digit = numCopy % 10;
        power = 1;

        for (int i = 0; i < ctr; i++)
        {
            power *= digit;
            printf("digit[%d] is %d\n", i, digit);
            printf("digit[%d] is %d\n", i, power);
        }
        sum += power;
        numCopy /= 10;
    }
    printf("Sum = %d\nnumCopy1 = %d\n", sum, numCopy1);

    if (sum == numCopy1)
        printf("True\n");

    else
        printf("False");
}