#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    
    char temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(char *str) {

    int x, y, count = strlen(str)-1;
    for (x = 1; x <= count; ++x) 
    {
        for (y = count; y >= x; --y) 
        {
            if (str[y] < str[y-1]) swap(str+y, str+y-1);
            puts(str);
        }
    }
}

int main() {

    char str[9] = "zxjchsad";
    bubbleSort(str);
}