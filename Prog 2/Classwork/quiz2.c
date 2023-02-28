#include <stdio.h>
#include <ctype.h>

int countVowels(char *s) {

    int count = 0;
    
    while (*s) {
        if (tolower(*s) == 'a' || tolower(*s) == 'e' || tolower(*s) == 'i' || tolower(*s) == 'o' || tolower(*s) == 'u') {
            count++;
        }
        s++;     
    }
    
    return count;
}

int main() {

    char str[] = "aAEIOU";
    printf("\nCount = %d\n", countVowels(str));

}