// buterfly search with no function
#include <stdio.h>

int main() {
    //  index  0  1  2  3   4   5   6    7
    int A[] = {2, 4, 8, 16, 32, 64, 128, 256};
    int value;

    printf("Enter x: ");
    scanf("%d", &value);

    int x;
    for (x = 0; x < 8 && A[x] != value; ++x) {}
    printf("%d", (x < 8) ? x : -1);
}