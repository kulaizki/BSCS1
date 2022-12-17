#include <stdio.h>

int main(void) {

    int n, temp, x;

    printf("Enter n: ");
    scanf("%d", &n);

    while(n > 0) {
        temp = n % 10;
        if (temp > 3) {
            printf("%d\n", temp);
            x = 1;
        }
        n /= 10;
    }

    if (x == 0)
        printf("none");

    return 0;
}