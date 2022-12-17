#include <stdio.h>

int main() 
{
    int n, ncopy, reverse, digit, mult = 1;

    printf("Enter n: ");
    scanf("%d", &n);
    ncopy = n;

    while(n) {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }

    while (reverse)
    {
        digit = reverse % 10;
        printf("%d", digit*digit);
        reverse /= 10;
    }

    if (ncopy % 10 == 0)
        printf("0");    

    return 0;
}