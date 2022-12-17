#include <stdio.h>

int main(void) {

    int rows, columns, i, j;

    printf("Enter Number of Row/s: ");
    scanf("%d", &rows);
    printf("Enter Number of Column/s: ");
    scanf("%d", &columns);

    for (i = 1; i <= rows; i++, printf("\n")) {
        for (j = 1; j <= columns; j++) {
            printf("%-8d", j*i);
        }
    }

    return 0;
}