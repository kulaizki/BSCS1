#include <stdio.h>

void nthFib(int n);

int main()
{
    printf("Enter n: ");
    int n;
    scanf("%d", &n);

    nthFib(n);

    return 0;
}

void nthFib(int n) {
    int n1 = 0,
        n2 = 1;

    for (int i = 0; i < n; i++) {
        printf("%d ", n1);
        int sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }
}
