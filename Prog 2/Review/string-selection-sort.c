#include <stdio.h>
#include <string.h>

void selectionSort(char *s);

int main() {

    char str[] = "July5Prog2";
    selectionSort(str);
}

void selectionSort(char *s) {

    int x, y, min_idx, n = strlen(s);

    for (x = 0; x < n-1; ++x) {
        min_idx = x;
        for (y = x+1; y < n; ++y) {
            if (s[y] < s[min_idx]) {
                min_idx = y;
            }
        }
        if (min_idx != 0) {
            char temp = s[x];
            s[x] = s[min_idx];
            s[min_idx] = temp;
        }
        printf("Iteration %d: ", x+1);
        puts(s);
    }
}