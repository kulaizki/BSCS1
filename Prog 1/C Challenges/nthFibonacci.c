#include <stdio.h>

int main(void) {

    int n, num1 = 0, num2 = 1, sum;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: ");

    for(int i = 0; i < n; i++) {
        sum = num1+num2;
        num1 = num2;
        num2 = sum;
    }

    printf("%d", num2-num1);

    return 0;
}