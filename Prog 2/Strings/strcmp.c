#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "helloworld";
    char str2[50] = "hello world";
    char str3[50] = "hello world";
    char str4[50] = "hello worlz";


    // s1 > s2 = 1, s1 < s2 = 2, s1 == s2 = 0
    printf("Strcmp str1 and str2: %d\n", strcmp(str1, str2));
    printf("Strcmp str2 and str3: %d\n", strcmp(str2, str3));
    printf("Strcmp str3 and str1: %d\n", strcmp(str3, str1));
    printf("Strcmp str2 and str4: %d\n", strcmp(str2, str4));
    // NOTE: strcmp compares the string by each character until a difference is found
}