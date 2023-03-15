#include <stdio.h>
#include <string.h>

void bubbleSort(char *str) {

    int x, y, count = strlen(str)-1;
    for (x = 0; x < count; ++x) {
        for (y = count; y > x; --y) {
            if (str[y] < str[y-1]) {
                char temp = str[y];
                str[y] = str[y-1];
                str[y-1] = temp;
            }
        }
        printf("Iteration %d: ", x+1);
        puts(str);
    }
}

int main() {

    char str[11] = "July5Prog2";
    bubbleSort(str);
}