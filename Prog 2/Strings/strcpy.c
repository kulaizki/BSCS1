#include <stdio.h>
#include <string.h>

int main()
{
    char dest[50] = "";
    char source[50] = "Hello, world";

    strcpy(dest, source);
    printf("%s\n", dest);
}