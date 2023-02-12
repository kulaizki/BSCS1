#include <stdio.h>
#include <string.h>

void exchange(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(char *str) {
    int x, y, n = strlen(str)-1;

    for (x = 1; x <= n; ++x) {
        for (y = n; y >= x; --y) {
            if (str[y] < str[y-1]) {
                exchange(str+y, str+y-1);
            }
            puts(str);
        }
    }
}

int main()
{
    char str[5] = "dcba"; // 5 characters total, \0 is appended in the end
    bubbleSort(str);
}