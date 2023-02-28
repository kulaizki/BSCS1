// butterfly search
#include <stdio.h>

int search(int arr[], int count, int value);

int main() {
    //         0  1  2  3   4   5   6     7
    int A[] = {2, 4, 8, 16, 32, 64, 128, 256}; // auto size
    int B[6] = {2, 4, 6, 4, 3, 1}; // fixed size
    int x;

    printf("Enter x: ");
    scanf("%d", &x);
    int result = search(A, 8, x);
    printf("%d", result);

}

int search(int arr[], int count, int value) {
    int x;
    for (x = 0; x < count && arr[x] != value; ++x) {}
    return (x < count) ? x : -1;
}