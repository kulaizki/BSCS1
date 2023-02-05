#include <stdio.h>
#include <string.h>

int main()
{
    // strrev syntax
    // char* strrev(char* str);
    
    char str[20] = "Hello, world";
    
    puts(str);
    strrev(str);
    puts(str);
}