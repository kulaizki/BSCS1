/**
 * @file hollowdia.c
 * @author Fitzsixto Angelo Singh (kulaizki@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <stdio.h>

int main(void) {

    /* This program uses loops and conditions to print stars and blank-spaces
     * in order to form a hollowed diamond.
     */

    int n, i, j, k;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("\n");

    // This section prints the upper diamond.
    for (i = 1; i <= n; i++, printf("\n")) {

        // This division prints the upper left side of the diamond.
        for (k = n; k >= i; k--, printf("  "));
        for (j = 1; j <= i;) {
            if (j == 1)
                printf("* ", j);
            else 
                printf("  ");
            j++;
        }   

        // This division prints the upper right side of the diamond.
        for (j -= 1; j > 1;) {
            j--;
            if (j == 1)
                printf("* ", j);
            else 
                printf("  ");
        }
    }

    // This section prints the lower diamond.
    for (i = n; i > 1; i--, printf("\n")) {

        // This division prints the lower left side of the diamond.
        for (k = i; k <= n+1; k++, printf("  "));
        for (j = 1; j < i;) {
            if (j == 1)
                printf("* ", j);
            else 
                printf("  ");
                j++;
        }

        // This division prints the lower right side of the diamond.
        for (j -= 1; j > 1;) {
            j--;
            if (j == 1)
                printf("* ", j);
            else 
                printf("  ");
        }
    }

    return 0;
}