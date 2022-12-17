#include <stdio.h>

void main() 
{
    int n, fact = 1;

    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) 
        fact *= i;
    
    printf("Factorial of %d is: %d", n, fact);
}