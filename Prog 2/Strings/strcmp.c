#include <stdio.h>
#include <string.h>

int main()
{
    // strcmp syntax
    // int strcmp(const char *str1, const char *str2);
    
    char str1[50] = "helloworld";
    char str2[50] = "hello world";
    char str3[50] = "hello world";
    char str4[50] = "hello worlz";


    // s1 > s2 = 1, s1 < s2 = -1, s1 == s2 = 0
    printf("helloworld and hello world: %d\n", strcmp(str1, str2));
    printf("hello world and hello world: %d\n", strcmp(str2, str3));
    printf("hello world and helloworld: %d\n", strcmp(str3, str1));
    printf("hello world and hello worlz: %d\n", strcmp(str2, str4));
    // NOTE: strcmp compares the string by each character until a difference is found
}