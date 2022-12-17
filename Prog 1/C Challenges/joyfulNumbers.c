#include <stdio.h>

int main(void)
{

    int n, digit1 = 0, sum = 0, reversedSum = 0;

    printf("Enter number: ");
    scanf("%d", &n);
    int nCopy = n;

    while (n)
    {
        digit1 = n % 10;
        sum += digit1;
        n /= 10;
    }
    int sumCopy = sum;
    // 

    printf("Sum of all digits in %d = %d\n", nCopy, sum);

    while (sum)
    {
        int digit2 = sum % 10;
        reversedSum = reversedSum * 10 + digit2;
        sum /= 10;
    }
    int product = sumCopy * reversedSum;
    
    if (product == nCopy)
    {
        printf("Reversed Sum = %d\n", reversedSum);
        printf("%d * %d = %d\nTherefore, %d is a Joyful number.\n", sumCopy, reversedSum, product, nCopy);
    }

    else
    {
        printf("Sum = %d\nReversed Sum = %d\n", sumCopy, reversedSum);
        printf("%d * %d = %d\nTherefore, %d is not a Joyful number.\n", sumCopy, reversedSum, product, nCopy);
    }

    return 0;
}