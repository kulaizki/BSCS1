#include <stdio.h>
#include <string.h>

void bubbleSort(char *s);

int main() {

    char str[] = "July5Prog2";
    bubbleSort(str);
}

void bubbleSort(char *s) {

    int x, y, n = strlen(s)-1;
    for (x = 0; x < n; ++x) {
        for (y = 0; y < n-x; ++y) {
            if (s[y] > s[y+1]) {
                char temp = s[y];
                s[y] = s[y+1];
                s[y+1] = temp;
            }
        } 
        printf("Iteration %d: ", x+1);
        puts(s);
    }
}