#include <stdio.h>

int main (void) {
    int ctr1, ctr2, ctr3;        
    int arr[2][3][3]; 

    printf("Enter the values in the array: \n");
    for (ctr1 = 0; ctr1 < 2; ctr1++)  {
        if (ctr1 == 1) {
            printf("2nd Array: \n");
        }
                            
        for (ctr2 = 0; ctr2 < 3; ctr2++) {
            for (ctr3 = 0; ctr3 < 3; ctr3++) { 
                printf("The value at arr[%d][%d][%d]: ", ctr1, ctr2, ctr3);
                scanf("%d", &arr[ctr1][ctr2][ctr3]);
            }
        }
    }

    printf("\nPrinting the values in the array: \n");
    for (ctr1 = 0; ctr1 < 2; ctr1++)  {
        if (ctr1 == 1) {
            printf("2nd Array: \n");
        }
    
        for (ctr2 = 0; ctr2 < 3; ctr2++) {
            for (ctr3 = 0; ctr3 < 3; ctr3++) {
                printf("%d\t", arr[ctr1][ctr2][ctr3]);

                if (ctr3 == 3) {
                    printf("\n");
                }
            }
        }
    
        printf("\n");
    }
    
    return 0;
}