/**
 * @file range.c
 * @author Fitzsixto Angelo Singh (kulaizke@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void) {

    /* This program gives the range of even or odd numbers of an input
     * and calculates the sum and average of the numbers in the range
     */

    int n;
    float r, sum = 0, ctr = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 1)
        printf("\nINVALID");

    // loops for the even numbers sum and range
    else if(n % 2 == 0) {
        printf("\nThe even number in range are {");

        for(r = 2; r < n; r+=2) {
            printf("%.f, ", r);
        }
        printf("%d}.",n);

        for(r = 2; r <= n; r+=2) {
            sum = sum + r;
            ctr++;
        }

        printf("\nSUM: %.f", sum);
        printf("\nAVERAGE: %.1f", sum/ctr);
    }

    // loops for the odd numbers sum and range
    else {
        printf("\nThe odd number in range are {");

        for(r = 1; r < n; r+=2) {
            printf("%.f, ", r);
        }   
        printf("%d}.",n);

            for(r = 1; r <= n; r+=2) {
                sum = sum + r;
                ctr++;
            }

        printf("\nSUM: %.f", sum);
        printf("\nAVERAGE: %.1f", sum/ctr);
    }
    
    return 0;
}