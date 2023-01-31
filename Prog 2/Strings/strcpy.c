#include <stdio.h>
#include <string.h>

int main()
{
    // strcpy syntax
    // char *strcpy(char *dest, const char *src);
    
    char str1[20] = "";
    char str2[20] = "";

    strcpy(str1, "Hello, world");
    strcpy(str2, str1);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
}