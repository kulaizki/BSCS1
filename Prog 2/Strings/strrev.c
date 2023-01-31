#include <stdio.h>
#include <string.h>

int main()
{
    // strrev syntax
    // char* strrev(char* str);
    
    char str[20] = "Hello, world";
    char *reverse = strrev(str);

    printf("%s", reverse);
}