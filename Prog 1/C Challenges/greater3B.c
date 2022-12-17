#include <stdio.h>

int main(void) {

    int n, digit, num = 0, mult = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    while (n) {
        digit = n % 10;
        if (digit > 3) {
            num = mult*digit + num;
            mult *= 10;
        }
        n /= 10;
    }

    if (mult > 1)
        printf("%d", num);

    else
        printf("None");

    return 0;
}