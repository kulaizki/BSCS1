#include <stdio.h>
#include <string.h>

int main()
{
    // strcat syntax
    // char *strcat(char *dest, const char *src);

    char destination1[50] = "Hello, ";
    char source1[50] = "world";

    strcat(destination1, source1);
    printf("%s\n", destination1);

    char destination2[50] = "";
    char source2[50] = "World, hello";
    
    strcat(destination2, source2);
    printf("%s\n", destination2);

    char str1[20] = "";
    char str2[20] = "";
    char str3[20] = "";

    // utilization of strcpy + strcat
    strcpy(str1, "Hello");
    strcpy(str2, " ");
    strcpy(str3, "World");

    strcat(str1, str2); // concatenates "hello" and " "
    strcat(str1, str3); // concatenates "hello " and "World"
    printf("%s\n", str1); // Hello World
}