#include <stdio.h>

int main(void) {

    int n, i, j, k;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++, printf("\n")) {
        for (k = n; k >= i; k--, printf("  "));
        for (j = 1; j <= i; printf("%d ", j), j++);
        for (j -= 1; j > 1; j--, printf("%d ", j));
    }

    for (i = n; i > 1; i--, printf("\n")) {
        for (k = i; k <= n+1; k++, printf("  "));
        for (j = 1; j < i; printf("%d ", j), j++);
        for (j -= 1; j > 1; j--, printf("%d ", j));
    }

    return 0;
}