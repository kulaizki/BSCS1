#include<stdio.h>

int main (void) {
    int pattern[4][4] = {
                        {1, 2, 3, 4},
                        {1, 2, 3},
                        {1, 2},
                        {1}
                        };

    for (int ctr1 = 0; ctr1 < 4; ctr1++) {
        for (int ctr2 = 0; ctr2 < 4; ctr2++) {
            printf("%d ", pattern[ctr1][ctr2]);
        }
    
        printf("\n");
    }

    return 0;
}