#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "hello world";
    char str2[50] = "hello world";
    char str3[50] = "hello worldsz";

    // gets the length of the string excluding '\0'
    printf("Strlen of str1: %d\n", strlen(str1));
    printf("Strlen of str3: %d\n\n", strlen(str3));

    // s1 > s2 = 1, s1 < s2 = 2, s1 == s2 = 0
    printf("Strcmp str1 and str2: %d\n", strcmp(str1, str2));
    printf("Strcmp str2 and str3: %d\n\n", strcmp(str2, str3));

    char source[50] = "Hello, world";
    char destination[50] = "Hello, world";

    strcpy(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n\n", destination);

    char str4[50] = "Hello, ";
    char str5[50] = "world";
    
    strcat(str4, str5);
    printf("strcat str4,str5: %s\n", str4);


}