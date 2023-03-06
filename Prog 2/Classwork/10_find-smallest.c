#include <stdio.h>

void findSmallest(char *s) {
    
    int x, min_elem = 0;

    for (x = 1; s[x] != '\0'; ++x) {
        if (s[x] < s[min_elem]) {
            min_elem = x;
        }
    }

    if (min_elem != 0) {
        int temp = s[0];
        s[0] = s[min_elem];
        s[min_elem] = temp;
    }
}

int main() {
    
    char s[] = "hella";
    findSmallest(s);
    puts(s);
}