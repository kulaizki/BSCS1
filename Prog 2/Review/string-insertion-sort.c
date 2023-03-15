#include <stdio.h>

void insertionSort(char *str);

int main() {

    char str[11] = "July5Prog2";
    insertionSort(str);
}

void insertionSort(char *str) {

    int x, y, key;
    for (x = 1; str[x] != '\0'; ++x) {
        key = str[x];
        y = x-1;
        while (y >= 0 && str[y] > key) {
            str[y+1] = str[y];
            y--;
        }
        str[y+1] = key;
        printf("Iteration %d: ", x);
        puts(str);
    }
}