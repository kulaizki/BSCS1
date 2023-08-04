#include <stdio.h>

int main() {

    int n, num1 = 0, num2 = 1, sum;
    
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", num1);
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }

    return 0;
}