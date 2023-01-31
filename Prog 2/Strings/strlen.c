#include <stdio.h>
#include <string.h>

int main()
{
    // strlen syntax
    // size_t strlen(const char *str);
    
    char str1[50] = "helloworld";
    char str2[50] = "hello world";

    // gets the length of the string excluding '\0'
    printf("Strlen of str1: %d\n", strlen(str1));
    printf("Strlen of str2: %d\n", strlen(str2));
}