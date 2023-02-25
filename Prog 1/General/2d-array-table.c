#include <stdio.h>

int main (void) {
    int r = 10, c = 10;
    int row, column;
    int arr[10][10]; // [r][c] must have constant value (cause of error if used)
    
    for (int ctr_1 = 0; ctr_1 <= c; ctr_1++) {
        row = ctr_1 + 1;
                                  
        for (int ctr_2 = 0; ctr_2 < r; ctr_2++) {
            column = ctr_2 + 1;
    
            arr[ctr_1][ctr_2] = row * column;
            printf("%d\t", arr [ctr_1][ctr_2]);
        }
    
        printf("\n"); 
    }
    
    return 0;
}