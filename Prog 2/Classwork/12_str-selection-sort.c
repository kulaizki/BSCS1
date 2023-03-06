#include <stdio.h>

void selectionSort(char *s) {

    int CE, SE, T;
    char temp;

    for (CE = 0; s[CE+1] != '\0'; ++CE) {
        SE = CE;
        for (T = CE+1; s[T] != '\0'; ++T) {
            if (s[T] < s[SE]) { 
                SE = T; 
            }
        }

        if (s[SE] != s[CE]) {
            temp = s[SE];
            s[SE] = s[CE];
            s[CE] = temp;
        }

        puts(s);
    }
}

int main() {

    char s[] = "DBECA";
    selectionSort(s);
}