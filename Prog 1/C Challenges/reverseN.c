#include <stdio.h>

int main(void) {

    int n1, n2;

    printf("Enter n: ");
    scanf("%d", &n1);

    while(n1 > 0) {
        n2 = n2 * 10 + (n1 % 10);
        n1 /= 10;
    }
    
    printf("%d", n2);

    return 0;
}