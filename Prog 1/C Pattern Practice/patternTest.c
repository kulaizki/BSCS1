#include <stdio.h>

int main(void) {

    int i, j, k;

    for (i = 1; i <= 7; i++) {
        for (k = 7; k >= i; k--)
            printf(" ");
    
        for (j = 1; j <= i; j++) 
            printf("%d", i);

        printf("\n");
    }

    return 0;
}